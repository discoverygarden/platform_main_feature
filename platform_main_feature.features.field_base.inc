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

  // Exported field_base: 'comment_body'.
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

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
        'islandora:sp_basic_image' => 'Islandora Basic Image Content Model',
        'islandora:compoundCModel' => 'Islandora Compound Object Content Model',
        'islandora:sp_videoCModel' => 'Islandora Video Content Model',
        'ir:citationCModel' => 'Citation Content Model',
        'islandora:sp_large_image_cmodel' => 'Islandora Large Image Content Model',
        'islandora:collectionCModel' => 'Islandora Collection Content Model',
        'ir:thesisCModel' => 'Thesis Content Model',
        'islandora:sp-audioCModel' => 'Islandora Audio Content Model',
        'islandora:binaryObjectCModel' => 'Islandora Binary Object Content Model',
        'islandora:pageCModel' => 'Islandora Page Content Model',
        'islandora:bookCModel' => 'Islandora Internet Archive Book Content Model',
        'islandora:sp_document' => 'Islandora Document Content Model',
        'islandora:findingAidCModel' => 'Finding Aid Content Model',
        'islandora:manuscriptCModel' => 'Manuscript Content Model',
        'islandora:manuscriptPageCModel' => 'Manuscript Page Content Model',
        'islandora:transformCModel' => 'Transform Content Model',
        'islandora:newspaperCModel' => 'Islandora Newspaper Content Model',
        'islandora:newspaperIssueCModel' => 'Islandora Newspaper Issue Content Model',
        'islandora:newspaperPageCModel' => 'Islandora Newspaper Page Content Model',
        'islandora:sp_pdf' => 'Islandora PDF Content Model',
        'islandora:rootSerialCModel' => 'Islandora Serial Object Content Model',
        'islandora:intermediateCModel' => 'Islandora Serial Object Intermediate Content Model',
        'islandora:intermediateSerialCModelStub' => 'Islandora Serial Object Intermediate Category Content Model',
        'bhof:authorityCModel' => 'BHOF Authority Content Model',
        'bhof:bibliographicCModel' => 'BHOF Bibliographic Content Model',
        'bhof:holdingsCModel' => 'BHOF Holdings Content Model',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
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

  // Exported field_base: 'field_tags'.
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
