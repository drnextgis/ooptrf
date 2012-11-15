alter table ne.urban add column conicgeom geometry(MultiPolygon, 102012);
update ne.urban set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_urban_conicgeom on ne.urban using gist(conicgeom);

alter table ne.rivers add column conicgeom geometry(MultiLineString, 102012);
update ne.rivers set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_rivers_conicgeom on ne.rivers using gist(conicgeom);
	
alter table ne.lakes add column conicgeom geometry(MultiPolygon, 102012);
update ne.lakes set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_lakes_conicgeom on ne.lakes using gist(conicgeom);
	
alter table ne.glaciers add column conicgeom geometry(MultiPolygon, 102012);
update ne.glaciers set conicgeom=st_transform(wkb_geometry, 102012);
create index idx_glaciers_conicgeom on ne.glaciers using gist(conicgeom);