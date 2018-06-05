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
  // Exported menu: menu-avon-free-public-library-co.
  $menus['menu-avon-free-public-library-co'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'title' => 'Avon Free Public Library Contextual Menu',
    'description' => '',
  );
  // Exported menu: menu-avon-free-public-library-so.
  $menus['menu-avon-free-public-library-so'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'title' => 'Avon Free Public Library Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-barnum-museum-contextual-me.
  $menus['menu-barnum-museum-contextual-me'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'title' => 'Barnum Museum contextual menu',
    'description' => '',
  );
  // Exported menu: menu-barnum-museum-social-media.
  $menus['menu-barnum-museum-social-media'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'title' => 'Barnum Museum Social Media',
    'description' => '',
  );
  // Exported menu: menu-browse-content.
  $menus['menu-browse-content'] = array(
    'menu_name' => 'menu-browse-content',
    'title' => 'Browse Content',
    'description' => '',
  );
  // Exported menu: menu-digital-collection-social-m.
  $menus['menu-digital-collection-social-m'] = array(
    'menu_name' => 'menu-digital-collection-social-m',
    'title' => 'Digital Collection Social Media Menu',
    'description' => '',
  );
  // Exported menu: menu-norwalk-public-library-cont.
  $menus['menu-norwalk-public-library-cont'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'title' => 'Norwalk Public Library Contextual Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Avon Free Public Library Contextual Menu');
  t('Avon Free Public Library Social Media Menu');
  t('Barnum Museum Social Media');
  t('Barnum Museum contextual menu');
  t('Browse Content');
  t('Digital Collection Social Media Menu');
  t('Main menu');
  t('Norwalk Public Library Contextual Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
