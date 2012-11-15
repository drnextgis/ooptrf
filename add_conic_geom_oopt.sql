alter table oopt.fz add column conicgeom geometry(MultiPolygon, 102012);
update oopt.fz set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_fz_conicgeom on oopt.fz using gist(conicgeom);

alter table oopt.np add column conicgeom geometry(MultiPolygon, 102012);
update oopt.np set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_np_conicgeom on oopt.np using gist(conicgeom);

alter table oopt.zp add column conicgeom geometry(MultiPolygon, 102012);
update oopt.zp set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_zp_conicgeom on oopt.zp using gist(conicgeom);