<?php

/**
 * @file
 * platform_solr_fields_configuration.features.inc
 */

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
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'fgs_label_ss',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Date',
      'sort_by' => 'count',
      'date_facet_format' => 'Y',
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_select' => NULL,
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'date_filter_datepicker_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'result_fields',
    'weight' => 1,
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
        2 => 2,
        3 => 3,
        4 => 4,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'catch_all_fields_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'All Fields',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_typeOfResource_ms',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Material Type',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'score',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Relevance',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_note_ownership_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Held By',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_titleInfo_title_mt',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_name_personal_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_typeOfResource_mt',
    'field_type' => 'search_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Material Type',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'mods_subject_geographic_ms',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Place',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_abstract_mt',
    'field_type' => 'search_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Description',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'mods_name_personal_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Name',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'mods_subject_topic_mt',
    'field_type' => 'search_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  17 => array(
    'solr_field' => 'mods_name_corporate_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Corporate Name',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  18 => array(
    'solr_field' => 'mods_subject_geographic_mt',
    'field_type' => 'search_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Place',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  19 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  20 => array(
    'solr_field' => 'mods_note_ownership_mt',
    'field_type' => 'search_fields',
    'weight' => 8,
    'solr_field_settings' => array(
      'label' => 'Held By',
      'permissions' => array(
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
);
}
