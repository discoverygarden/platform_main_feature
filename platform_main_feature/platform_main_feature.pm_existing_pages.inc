<?php
/**
 * @file
 * platform_main_feature.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function platform_main_feature_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'islandora_object';
  $pm_existing_page->label = 'Islandora Object';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'islandora/object/%islandora_object
islandora/object/%islandora_object/uconn_bookmark
islandora/object/%islandora_object/ip_embargo';
  $export['islandora_object'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'islandora_search_results_page';
  $pm_existing_page->label = 'Islandora Search Results Page';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'islandora/search';
  $export['islandora_search_results_page'] = $pm_existing_page;

  return $export;
}
