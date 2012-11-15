#Переходим в каталог административных границ
cd $adm_dir

#Скачиваем административные границы с GIS-LAB
wget http://gis-lab.info/data/yav/adm/latest/adm.7z

#Распаковываем их
7za e adm.7z