#Переходим в папку OSM
cd $osm_dir

#Импортируем библиотекой imposm
imposm -U nextstopsun -d ooptrf -m $conf_dir/imposm_mapping.py --read --write --optimize --deploy-production-tables RU.osm.pbf

#Добавляем колонки геометрии в конической проекции
psql -d ooptrf -f $conf_dir/add_conic_geom_osm.sql
