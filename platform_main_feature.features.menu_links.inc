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

  // Exported menu link: menu-engage_support-us:http://baseballhall.org/support.
  $menu_links['menu-engage_support-us:http://baseballhall.org/support'] = array(
    'menu_name' => 'menu-engage',
    'link_path' => 'http://baseballhall.org/support',
    'router_path' => '',
    'link_title' => 'Support us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-engage_support-us:http://baseballhall.org/support',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-engage_visit-our-shop:http://www.shop.baseballhall.org.
  $menu_links['menu-engage_visit-our-shop:http://www.shop.baseballhall.org'] = array(
    'menu_name' => 'menu-engage',
    'link_path' => 'http://www.shop.baseballhall.org',
    'router_path' => '',
    'link_title' => 'Visit our shop',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-engage_visit-our-shop:http://www.shop.baseballhall.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:node/1.
  $menu_links['menu-footer-menu_creative-content-license:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Creative content license',
    'options' => array(
      'identifier' => 'menu-footer-menu_creative-content-license:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d.
  $menu_links['menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    'router_path' => 'uuid',
    'link_title' => 'Creative content license',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user/login.
  $menu_links['menu-footer-menu_login:user/login'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logout:user/logout.
  $menu_links['menu-footer-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_make-contact:node/4.
  $menu_links['menu-footer-menu_make-contact:node/4'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Make contact',
    'options' => array(
      'identifier' => 'menu-footer-menu_make-contact:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:node/10.
  $menu_links['menu-footer-menu_policies:node/10'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'identifier' => 'menu-footer-menu_policies:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523.
  $menu_links['menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    'router_path' => 'uuid',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:node/2.
  $menu_links['menu-footer-menu_researchers:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Researchers',
    'options' => array(
      'identifier' => 'menu-footer-menu_researchers:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005.
  $menu_links['menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    'router_path' => 'uuid',
    'link_title' => 'Researchers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About this site',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_archive-and-collection:http://baseballhall.org/discover/archive-collection.
  $menu_links['menu-header-menu_archive-and-collection:http://baseballhall.org/discover/archive-collection'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://baseballhall.org/discover/archive-collection',
    'router_path' => '',
    'link_title' => 'Archive and Collection',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 0,
        'plid' => 0,
      ),
      'identifier' => 'menu-header-menu_archive-and-collection:http://baseballhall.org/discover/archive-collection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_bookmarks:islandora-bookmark.
  $menu_links['menu-header-menu_bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'Bookmarks',
    'options' => array(
      'identifier' => 'menu-header-menu_bookmarks:islandora-bookmark',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 674,
        'plid' => 0,
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_donate:https://community.baseballhall.org/sslpage.aspx?pid=1767.
  $menu_links['menu-header-menu_donate:https://community.baseballhall.org/sslpage.aspx?pid=1767'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'https://community.baseballhall.org/sslpage.aspx?pid=1767',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 698,
        'plid' => 0,
      ),
      'identifier' => 'menu-header-menu_donate:https://community.baseballhall.org/sslpage.aspx?pid=1767',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_explore-the-collection:islandora.
  $menu_links['menu-header-menu_explore-the-collection:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Explore the Collection',
    'options' => array(
      'identifier' => 'menu-header-menu_explore-the-collection:islandora',
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 673,
        'plid' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_hall-of-famers:http://baseballhall.org/explorer.
  $menu_links['menu-header-menu_hall-of-famers:http://baseballhall.org/explorer'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://baseballhall.org/explorer',
    'router_path' => '',
    'link_title' => 'Hall of Famers',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 699,
        'plid' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-header-menu_hall-of-famers:http://baseballhall.org/explorer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_search-the-collection:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f.
  $menu_links['menu-header-menu_search-the-collection:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
    'router_path' => 'uuid',
    'link_title' => 'Search the Collection',
    'options' => array(
      'menu_attach_block' => array(
        'name' => 'islandora_solr|simple',
        'use_ajax' => 0,
        'no_drop' => 1,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 672,
        'plid' => 0,
      ),
      'identifier' => 'menu-header-menu_search-the-collection:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
      'attributes' => array(
        'class' => array(
          0 => 'search-hide-link',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-media-and-research-material_abner-online-library-catalog:http://www.abner.baseballhalloffame.org/search.
  $menu_links['menu-media-and-research-material_abner-online-library-catalog:http://www.abner.baseballhalloffame.org/search'] = array(
    'menu_name' => 'menu-media-and-research-material',
    'link_path' => 'http://www.abner.baseballhalloffame.org/search',
    'router_path' => '',
    'link_title' => 'ABNER Online Library Catalog',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-media-and-research-material_abner-online-library-catalog:http://www.abner.baseballhalloffame.org/search',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-media-and-research-material_media-info:http://baseballhall.org/media-info.
  $menu_links['menu-media-and-research-material_media-info:http://baseballhall.org/media-info'] = array(
    'menu_name' => 'menu-media-and-research-material',
    'link_path' => 'http://baseballhall.org/media-info',
    'router_path' => '',
    'link_title' => 'Media Info',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-media-and-research-material_media-info:http://baseballhall.org/media-info',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-media-and-research-material_news:http://baseballhall.org/news.
  $menu_links['menu-media-and-research-material_news:http://baseballhall.org/news'] = array(
    'menu_name' => 'menu-media-and-research-material',
    'link_path' => 'http://baseballhall.org/news',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-media-and-research-material_news:http://baseballhall.org/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_employment:http://baseballhall.org/employment.
  $menu_links['menu-useful-links_employment:http://baseballhall.org/employment'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'http://baseballhall.org/employment',
    'router_path' => '',
    'link_title' => 'Employment',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_employment:http://baseballhall.org/employment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_privacy-statementyour-california-privacy-rights:http://baseballhall.org/privacy-statement.
  $menu_links['menu-useful-links_privacy-statementyour-california-privacy-rights:http://baseballhall.org/privacy-statement'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'http://baseballhall.org/privacy-statement',
    'router_path' => '',
    'link_title' => 'Privacy Statement/Your California Privacy Rights',
    'options' => array(
      'identifier' => 'menu-useful-links_privacy-statementyour-california-privacy-rights:http://baseballhall.org/privacy-statement',
      'attributes' => array(
        'class' => array(
          0 => 'privacy-statement',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-useful-links_terms:http://baseballhall.org/terms.
  $menu_links['menu-useful-links_terms:http://baseballhall.org/terms'] = array(
    'menu_name' => 'menu-useful-links',
    'link_path' => 'http://baseballhall.org/terms',
    'router_path' => '',
    'link_title' => 'Terms',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-useful-links_terms:http://baseballhall.org/terms',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ABNER Online Library Catalog');
  t('About this site');
  t('Archive and Collection');
  t('Bookmarks');
  t('Creative content license');
  t('Donate');
  t('Employment');
  t('Explore the Collection');
  t('Hall of Famers');
  t('Login');
  t('Logout');
  t('Make contact');
  t('Media Info');
  t('News');
  t('Policies');
  t('Privacy Statement/Your California Privacy Rights');
  t('Researchers');
  t('Search the Collection');
  t('Support us');
  t('Terms');
  t('Visit our shop');

  return $menu_links;
}
