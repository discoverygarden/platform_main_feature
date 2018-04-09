<?php
/**
 * @file
 * uconn_base_site_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uconn_base_site_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'branding' => '#000e2f',
    'body' => '#ffffff',
    'footer' => '#ffffff',
    'branding_icon_back' => '#1a4798',
    'header_background_color' => '#ffffff',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'vagrantbase-trusty64';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Research Data Archive';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'designkit_color' => array(
      'body' => '#cf2727',
      'footer' => '#8e8787',
    ),
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_uconn_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' / ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 1,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'uconn_branding_region_enable' => 1,
    'uconn_branding_text' => 'UCONN',
    'uconn_branding_text_university' => 'UNIVERSITY OF CONNECTICUT',
    'uconn_branding_text_link' => 'http://research.lib.uconn.edu',
    'deposit_branding_text' => 'Deposit',
    'uconn_deposit_text_link' => 'http://research.lib.uconn.edu/submit',
    'collection_image_ds' => 'TN',
    'designkit_color' => array(
      'branding' => '#000e2f',
      'body' => '#ffffff',
      'footer' => '#ffffff',
      'branding_icon_back' => '#1a4798',
      'header_background_color' => '#ffffff',
    ),
  );
  $export['theme_uconn_theme_settings'] = $strongarm;

  return $export;
}
