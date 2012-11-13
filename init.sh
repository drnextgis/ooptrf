#Назначаем рабочий каталог
export work_dir=~/conf/geodata

#Создаем рабочий каталог
mkdir $work_dir

export conf_dir=${PWD}

#Скачиваем GTOPO30
#./download_gtopo.sh

#Скачиваем административное деление OSM с GIS-LAB.ru
#./download_adm.sh

#Обрабатываем GTOPO30
./process_gtopo.sh