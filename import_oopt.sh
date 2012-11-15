#Переходим в рабочую папку
cd $oopt_dir

#Импортируем границы федеральных заказников
export SHAPE_ENCODING="UTF-8"
ogr2ogr -a_srs "+proj=longlat +ellps=krass +towgs84=23.92,-141.27,-80.9,-0,0.35,0.82,-0.12 +no_defs" -t_srs EPSG:4326 -wrapdateline -f "PostgreSQL" "$dbsettings" $oopt_dir/fz-bcc.shp -nln "oopt.fz" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Импортируем границы национальных парков
ogr2ogr -a_srs "+proj=longlat +ellps=krass +towgs84=23.92,-141.27,-80.9,-0,0.35,0.82,-0.12 +no_defs" -t_srs EPSG:4326 -wrapdateline -f "PostgreSQL" "$dbsettings" $oopt_dir/np-bcc.shp -nln "oopt.np" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Импортируем границы заповедников
ogr2ogr -a_srs "+proj=longlat +ellps=krass +towgs84=23.92,-141.27,-80.9,-0,0.35,0.82,-0.12 +no_defs" -t_srs EPSG:4326 -wrapdateline -f "PostgreSQL" "$dbsettings" $oopt_dir/zp-bcc.shp -nln "oopt.zp" -nlt MULTIPOLYGON -overwrite -lco ENCODING=UTF-8

#Добавляем колонки геометрии в конической проекции
psql -d ooptrf -f $conf_dir/add_conic_geom_oopt.sql