<?php
/**
 * @file
 * scsu_theme_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function scsu_theme_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-scsu-footer-menu-context.
  $menus['menu-scsu-footer-menu-context'] = array(
    'menu_name' => 'menu-scsu-footer-menu-context',
    'title' => 'SCSU Footer Menu Context',
    'description' => '',
  );
  // Exported menu: menu-scsu-footer-menu-social.
  $menus['menu-scsu-footer-menu-social'] = array(
    'menu_name' => 'menu-scsu-footer-menu-social',
    'title' => 'SCSU Footer Menu Social',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('SCSU Footer Menu Context');
  t('SCSU Footer Menu Social');

  return $menus;
}
