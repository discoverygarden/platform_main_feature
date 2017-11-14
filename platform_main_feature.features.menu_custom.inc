<?php
/**
 * @file
 * platform_main_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function platform_main_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-about.
  $menus['menu-about'] = array(
    'menu_name' => 'menu-about',
    'title' => 'About',
    'description' => '',
  );
  // Exported menu: menu-archives.
  $menus['menu-archives'] = array(
    'menu_name' => 'menu-archives',
    'title' => 'Archives',
    'description' => '',
  );
  // Exported menu: menu-history.
  $menus['menu-history'] = array(
    'menu_name' => 'menu-history',
    'title' => 'History',
    'description' => '',
  );
  // Exported menu: menu-people.
  $menus['menu-people'] = array(
    'menu_name' => 'menu-people',
    'title' => 'People',
    'description' => '',
  );
  // Exported menu: menu-places.
  $menus['menu-places'] = array(
    'menu_name' => 'menu-places',
    'title' => 'Places',
    'description' => '',
  );
  // Exported menu: menu-search-menu.
  $menus['menu-search-menu'] = array(
    'menu_name' => 'menu-search-menu',
    'title' => 'Search Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Archives');
  t('History');
  t('Main menu');
  t('People');
  t('Places');
  t('Search Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
