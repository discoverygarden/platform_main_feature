<?php
/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function platform_main_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function platform_main_feature_image_default_styles() {
  $styles = array();

  // Exported image style: institution.
  $styles['institution'] = array(
    'label' => 'Institution',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 222,
          'height' => 134,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_islandora_datastream_download_fields_features_default_fields().
 */
function platform_main_feature_islandora_datastream_download_fields_features_default_fields() {
  return array(
  0 => array(
    'pid' => 'ir:citationCModel',
    'config' => 'a:3:{s:3:"pid";s:17:"ir:citationCModel";s:11:"datastreams";a:8:{s:4:"MODS";i:1;s:3:"PDF";i:1;s:9:"FULL_TEXT";i:1;s:7:"PREVIEW";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  1 => array(
    'pid' => 'ir:thesisCModel',
    'config' => 'a:3:{s:3:"pid";s:15:"ir:thesisCModel";s:11:"datastreams";a:8:{s:4:"MODS";i:1;s:3:"PDF";i:1;s:9:"FULL_TEXT";i:1;s:7:"PREVIEW";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  2 => array(
    'pid' => 'islandora:binaryObjectCModel',
    'config' => 'a:3:{s:3:"pid";s:28:"islandora:binaryObjectCModel";s:11:"datastreams";a:3:{s:4:"MODS";i:1;s:2:"TN";i:0;s:3:"OBJ";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  3 => array(
    'pid' => 'islandora:bookCModel',
    'config' => 'a:3:{s:3:"pid";s:20:"islandora:bookCModel";s:11:"datastreams";a:6:{s:4:"MODS";i:1;s:3:"PDF";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  4 => array(
    'pid' => 'islandora:collectionCModel',
    'config' => 'a:3:{s:3:"pid";s:26:"islandora:collectionCModel";s:11:"datastreams";a:4:{s:2:"DC";i:1;s:2:"TN";i:1;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  5 => array(
    'pid' => 'islandora:compoundCModel',
    'config' => 'a:3:{s:3:"pid";s:24:"islandora:compoundCModel";s:11:"datastreams";a:5:{s:4:"MODS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  6 => array(
    'pid' => 'islandora:eadCModel',
    'config' => 'a:3:{s:3:"pid";s:19:"islandora:eadCModel";s:11:"datastreams";a:5:{s:3:"EAD";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  7 => array(
    'pid' => 'islandora:entityCModel',
    'config' => 'a:3:{s:3:"pid";s:22:"islandora:entityCModel";s:11:"datastreams";a:7:{s:4:"MODS";i:1;s:7:"EAC-CPF";i:1;s:4:"MADS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  8 => array(
    'pid' => 'islandora:eventCModel',
    'config' => 'a:3:{s:3:"pid";s:21:"islandora:eventCModel";s:11:"datastreams";a:7:{s:4:"MODS";i:1;s:7:"EAC-CPF";i:1;s:4:"MADS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  9 => array(
    'pid' => 'islandora:findingAidCModel',
    'config' => 'a:3:{s:3:"pid";s:26:"islandora:findingAidCModel";s:11:"datastreams";a:5:{s:3:"EAD";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  10 => array(
    'pid' => 'islandora:intermediateCModel',
    'config' => 'a:3:{s:3:"pid";s:28:"islandora:intermediateCModel";s:11:"datastreams";a:4:{s:4:"MODS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  11 => array(
    'pid' => 'islandora:intermediateSerialCModelStub',
    'config' => 'a:3:{s:3:"pid";s:38:"islandora:intermediateSerialCModelStub";s:11:"datastreams";a:0:{}s:15:"add_datastreams";s:0:"";}',
  ),
  12 => array(
    'pid' => 'islandora:manuscriptCModel',
    'config' => 'a:3:{s:3:"pid";s:26:"islandora:manuscriptCModel";s:11:"datastreams";a:5:{s:4:"MODS";i:1;s:3:"TEI";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  13 => array(
    'pid' => 'islandora:manuscriptPageCModel',
    'config' => 'a:3:{s:3:"pid";s:30:"islandora:manuscriptPageCModel";s:11:"datastreams";a:10:{s:4:"MODS";i:1;s:3:"JP2";i:1;s:3:"JPG";i:1;s:3:"OCR";i:1;s:4:"HOCR";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  14 => array(
    'pid' => 'islandora:newspaperCModel',
    'config' => 'a:3:{s:3:"pid";s:25:"islandora:newspaperCModel";s:11:"datastreams";a:5:{s:4:"MODS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  15 => array(
    'pid' => 'islandora:newspaperIssueCModel',
    'config' => 'a:3:{s:3:"pid";s:30:"islandora:newspaperIssueCModel";s:11:"datastreams";a:5:{s:4:"MODS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  16 => array(
    'pid' => 'islandora:newspaperPageCModel',
    'config' => 'a:3:{s:3:"pid";s:29:"islandora:newspaperPageCModel";s:11:"datastreams";a:10:{s:4:"MODS";i:1;s:3:"JP2";i:1;s:3:"JPG";i:1;s:3:"OCR";i:1;s:4:"HOCR";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  17 => array(
    'pid' => 'islandora:organizationCModel',
    'config' => 'a:3:{s:3:"pid";s:28:"islandora:organizationCModel";s:11:"datastreams";a:7:{s:4:"MODS";i:1;s:7:"EAC-CPF";i:1;s:4:"MADS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  18 => array(
    'pid' => 'islandora:pageCModel',
    'config' => 'a:3:{s:3:"pid";s:20:"islandora:pageCModel";s:11:"datastreams";a:10:{s:4:"MODS";i:1;s:3:"JP2";i:1;s:3:"JPG";i:1;s:3:"OCR";i:1;s:4:"HOCR";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  19 => array(
    'pid' => 'islandora:personCModel',
    'config' => 'a:3:{s:3:"pid";s:22:"islandora:personCModel";s:11:"datastreams";a:7:{s:4:"MODS";i:1;s:7:"EAC-CPF";i:1;s:4:"MADS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  20 => array(
    'pid' => 'islandora:placeCModel',
    'config' => 'a:3:{s:3:"pid";s:21:"islandora:placeCModel";s:11:"datastreams";a:7:{s:4:"MODS";i:1;s:7:"EAC-CPF";i:1;s:4:"MADS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  21 => array(
    'pid' => 'islandora:rootSerialCModel',
    'config' => 'a:3:{s:3:"pid";s:26:"islandora:rootSerialCModel";s:11:"datastreams";a:5:{s:4:"MODS";i:1;s:13:"SERIAL-LEVELS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  22 => array(
    'pid' => 'islandora:sp-audioCModel',
    'config' => 'a:3:{s:3:"pid";s:24:"islandora:sp-audioCModel";s:11:"datastreams";a:8:{s:4:"MODS";i:1;s:9:"PROXY_MP3";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;s:6:"TECHMD";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  23 => array(
    'pid' => 'islandora:sp_basic_image',
    'config' => 'a:3:{s:3:"pid";s:24:"islandora:sp_basic_image";s:11:"datastreams";a:8:{s:4:"MODS";i:1;s:11:"MEDIUM_SIZE";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:6:"TECHMD";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  24 => array(
    'pid' => 'islandora:sp_document',
    'config' => 'a:3:{s:3:"pid";s:21:"islandora:sp_document";s:11:"datastreams";a:10:{s:4:"MODS";i:1;s:3:"PDF";i:1;s:9:"FULL_TEXT";i:1;s:7:"PREVIEW";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:6:"TECHMD";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  25 => array(
    'pid' => 'islandora:sp_large_image_cmodel',
    'config' => 'a:3:{s:3:"pid";s:31:"islandora:sp_large_image_cmodel";s:11:"datastreams";a:9:{s:4:"MODS";i:1;s:3:"JPG";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:2:"TN";i:0;s:3:"JP2";i:0;s:6:"TECHMD";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  26 => array(
    'pid' => 'islandora:sp_pdf',
    'config' => 'a:3:{s:3:"pid";s:16:"islandora:sp_pdf";s:11:"datastreams";a:10:{s:4:"MODS";i:1;s:4:"PDFA";i:1;s:9:"FULL_TEXT";i:1;s:7:"PREVIEW";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:6:"TECHMD";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  27 => array(
    'pid' => 'islandora:sp_videoCModel',
    'config' => 'a:3:{s:3:"pid";s:24:"islandora:sp_videoCModel";s:11:"datastreams";a:11:{s:4:"MODS";i:1;s:3:"OGG";i:1;s:3:"MKV";i:1;s:11:"TECHMD_FITS";i:1;s:3:"MP4";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;s:3:"OBJ";i:0;s:6:"TECHMD";i:0;s:2:"TN";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
  28 => array(
    'pid' => 'islandora:transformCModel',
    'config' => 'a:3:{s:3:"pid";s:25:"islandora:transformCModel";s:11:"datastreams";a:5:{s:4:"XSLT";i:1;s:3:"CSS";i:1;s:2:"DC";i:0;s:8:"RELS-EXT";i:0;s:8:"RELS-INT";i:0;}s:15:"add_datastreams";s:0:"";}',
  ),
);
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function platform_main_feature_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'dc.contributor',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  3 => array(
    'solr_field' => 'fgs_label_ss',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Label',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Created Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'catch_all_fields_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'All fields',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_mt',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'sort_by' => 'count',
      'pid_object_label' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_subject_geographic_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Place',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Date',
      'sort_by' => 'count',
      'date_facet_format' => 'Y',
      'range_facet_select' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'date_filter_datepicker_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_note_ownership_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Held By',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_typeOfResource_ms',
    'field_type' => 'facet_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Material Type',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'Mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}
