<?php
/**
 * @file
 * platform_main_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function platform_main_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 1;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'background' => '#E2E2E2',
    'header' => '#E2E2E2',
    'content' => '#ffffff',
    'navigation' => '#E2E2E2',
    'footer' => '#E2E2E2',
    'sidebars' => '#ffffff',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_display_backend';
  $strongarm->value = 'islandora_solr_query_backend';
  $export['islandora_basic_collection_display_backend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_metadata_display';
  $strongarm->value = 0;
  $export['islandora_collection_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_advanced_search_alter';
  $strongarm->value = 1;
  $export['islandora_collection_search_advanced_search_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_all_pages';
  $strongarm->value = 1;
  $export['islandora_collection_search_all_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_display_label';
  $strongarm->value = 1;
  $export['islandora_collection_search_display_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_gsearch_endpoint';
  $strongarm->value = 'http://localhost:8080/fedoragsearch/rest';
  $export['islandora_collection_search_gsearch_endpoint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_gsearch_user';
  $strongarm->value = 'fedoraAdmin';
  $export['islandora_collection_search_gsearch_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_retain_search_values';
  $strongarm->value = 0;
  $export['islandora_collection_search_retain_search_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_search_searchable_collections';
  $strongarm->value = array(
    'islandora:269397' => 'islandora:269397',
    'islandora:211179' => 'islandora:211179',
    'islandora:273661' => 'islandora:273661',
    'islandora:212857' => 'islandora:212857',
    'islandora:213223' => 'islandora:213223',
    'islandora:226074' => 'islandora:226074',
    'islandora:225541' => 'islandora:225541',
    'islandora:209599' => 'islandora:209599',
    'islandora:210225' => 'islandora:210225',
    'islandora:root' => 'islandora:root',
    'islandora:209597' => 'islandora:209597',
    'islandora:209593' => 'islandora:209593',
    'islandora:210068' => 0,
    'islandora:205849' => 0,
    'islandora:211074' => 0,
    'islandora:206274' => 0,
    'islandora:213229' => 0,
    'islandora:207786' => 0,
    'islandora:206571' => 0,
    'islandora:211075' => 0,
    'islandora:206178' => 0,
    'islandora:210229' => 0,
    'islandora:206566' => 0,
    'islandora:206572' => 0,
    'islandora:206824' => 0,
    'islandora:207016' => 0,
    'islandora:207319' => 0,
    'islandora:207500' => 0,
    'islandora:243213' => 0,
    'islandora:243146' => 0,
    'islandora:awsStreamingCollection' => 0,
    'islandora:262206' => 0,
    'islandora:266252' => 0,
    'islandora:206994' => 0,
    'islandora:207015' => 0,
    'islandora:210228' => 0,
    'islandora:9668' => 0,
    'islandora:262209' => 0,
    'islandora:213230' => 0,
    'islandora:262222' => 0,
    'islandora:269965' => 0,
    'islandora:262235' => 0,
    'islandora:100' => 0,
    'islandora:122' => 0,
    'islandora:73' => 0,
    'islandora:9643' => 0,
    'islandora:213239' => 0,
    'islandora:124' => 0,
    'islandora:211177' => 0,
    'islandora:273455' => 0,
    'islandora:273394' => 0,
    'islandora:269601' => 0,
    'islandora:270442' => 0,
    'islandora:262527' => 0,
    'islandora:273488' => 0,
    'islandora:212008' => 0,
    'islandora:269673' => 0,
    'islandora:269989' => 0,
    'islandora:269996' => 0,
    'islandora:273639' => 0,
    'islandora:206293' => 0,
    'islandora:209595' => 0,
    'islandora:213231' => 0,
    'islandora:269407' => 0,
    'islandora:269966' => 0,
    'islandora:128' => 0,
    'islandora:262836' => 0,
    'islandora:263605' => 0,
    'islandora:263420' => 0,
    'islandora:106' => 0,
    'islandora:269413' => 0,
    'islandora:269990' => 0,
    'islandora:269415' => 0,
    'islandora:269991' => 0,
    'islandora:90' => 0,
    'islandora:243608' => 0,
    'islandora:269414' => 0,
    'islandora:269981' => 0,
    'islandora:269419' => 0,
    'islandora:269994' => 0,
    'islandora:269420' => 0,
    'islandora:269995' => 0,
    'islandora:108' => 0,
    'islandora:214316' => 0,
    'islandora:269421' => 0,
    'islandora:270658' => 0,
    'islandora:225543' => 0,
    'islandora:213782' => 0,
    'islandora:110' => 0,
    'islandora:112' => 0,
    'islandora:9639' => 0,
    'islandora:77' => 0,
    'islandora:263607' => 0,
    'islandora:262837' => 0,
    'islandora:263421' => 0,
    'islandora:147' => 0,
    'islandora:266276' => 0,
    'islandora:213233' => 0,
    'islandora:269422' => 0,
    'islandora:270657' => 0,
    'islandora:266274' => 0,
    'islandora:96' => 0,
    'islandora:118' => 0,
    'islandora:262213' => 0,
    'islandora:120' => 0,
    'islandora:featured_collection' => 0,
    'islandora:262219' => 0,
    'islandora:266254' => 0,
    'islandora:104' => 0,
    'islandora:9666' => 0,
    'islandora:9637' => 0,
    'islandora:262232' => 0,
    'islandora:9653' => 0,
    'islandora:9655' => 0,
    'islandora:269424' => 0,
    'islandora:270029' => 0,
    'islandora:269423' => 0,
    'islandora:270049' => 0,
    'islandora:206270' => 0,
    'islandora:206174' => 0,
    'islandora:206273' => 0,
    'islandora:207763' => 0,
    'islandora:213237' => 0,
    'islandora:269425' => 0,
    'islandora:270064' => 0,
    'islandora:9641' => 0,
    'islandora:266272' => 0,
    'islandora:71' => 0,
    'islandora:273640' => 0,
    'islandora:205904' => 0,
    'islandora:225545' => 0,
    'islandora:214367' => 0,
    'islandora:269426' => 0,
    'islandora:270084' => 0,
    'islandora:262230' => 0,
    'islandora:269427' => 0,
    'islandora:270099' => 0,
    'islandora:268589' => 0,
    'islandora:266256' => 0,
    'islandora:262217' => 0,
    'islandora:9665' => 0,
    'islandora:213228' => 0,
    'islandora:116' => 0,
    'islandora:86' => 0,
    'islandora:270116' => 0,
    'islandora:269428' => 0,
    'islandora:207765' => 0,
    'islandora:225547' => 0,
    'islandora:214195' => 0,
    'islandora:269429' => 0,
    'islandora:270791' => 0,
    'islandora:79' => 0,
    'islandora:9645' => 0,
    'islandora:266270' => 0,
    'islandora:266258' => 0,
    'islandora:243449' => 0,
    'islandora:262205' => 0,
    'islandora:269430' => 0,
    'islandora:262698' => 0,
    'islandora:262933' => 0,
    'islandora:269432' => 0,
    'islandora:270820' => 0,
    'islandora:206267' => 0,
    'islandora:210971' => 0,
    'islandora:243448' => 0,
    'islandora:266268' => 0,
    'islandora:213242' => 0,
    'islandora:243450' => 0,
    'islandora:213978' => 0,
    'islandora:213238' => 0,
    'islandora:269669' => 0,
    'islandora:270172' => 0,
    'islandora:269433' => 0,
    'islandora:268626' => 0,
    'islandora:212314' => 0,
    'islandora:212526' => 0,
    'islandora:262228' => 0,
    'islandora:266260' => 0,
    'islandora:262233' => 0,
    'islandora:262227' => 0,
    'islandora:262216' => 0,
    'islandora:206269' => 0,
    'islandora:266278' => 0,
    'islandora:262229' => 0,
    'islandora:114' => 0,
    'islandora:75' => 0,
    'islandora:266266' => 0,
    'islandora:84' => 0,
    'islandora:213240' => 0,
    'islandora:243537' => 0,
    'islandora:9647' => 0,
    'islandora:268639' => 0,
    'islandora:206268' => 0,
    'islandora:266262' => 0,
    'islandora:262215' => 0,
    'islandora:206157' => 0,
    'islandora:269434' => 0,
    'islandora:270195' => 0,
    'islandora:262221' => 0,
    'islandora:262696' => 0,
    'islandora:206997' => 0,
    'islandora:209711' => 0,
    'islandora:206266' => 0,
    'islandora:213234' => 0,
    'islandora:262207' => 0,
    'islandora:266264' => 0,
    'islandora:262201' => 0,
    'islandora:269435' => 0,
    'islandora:269831' => 0,
    'islandora:269437' => 0,
    'islandora:270248' => 0,
    'islandora:213241' => 0,
    'islandora:88' => 0,
    'islandora:207014' => 0,
    'islandora:270249' => 0,
    'islandora:269438' => 0,
    'islandora:269439' => 0,
    'islandora:270350' => 0,
    'islandora:207764' => 0,
    'islandora:270387' => 0,
    'islandora:269440' => 0,
    'islandora:262934' => 0,
    'islandora:225549' => 0,
    'islandora:214491' => 0,
    'islandora:213236' => 0,
    'islandora:269441' => 0,
    'islandora:269442' => 0,
    'islandora:270470' => 0,
    'islandora:270024' => 0,
    'islandora:262214' => 0,
    'islandora:98' => 0,
    'islandora:213243' => 0,
    'islandora:226075' => 0,
    'islandora:269443' => 0,
    'islandora:270543' => 0,
    'islandora:269444' => 0,
    'islandora:270625' => 0,
    'islandora:269445' => 0,
    'islandora:270713' => 0,
    'islandora:102' => 0,
    'islandora:262762' => 0,
    'islandora:262212' => 0,
    'islandora:126' => 0,
    'islandora:262225' => 0,
    'islandora:262223' => 0,
    'islandora:269446' => 0,
    'islandora:270250' => 0,
    'islandora:243458' => 0,
    'islandora:212811' => 0,
    'islandora:262763' => 0,
    'islandora:262231' => 0,
    'islandora:262226' => 0,
    'islandora:262224' => 0,
    'islandora:243613' => 0,
    'islandora:263656' => 0,
    'islandora:130' => 0,
    'islandora:262220' => 0,
    'islandora:132' => 0,
    'islandora:213232' => 0,
    'islandora:213227' => 0,
    'islandora:9657' => 0,
    'islandora:226039' => 0,
    'islandora:262211' => 0,
    'islandora:transformCollection' => 0,
    'islandora:11876' => 0,
    'islandora:209587' => 0,
    'islandora:81' => 0,
    'islandora:262218' => 0,
    'islandora:134' => 0,
    'islandora:269449' => 0,
    'islandora:270251' => 0,
    'islandora:213235' => 0,
    'islandora:269450' => 0,
    'islandora:270252' => 0,
    'islandora:225551' => 0,
    'islandora:213641' => 0,
    'islandora:269451' => 0,
    'islandora:269634' => 0,
    'islandora:269452' => 0,
    'islandora:269514' => 0,
    'islandora:210457' => 0,
    'islandora:213542' => 0,
    'islandora:213226' => 0,
    'islandora:213251' => 0,
    'islandora:262210' => 0,
    'islandora:211073' => 0,
    'islandora:244646' => 0,
    'islandora:244260' => 0,
    'islandora:268619' => 0,
    'islandora:243610' => 0,
  );
  $export['islandora_collection_search_searchable_collections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_compound_object_hide_child_objects_solr';
  $strongarm->value = 1;
  $export['islandora_compound_object_hide_child_objects_solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_metadata_display';
  $strongarm->value = 'bhofdora_metadata_view';
  $export['islandora_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_show_print_option';
  $strongarm->value = 0;
  $export['islandora_show_print_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_sort';
  $strongarm->value = 'fgs_label_ss asc';
  $export['islandora_solr_collection_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['node_export_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_image_block';
  $strongarm->value = 1;
  $export['node_export_reset_changed_image_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_bhof_basic_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_bhof_basic_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_image_block_pattern';
  $strongarm->value = '';
  $export['pathauto_node_image_block_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tags_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_bhof_basic_page';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_bhof_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_append_to_url';
  $strongarm->value = '';
  $export['service_links_append_to_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_block_not_node_front';
  $strongarm->value = 0;
  $export['service_links_block_not_node_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_block_not_node_style';
  $strongarm->value = '3';
  $export['service_links_block_not_node_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_types';
  $strongarm->value = array();
  $export['service_links_category_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_category_vocs';
  $strongarm->value = array(
    2 => 0,
    1 => 0,
  );
  $export['service_links_category_vocs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_check_icons';
  $strongarm->value = 0;
  $export['service_links_check_icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_for_author';
  $strongarm->value = 0;
  $export['service_links_hide_for_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_hide_if_unpublished';
  $strongarm->value = 0;
  $export['service_links_hide_if_unpublished'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_label_in_node';
  $strongarm->value = 'Bookmark/Search this post with';
  $export['service_links_label_in_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_link_view_modes';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'revision' => 0,
  );
  $export['service_links_link_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_new_window';
  $strongarm->value = '1';
  $export['service_links_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_node_types';
  $strongarm->value = array(
    'article' => 'article',
    'bhof_basic_page' => 'bhof_basic_page',
    'page' => 'page',
    'frontpage_heros' => 'frontpage_heros',
    'image_block' => 'image_block',
  );
  $export['service_links_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_node_view_modes';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'search_index' => 0,
    'search_result' => 0,
    'revision' => 0,
  );
  $export['service_links_node_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title';
  $strongarm->value = '0';
  $export['service_links_override_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_override_title_text';
  $strongarm->value = '<title>';
  $export['service_links_override_title_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_page_match_for_node';
  $strongarm->value = '';
  $export['service_links_page_match_for_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_path_icons';
  $strongarm->value = 'sites/all/modules/service_links/images';
  $export['service_links_path_icons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_short_links_use';
  $strongarm->value = '0';
  $export['service_links_short_links_use'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_show';
  $strongarm->value = array(
    'delicious' => 0,
    'digg' => 0,
    'stumbleupon' => 0,
    'twitter' => 1,
    'pingthis' => 0,
    'reddit' => 0,
    'slashdot' => 0,
    'newsvine' => 0,
    'furl' => 0,
    'facebook' => 1,
    'myspace' => 0,
    'google' => 0,
    'google_plus' => 0,
    'yahoo' => 0,
    'linkedin' => 0,
    'technorati' => 0,
    'technorati_favorite' => 0,
    'icerocket' => 0,
    'misterwong' => 0,
    'mixx' => 0,
    'box' => 0,
    'blinklist' => 0,
    'identica' => 0,
    'newskicks' => 0,
    'diigo' => 0,
    'viadeo' => 0,
  );
  $export['service_links_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_style';
  $strongarm->value = '2';
  $export['service_links_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_visibility_for_node';
  $strongarm->value = '0';
  $export['service_links_visibility_for_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight';
  $strongarm->value = array(
    'delicious' => '-98',
    'digg' => '-97',
    'stumbleupon' => '-79',
    'twitter' => '-95',
    'pingthis' => '-82',
    'reddit' => '-81',
    'slashdot' => '-80',
    'newsvine' => '-83',
    'furl' => '-93',
    'facebook' => '-94',
    'myspace' => '-85',
    'google' => '-92',
    'google_plus' => '-91',
    'yahoo' => '-75',
    'linkedin' => '-88',
    'technorati' => '-77',
    'technorati_favorite' => '-78',
    'icerocket' => '-90',
    'misterwong' => '-87',
    'mixx' => '-86',
    'box' => '-99',
    'blinklist' => '-100',
    'identica' => '-89',
    'newskicks' => '-84',
    'diigo' => '-96',
    'viadeo' => '-76',
  );
  $export['service_links_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'service_links_weight_in_node';
  $strongarm->value = '10';
  $export['service_links_weight_in_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'PASTIME ';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Baseball Hall of Fame Digital Collection';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-enabled-bartik';
  $strongarm->value = 0;
  $export['stickynav-enabled-bartik'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-enabled-bhof_theme';
  $strongarm->value = 1;
  $export['stickynav-enabled-bhof_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-enabled-ir7';
  $strongarm->value = 0;
  $export['stickynav-enabled-ir7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-enabled-seven';
  $strongarm->value = 0;
  $export['stickynav-enabled-seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-roles-bartik';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $export['stickynav-roles-bartik'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-roles-bhof_theme';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $export['stickynav-roles-bhof_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-roles-ir7';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['stickynav-roles-ir7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-roles-seven';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $export['stickynav-roles-seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-selector-bartik';
  $strongarm->value = '';
  $export['stickynav-selector-bartik'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-selector-bhof_theme';
  $strongarm->value = '#nav_bar';
  $export['stickynav-selector-bhof_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-selector-ir7';
  $strongarm->value = '';
  $export['stickynav-selector-ir7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stickynav-selector-seven';
  $strongarm->value = '';
  $export['stickynav-selector-seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bhof_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon_1.ico',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'donate_text' => 'Donate Now',
    'donate_link' => 'https://community.baseballhall.org/sslpage.aspx?pid=1767',
    'collection_search_on_cmodel_pages' => '1',
    'logo_link' => 'http://www.baseballhall.org',
    'search_placeholder' => 'Search the Collection',
    'hero_plaque_datastream' => 'PLAQUE',
    'access_condition_field' => 'mods_accessCondition_ms',
    'hero_image_ds' => 'COLLECTION_IMAGE',
    'basic_image_wm_ds' => 'OBJ',
    'large_image_wm_ds' => 'JPG',
    'main_hero_ds' => 'JPG',
    'alt_hero_ds' => 'JPG',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_bhof_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'designkit_color' => array(
      'background' => '',
      'header' => '#ffffff',
      'content' => '#ffffff',
      'navigation' => '#ffffff',
      'footer' => '#ffffff',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
