<?xml version="1.0" encoding="utf-8"?>
<Include xmlns:xi="http://www.w3.org/2001/XInclude">

	  <Style name="gtopo_hs_style">
	    <Rule>
	      <RasterSymbolizer opacity="1" scaling="bilinear"/>
	    </Rule>
	  </Style>
	
	<Style name="gtopo_color_style">
	   <Rule>
	      <RasterSymbolizer comp-op="multiply" opacity="0.4" scaling="bilinear"/>
	    </Rule>
	</Style>

	<Style name="gtopo_slope_style">
	    <Rule>
	      <RasterSymbolizer opacity="0.3" comp-op="multiply" scaling="bilinear"/>
	    </Rule>
	</Style>

	<Style name="ne_urban_style">
	    <Rule>
	      <PolygonSymbolizer fill="#dbd8cd" fill-opacity="0.12"/>
	      <LineSymbolizer stroke="#f3f2f0" stroke-opacity="0.3" stroke-width="0.5"/> 
	    </Rule>
    </Style>
	
	<Style name="ne_glaciers_style">
	    <Rule>
	      <PolygonSymbolizer fill="#ffffff" fill-opacity="0.6"/>
	    </Rule>
	</Style>
	
	<Style name="adm2_country_style" filter-mode="first">
	    <Rule>
		  <MaxScaleDenominator>25000000</MaxScaleDenominator>
		  <LineSymbolizer stroke="#f7f7f7" stroke-opacity="0.3" stroke-width="4" smooth="0.8" transform="translate(0,0)"/>
	      <LineSymbolizer stroke="#ffffff" stroke-opacity="1" stroke-width="2"/>
	 </Rule>
	</Style>
	
	
	<Style name="ne_rivers_style" filter-mode="first">
	    <Rule>
		  <MaxScaleDenominator>3500000</MaxScaleDenominator>
	      <LineSymbolizer stroke="#d8e8f5" stroke-opacity="0.2" stroke-width="3" smooth="0.7" transform="translate(0,0)"/> 
	    </Rule>

	    <Rule>
		  <MinScaleDenominator>3500001</MinScaleDenominator>
	      <LineSymbolizer stroke="#d8e8f5" stroke-opacity="0.3" stroke-width="0.5"/> 
	    </Rule>
	  </Style>

	<Style name="ne_lakes_style">
	    <Rule>
		  <PolygonSymbolizer fill="#d8e8f5" fill-opacity="0.4" smooth="0.7" transform="translate(0,0)" />
	      <LineSymbolizer stroke="#d8e8f5" stroke-opacity="0.8" stroke-width="0.5" smooth="0.7" transform="translate(0,0)"/> 
	    </Rule>
	</Style>


	<Style name="roads_small_zoom_style" filter-mode="first">
	  <Rule>
	    <MaxScaleDenominator>3000000</MaxScaleDenominator>
	    <MinScaleDenominator>1500000</MinScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="0.5" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>6500000</MaxScaleDenominator>
	    <MinScaleDenominator>3000000</MinScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="0.3" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>12500000</MaxScaleDenominator>
	    <MinScaleDenominator>6500000</MinScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="0.25" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>25000000</MaxScaleDenominator>
	    <MinScaleDenominator>12500000</MinScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="0.2" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>3000000</MaxScaleDenominator>
	    <MinScaleDenominator>1500000</MinScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="1" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>6500000</MaxScaleDenominator>
	    <MinScaleDenominator>3000000</MinScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="0.6" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>12500000</MaxScaleDenominator>
	    <MinScaleDenominator>6500000</MinScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="0.5" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>25000000</MaxScaleDenominator>
	    <MinScaleDenominator>12500000</MinScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="0.4" stroke="#d5d3cf" stroke-opacity="0.4"/>
	  </Rule>
	</Style>

	<Style name="roads_big_zoom_style" filter-mode="first">
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'secondary')</Filter>
	    <LineSymbolizer stroke-width="0.8" stroke="#e6e4e0" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'secondary')</Filter>
	    <LineSymbolizer stroke-width="0.6" stroke="#e6e4e0" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'trunk_link')</Filter>
	    <LineSymbolizer stroke-width="0.8" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'trunk_link')</Filter>
	    <LineSymbolizer stroke-width="0.6" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'primary')</Filter>
	    <LineSymbolizer stroke-width="0.8" stroke="#e6e4e0" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'primary')</Filter>
	    <LineSymbolizer stroke-width="0.6" stroke="#e6e4e0" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'motorway_link')</Filter>
	    <LineSymbolizer stroke-width="0.8" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'motorway_link')</Filter>
	    <LineSymbolizer stroke-width="0.6" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="1.8" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'motorway')</Filter>
	    <LineSymbolizer stroke-width="1.4" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>750000</MaxScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="1.8" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <MinScaleDenominator>750000</MinScaleDenominator>
	    <Filter>([type] = 'trunk')</Filter>
	    <LineSymbolizer stroke-width="1.4" stroke="#d5d3cf" stroke-opacity="0.3"/>
	  </Rule>
	  <Rule>
	    <MaxScaleDenominator>1500000</MaxScaleDenominator>
	    <Filter>([type] = 'tertiary')</Filter>
	    <LineSymbolizer stroke="#e6e4e0" stroke-opacity="0.3"/>
	  </Rule>
	</Style>

	<Style name="adm4_region_style">
	    <Rule>
		  <LineSymbolizer stroke="#f7f7f7" stroke-opacity="0.05" stroke-width="5"/>
	      <LineSymbolizer stroke="#f7f7f7" stroke-opacity="0.6" stroke-width="0.5" stroke-dasharray="2 2"/>
	  </Rule>
	</Style>
	
	<Style name="fz_style" filter-mode="first">
		<Rule>
	      <MinScaleDenominator>10000001</MinScaleDenominator>
		  <PolygonSymbolizer fill="#ce2216" fill-opacity="0.2"/>
	      <LineSymbolizer stroke="#ce2216" stroke-opacity="0.8" stroke-width="0.5"/>
	   </Rule>
	
	    <Rule>
		  <MinScaleDenominator>3000001</MinScaleDenominator>
	      <MaxScaleDenominator>10000000</MaxScaleDenominator>
		  <PolygonSymbolizer fill="#ce2216" fill-opacity="0.2"/>
		  <LineSymbolizer stroke="#ce2216" stroke-opacity="0.07" stroke-width="5"/>
	      <LineSymbolizer stroke="#ce2216" stroke-opacity="0.8" stroke-width="0.5"/>
	  </Rule>

	    <Rule>
		  <MaxScaleDenominator>3000000</MaxScaleDenominator>
		  <PolygonSymbolizer fill="#ce2216" fill-opacity="0.35"/>
		  <LineSymbolizer stroke="#ce2216" stroke-opacity="0.25" stroke-width="7"/>
	      <LineSymbolizer stroke="#ce2216" stroke-opacity="1" stroke-width="0.5"/>
	  </Rule>
    </Style>

	<Style name="fz_name_style" filter-mode="first">
	  <Rule>
		 <MinScaleDenominator>750001</MinScaleDenominator>
	     <MaxScaleDenominator>4500000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="9" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#8a2514" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>
	  <Rule>
	     <MaxScaleDenominator>750000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="14" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#8a2514" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>
	</Style>

	<Style name="np_style" filter-mode="first">

		<Rule>
	      <MaxScaleDenominator>3000000</MaxScaleDenominator>	
		  <PolygonSymbolizer fill="#fff604" fill-opacity="0.35"/>
		  <LineSymbolizer stroke="#fff604" stroke-opacity="0.25" stroke-width="7"/>
	      <LineSymbolizer stroke="#fff604" stroke-opacity="1" stroke-width="0.5"/>
	    </Rule>

		<Rule>
	      <MinScaleDenominator>3000001</MinScaleDenominator>
		  <MaxScaleDenominator>10000000</MaxScaleDenominator>	
		  <PolygonSymbolizer fill="#fff604" fill-opacity="0.2"/>
		  <LineSymbolizer stroke="#fff604" stroke-opacity="0.07" stroke-width="5"/>
	      <LineSymbolizer stroke="#fff604" stroke-opacity="0.8" stroke-width="0.5"/>
	    </Rule>
	
		<Rule>
	      <MinScaleDenominator>10000001</MinScaleDenominator>	
		  <PolygonSymbolizer fill="#fff604" fill-opacity="0.2"/>
	      <LineSymbolizer stroke="#fff604" stroke-opacity="0.8" stroke-width="0.5"/>
	    </Rule>
    </Style>

    <Style name="np_name_style" filter-mode="first">
	 <Rule>
		 <MinScaleDenominator>750001</MinScaleDenominator>
	     <MaxScaleDenominator>4500000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="9" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#807d31" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>

	 <Rule>
	     <MaxScaleDenominator>750000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="14" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#807d31" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>
</Style>

	<Style name="zp_style" filter-mode="first">
		<Rule>
		  <MaxScaleDenominator>3000000</MaxScaleDenominator>
		  <PolygonSymbolizer fill="#8b15ad" fill-opacity="0.35"/>
		  <LineSymbolizer stroke="#8b15ad" stroke-opacity="0.25" stroke-width="7"/>
	      <LineSymbolizer stroke="#8b15ad" stroke-opacity="1" stroke-width="0.5"/>
	  </Rule>
	  <Rule>
		  <MinScaleDenominator>3000001</MinScaleDenominator>
		  <MaxScaleDenominator>10000000</MaxScaleDenominator>
		  <PolygonSymbolizer fill="#8b15ad" fill-opacity="0.35"/>
		  <LineSymbolizer stroke="#8b15ad" stroke-opacity="0.07" stroke-width="5"/>
	      <LineSymbolizer stroke="#8b15ad" stroke-opacity="0.9" stroke-width="0.5"/>
	  </Rule>
	  <Rule>
		  <MinScaleDenominator>10000001</MinScaleDenominator>
		  <PolygonSymbolizer fill="#8b15ad" fill-opacity="0.35"/>
	      <LineSymbolizer stroke="#8b15ad" stroke-opacity="0.9" stroke-width="0.5"/>
	  </Rule>
    </Style>
		
    <Style name="zp_name_style" filter-mode="first">
	 <Rule>
		 <MinScaleDenominator>750001</MinScaleDenominator>
	     <MaxScaleDenominator>4500000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="9" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#5f2872" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>

	  <Rule>
	     <MaxScaleDenominator>750000</MaxScaleDenominator>
	     <TextSymbolizer 
		   size="14" 
		   character-spacing="1" 
		   line-spacing="2"
		   spacing="0" 
		   wrap-width="60" 
		   fontset-name="fontset-0" 
		   placement="point" 
		   fill="#5f2872" 
		   halo-fill="#faf8f4" 
		   halo-radius="1"
		 >[name_ru]</TextSymbolizer>
	  </Rule>
	</Style>
		

<Style name="place-small" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>2500</MaxScaleDenominator>
    <Filter>([type] = 'locality')</Filter>
    <TextSymbolizer size="12" character-spacing="1" line-spacing="4" wrap-width="120" fontset-name="fontset-0" placement="point" fill="#aaaaaa" halo-fill="#faf8f4" halo-radius="1" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <MinScaleDenominator>2500</MinScaleDenominator>
    <Filter>([type] = 'locality')</Filter>
    <TextSymbolizer size="11" wrap-width="120" line-spacing="2" fontset-name="fontset-0" placement="point" fill="#aaaaaa" halo-fill="#faf8f4" halo-radius="1" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>([type] = 'locality')</Filter>
    <TextSymbolizer size="10" wrap-width="60" line-spacing="1" fontset-name="fontset-0" placement="point" fill="#aaaaaa" halo-fill="#faf8f4" halo-radius="1" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>12500</MinScaleDenominator>
    <Filter>([type] = 'locality')</Filter>
    <TextSymbolizer fontset-name="fontset-0" placement="point" fill="#aaaaaa" size="9" halo-fill="#faf8f4" halo-radius="1" wrap-width="30" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>2500</MaxScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer size="14" character-spacing="4" line-spacing="6" wrap-width="160" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <MinScaleDenominator>2500</MinScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer size="13" character-spacing="3" wrap-width="160" line-spacing="4" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer size="12" character-spacing="2" wrap-width="120" line-spacing="2" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>12500</MinScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer halo-radius="2" text-transform="uppercase" character-spacing="1" wrap-width="60" line-spacing="1" size="11" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000</MaxScaleDenominator>
    <MinScaleDenominator>25000</MinScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer size="11" character-spacing="1" wrap-width="40" line-spacing="1" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([type] = 'suburb')</Filter>
    <TextSymbolizer fontset-name="fontset-0" placement="point" fill="#87756d" size="10" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" wrap-width="30" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>2500</MaxScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer size="14" character-spacing="4" line-spacing="6" wrap-width="160" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <MinScaleDenominator>2500</MinScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer size="13" character-spacing="3" wrap-width="160" line-spacing="4" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer size="12" character-spacing="2" wrap-width="120" line-spacing="2" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>12500</MinScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer halo-radius="2" text-transform="uppercase" character-spacing="1" wrap-width="60" line-spacing="1" size="11" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000</MaxScaleDenominator>
    <MinScaleDenominator>25000</MinScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer size="11" character-spacing="1" wrap-width="40" line-spacing="1" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([type] = 'hamlet')</Filter>
    <TextSymbolizer fontset-name="fontset-0" placement="point" fill="#87756d" size="10" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" wrap-width="30" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>2500</MaxScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer size="14" character-spacing="4" line-spacing="6" wrap-width="160" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <MinScaleDenominator>2500</MinScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer size="13" character-spacing="3" wrap-width="160" line-spacing="4" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer size="12" character-spacing="2" wrap-width="120" line-spacing="2" halo-radius="2" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>12500</MinScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer halo-radius="2" text-transform="uppercase" character-spacing="1" wrap-width="60" line-spacing="1" size="11" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000</MaxScaleDenominator>
    <MinScaleDenominator>25000</MinScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer size="11" character-spacing="1" wrap-width="40" line-spacing="1" fontset-name="fontset-0" placement="point" fill="#87756d" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([type] = 'village')</Filter>
    <TextSymbolizer fontset-name="fontset-0" placement="point" fill="#87756d" size="10" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" wrap-width="30" minimum-distance="15" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
</Style>

<Style name="place-town" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <MinScaleDenominator>2500</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer size="16" character-spacing="5" line-spacing="6" text-transform="uppercase" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer size="15" character-spacing="4" line-spacing="5" text-transform="uppercase" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000</MaxScaleDenominator>
    <MinScaleDenominator>25000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer size="13" character-spacing="2" line-spacing="3" text-transform="uppercase" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer text-transform="uppercase" character-spacing="1" line-spacing="2" size="12" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer size="12" line-spacing="1" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer size="11" halo-radius="2" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer halo-radius="2" size="10" fontset-name="fontset-0" placement="point" fill="#444444" halo-fill="rgba(251, 253, 254, 0.95)" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>1500000</MaxScaleDenominator>
    <MinScaleDenominator>750000</MinScaleDenominator>
    <Filter>([type] = 'town')</Filter>
    <TextSymbolizer fontset-name="fontset-0" placement="point" fill="#444444" size="9" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" wrap-width="50" minimum-distance="40" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
</Style>
	
<Style name="place-city" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>25000</MaxScaleDenominator>
    <MinScaleDenominator>12500</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="16" character-spacing="6" wrap-width="400" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000</MaxScaleDenominator>
    <MinScaleDenominator>25000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="15" character-spacing="4" wrap-width="300" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>100000</MaxScaleDenominator>
    <MinScaleDenominator>50000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="14" character-spacing="2" wrap-width="200" text-transform="uppercase" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>200000</MaxScaleDenominator>
    <MinScaleDenominator>100000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="13" character-spacing="1" wrap-width="100" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>400000</MaxScaleDenominator>
    <MinScaleDenominator>200000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="12" character-spacing="1" wrap-width="80" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="11" wrap-width="70" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>1500000</MaxScaleDenominator>
    <MinScaleDenominator>750000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="10" wrap-width="60" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="2" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>3000000</MaxScaleDenominator>
    <MinScaleDenominator>1500000</MinScaleDenominator>
    <Filter>([type] = 'city')</Filter>
    <TextSymbolizer size="10" halo-radius="1" fontset-name="fontset-0" placement="point" fill="#333333" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
</Style>
	
<Style name="place-state" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>750000</MaxScaleDenominator>
    <MinScaleDenominator>400000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer size="14" character-spacing="2" halo-radius="2" fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>1500000</MaxScaleDenominator>
    <MinScaleDenominator>750000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer size="12" character-spacing="1" wrap-width="80" line-spacing="2" halo-radius="2" fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>3000000</MaxScaleDenominator>
    <MinScaleDenominator>1500000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer size="11" wrap-width="50" line-spacing="1" fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>6500000</MaxScaleDenominator>
    <MinScaleDenominator>3000000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer size="11" wrap-width="50" fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500000</MaxScaleDenominator>
    <MinScaleDenominator>6500000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer size="10" wrap-width="40" fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000000</MaxScaleDenominator>
    <MinScaleDenominator>12500000</MinScaleDenominator>
    <Filter>([type] = 'state')</Filter>
    <TextSymbolizer fontset-name="fontset-1" placement="point" fill="#5e5666" halo-fill="rgba(251, 253, 254, 0.95)" halo-radius="1" minimum-distance="20" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
</Style>

<Style name="place-country" filter-mode="first">
  <Rule>
    <MaxScaleDenominator>6500000</MaxScaleDenominator>
    <MinScaleDenominator>3000000</MinScaleDenominator>
    <Filter>([type] = 'country')</Filter>
    <TextSymbolizer size="13" character-spacing="2" halo-radius="2" fontset-name="fontset-2" placement="point" fill="#222222" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="10" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>12500000</MaxScaleDenominator>
    <MinScaleDenominator>6500000</MinScaleDenominator>
    <Filter>([type] = 'country')</Filter>
    <TextSymbolizer size="12" character-spacing="1" wrap-width="80" line-spacing="2" halo-radius="2" fontset-name="fontset-2" placement="point" fill="#222222" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="10" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>25000000</MaxScaleDenominator>
    <MinScaleDenominator>12500000</MinScaleDenominator>
    <Filter>([type] = 'country')</Filter>
    <TextSymbolizer size="11" wrap-width="50" line-spacing="2" halo-radius="2" fontset-name="fontset-2" placement="point" fill="#222222" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="10" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>50000000</MaxScaleDenominator>
    <MinScaleDenominator>25000000</MinScaleDenominator>
    <Filter>([type] = 'country')</Filter>
    <TextSymbolizer size="11" wrap-width="50" halo-radius="2" fontset-name="fontset-2" placement="point" fill="#222222" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="10" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
  <Rule>
    <MaxScaleDenominator>3000000</MaxScaleDenominator>
    <MinScaleDenominator>1500000</MinScaleDenominator>
    <Filter>([type] = 'country')</Filter>
    <TextSymbolizer halo-radius="2" fontset-name="fontset-2" placement="point" fill="#222222" halo-fill="rgba(251, 253, 254, 0.95)" minimum-distance="10" ><![CDATA[[name]]]></TextSymbolizer>
  </Rule>
</Style>



</Include>