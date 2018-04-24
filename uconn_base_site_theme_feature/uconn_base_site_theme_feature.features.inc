<?php
/**
 * @file
 * uconn_base_site_theme_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uconn_base_site_theme_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
