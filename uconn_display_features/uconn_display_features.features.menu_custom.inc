<?php
/**
 * @file
 * uconn_display_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uconn_display_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-trinity-college-contextual-.
  $menus['menu-trinity-college-contextual-'] = array(
    'menu_name' => 'menu-trinity-college-contextual-',
    'title' => 'Trinity College Contextual Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Trinity College Contextual Menu');

  return $menus;
}
