<?php
/**
 * @file
 * platform_main_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function platform_main_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_content_model'.
  $field_bases['field_content_model'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_model',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'islandora:sp_pdf' => 'Islandora PDF Content Model',
        'islandora:entityCModel' => 'Islandora Entity Content Model',
        'islandora:collectionCModel' => 'Islandora Collection Content Model',
        'islandora:bookCModel' => 'Islandora Internet Archive Book Content Model',
        'islandora:newspaperCModel' => 'Islandora Newspaper Content Model',
        'islandora:eventCModel' => 'Islandora Event Content Model',
        'islandora:placeCModel' => 'Islandora Place Content Model',
        'islandora:newspaperPageCModel' => 'Islandora Newspaper Page Content Model',
        'islandora:sp-audioCModel' => 'Islandora Audio Content Model',
        'ir:citationCModel' => 'Citation Content Model',
        'ir:thesisCModel' => 'Thesis Content Model',
        'islandora:findingAidCModel' => 'Finding Aid Content Model',
        'islandora:personCModel' => 'Islandora Person Content Model',
        'islandora:manuscriptCModel' => 'Manuscript Content Model',
        'islandora:manuscriptPageCModel' => 'Manuscript Page Content Model',
        'islandora:binaryObjectCModel' => 'Islandora Binary Object Content Model',
        'islandora:transformCModel' => 'Transform Content Model',
        'islandora:newspaperIssueCModel' => 'Islandora Newspaper Issue Content Model',
        'islandora:pageCModel' => 'Islandora Page Content Model',
        'islandora:sp_basic_image' => 'Islandora Basic Image Content Model',
        'islandora:organizationCModel' => 'Islandora Organization Content Model',
        'islandora:sp_document' => 'Islandora Document Content Model',
        'islandora:sp_large_image_cmodel' => 'Islandora Large Image Content Model',
        'islandora:compoundCModel' => 'Islandora Compound Object Content Model',
        'islandora:sp_videoCModel' => 'Islandora Video Content Model',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_pid_replacement_procedure'.
  $field_bases['field_pid_replacement_procedure'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pid_replacement_procedure',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_replacement_image'.
  $field_bases['field_replacement_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_replacement_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_replacement_procedure'.
  $field_bases['field_replacement_procedure'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_replacement_procedure',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Force replacement of all thumbnails for the given content model(s)',
        1 => 'Only use this replacement if the TN datastream is missing',
        2 => 'Only use this replacement with the supplied list of Object PID\'s below',
        3 => 'Only use this replacement with objects that are members of the supplied list of PID\'s below, and are of this provided content model(s)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
