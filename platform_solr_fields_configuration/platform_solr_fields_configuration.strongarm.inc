<?php

/**
 * @file
 * platform_solr_fields_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function platform_solr_fields_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_limit_result_fields';
  $strongarm->value = 1;
  $export['islandora_solr_limit_result_fields'] = $strongarm;

  return $export;
}
