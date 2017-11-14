<?php
/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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

  // Exported image style: islandora_imagecache_image_style_large.
  $styles['islandora_imagecache_image_style_large'] = array(
    'label' => 'Islandora Imagecache Image Style Large Size',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 456,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_medium.
  $styles['islandora_imagecache_image_style_medium'] = array(
    'label' => 'Islandora Imagecache Image Style Medium Size',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: welcome_message_image_style.
  $styles['welcome_message_image_style'] = array(
    'label' => 'Welcome Message Image Style',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1165,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
