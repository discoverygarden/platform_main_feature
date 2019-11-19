<?php

/**
 * @file
 * cths_solr_fields_configuration.features.inc
 */

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function cths_solr_fields_configuration_islandora_solr_fields_features_default_fields() {
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
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'sort_by' => 'count',
      'pid_object_label' => 1,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'cths_mads_display_name_ms',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Display Name',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'cths_mods_genre_all_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'cths_mads_organization_name_ms',
    'field_type' => 'result_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Organization Name',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  6 => array(
    'solr_field' => 'cths_mods_form_all_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Form',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'cths_mods_name_creator_ms',
    'field_type' => 'result_fields',
    'weight' => 3,
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
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  8 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'result_fields',
    'weight' => 4,
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
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  9 => array(
    'solr_field' => 'cths_mods_subject_lcsh_hierarchical_ms',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Topic',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'cths_mads_birth_date_ms',
    'field_type' => 'result_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Birth Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  11 => array(
    'solr_field' => 'mods_subject_geographic_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Place',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'cths_mads_death_date_ms',
    'field_type' => 'result_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Death Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  13 => array(
    'solr_field' => 'cths_mods_names_personal_all_ms',
    'field_type' => 'facet_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Person',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'cths_mads_start_date_ms',
    'field_type' => 'result_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Start Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  15 => array(
    'solr_field' => 'cths_mods_names_corporate_all_ms',
    'field_type' => 'facet_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Organization',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'cths_mads_end_date_ms',
    'field_type' => 'result_fields',
    'weight' => 8,
    'solr_field_settings' => array(
      'label' => 'End Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  17 => array(
    'solr_field' => 'mods_identifier_tms_ms',
    'field_type' => 'result_fields',
    'weight' => 9,
    'solr_field_settings' => array(
      'label' => 'Object Number',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => FALSE,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  18 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'result_fields',
    'weight' => 10,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'replace_pid_with_label' => 1,
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}
