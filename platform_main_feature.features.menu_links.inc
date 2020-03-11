<?php

/**
 * @file
 * platform_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function platform_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_boulder-daily-camera:http://www.dailycamera.com/.
  $menu_links['menu-footer-menu_boulder-daily-camera:http://www.dailycamera.com/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://www.dailycamera.com/',
    'router_path' => '',
    'link_title' => 'Boulder Daily Camera',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_boulder-daily-camera:http://www.dailycamera.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_boulder-genealogical-society:http://www.bouldergenealogy.org/.
  $menu_links['menu-footer-menu_boulder-genealogical-society:http://www.bouldergenealogy.org/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://www.bouldergenealogy.org/',
    'router_path' => '',
    'link_title' => 'Boulder Genealogical Society',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_boulder-genealogical-society:http://www.bouldergenealogy.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_boulder-library-commission:https://bouldercolorado.gov/boards-commissions/library-commission.
  $menu_links['menu-footer-menu_boulder-library-commission:https://bouldercolorado.gov/boards-commissions/library-commission'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://bouldercolorado.gov/boards-commissions/library-commission',
    'router_path' => '',
    'link_title' => 'Boulder Library Commission',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_boulder-library-commission:https://bouldercolorado.gov/boards-commissions/library-commission',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_boulder-library-foundation:http://boulderlibraryfoundation.org/.
  $menu_links['menu-footer-menu_boulder-library-foundation:http://boulderlibraryfoundation.org/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://boulderlibraryfoundation.org/',
    'router_path' => '',
    'link_title' => 'Boulder Library Foundation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_boulder-library-foundation:http://boulderlibraryfoundation.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_museum-of-boulder:https://www.museumofboulder.org/.
  $menu_links['menu-footer-menu_museum-of-boulder:https://www.museumofboulder.org/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://www.museumofboulder.org/',
    'router_path' => '',
    'link_title' => 'Museum of Boulder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_museum-of-boulder:https://www.museumofboulder.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-quick-links_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_browse-collections:islandora.
  $menu_links['menu-quick-links_browse-collections:islandora'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_browse-collections:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_chnc-newspapers:https://www.coloradohistoricnewspapers.org/.
  $menu_links['menu-quick-links_chnc-newspapers:https://www.coloradohistoricnewspapers.org/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'https://www.coloradohistoricnewspapers.org/',
    'router_path' => '',
    'link_title' => 'CHNC Newspapers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_chnc-newspapers:https://www.coloradohistoricnewspapers.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_clerk-and-recorder:https://www.bouldercounty.org/records/.
  $menu_links['menu-quick-links_clerk-and-recorder:https://www.bouldercounty.org/records/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'https://www.bouldercounty.org/records/',
    'router_path' => '',
    'link_title' => 'Clerk and Recorder',
    'options' => array(
      'attributes' => array(
        'title' => 'Access public records and apply for licenses and permits. Find statistics about building permits and information about elections, voter registration, and vehicle licenses.',
      ),
      'identifier' => 'menu-quick-links_clerk-and-recorder:https://www.bouldercounty.org/records/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_emapping:http://maps.boco.solutions/propertysearch/.
  $menu_links['menu-quick-links_emapping:http://maps.boco.solutions/propertysearch/'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'http://maps.boco.solutions/propertysearch/',
    'router_path' => '',
    'link_title' => 'EMapping',
    'options' => array(
      'attributes' => array(
        'title' => 'Boulder County Assessor\'s Office Property Search',
      ),
      'identifier' => 'menu-quick-links_emapping:http://maps.boco.solutions/propertysearch/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_genealogy-:https://research.boulderlibrary.org/genealogy.
  $menu_links['menu-quick-links_genealogy-:https://research.boulderlibrary.org/genealogy'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'https://research.boulderlibrary.org/genealogy',
    'router_path' => '',
    'link_title' => 'Genealogy ',
    'options' => array(
      'attributes' => array(
        'title' => 'Search Heritage Quest and Ancestry.com using Boulder Public Library LibGuides.',
      ),
      'identifier' => 'menu-quick-links_genealogy-:https://research.boulderlibrary.org/genealogy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_log-in:user/login.
  $menu_links['menu-quick-links_log-in:user/login'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
    'options' => array(
      'attributes' => array(
        'title' => 'Login for authenticated users.',
      ),
      'identifier' => 'menu-quick-links_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_log-out:user/logout.
  $menu_links['menu-quick-links_log-out:user/logout'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_sanborn-maps:https://www.loc.gov/collections/sanborn-maps.
  $menu_links['menu-quick-links_sanborn-maps:https://www.loc.gov/collections/sanborn-maps'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'https://www.loc.gov/collections/sanborn-maps',
    'router_path' => '',
    'link_title' => 'Sanborn Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-quick-links_sanborn-maps:https://www.loc.gov/collections/sanborn-maps',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Boulder Daily Camera');
  t('Boulder Genealogical Society');
  t('Boulder Library Commission');
  t('Boulder Library Foundation');
  t('Browse Collections');
  t('CHNC Newspapers');
  t('Clerk and Recorder');
  t('EMapping');
  t('Genealogy ');
  t('Log In');
  t('Log out');
  t('Museum of Boulder');
  t('Sanborn Maps');

  return $menu_links;
}
