#Назначаем рабочий каталог - это можно менять
export work_dir=~/conf/geodata

#Параметры подключения к базе данных Postgresql - это тоже меняем
export dbsettings='PG:host=localhost user=nextstopsun dbname=ooptrf password=mypassword'


#Назначаем каталог для gtopo
export gtopo_dir=$work_dir/gtopo30
#Назначаем каталог для данных Natural Earth
export ne_dir=$work_dir/ne
#Назначаем каталог для административных границ
export adm_dir=$work_dir/adm
#Назначаем каталог для данных OSM
export osm_dir=$work_dir/osm
#Назначаем каталог для границ ООПТ
export oopt_dir=$work_dir/oopt

#Текущий каталог
export conf_dir=${PWD}

#Создаем рабочий каталог
mkdir $work_dir
#Создаем каталог для gtopo
mkdir $gtopo_dir
#Создаем каталог для данных Natural Earth
mkdir $ne_dir
#Создаем каталог для административных границ РФ
mkdir $adm_dir
#Создаем каталог для данных OpenStreetMap
mkdir $osm_dir
#Создаем каталог дя границ ООПТ
mkdir $oopt_dir

#Скачиваем GTOPO30
./download_gtopo.sh

#Скачиваем административное деление OSM с GIS-LAB.ru
./download_adm.sh

#Импортируем административное деление в базу PostGIS
./import_adm.sh

#Обрабатываем GTOPO30
./process_gtopo.sh

#Скачиваем Natural Earth
./download_ne.sh

#Импортируем данные Natural Earth в базу PostGIS
./import_ne.sh

#Скачиваем данные OSM
./download_osm.sh

#Импортируем данные OSM в базу PostGIS
./import_osm.sh

#Скачиваем данные по границам ООПТ
./download_oopt.sh

#Импортируем данные по границам ООПТ
./import_oopt.sh
