#Переходим в папку NE
cd $ne_dir/10m_cultural

#Импортируем урбанизированные территории
ogr2ogr -a_srs EPSG:4326 -wrapdateline -clipsrc $adm_dir/adm2_country.shp -f "PostgreSQL" "$dbsettings" ne_10m_urban_areas.shp -nln "ne.urban" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Импортируем реки
cd $ne_dir/10m_physical
ogr2ogr -a_srs EPSG:4326 -wrapdateline -clipsrc $adm_dir/adm2_country.shp -f "PostgreSQL" "$dbsettings" ne_10m_rivers_lake_centerlines_scale_rank.shp -nln "ne.rivers" -nlt MULTILINESTRING -overwrite -lco ENCODING=UTF-8

#Импортируем ледники
ogr2ogr -a_srs EPSG:4326 -wrapdateline -clipsrc $adm_dir/adm2_country.shp -f "PostgreSQL" "$dbsettings" ne_10m_glaciated_areas.shp -nln "ne.glaciers" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Импортируем озера
ogr2ogr -a_srs EPSG:4326 -wrapdateline -clipsrc $adm_dir/adm2_country.shp -f "PostgreSQL" "$dbsettings" ne_10m_lakes.shp -nln "ne.lakes" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Добавляем геометрию в конической проекции
psql -d ooptrf -f $conf_dir/add_conic_geom_ne.sql