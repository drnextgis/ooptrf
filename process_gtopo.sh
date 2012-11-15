#Переходим в каталог gtopo
cd $gtopo_dir

#Сшиваем в единый растр
gdal_merge.py -o gtopo_merged.tif E020N90.DEM E060N90.DEM E100N90.DEM E140N90.DEM

#Перепроецируем в коническую проекцию с одновременной обрезкой по адм. границе 
gdalwarp -s_srs EPSG:4326 -t_srs EPSG:102012 -srcnodata -9999 -dstnodata -9999 -r lanczos -of GTiff -co TILED=YES -overwrite -cutline $adm_dir/adm2_country.shp gtopo_merged.tif gtopo_conic.tif

#Перепроецируем Чукотку отдельно 
gdalwarp -s_srs EPSG:4326 -t_srs EPSG:102012 -srcnodata -9999 -dstnodata -9999 -r lanczos -of GTiff -co TILED=YES -overwrite -cutline $adm_dir/adm2_country.shp W180N90.DEM chuk_conic.tif

#Присваиваем цвета RGB значениям высот
gdaldem color-relief gtopo_conic.tif $conf_dir/demramp.txt gtopo_rgb.tif

#Указываем NODATA для цветов 0 0 0 (обеспечиваем прозрачность фона)
gdal_translate -a_nodata "0 0 0" gtopo_rgb.tif gtopo_color.tif

#Присваиваем цвета RGB значениям высот на Чукотке
gdaldem color-relief chuk_conic.tif $conf_dir/demramp.txt chuk_rgb.tif

#Указываем NODATA для цветов 0 0 0 (обеспечиваем прозрачность фона)
gdal_translate -a_nodata "0 0 0" chuk_rgb.tif chuk_color.tif

#Создаем отмывку рельефа
gdaldem hillshade -of GTiff -compute_edges gtopo_conic.tif gtopo_hs.tif
gdaldem hillshade -of GTiff -compute_edges chuk_conic.tif chuk_hs.tif

#Создаем модель уклонов
gdaldem slope gtopo_conic.tif gtopo_slope.tif
gdaldem slope chuk_conic.tif chuk_slope.tif

#Присваиваем значениям угла уклона цвета RGB
gdaldem color-relief gtopo_slope.tif $conf_dir/sloperamp.txt gtopo_s_rgb.tif
gdaldem color-relief chuk_slope.tif $conf_dir/sloperamp.txt chuk_s_rgb.tif

#Указываем NODATA для цветов 0 0 0 (обеспечиваем прозрачность фона)
gdal_translate -a_nodata "0 0 0" gtopo_s_rgb.tif gtopo_s_color.tif
gdal_translate -a_nodata "0 0 0" chuk_s_rgb.tif chuk_s_color.tif

#Добавляем уровни пирамиды для ускорения чтения растра
gdaladdo gtopo_color.tif 2 4 8 16 32
gdaladdo gtopo_hs.tif 2 4 8 16 32
gdaladdo gtopo_s_color.tif 2 4 8 16 32

