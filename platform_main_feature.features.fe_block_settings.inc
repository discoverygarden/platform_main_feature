<?php
/**
 * @file
 * platform_main_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function platform_main_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-uconn_branding'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'uconn_branding',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -52,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['blockify-blockify-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-breadcrumb',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-logo',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-tabs',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dgi_ondemand-dgi_ondemand_in_collection'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dgi_ondemand_in_collection',
    'module' => 'dgi_ondemand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dgi_ondemand-dgi_ondemand_latest_obj'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dgi_ondemand_latest_obj',
    'module' => 'dgi_ondemand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dgi_ondemand-dgi_ondemand_metadata_markup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dgi_ondemand_metadata_markup',
    'module' => 'dgi_ondemand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_basic_collection-collection_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_listing',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -22,
      ),
    ),
    'title' => 'Bookmark',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark_list_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_list_info',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_collection_search-islandora_collection_search'] = array(
    'cache' => -1,
    'css_class' => 'limiter',
    'custom' => 0,
    'delta' => 'islandora_collection_search',
    'module' => 'islandora_collection_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_datastream_download-islandora_datastream_download_ds'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_datastream_download_ds',
    'module' => 'islandora_datastream_download',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -55,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-explore'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'explore',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-islandora_solr_display_manager'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_solr_display_manager',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -37,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-search_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_navigation',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search/*
islandora/search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -39,
      ),
    ),
    'title' => 'Sort',
    'visibility' => 1,
  );

  $export['islandora_usage_stats-recent_activity'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_downloads'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_downloads',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_search'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_search',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_usage'] = array(
    'cache' => 1,
    'css_class' => 'front-right match-height',
    'custom' => 0,
    'delta' => 'top_usage',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -57,
      ),
    ),
    'title' => 'Most Viewed',
    'visibility' => 1,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-bellingtons-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bellingtons-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-bellingtons-social-media'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bellingtons-social-media',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-branding-icons'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-branding-icons',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-browse-content'] = array(
    'cache' => -1,
    'css_class' => 'front-left match-height',
    'custom' => 0,
    'delta' => 'menu-browse-content',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -59,
      ),
    ),
    'title' => 'Browse Content',
    'visibility' => 1,
  );

  $export['menu-menu-default-institution-context'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-default-institution-context',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-digital-collection-social-m'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-digital-collection-social-m',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-header-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-library-support'] = array(
    'cache' => -1,
    'css_class' => 'btn-libraries',
    'custom' => 0,
    'delta' => 'menu-library-support',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -50,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-mini_panel_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mini_panel_facets',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links_not_node'] = array(
    'cache' => -1,
    'css_class' => 'block-service-links',
    'custom' => 0,
    'delta' => 'service_links_not_node',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '<front>
/advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -34,
      ),
    ),
    'title' => 'Share: ',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -56,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['uconndora-current_collection_view_count'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_collection_view_count',
    'module' => 'uconndora',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['uconndora-uconndora_metadata_description'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'uconndora_metadata_description',
    'module' => 'uconndora',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['uconndora-uconndora_metadata_markup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'uconndora_metadata_markup',
    'module' => 'uconndora',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-00729068b4b0f61c1c8771a4374b4d08'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '00729068b4b0f61c1c8771a4374b4d08',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-1ebee786b8dd385ac4e0563015cf34df'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1ebee786b8dd385ac4e0563015cf34df',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-2ea22aa680aa43109d7ddb6fd5068817'] = array(
    'cache' => -1,
    'css_class' => 'connecticut-digital-archive',
    'custom' => 0,
    'delta' => '2ea22aa680aa43109d7ddb6fd5068817',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-4e2fcd9f25f368fc885f2d2a486460c2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4e2fcd9f25f368fc885f2d2a486460c2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-4ec321651079ce0064161e71bafb1ce6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4ec321651079ce0064161e71bafb1ce6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7dffc2c2672edc40792ded06c5f4e996'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7dffc2c2672edc40792ded06c5f4e996',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9de4c7b62a6b3339e9ebf0794d2e35bb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9de4c7b62a6b3339e9ebf0794d2e35bb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-a6803c27312ad17d6a196ab1793ef7e2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a6803c27312ad17d6a196ab1793ef7e2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-bellington_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bellington_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-bellingtons_most_viewed-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bellingtons_most_viewed-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-caliauto_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'caliauto_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-caliauto_collection_logo-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'caliauto_collection_logo-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-collection_thumbnail-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_thumbnail-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-current_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-dbec0f7cd4efb3b96cd55eb546c2eeb9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dbec0f7cd4efb3b96cd55eb546c2eeb9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-dfd006a7ccd885c07586abb22a0e7fc9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dfd006a7ccd885c07586abb22a0e7fc9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-f32166bd78937e8479ada0ac3cd95294'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f32166bd78937e8479ada0ac3cd95294',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-footer_social_media-block'] = array(
    'cache' => -1,
    'css_class' => 'footer-social-media-view',
    'custom' => 0,
    'delta' => 'footer_social_media-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -49,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-front_page_icons-block'] = array(
    'cache' => -1,
    'css_class' => 'front-bottom',
    'custom' => 0,
    'delta' => 'front_page_icons-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -54,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block'] = array(
    'cache' => -1,
    'css_class' => 'front-left match-height',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -37,
      ),
    ),
    'title' => 'Browse Content',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block_2'] = array(
    'cache' => -1,
    'css_class' => 'front-center match-height',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -58,
      ),
    ),
    'title' => 'Recent Additions',
    'visibility' => 1,
  );

  $export['views-hangten_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hangten_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-hangten_collection_logo-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'hangten_collection_logo-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-object_description-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_description-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-object_description-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_description-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-object_description-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_description-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slideshow_galleria-block'] = array(
    'cache' => -1,
    'css_class' => 'view-slideshow-galleria-block slideshow',
    'custom' => 0,
    'delta' => 'slideshow_galleria-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -60,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 18,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-usage_collection-usage_stats'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'usage_collection-usage_stats',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
