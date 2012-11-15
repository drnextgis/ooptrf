#Переходим в папку ООПТ
cd $oopt_dir

#Скачиваем границы ООПТ с GIS-LAB
wget http://gis-lab.info/data/oopt/pa_russia_utf8.7z

#Распаковываем их
7za e pa_russia_utf8.7z
