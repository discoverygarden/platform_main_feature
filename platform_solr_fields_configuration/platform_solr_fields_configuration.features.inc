<?php

/**
 * @file
 * platform_solr_fields_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_solr_fields_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function platform_solr_fields_configuration_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 60,
      'add_ellipsis' => 1,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Item Created Date',
      'range_facet_select' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'pid_object_label' => 1,
      'range_facet_variable_gap' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_mt',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Is Member Of',
      'permissions' => FALSE,
    ),
  ),
  3 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Description',
      'snippet' => NULL,
      'date_format' => '',
      'maximum_length' => 128,
      'add_ellipsis' => 1,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'mods_titleInfo_title_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(),
  ),
  5 => array(
    'solr_field' => 'mods_name_personal_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(),
  ),
  6 => array(
    'solr_field' => 'mods_name_corporate_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(),
  ),
  7 => array(
    'solr_field' => 'mods_subject_temporal_mt',
    'field_type' => 'search_fields',
    'weight' => 4,
    'solr_field_settings' => array(),
  ),
  8 => array(
    'solr_field' => 'mods_subject_geographic_mt',
    'field_type' => 'search_fields',
    'weight' => 5,
    'solr_field_settings' => array(),
  ),
  9 => array(
    'solr_field' => 'mods_genre_mt',
    'field_type' => 'search_fields',
    'weight' => 6,
    'solr_field_settings' => array(),
  ),
);
}
