#Назначаем каталог для gtopo
export adm_dir=$work_dir/adm

#Создаем каталог и переходим в него
mkdir $adm_dir
cd $adm_dir

#Скачиваем административные границы с GIS-LAB
wget http://gis-lab.info/data/yav/adm/latest/adm.7z

#Распаковываем их
7za e adm.7z