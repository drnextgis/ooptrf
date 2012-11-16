var res = [
       140000.0000000000,
        70000.0000000000,
        35000.0000000000,
        17500.0000000000,
         8750.0000000000,
         4375.0000000000,
         2187.5000000000,
         1093.7500000000,
          546.8750000000,
          273.4375000000,
          136.7187500000,
           68.3593750000,
           34.1796875000,
           17.0898437500,
            8.5449218750,
            4.2724609375,
            2.1362304688,
            1.0681152344],

start = new L.LatLng(-70.56835304898404, 122.87148413637635),

map = new L.Map('map', {
  crs: L.CRS.proj4js('EPSG:102012',
    '+proj=lcc +lat_1=30 +lat_2=62 +lat_0=0 +lon_0=105 +x_0=0 +y_0=0 +ellps=WGS84 +datum=WGS84 +units=m +no_defs',
   new L.Transformation(1, -5401501, -1, 4065283)),
   scale: function(zoom) {
    return 1 / res[zoom];
  },
  continuousWorld: true
}),

mapUrl = 'http://localhost:10000/tms/1.0.0/ooptrf_EPSG102012/{z}/{x}/{y}.png',
attrib = 'Данные карты &copy; 2012 OpenStreetMap contributors, Natural Earth, USGS. БД по федеральным ООПТ РФ, 2004-2011. &copy; НП "Прозрачный мир", WRI, МСОЭС, ЦОДП',
tilelayer = new L.TileLayer(mapUrl, {
  scheme: 'tms',
   maxZoom: 17,
   minZoom: 0,
   continuousWorld: true,
   attribution: attrib
});

map.addLayer(tilelayer);
map.setView(start, 4);