<?php

/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_default_blockgroups().
 */
function platform_main_feature_default_blockgroups() {
  return array(
    'collection_search_group' => 'Collection search Group',
    'featured_collections_group' => 'Featured Collections Group',
    'featured_collections_second' => 'Featured Collections Second Row',
    'search_and_slider' => 'Search and Slider',
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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

  // Exported image style: collection_display_thumbnails.
  $styles['collection_display_thumbnails'] = array(
    'label' => 'Collection Display Thumbnails',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 160,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_items_long.
  $styles['featured_items_long'] = array(
    'label' => 'featured items long',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_items_tall.
  $styles['featured_items_tall'] = array(
    'label' => 'featured items tall',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 285,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: islandora_social_media_thumbnail_facebook.
  $styles['islandora_social_media_thumbnail_facebook'] = array(
    'label' => 'Islandora Social Media Thumbnail Facebook',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 190,
          'height' => 190,
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 200,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
      5 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#FFFFFF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 20,
            'rightdiff' => 20,
            'topdiff' => 20,
            'bottomdiff' => 20,
          ),
        ),
        'weight' => 3,
      ),
      6 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#333333',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '',
            'height' => '',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => 5,
            'rightdiff' => 5,
            'topdiff' => 5,
            'bottomdiff' => 5,
          ),
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: owl_slider_thumbnail.
  $styles['owl_slider_thumbnail'] = array(
    'label' => 'Owl Slider Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: owl_slider_thumbnail_explore.
  $styles['owl_slider_thumbnail_explore'] = array(
    'label' => 'Owl Slider Thumbnail Explore',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => -10,
      ),
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
