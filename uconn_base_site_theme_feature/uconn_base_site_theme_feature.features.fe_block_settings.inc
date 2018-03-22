<?php
/**
 * @file
 * uconn_base_site_theme_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function uconn_base_site_theme_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['panels_mini-footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -53,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-header_logo_data'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_logo_data',
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
        'region' => 'logo_header',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-page_top_branding_mini_panel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page_top_branding_mini_panel',
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

  $export['panels_mini-site_branding_data'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site_branding_data',
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
        'region' => 'institute_info',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -60,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
