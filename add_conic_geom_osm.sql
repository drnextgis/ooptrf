alter table public.osm_admin add column conicgeom geometry(Geometry, 102012);
update public.osm_admin set conicgeom=st_transform(geometry, 102012);
create index idx_osm_admin_conicgeom on public.osm_admin using gist(conicgeom);
	
alter table public.osm_aeroways add column conicgeom geometry(Geometry, 102012);
update public.osm_aeroways set conicgeom=st_transform(geometry, 102012);
create index idx_osm_aeroways_conicgeom on public.osm_aeroways using gist(conicgeom);
	
alter table public.osm_amenities add column conicgeom geometry(Geometry, 102012);
update public.osm_amenities set conicgeom=st_transform(geometry, 102012);
create index idx_osm_amenities_conicgeom on public.osm_amenities using gist(conicgeom);
	
alter table public.osm_barrierpoints add column conicgeom geometry(Geometry, 102012);
update public.osm_barrierpoints set conicgeom=st_transform(geometry, 102012);
create index idx_osm_barrierpoints_conicgeom on public.osm_barrierpoints using gist(conicgeom);
	
alter table public.osm_barrierways add column conicgeom geometry(Geometry, 102012);
update public.osm_barrierways set conicgeom=st_transform(geometry, 102012);
create index idx_osm_barrierways_conicgeom on public.osm_barrierways using gist(conicgeom);

alter table public.osm_buildings add column conicgeom geometry(Geometry, 102012);
update public.osm_buildings set conicgeom=st_transform(geometry, 102012);
create index idx_osm_buildings_conicgeom on public.osm_buildings using gist(conicgeom);

alter table public.osm_landusages add column conicgeom geometry(Geometry, 102012);
update public.osm_landusages set conicgeom=st_transform(geometry, 102012);
create index idx_osm_landusages_conicgeom on public.osm_landusages using gist(conicgeom);

alter table public.osm_landusages_gen0 add column conicgeom geometry(Geometry, 102012);
update public.osm_landusages_gen0 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_landusages_gen0_conicgeom on public.osm_landusages_gen0 using gist(conicgeom);

alter table public.osm_landusages_gen1 add column conicgeom geometry(Geometry, 102012);
update public.osm_landusages_gen1 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_landusages_gen1_conicgeom on public.osm_landusages_gen1 using gist(conicgeom);

alter table public.osm_mainroads add column conicgeom geometry(Geometry, 102012);
update public.osm_mainroads set conicgeom=st_transform(geometry, 102012);
create index idx_osm_mainroads_conicgeom on public.osm_mainroads using gist(conicgeom);

alter table public.osm_mainroads_gen0 add column conicgeom geometry(Geometry, 102012);
update public.osm_mainroads_gen0 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_mainroads_gen0_conicgeom on public.osm_mainroads_gen0 using gist(conicgeom);

alter table public.osm_mainroads_gen1 add column conicgeom geometry(Geometry, 102012);
update public.osm_mainroads_gen1 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_mainroads_gen1_conicgeom on public.osm_mainroads_gen1 using gist(conicgeom);

alter table public.osm_minorroads add column conicgeom geometry(Geometry, 102012);
update public.osm_minorroads set conicgeom=st_transform(geometry, 102012);
create index idx_osm_minorroads_conicgeom on public.osm_minorroads using gist(conicgeom);

alter table public.osm_motorways add column conicgeom geometry(Geometry, 102012);
update public.osm_motorways set conicgeom=st_transform(geometry, 102012);
create index idx_osm_motorways_conicgeom on public.osm_motorways using gist(conicgeom);

alter table public.osm_motorways_gen0 add column conicgeom geometry(Geometry, 102012);
update public.osm_motorways_gen0 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_motorways_gen0_conicgeom on public.osm_motorways_gen0 using gist(conicgeom);

alter table public.osm_motorways_gen1 add column conicgeom geometry(Geometry, 102012);
update public.osm_motorways_gen1 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_motorways_gen1_conicgeom on public.osm_motorways_gen1 using gist(conicgeom);

alter table public.osm_places add column conicgeom geometry(Geometry, 102012);
update public.osm_places set conicgeom=st_transform(geometry, 102012);
create index idx_osm_places_conicgeom on public.osm_places using gist(conicgeom);

alter table public.osm_railways add column conicgeom geometry(Geometry, 102012);
update public.osm_railways set conicgeom=st_transform(geometry, 102012);
create index idx_osm_railways_conicgeom on public.osm_railways using gist(conicgeom);

alter table public.osm_railways_gen0 add column conicgeom geometry(Geometry, 102012);
update public.osm_railways_gen0 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_railways_gen0_conicgeom on public.osm_railways_gen0 using gist(conicgeom);

alter table public.osm_railways_gen1 add column conicgeom geometry(Geometry, 102012);
update public.osm_railways_gen1 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_railways_gen1_conicgeom on public.osm_railways_gen1 using gist(conicgeom);

alter table public.osm_transport_points add column conicgeom geometry(Geometry, 102012);
update public.osm_transport_points set conicgeom=st_transform(geometry, 102012);
create index idx_osm_transport_points_conicgeom on public.osm_transport_points using gist(conicgeom);

alter table public.osm_waterareas add column conicgeom geometry(Geometry, 102012);
update public.osm_waterareas set conicgeom=st_transform(geometry, 102012);
create index idx_osm_waterareas_conicgeom on public.osm_waterareas using gist(conicgeom);

alter table public.osm_waterareas_gen0 add column conicgeom geometry(Geometry, 102012);
update public.osm_waterareas_gen0 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_waterareas_gen0_conicgeom on public.osm_waterareas_gen0 using gist(conicgeom);

alter table public.osm_waterareas_gen1 add column conicgeom geometry(Geometry, 102012);
update public.osm_waterareas_gen1 set conicgeom=st_transform(geometry, 102012);
create index idx_osm_waterareas_gen1_conicgeom on public.osm_waterareas_gen1 using gist(conicgeom);

alter table public.osm_waterways add column conicgeom geometry(Geometry, 102012);
update public.osm_waterways set conicgeom=st_transform(geometry, 102012);
create index idx_osm_waterways_conicgeom on public.osm_waterways using gist(conicgeom);

DROP VIEW public.osm_roads;

CREATE OR REPLACE VIEW public.osm_roads AS
        (        (         SELECT osm_motorways.id, osm_motorways.osm_id, osm_motorways.geometry, osm_motorways.conicgeom, osm_motorways.name, osm_motorways.bridge, osm_motorways.ref, osm_motorways.tunnel, osm_motorways.oneway, osm_motorways.layer, osm_motorways.z_order, osm_motorways.access, osm_motorways.type, 'motorways'::text AS class
                           FROM osm_motorways
                UNION ALL
                         SELECT osm_mainroads.id, osm_mainroads.osm_id, osm_mainroads.geometry, osm_mainroads.conicgeom, osm_mainroads.name, osm_mainroads.bridge, osm_mainroads.ref, osm_mainroads.tunnel, osm_mainroads.oneway, osm_mainroads.layer, osm_mainroads.z_order, osm_mainroads.access, osm_mainroads.type, 'mainroads'::text AS class
                           FROM osm_mainroads)
        UNION ALL
                 SELECT osm_minorroads.id, osm_minorroads.osm_id, osm_minorroads.geometry, osm_minorroads.conicgeom, osm_minorroads.name, osm_minorroads.bridge, osm_minorroads.ref, osm_minorroads.tunnel, osm_minorroads.oneway, osm_minorroads.layer, osm_minorroads.z_order, osm_minorroads.access, osm_minorroads.type, 'minorroads'::text AS class
                   FROM osm_minorroads)
UNION ALL
         SELECT osm_railways.id, osm_railways.osm_id, osm_railways.geometry, osm_railways.conicgeom, osm_railways.name, osm_railways.bridge, NULL::character varying AS ref, osm_railways.tunnel, 0 AS oneway, osm_railways.layer, osm_railways.z_order, osm_railways.access, osm_railways.type, 'railways'::text AS class
           FROM osm_railways;



DROP VIEW public.osm_roads_gen0;

CREATE OR REPLACE VIEW public.osm_roads_gen0 AS
        (         SELECT osm_railways_gen0.id, osm_railways_gen0.osm_id, osm_railways_gen0.geometry, osm_railways_gen0.conicgeom, osm_railways_gen0.name, osm_railways_gen0.bridge, NULL::character varying AS ref, osm_railways_gen0.tunnel, 0 AS oneway, osm_railways_gen0.z_order, osm_railways_gen0.access, osm_railways_gen0.type, 'railways_gen1'::text AS class
                   FROM osm_railways_gen0
        UNION ALL
                 SELECT osm_mainroads_gen0.id, osm_mainroads_gen0.osm_id, osm_mainroads_gen0.geometry, osm_mainroads_gen0.conicgeom, osm_mainroads_gen0.name, osm_mainroads_gen0.bridge, osm_mainroads_gen0.ref, osm_mainroads_gen0.tunnel, osm_mainroads_gen0.oneway, osm_mainroads_gen0.z_order, osm_mainroads_gen0.access, osm_mainroads_gen0.type, 'mainroads_gen1'::text AS class
                   FROM osm_mainroads_gen0)
UNION ALL
         SELECT osm_motorways_gen0.id, osm_motorways_gen0.osm_id, osm_motorways_gen0.geometry, osm_motorways_gen0.conicgeom, osm_motorways_gen0.name, osm_motorways_gen0.bridge, osm_motorways_gen0.ref, osm_motorways_gen0.tunnel, osm_motorways_gen0.oneway, osm_motorways_gen0.z_order, osm_motorways_gen0.access, osm_motorways_gen0.type, 'motorways_gen1'::text AS class
           FROM osm_motorways_gen0;



DROP VIEW public.osm_roads_gen1;

CREATE OR REPLACE VIEW public.osm_roads_gen1 AS
        (         SELECT osm_railways_gen1.id, osm_railways_gen1.osm_id, osm_railways_gen1.geometry, osm_railways_gen1.conicgeom, osm_railways_gen1.name, osm_railways_gen1.bridge, NULL::character varying AS ref, osm_railways_gen1.tunnel, 0 AS oneway, osm_railways_gen1.z_order, osm_railways_gen1.access, osm_railways_gen1.type, 'railways'::text AS class
                   FROM osm_railways_gen1
        UNION ALL
                 SELECT osm_mainroads_gen1.id, osm_mainroads_gen1.osm_id, osm_mainroads_gen1.geometry, osm_mainroads_gen1.conicgeom, osm_mainroads_gen1.name, osm_mainroads_gen1.bridge, osm_mainroads_gen1.ref, osm_mainroads_gen1.tunnel, osm_mainroads_gen1.oneway, osm_mainroads_gen1.z_order, osm_mainroads_gen1.access, osm_mainroads_gen1.type, 'mainroads'::text AS class
                   FROM osm_mainroads_gen1)
UNION ALL
         SELECT osm_motorways_gen1.id, osm_motorways_gen1.osm_id, osm_motorways_gen1.geometry, osm_motorways_gen1.conicgeom, osm_motorways_gen1.name, osm_motorways_gen1.bridge, osm_motorways_gen1.ref, osm_motorways_gen1.tunnel, osm_motorways_gen1.oneway, osm_motorways_gen1.z_order, osm_motorways_gen1.access, osm_motorways_gen1.type, 'motorways'::text AS class
           FROM osm_motorways_gen1;


vacuum analyze;
