#Переходим в каталог gtopo
cd $gtopo_dir
 
#Скачиваем территорию РФ до 180-го меридиана
wget http://edcftp.cr.usgs.gov/pub/data/gtopo30/global/e020n90.tar.gz
wget http://edcftp.cr.usgs.gov/pub/data/gtopo30/global/e060n90.tar.gz
wget http://edcftp.cr.usgs.gov/pub/data/gtopo30/global/e100n90.tar.gz
wget http://edcftp.cr.usgs.gov/pub/data/gtopo30/global/e140n90.tar.gz

#Отдельно скачиваем Чукотку :)
wget http://edcftp.cr.usgs.gov/pub/data/gtopo30/global/w180n90.tar.gz

#Распаковываем архивы
tar -xvf e020n90.tar.gz
tar -xvf e060n90.tar.gz
tar -xvf e100n90.tar.gz
tar -xvf e140n90.tar.gz
tar -xvf w180n90.tar.gz