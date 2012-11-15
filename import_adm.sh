#Переходим в рабочую папку
cd $adm_dir

#Импортируем административные границы РФ
export SHAPE_ENCODING="UTF-8"
ogr2ogr -a_srs EPSG:4326 -wrapdateline -f "PostgreSQL" "$dbsettings" $adm_dir/adm2_country.shp -nln "adm.adm2_country" -nlt MULTIPOLYGON -lco ENCODING=UTF-8

#Импортируем административные границы субъектов РФ
ogr2ogr -a_srs EPSG:4326 -wrapdateline -f "PostgreSQL" "$dbsettings" $adm_dir/adm4_region.shp -nln "adm.adm4_region" -nlt MULTIPOLYGON -lco ENCODING=UTF-8

#Добавляем колонки геометрии в конической проекции
psql -d ooptrf -f $conf_dir/add_conic_geom_adm.sql