alter table adm.adm2_country add column conicgeom geometry(MultiPolygon, 102012);
update adm.adm2_country set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_adm2_country_conicgeom on adm.adm2_country using gist(conicgeom);

alter table adm.adm4_region add column conicgeom geometry(MultiPolygon, 102012);
update adm.adm4_region set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_adm4_region_conicgeom on adm.adm4_region using gist(conicgeom);