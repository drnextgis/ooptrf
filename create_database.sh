#Создаем базу данных
createdb --encoding=UTF8 ooptrf

#Создаем в базе данных расширение PostGIS
psql -d ooptrf -c "CREATE EXTENSION postgis"
psql -d ooptrf -c "CREATE EXTENSION postgis_topology"

#Добавляем описание конической проекции в таблицу spatial_ref_sys
psql -d ooptrf -f $conf_dir/add_conic_proj.sql

#Создаем схему ne в базе данных
psql -d ooptrf -c "CREATE SCHEMA ne"

#Создаем схему oopt в базе данных
psql -d ooptrf -c "CREATE SCHEMA oopt"

#Создаем схему adm в базе данных
psql -d ooptrf -c "CREATE SCHEMA adm"