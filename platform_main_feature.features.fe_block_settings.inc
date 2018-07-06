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
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 5,
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
      'uconn_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
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
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -57,
      ),
    ),
    'title' => 'CTDA Information',
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

  $export['menu-menu-american-school-for-the-dea'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-american-school-for-the-dea',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-asd-social-media'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-asd-social-media',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-avon-free-public-library-co'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-avon-free-public-library-co',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-avon-free-public-library-so'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-avon-free-public-library-so',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-barnum-museum-contextual-me'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-barnum-museum-contextual-me',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-barnum-museum-social-media'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-barnum-museum-social-media',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bethel-public-library-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bethel-public-library-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bethel-public-library-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bethel-public-library-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bibliomation-contextual-men'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bibliomation-contextual-men',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bibliomation-social-media-m'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bibliomation-social-media-m',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bill-memorial-library-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bill-memorial-library-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bill-memorial-library-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bill-memorial-library-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-bridgeport-history-center-c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-bridgeport-history-center-c',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 1,
      ),
    ),
    'title' => 'CTDA Collections',
    'visibility' => 1,
  );

  $export['menu-menu-cahsl-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-cahsl-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-cahsl-social-media-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-cahsl-social-media-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-case-memorial-library-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-case-memorial-library-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-case-memorial-library-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-case-memorial-library-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-chi-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-chi-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-chs-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-chs-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-chs-social-media-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-chs-social-media-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-college-context'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-college-context',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-college-social-'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-college-social-',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-landmarks-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-landmarks-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-landmarks-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-landmarks-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-state-library-c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-state-library-c',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-state-library-s'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-state-library-s',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-connecticut-state-museum-of'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-connecticut-state-museum-of',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-csl-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-csl-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-csmnh-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-csmnh-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-enfield-public-library-cont'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-enfield-public-library-cont',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-enfield-public-library-soci'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-enfield-public-library-soci',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-fairfield-museum-contextual'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-fairfield-museum-contextual',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-fairfield-museum-social-med'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-fairfield-museum-social-med',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-florence-griswold-museum-co'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-florence-griswold-museum-co',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-florence-griswold-museum-so'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-florence-griswold-museum-so',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-footer-lower-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-lower-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-groton-public-library-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-groton-public-library-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-groton-public-library-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-groton-public-library-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hagaman-memorial-library-co'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hagaman-memorial-library-co',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hagaman-memorial-library-so'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hagaman-memorial-library-so',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hartford-medical-society-co'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hartford-medical-society-co',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hartford-medical-society-so'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hartford-medical-society-so',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hartford-public-library-men'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hartford-public-library-men',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-hartford-public-library-soc'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-hartford-public-library-soc',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-ivoryton-library-contextual'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-ivoryton-library-contextual',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-ivoryton-library-social-med'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-ivoryton-library-social-med',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-kent-memorial-library-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-kent-memorial-library-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-kent-memorial-library-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-kent-memorial-library-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-litchfield-historical-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-litchfield-historical-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-litchfield-historical-socia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-litchfield-historical-socia',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-lyman-allyn-art-museum-soci'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-lyman-allyn-art-museum-soci',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-lymen-allyn-art-museum-cont'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-lymen-allyn-art-museum-cont',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mattatuck-museum-contextual'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mattatuck-museum-contextual',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mattatuck-museum-social-med'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mattatuck-museum-social-med',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mystic-arts-center-contextu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mystic-arts-center-contextu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mystic-arts-center-social-m'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mystic-arts-center-social-m',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mystic-seaport-contextual-m'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mystic-seaport-contextual-m',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-mystic-seaport-social-media'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-mystic-seaport-social-media',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-nbmaa-social-media-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-nbmaa-social-media-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-new-britain-museum-of-ameri'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-new-britain-museum-of-ameri',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-new-haven-museum-contextual'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-new-haven-museum-contextual',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-new-haven-museum-social-med'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-new-haven-museum-social-med',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-norwalk-public-library-cont'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-norwalk-public-library-cont',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-norwalk-public-library-soci'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-norwalk-public-library-soci',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-pt-barnum-digital-collectio'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-pt-barnum-digital-collectio',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-slater-memorial-museum-cont'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-slater-memorial-museum-cont',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-slater-memorial-museum-soci'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-slater-memorial-museum-soci',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-stonington-historical-conte'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-stonington-historical-conte',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-stonington-historical-socie'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-stonington-historical-socie',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-uconn-contextual-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-uconn-contextual-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-uconn-social-media-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-uconn-social-media-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-wadsworth-atheneum-contextu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-wadsworth-atheneum-contextu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-wadsworth-atheneum-social-m'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-wadsworth-atheneum-social-m',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-windham-textile-history-con'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-windham-textile-history-con',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-woodbury-public-library-con'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-woodbury-public-library-con',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['menu-menu-woodbury-public-library-soc'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-woodbury-public-library-soc',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 4,
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
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
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

  $export['views-0cd8c45b61ac8692fddbc16967fa76ff'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0cd8c45b61ac8692fddbc16967fa76ff',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-0e421ddcad5e4ddbe2f4e87f52252332'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0e421ddcad5e4ddbe2f4e87f52252332',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1194dd7f402d56ff2b01475c936a27fc'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1194dd7f402d56ff2b01475c936a27fc',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-11b047141517f29d2f159b8b1054e4ae'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '11b047141517f29d2f159b8b1054e4ae',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-12f00abe107439e0d85ec4936527eb7e'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '12f00abe107439e0d85ec4936527eb7e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1481ae2a1f443c5ecb7dbdd0e67be016'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1481ae2a1f443c5ecb7dbdd0e67be016',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-173e9c8361468aec1acee180ba7d5a79'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '173e9c8361468aec1acee180ba7d5a79',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1b158773cacb9ebd9c05a723c461a256'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1b158773cacb9ebd9c05a723c461a256',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1bd186f2d6bd57ef9ec7896e8dbb1f22'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1bd186f2d6bd57ef9ec7896e8dbb1f22',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1bfaa96e78c7c86acf97d93724ed2e06'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1bfaa96e78c7c86acf97d93724ed2e06',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-1f7a1a11e6c508ae09ee0cbc4d128b16'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '1f7a1a11e6c508ae09ee0cbc4d128b16',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-2330b6cb076ca863ab7aa233ab1e1f79'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2330b6cb076ca863ab7aa233ab1e1f79',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-23550269684434b61e0370f4a6f3cddf'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '23550269684434b61e0370f4a6f3cddf',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-276bcf192a38faf63359d0666e021acc'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '276bcf192a38faf63359d0666e021acc',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-28f305e0b363163ab7222d28fcede019'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '28f305e0b363163ab7222d28fcede019',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-2e93ea145425f8fd225e161008341585'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2e93ea145425f8fd225e161008341585',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-30b2e6605a4a9780c34a541d24cbc665'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '30b2e6605a4a9780c34a541d24cbc665',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-310d624da432bb3623863a2e7bffad27'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '310d624da432bb3623863a2e7bffad27',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-3122385f5a2483ffc67987f723a97228'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3122385f5a2483ffc67987f723a97228',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-33a9f7c74442bdac4e9eacd527d3b032'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '33a9f7c74442bdac4e9eacd527d3b032',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-38d25a9f1a0be6388aae94c50c529e5f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '38d25a9f1a0be6388aae94c50c529e5f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-3ec19ef45c53411156f4ab1c07622d3b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3ec19ef45c53411156f4ab1c07622d3b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-42bf95c05a0d714a60baab0c51cf1555'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '42bf95c05a0d714a60baab0c51cf1555',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-46ad6a1d12ebbce273f7f12b6d8012eb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '46ad6a1d12ebbce273f7f12b6d8012eb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-4dfc358e088b84471a99ecb1ecd8481f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4dfc358e088b84471a99ecb1ecd8481f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-4fe184b50f03f9ff1dee4ee83f30103a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4fe184b50f03f9ff1dee4ee83f30103a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-513c1005215dd4b69f20c7aec4a65a0f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '513c1005215dd4b69f20c7aec4a65a0f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-541e1d5254e80dc3aa64843efecef97f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '541e1d5254e80dc3aa64843efecef97f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-54b19d97d64c9ad833504dadadeb221d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '54b19d97d64c9ad833504dadadeb221d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-57ccae2fa7a974592826284858adecc4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '57ccae2fa7a974592826284858adecc4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-5ad090989e95d410cc99b5eed87d0247'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '5ad090989e95d410cc99b5eed87d0247',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-5ca0f8017cbf62d69e23a8d6816304d2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '5ca0f8017cbf62d69e23a8d6816304d2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-60f4e7629cf0041cb875732a45249f1e'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '60f4e7629cf0041cb875732a45249f1e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-65b4eda9bdba68fc90a148fb7a750900'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '65b4eda9bdba68fc90a148fb7a750900',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-6813bc11c0755c8a0341023b4badb3c5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6813bc11c0755c8a0341023b4badb3c5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-6d22b829ed42640f632915cd4a6ae745'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6d22b829ed42640f632915cd4a6ae745',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-6d34bb1ff2bc6fed4080febc26959fd6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6d34bb1ff2bc6fed4080febc26959fd6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-7009f78c24f807cd8daa59419cde3a02'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7009f78c24f807cd8daa59419cde3a02',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-7128e67aa9fee71ff6bd6e8a5786d0fb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7128e67aa9fee71ff6bd6e8a5786d0fb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-761c3e690708edf1750acde484294c48'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '761c3e690708edf1750acde484294c48',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-7dd041cbacc81f5e00baaf67de7a1dc8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7dd041cbacc81f5e00baaf67de7a1dc8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-7e2d2f9d06fab243e04a9405c887a623'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7e2d2f9d06fab243e04a9405c887a623',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-7fed9bd3bd80af20e36e6a3b90ee6d62'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7fed9bd3bd80af20e36e6a3b90ee6d62',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-824114b35c47642c40cb9af8385fab43'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '824114b35c47642c40cb9af8385fab43',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-869a867be3b6befe53b9cd11a42fabb5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '869a867be3b6befe53b9cd11a42fabb5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-8aeb0332c398bf70071cbbe1cc52a482'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8aeb0332c398bf70071cbbe1cc52a482',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-8bf3fa8f9ccccaed61783931691a53e5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8bf3fa8f9ccccaed61783931691a53e5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-8fc3742374fcd74e1a2898e1d577b351'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8fc3742374fcd74e1a2898e1d577b351',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-91796d5a0043b50188aece70e8108ad3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '91796d5a0043b50188aece70e8108ad3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-9393547b27583e26057dedc33a0d9e67'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9393547b27583e26057dedc33a0d9e67',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-976be1416ae39fb287ca61bb658419d2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '976be1416ae39fb287ca61bb658419d2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-97e2f4f3afdd4d4a7e6e2090ad6cbb85'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '97e2f4f3afdd4d4a7e6e2090ad6cbb85',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-9cc373d294d1818d218b53f8308a0a5c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9cc373d294d1818d218b53f8308a0a5c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-a025059b1711a8f66b94a25134849659'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a025059b1711a8f66b94a25134849659',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-a20d563b863e94a8dee0f7c78f5c6aaa'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a20d563b863e94a8dee0f7c78f5c6aaa',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-a4227f966a652d5295e410a29425a55f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a4227f966a652d5295e410a29425a55f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-a8827151b46e9e456e3f8b168e13a3ba'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a8827151b46e9e456e3f8b168e13a3ba',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-ab4b0217bb2c915c3ee01a541aac07ab'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ab4b0217bb2c915c3ee01a541aac07ab',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-about_page_most_viewed-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_page_most_viewed-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-about_page_most_viewed-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_page_most_viewed-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-about_page_recently_added-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about_page_recently_added-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-afbe28c5c55385d5afb22068a11de33b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'afbe28c5c55385d5afb22068a11de33b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-b16edea820dc7d69a93a63406eeb0808'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b16edea820dc7d69a93a63406eeb0808',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-b4d6399d9a2139d1d4ec4f6ac2cce016'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b4d6399d9a2139d1d4ec4f6ac2cce016',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-b8006fe5f90ad0d48e6f4f1e486b5f87'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b8006fe5f90ad0d48e6f4f1e486b5f87',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-bellington_archive_info-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bellington_archive_info-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-bridgeport_most_viewed-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bridgeport_most_viewed-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-bridgeport_most_viewed-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bridgeport_most_viewed-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-bridgeport_most_viewed-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bridgeport_most_viewed-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-bridgeport_most_viewed-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bridgeport_most_viewed-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-c3ea7ee97e5e108a095e66d7fae817d4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c3ea7ee97e5e108a095e66d7fae817d4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-c4a76e0f59d28e084bedafd1f1e216af'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c4a76e0f59d28e084bedafd1f1e216af',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-c95a7fe15abcb627a7b28ba4e41a26da'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c95a7fe15abcb627a7b28ba4e41a26da',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-chi_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'chi_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-csl_archive_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'csl_archive_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-d033bfe991a8c98069169b1226a03356'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd033bfe991a8c98069169b1226a03356',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-d0a59bf40e46d479499abfc64c1e52e9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd0a59bf40e46d479499abfc64c1e52e9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-d2f12eab585655e608458fff0c9a3e81'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd2f12eab585655e608458fff0c9a3e81',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-d4450de3e6f4207f8b422ae787ca853c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd4450de3e6f4207f8b422ae787ca853c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-df23f4e671ea59612d22cfbb6c4198b8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'df23f4e671ea59612d22cfbb6c4198b8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-df8015027c8000d76b8f586435d141cb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'df8015027c8000d76b8f586435d141cb',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e144e9c57e0ed91c661d8d6a1d185c23'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e144e9c57e0ed91c661d8d6a1d185c23',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e1f128381f9819578aa205e4e50343e1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e1f128381f9819578aa205e4e50343e1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e68c304e5994d7eb4ec9fdd943e470fa'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e68c304e5994d7eb4ec9fdd943e470fa',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e8d43f2d123cf55ffb4c8dc2967a6786'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e8d43f2d123cf55ffb4c8dc2967a6786',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e97765dd15448528002bef8a4a8db050'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e97765dd15448528002bef8a4a8db050',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-e9b3e041b54489290f3b4b5d680c4d81'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e9b3e041b54489290f3b4b5d680c4d81',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-eb241eab0e9edd8acd370658ecb063c8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'eb241eab0e9edd8acd370658ecb063c8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-ed0a58408ad4f0854459883f93ddb689'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ed0a58408ad4f0854459883f93ddb689',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-ed50e01e45ecf69a57ba3895c44463b9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ed50e01e45ecf69a57ba3895c44463b9',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-f2ce6c3861e2f68b7a97434d6742aa2f'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f2ce6c3861e2f68b7a97434d6742aa2f',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-f32d3614e177a3ea63a184a01e2ec5c7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f32d3614e177a3ea63a184a01e2ec5c7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-f651767a04cd80b73695634458340aff'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f651767a04cd80b73695634458340aff',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-f93eb4d7741f9f9ae20e099594eb9b60'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f93eb4d7741f9f9ae20e099594eb9b60',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-fd5804d48bda83785ae2cfade57c2f16'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fd5804d48bda83785ae2cfade57c2f16',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-fd70352738ed117ebf3fc49e72f5bfd1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fd70352738ed117ebf3fc49e72f5bfd1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-ffbe57736519265e8834b674a37d1344'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ffbe57736519265e8834b674a37d1344',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-footer_icon_and_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_icon_and_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 6,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
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
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 2,
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

  $export['views-image_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-mods_page_title-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mods_page_title-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-new_britain_museum-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new_britain_museum-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 0,
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
