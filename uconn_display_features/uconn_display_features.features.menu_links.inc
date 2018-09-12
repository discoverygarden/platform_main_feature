<?php
/**
 * @file
 * uconn_display_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uconn_display_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-the-ctda:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive.
  $menu_links['main-menu_about-the-ctda:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
    'router_path' => '',
    'link_title' => 'About the CTDA',
    'options' => array(
      'identifier' => 'main-menu_about-the-ctda:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_advanced-search:node/5.
  $menu_links['main-menu_advanced-search:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Advanced Search',
    'options' => array(
      'identifier' => 'main-menu_advanced-search:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: main-menu_all-collections:islandora.
  $menu_links['main-menu_all-collections:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'All Collections',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_all-collections:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-american-school-for-the-dea_asd-collections--:http://collections.ctdigitalarchive.org/islandora/object/290002%3AASDAdminJME.
  $menu_links['menu-american-school-for-the-dea_asd-collections--:http://collections.ctdigitalarchive.org/islandora/object/290002%3AASDAdminJME'] = array(
    'menu_name' => 'menu-american-school-for-the-dea',
    'link_path' => 'http://collections.ctdigitalarchive.org/islandora/object/290002%3AASDAdminJME',
    'router_path' => '',
    'link_title' => 'ASD Collections | ',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-american-school-for-the-dea_asd-collections--:http://collections.ctdigitalarchive.org/islandora/object/290002%3AASDAdminJME',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-american-school-for-the-dea_contact:https://www.asd-1817.org/contact-us.
  $menu_links['menu-american-school-for-the-dea_contact:https://www.asd-1817.org/contact-us'] = array(
    'menu_name' => 'menu-american-school-for-the-dea',
    'link_path' => 'https://www.asd-1817.org/contact-us',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-american-school-for-the-dea_contact:https://www.asd-1817.org/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-american-school-for-the-dea_website-:https://www.asd-1817.org/.
  $menu_links['menu-american-school-for-the-dea_website-:https://www.asd-1817.org/'] = array(
    'menu_name' => 'menu-american-school-for-the-dea',
    'link_path' => 'https://www.asd-1817.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-american-school-for-the-dea_website-:https://www.asd-1817.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-asd-social-media_facebook:https://www.facebook.com/asd1817.
  $menu_links['menu-asd-social-media_facebook:https://www.facebook.com/asd1817'] = array(
    'menu_name' => 'menu-asd-social-media',
    'link_path' => 'https://www.facebook.com/asd1817',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-asd-social-media_facebook:https://www.facebook.com/asd1817',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-asd-social-media_twitter:https://twitter.com/asd_1817?lang=en.
  $menu_links['menu-asd-social-media_twitter:https://twitter.com/asd_1817?lang=en'] = array(
    'menu_name' => 'menu-asd-social-media',
    'link_path' => 'https://twitter.com/asd_1817?lang=en',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-asd-social-media_twitter:https://twitter.com/asd_1817?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-asd-social-media_youtube:https://www.youtube.com/channel/UChB34sMMjLTSrfjbcyybwqg.
  $menu_links['menu-asd-social-media_youtube:https://www.youtube.com/channel/UChB34sMMjLTSrfjbcyybwqg'] = array(
    'menu_name' => 'menu-asd-social-media',
    'link_path' => 'https://www.youtube.com/channel/UChB34sMMjLTSrfjbcyybwqg',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-asd-social-media_youtube:https://www.youtube.com/channel/UChB34sMMjLTSrfjbcyybwqg',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_about-:https://collections.ctdigitalarchive.org/about-avon-free-public-library.
  $menu_links['menu-avon-free-public-library-co_about-:https://collections.ctdigitalarchive.org/about-avon-free-public-library'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-avon-free-public-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-avon-free-public-library-co_about-:https://collections.ctdigitalarchive.org/about-avon-free-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_avon-free-public-library-collections-:https://collections.ctdigitalarchive.org/islandora/object/150002:001.
  $menu_links['menu-avon-free-public-library-co_avon-free-public-library-collections-:https://collections.ctdigitalarchive.org/islandora/object/150002:001'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'https://collections.ctdigitalarchive.org/islandora/object/150002:001',
    'router_path' => '',
    'link_title' => 'Avon Free Public Library Collections |',
    'options' => array(
      'identifier' => 'menu-avon-free-public-library-co_avon-free-public-library-collections-:https://collections.ctdigitalarchive.org/islandora/object/150002:001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_contact:https://avonctlibrary.info/contact/.
  $menu_links['menu-avon-free-public-library-co_contact:https://avonctlibrary.info/contact/'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'https://avonctlibrary.info/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-co_contact:https://avonctlibrary.info/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_website-:https://avonctlibrary.info/.
  $menu_links['menu-avon-free-public-library-co_website-:https://avonctlibrary.info/'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'https://avonctlibrary.info/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-co_website-:https://avonctlibrary.info/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_facebook:https://www.facebook.com/avonfreepubliclibrary.
  $menu_links['menu-avon-free-public-library-so_facebook:https://www.facebook.com/avonfreepubliclibrary'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://www.facebook.com/avonfreepubliclibrary',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-so_facebook:https://www.facebook.com/avonfreepubliclibrary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_instagram:https://www.instagram.com/afplct/.
  $menu_links['menu-avon-free-public-library-so_instagram:https://www.instagram.com/afplct/'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://www.instagram.com/afplct/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-so_instagram:https://www.instagram.com/afplct/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_pintrest:https://www.pinterest.com/afplct/.
  $menu_links['menu-avon-free-public-library-so_pintrest:https://www.pinterest.com/afplct/'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://www.pinterest.com/afplct/',
    'router_path' => '',
    'link_title' => 'Pintrest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-so_pintrest:https://www.pinterest.com/afplct/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_twitter:https://twitter.com/AFPLCT.
  $menu_links['menu-avon-free-public-library-so_twitter:https://twitter.com/AFPLCT'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://twitter.com/AFPLCT',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-so_twitter:https://twitter.com/AFPLCT',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_youtube:https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg.
  $menu_links['menu-avon-free-public-library-so_youtube:https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-avon-free-public-library-so_youtube:https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-contextual-me_about--:https://collections.ctdigitalarchive.org/about-barnum-museum.
  $menu_links['menu-barnum-museum-contextual-me_about--:https://collections.ctdigitalarchive.org/about-barnum-museum'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-barnum-museum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-barnum-museum-contextual-me_about--:https://collections.ctdigitalarchive.org/about-barnum-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-contextual-me_barnum-museum-collections--:islandora/object/60002:BarnumMuseum.
  $menu_links['menu-barnum-museum-contextual-me_barnum-museum-collections--:islandora/object/60002:BarnumMuseum'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'link_path' => 'islandora/object/60002:BarnumMuseum',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Barnum Museum Collections | ',
    'options' => array(
      'identifier' => 'menu-barnum-museum-contextual-me_barnum-museum-collections--:islandora/object/60002:BarnumMuseum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-contextual-me_contact:https://barnum-museum.org/visit/contact/.
  $menu_links['menu-barnum-museum-contextual-me_contact:https://barnum-museum.org/visit/contact/'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'link_path' => 'https://barnum-museum.org/visit/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-contextual-me_contact:https://barnum-museum.org/visit/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-contextual-me_website-:https://barnum-museum.org/.
  $menu_links['menu-barnum-museum-contextual-me_website-:https://barnum-museum.org/'] = array(
    'menu_name' => 'menu-barnum-museum-contextual-me',
    'link_path' => 'https://barnum-museum.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-contextual-me_website-:https://barnum-museum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-social-media_facebook:http://www.facebook.com.
  $menu_links['menu-barnum-museum-social-media_facebook:http://www.facebook.com'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'link_path' => 'http://www.facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-social-media_facebook:http://www.facebook.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-social-media_facebook:https://www.facebook.com/thebarnummuseum/.
  $menu_links['menu-barnum-museum-social-media_facebook:https://www.facebook.com/thebarnummuseum/'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'link_path' => 'https://www.facebook.com/thebarnummuseum/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-social-media_facebook:https://www.facebook.com/thebarnummuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-social-media_instagram:https://www.instagram.com/barnummuseum/.
  $menu_links['menu-barnum-museum-social-media_instagram:https://www.instagram.com/barnummuseum/'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'link_path' => 'https://www.instagram.com/barnummuseum/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-social-media_instagram:https://www.instagram.com/barnummuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-social-media_twitter:http://www.twitter.com.
  $menu_links['menu-barnum-museum-social-media_twitter:http://www.twitter.com'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'link_path' => 'http://www.twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-social-media_twitter:http://www.twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-barnum-museum-social-media_twitter:https://twitter.com/BarnumMuseum.
  $menu_links['menu-barnum-museum-social-media_twitter:https://twitter.com/BarnumMuseum'] = array(
    'menu_name' => 'menu-barnum-museum-social-media',
    'link_path' => 'https://twitter.com/BarnumMuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-barnum-museum-social-media_twitter:https://twitter.com/BarnumMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-conte_about-:https://collections.ctdigitalarchive.org/about-bethel-public-library.
  $menu_links['menu-bethel-public-library-conte_about-:https://collections.ctdigitalarchive.org/about-bethel-public-library'] = array(
    'menu_name' => 'menu-bethel-public-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-bethel-public-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-bethel-public-library-conte_about-:https://collections.ctdigitalarchive.org/about-bethel-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-conte_bethel-public-library-collections-:islandora/object/140006:Bethel.
  $menu_links['menu-bethel-public-library-conte_bethel-public-library-collections-:islandora/object/140006:Bethel'] = array(
    'menu_name' => 'menu-bethel-public-library-conte',
    'link_path' => 'islandora/object/140006:Bethel',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bethel Public Library Collections |',
    'options' => array(
      'identifier' => 'menu-bethel-public-library-conte_bethel-public-library-collections-:islandora/object/140006:Bethel',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-conte_bibliomation-collections-:https://collections.ctdigitalarchive.org/islandora/object/140002%3ABiblio.
  $menu_links['menu-bethel-public-library-conte_bibliomation-collections-:https://collections.ctdigitalarchive.org/islandora/object/140002%3ABiblio'] = array(
    'menu_name' => 'menu-bethel-public-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/islandora/object/140002%3ABiblio',
    'router_path' => '',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'identifier' => 'menu-bethel-public-library-conte_bibliomation-collections-:https://collections.ctdigitalarchive.org/islandora/object/140002%3ABiblio',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-conte_website:http://www.bethellibrary.org/.
  $menu_links['menu-bethel-public-library-conte_website:http://www.bethellibrary.org/'] = array(
    'menu_name' => 'menu-bethel-public-library-conte',
    'link_path' => 'http://www.bethellibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'identifier' => 'menu-bethel-public-library-conte_website:http://www.bethellibrary.org/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-socia_facebook:https://www.facebook.com/bethellibraryct.
  $menu_links['menu-bethel-public-library-socia_facebook:https://www.facebook.com/bethellibraryct'] = array(
    'menu_name' => 'menu-bethel-public-library-socia',
    'link_path' => 'https://www.facebook.com/bethellibraryct',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bethel-public-library-socia_facebook:https://www.facebook.com/bethellibraryct',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-socia_instagram:https://www.instagram.com/bethellibraryct/.
  $menu_links['menu-bethel-public-library-socia_instagram:https://www.instagram.com/bethellibraryct/'] = array(
    'menu_name' => 'menu-bethel-public-library-socia',
    'link_path' => 'https://www.instagram.com/bethellibraryct/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bethel-public-library-socia_instagram:https://www.instagram.com/bethellibraryct/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-bethel-public-library-socia_twitter:https://twitter.com/bethellibraryct.
  $menu_links['menu-bethel-public-library-socia_twitter:https://twitter.com/bethellibraryct'] = array(
    'menu_name' => 'menu-bethel-public-library-socia',
    'link_path' => 'https://twitter.com/bethellibraryct',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bethel-public-library-socia_twitter:https://twitter.com/bethellibraryct',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-bibliomation-contextual-men_about--:http://www.biblio.org/about.
  $menu_links['menu-bibliomation-contextual-men_about--:http://www.biblio.org/about'] = array(
    'menu_name' => 'menu-bibliomation-contextual-men',
    'link_path' => 'http://www.biblio.org/about',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bibliomation-contextual-men_about--:http://www.biblio.org/about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bibliomation-contextual-men_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-bibliomation-contextual-men_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-bibliomation-contextual-men',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bibliomation-contextual-men_bibliomation-collections-:islandora/object/140002:Biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-bibliomation-contextual-men_website:http://www.biblio.org/.
  $menu_links['menu-bibliomation-contextual-men_website:http://www.biblio.org/'] = array(
    'menu_name' => 'menu-bibliomation-contextual-men',
    'link_path' => 'http://www.biblio.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bibliomation-contextual-men_website:http://www.biblio.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-bibliomation-social-media-m_facebook:https://www.facebook.com/bibliomation.
  $menu_links['menu-bibliomation-social-media-m_facebook:https://www.facebook.com/bibliomation'] = array(
    'menu_name' => 'menu-bibliomation-social-media-m',
    'link_path' => 'https://www.facebook.com/bibliomation',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bibliomation-social-media-m_facebook:https://www.facebook.com/bibliomation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-bibliomation-social-media-m_twitter:https://twitter.com/bibliomation.
  $menu_links['menu-bibliomation-social-media-m_twitter:https://twitter.com/bibliomation'] = array(
    'menu_name' => 'menu-bibliomation-social-media-m',
    'link_path' => 'https://twitter.com/bibliomation',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bibliomation-social-media-m_twitter:https://twitter.com/bibliomation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-bill-memorial-library.
  $menu_links['menu-bill-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-bill-memorial-library'] = array(
    'menu_name' => 'menu-bill-memorial-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-bill-memorial-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-bill-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-bill-memorial-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-conte_bill-memorial-library-collections-:islandora/object/350002:BillMemorialLibrary.
  $menu_links['menu-bill-memorial-library-conte_bill-memorial-library-collections-:islandora/object/350002:BillMemorialLibrary'] = array(
    'menu_name' => 'menu-bill-memorial-library-conte',
    'link_path' => 'islandora/object/350002:BillMemorialLibrary',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bill Memorial Library Collections |',
    'options' => array(
      'identifier' => 'menu-bill-memorial-library-conte_bill-memorial-library-collections-:islandora/object/350002:BillMemorialLibrary',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-conte_contact:https://www.billmemorial.org/contact.
  $menu_links['menu-bill-memorial-library-conte_contact:https://www.billmemorial.org/contact'] = array(
    'menu_name' => 'menu-bill-memorial-library-conte',
    'link_path' => 'https://www.billmemorial.org/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bill-memorial-library-conte_contact:https://www.billmemorial.org/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-conte_website-:https://www.billmemorial.org/.
  $menu_links['menu-bill-memorial-library-conte_website-:https://www.billmemorial.org/'] = array(
    'menu_name' => 'menu-bill-memorial-library-conte',
    'link_path' => 'https://www.billmemorial.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bill-memorial-library-conte_website-:https://www.billmemorial.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-socia_facebook:https://www.facebook.com/billmemoriallibrary/.
  $menu_links['menu-bill-memorial-library-socia_facebook:https://www.facebook.com/billmemoriallibrary/'] = array(
    'menu_name' => 'menu-bill-memorial-library-socia',
    'link_path' => 'https://www.facebook.com/billmemoriallibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bill-memorial-library-socia_facebook:https://www.facebook.com/billmemoriallibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-socia_instagram:https://www.instagram.com/billmemoriallibrarygroton/.
  $menu_links['menu-bill-memorial-library-socia_instagram:https://www.instagram.com/billmemoriallibrarygroton/'] = array(
    'menu_name' => 'menu-bill-memorial-library-socia',
    'link_path' => 'https://www.instagram.com/billmemoriallibrarygroton/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bill-memorial-library-socia_instagram:https://www.instagram.com/billmemoriallibrarygroton/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-bill-memorial-library-socia_twitter:https://twitter.com/billmemorial.
  $menu_links['menu-bill-memorial-library-socia_twitter:https://twitter.com/billmemorial'] = array(
    'menu_name' => 'menu-bill-memorial-library-socia',
    'link_path' => 'https://twitter.com/billmemorial',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bill-memorial-library-socia_twitter:https://twitter.com/billmemorial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-branding-icons_a-to-z-index:http://uconn.edu/azindex.php.
  $menu_links['menu-branding-icons_a-to-z-index:http://uconn.edu/azindex.php'] = array(
    'menu_name' => 'menu-branding-icons',
    'link_path' => 'http://uconn.edu/azindex.php',
    'router_path' => '',
    'link_title' => 'A to Z Index',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'sort-alphabet',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-branding-icons_a-to-z-index:http://uconn.edu/azindex.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-branding-icons_search:http://uconn.edu/search.
  $menu_links['menu-branding-icons_search:http://uconn.edu/search'] = array(
    'menu_name' => 'menu-branding-icons',
    'link_path' => 'http://uconn.edu/search',
    'router_path' => '',
    'link_title' => 'Search',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'search',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-branding-icons_search:http://uconn.edu/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bridgeport-history-center-c_about-:https://collections.ctdigitalarchive.org/about-bridgeport-history-center.
  $menu_links['menu-bridgeport-history-center-c_about-:https://collections.ctdigitalarchive.org/about-bridgeport-history-center'] = array(
    'menu_name' => 'menu-bridgeport-history-center-c',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-bridgeport-history-center',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-bridgeport-history-center-c_about-:https://collections.ctdigitalarchive.org/about-bridgeport-history-center',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-bridgeport-history-center-c_bridgeport-history-center-collections-:islandora/object/110002:Admin001.
  $menu_links['menu-bridgeport-history-center-c_bridgeport-history-center-collections-:islandora/object/110002:Admin001'] = array(
    'menu_name' => 'menu-bridgeport-history-center-c',
    'link_path' => 'islandora/object/110002:Admin001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bridgeport History Center Collections |',
    'options' => array(
      'identifier' => 'menu-bridgeport-history-center-c_bridgeport-history-center-collections-:islandora/object/110002:Admin001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-bridgeport-history-center-c_contact:http://bportlibrary.org/hc/contact/.
  $menu_links['menu-bridgeport-history-center-c_contact:http://bportlibrary.org/hc/contact/'] = array(
    'menu_name' => 'menu-bridgeport-history-center-c',
    'link_path' => 'http://bportlibrary.org/hc/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bridgeport-history-center-c_contact:http://bportlibrary.org/hc/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bridgeport-history-center-c_website-:http://bportlibrary.org/hc/.
  $menu_links['menu-bridgeport-history-center-c_website-:http://bportlibrary.org/hc/'] = array(
    'menu_name' => 'menu-bridgeport-history-center-c',
    'link_path' => 'http://bportlibrary.org/hc/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-bridgeport-history-center-c_website-:http://bportlibrary.org/hc/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_avon-free-public-library:http://hdl.handle.net/11134/150002:001.
  $menu_links['menu-browse-content_avon-free-public-library:http://hdl.handle.net/11134/150002:001'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/150002:001',
    'router_path' => '',
    'link_title' => 'Avon Free Public Library',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_avon-free-public-library:http://hdl.handle.net/11134/150002:001',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_barnum-museum:http://hdl.handle.net/11134/60002%3ABarnumMuseum.
  $menu_links['menu-browse-content_barnum-museum:http://hdl.handle.net/11134/60002%3ABarnumMuseum'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/60002%3ABarnumMuseum',
    'router_path' => '',
    'link_title' => 'Barnum Museum',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_barnum-museum:http://hdl.handle.net/11134/60002%3ABarnumMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_bibliomation:http://hdl.handle.net/11134/140002%3ABiblio.
  $menu_links['menu-browse-content_bibliomation:http://hdl.handle.net/11134/140002%3ABiblio'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/140002%3ABiblio',
    'router_path' => '',
    'link_title' => 'Bibliomation',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_bibliomation:http://hdl.handle.net/11134/140002%3ABiblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_bridgeport-history-center:http://hdl.handle.net/11134/110002%3AAdmin001.
  $menu_links['menu-browse-content_bridgeport-history-center:http://hdl.handle.net/11134/110002%3AAdmin001'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/110002%3AAdmin001',
    'router_path' => '',
    'link_title' => 'Bridgeport History Center',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_bridgeport-history-center:http://hdl.handle.net/11134/110002%3AAdmin001',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_connecticut-historical-society:http://hdl.handle.net/11134/40002%3ACHS001.
  $menu_links['menu-browse-content_connecticut-historical-society:http://hdl.handle.net/11134/40002%3ACHS001'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/40002%3ACHS001',
    'router_path' => '',
    'link_title' => 'Connecticut Historical Society',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_connecticut-historical-society:http://hdl.handle.net/11134/40002%3ACHS001',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_connecticut-state-library:http://hdl.handle.net/11134/30002:csl.
  $menu_links['menu-browse-content_connecticut-state-library:http://hdl.handle.net/11134/30002:csl'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/30002:csl',
    'router_path' => '',
    'link_title' => 'Connecticut State Library',
    'options' => array(
      'identifier' => 'menu-browse-content_connecticut-state-library:http://hdl.handle.net/11134/30002:csl',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_connecticut-state-museum-of-natural-history:http://hdl.handle.net/11134/20006:CTSMNH.
  $menu_links['menu-browse-content_connecticut-state-museum-of-natural-history:http://hdl.handle.net/11134/20006:CTSMNH'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/20006:CTSMNH',
    'router_path' => '',
    'link_title' => 'Connecticut State Museum of Natural History',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_connecticut-state-museum-of-natural-history:http://hdl.handle.net/11134/20006:CTSMNH',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_groton-public-library:http://hdl.handle.net/11134/180002:GPL001.
  $menu_links['menu-browse-content_groton-public-library:http://hdl.handle.net/11134/180002:GPL001'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/180002:GPL001',
    'router_path' => '',
    'link_title' => 'Groton Public Library',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_groton-public-library:http://hdl.handle.net/11134/180002:GPL001',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_hartford-public-library:http://hdl.handle.net/11134/50002:AdminJME02.
  $menu_links['menu-browse-content_hartford-public-library:http://hdl.handle.net/11134/50002:AdminJME02'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/50002:AdminJME02',
    'router_path' => '',
    'link_title' => 'Hartford Public Library',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_hartford-public-library:http://hdl.handle.net/11134/50002:AdminJME02',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_litchfield-historical-society:http://hdl.handle.net/11134/400002:LHS.
  $menu_links['menu-browse-content_litchfield-historical-society:http://hdl.handle.net/11134/400002:LHS'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/400002:LHS',
    'router_path' => '',
    'link_title' => 'Litchfield Historical Society',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_litchfield-historical-society:http://hdl.handle.net/11134/400002:LHS',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_newspapers-of-connecticut:http://hdl.handle.net/11134/30002:newspapers.
  $menu_links['menu-browse-content_newspapers-of-connecticut:http://hdl.handle.net/11134/30002:newspapers'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/30002:newspapers',
    'router_path' => '',
    'link_title' => 'Newspapers of Connecticut',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_newspapers-of-connecticut:http://hdl.handle.net/11134/30002:newspapers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_pt-barnum-digital-collection:http://hdl.handle.net/11134/60002:PTBarnumDigitalCollection.
  $menu_links['menu-browse-content_pt-barnum-digital-collection:http://hdl.handle.net/11134/60002:PTBarnumDigitalCollection'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/60002:PTBarnumDigitalCollection',
    'router_path' => '',
    'link_title' => 'P.T. Barnum Digital Collection',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_pt-barnum-digital-collection:http://hdl.handle.net/11134/60002:PTBarnumDigitalCollection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_remembering-wwi:http://hdl.handle.net/11134/30002:RWWI.
  $menu_links['menu-browse-content_remembering-wwi:http://hdl.handle.net/11134/30002:RWWI'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/30002:RWWI',
    'router_path' => '',
    'link_title' => 'Remembering WWI',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_remembering-wwi:http://hdl.handle.net/11134/30002:RWWI',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_university-of-connecticut:http://hdl.handle.net/11134/20002:UniversityofConnecticut.
  $menu_links['menu-browse-content_university-of-connecticut:http://hdl.handle.net/11134/20002:UniversityofConnecticut'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/20002:UniversityofConnecticut',
    'router_path' => '',
    'link_title' => 'University of Connecticut',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-content_university-of-connecticut:http://hdl.handle.net/11134/20002:UniversityofConnecticut',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-content_view-all-collections:http://hdl.handle.net/11134/islandora:root.
  $menu_links['menu-browse-content_view-all-collections:http://hdl.handle.net/11134/islandora:root'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'http://hdl.handle.net/11134/islandora:root',
    'router_path' => '',
    'link_title' => 'View All Collections',
    'options' => array(
      'identifier' => 'menu-browse-content_view-all-collections:http://hdl.handle.net/11134/islandora:root',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-contextual-menu_about-:https://collections.ctdigitalarchive.org/about-cahsl.
  $menu_links['menu-cahsl-contextual-menu_about-:https://collections.ctdigitalarchive.org/about-cahsl'] = array(
    'menu_name' => 'menu-cahsl-contextual-menu',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-cahsl',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-cahsl-contextual-menu_about-:https://collections.ctdigitalarchive.org/about-cahsl',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-contextual-menu_cahsl-collections-:islandora/object/460002:CAHSL.
  $menu_links['menu-cahsl-contextual-menu_cahsl-collections-:islandora/object/460002:CAHSL'] = array(
    'menu_name' => 'menu-cahsl-contextual-menu',
    'link_path' => 'islandora/object/460002:CAHSL',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CAHSL Collections |',
    'options' => array(
      'identifier' => 'menu-cahsl-contextual-menu_cahsl-collections-:islandora/object/460002:CAHSL',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-contextual-menu_contact:mailto:cahslinfo@gmail.com .
  $menu_links['menu-cahsl-contextual-menu_contact:mailto:cahslinfo@gmail.com '] = array(
    'menu_name' => 'menu-cahsl-contextual-menu',
    'link_path' => 'mailto:cahslinfo@gmail.com ',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cahsl-contextual-menu_contact:mailto:cahslinfo@gmail.com ',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-contextual-menu_website-:https://nahsl.libguides.com/cahsl.
  $menu_links['menu-cahsl-contextual-menu_website-:https://nahsl.libguides.com/cahsl'] = array(
    'menu_name' => 'menu-cahsl-contextual-menu',
    'link_path' => 'https://nahsl.libguides.com/cahsl',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'identifier' => 'menu-cahsl-contextual-menu_website-:https://nahsl.libguides.com/cahsl',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-social-media-menu_facebook:https://www.facebook.com/cahslct.
  $menu_links['menu-cahsl-social-media-menu_facebook:https://www.facebook.com/cahslct'] = array(
    'menu_name' => 'menu-cahsl-social-media-menu',
    'link_path' => 'https://www.facebook.com/cahslct',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cahsl-social-media-menu_facebook:https://www.facebook.com/cahslct',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-cahsl-social-media-menu_linkedin:https://www.linkedin.com/groups/4204075/profile.
  $menu_links['menu-cahsl-social-media-menu_linkedin:https://www.linkedin.com/groups/4204075/profile'] = array(
    'menu_name' => 'menu-cahsl-social-media-menu',
    'link_path' => 'https://www.linkedin.com/groups/4204075/profile',
    'router_path' => '',
    'link_title' => 'Linkedin',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'linkedin-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-cahsl-social-media-menu_linkedin:https://www.linkedin.com/groups/4204075/profile',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-case-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-case-memorial-library.
  $menu_links['menu-case-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-case-memorial-library'] = array(
    'menu_name' => 'menu-case-memorial-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-case-memorial-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-case-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-case-memorial-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-case-memorial-library-conte_case-memorial-library-collections--:islandora/object/320002:AdminJME.
  $menu_links['menu-case-memorial-library-conte_case-memorial-library-collections--:islandora/object/320002:AdminJME'] = array(
    'menu_name' => 'menu-case-memorial-library-conte',
    'link_path' => 'islandora/object/320002:AdminJME',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Case Memorial Library Collections | ',
    'options' => array(
      'identifier' => 'menu-case-memorial-library-conte_case-memorial-library-collections--:islandora/object/320002:AdminJME',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-case-memorial-library-conte_contact:http://orange.lioninc.org/contact/.
  $menu_links['menu-case-memorial-library-conte_contact:http://orange.lioninc.org/contact/'] = array(
    'menu_name' => 'menu-case-memorial-library-conte',
    'link_path' => 'http://orange.lioninc.org/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-case-memorial-library-conte_contact:http://orange.lioninc.org/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-case-memorial-library-conte_website-:http://orange.lioninc.org/.
  $menu_links['menu-case-memorial-library-conte_website-:http://orange.lioninc.org/'] = array(
    'menu_name' => 'menu-case-memorial-library-conte',
    'link_path' => 'http://orange.lioninc.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-case-memorial-library-conte_website-:http://orange.lioninc.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: menu-case-memorial-library-socia_facebook:https://www.facebook.com/Case-Memorial-Library-154609781264610/.
  $menu_links['menu-case-memorial-library-socia_facebook:https://www.facebook.com/Case-Memorial-Library-154609781264610/'] = array(
    'menu_name' => 'menu-case-memorial-library-socia',
    'link_path' => 'https://www.facebook.com/Case-Memorial-Library-154609781264610/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-case-memorial-library-socia_facebook:https://www.facebook.com/Case-Memorial-Library-154609781264610/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-contextual_about-:https://collections.ctdigitalarchive.org/about-ch-booth-library.
  $menu_links['menu-ch-booth-library-contextual_about-:https://collections.ctdigitalarchive.org/about-ch-booth-library'] = array(
    'menu_name' => 'menu-ch-booth-library-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-ch-booth-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-ch-booth-library-contextual_about-:https://collections.ctdigitalarchive.org/about-ch-booth-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-contextual_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-ch-booth-library-contextual_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-ch-booth-library-contextual',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-contextual_bibliomation-collections-:islandora/object/140002:Biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-contextual_ch-booth-collections-:islandora/object/140008:CHBooth.
  $menu_links['menu-ch-booth-library-contextual_ch-booth-collections-:islandora/object/140008:CHBooth'] = array(
    'menu_name' => 'menu-ch-booth-library-contextual',
    'link_path' => 'islandora/object/140008:CHBooth',
    'router_path' => 'islandora/object/%',
    'link_title' => 'C.H. Booth Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-contextual_ch-booth-collections-:islandora/object/140008:CHBooth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-contextual_website:https://www.chboothlibrary.org/.
  $menu_links['menu-ch-booth-library-contextual_website:https://www.chboothlibrary.org/'] = array(
    'menu_name' => 'menu-ch-booth-library-contextual',
    'link_path' => 'https://www.chboothlibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-contextual_website:https://www.chboothlibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-social-med_facebook:https://www.facebook.com/chboothlibrary/.
  $menu_links['menu-ch-booth-library-social-med_facebook:https://www.facebook.com/chboothlibrary/'] = array(
    'menu_name' => 'menu-ch-booth-library-social-med',
    'link_path' => 'https://www.facebook.com/chboothlibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-social-med_facebook:https://www.facebook.com/chboothlibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-social-med_instagram:https://www.instagram.com/chboothlibrary/.
  $menu_links['menu-ch-booth-library-social-med_instagram:https://www.instagram.com/chboothlibrary/'] = array(
    'menu_name' => 'menu-ch-booth-library-social-med',
    'link_path' => 'https://www.instagram.com/chboothlibrary/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-social-med_instagram:https://www.instagram.com/chboothlibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-ch-booth-library-social-med_twitter:https://twitter.com/CHBoothLibrary.
  $menu_links['menu-ch-booth-library-social-med_twitter:https://twitter.com/CHBoothLibrary'] = array(
    'menu_name' => 'menu-ch-booth-library-social-med',
    'link_path' => 'https://twitter.com/CHBoothLibrary',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ch-booth-library-social-med_twitter:https://twitter.com/CHBoothLibrary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-chi-contextual-menu_about--:https://cthistoryillustrated.org/about/.
  $menu_links['menu-chi-contextual-menu_about--:https://cthistoryillustrated.org/about/'] = array(
    'menu_name' => 'menu-chi-contextual-menu',
    'link_path' => 'https://cthistoryillustrated.org/about/',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-chi-contextual-menu_about--:https://cthistoryillustrated.org/about/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-chi-contextual-menu_contact:http://cthistoryillustrated.org/contact-us/.
  $menu_links['menu-chi-contextual-menu_contact:http://cthistoryillustrated.org/contact-us/'] = array(
    'menu_name' => 'menu-chi-contextual-menu',
    'link_path' => 'http://cthistoryillustrated.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chi-contextual-menu_contact:http://cthistoryillustrated.org/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-chi-contextual-menu_website-:http://cthistoryillustrated.org/.
  $menu_links['menu-chi-contextual-menu_website-:http://cthistoryillustrated.org/'] = array(
    'menu_name' => 'menu-chi-contextual-menu',
    'link_path' => 'http://cthistoryillustrated.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chi-contextual-menu_website-:http://cthistoryillustrated.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-chs.
  $menu_links['menu-chs-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-chs'] = array(
    'menu_name' => 'menu-chs-contextual-menu',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-chs',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-chs-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-chs',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-contextual-menu_chs-collections-:islandora/object/40002:CHS001.
  $menu_links['menu-chs-contextual-menu_chs-collections-:islandora/object/40002:CHS001'] = array(
    'menu_name' => 'menu-chs-contextual-menu',
    'link_path' => 'islandora/object/40002:CHS001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CHS Collections |',
    'options' => array(
      'identifier' => 'menu-chs-contextual-menu_chs-collections-:islandora/object/40002:CHS001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-contextual-menu_website:https://chs.org/.
  $menu_links['menu-chs-contextual-menu_website:https://chs.org/'] = array(
    'menu_name' => 'menu-chs-contextual-menu',
    'link_path' => 'https://chs.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-contextual-menu_website:https://chs.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_facebook:https://www.facebook.com/CTHistoricalSociety.
  $menu_links['menu-chs-social-media-menu_facebook:https://www.facebook.com/CTHistoricalSociety'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://www.facebook.com/CTHistoricalSociety',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_facebook:https://www.facebook.com/CTHistoricalSociety',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_flickr:https://www.flickr.com/photos/cthistoricalsociety/.
  $menu_links['menu-chs-social-media-menu_flickr:https://www.flickr.com/photos/cthistoricalsociety/'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://www.flickr.com/photos/cthistoricalsociety/',
    'router_path' => '',
    'link_title' => 'Flickr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'flickr',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_flickr:https://www.flickr.com/photos/cthistoricalsociety/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_google-plus:https://plus.google.com/+ConnecticutHistoricalSocietyMuseumandLibrary.
  $menu_links['menu-chs-social-media-menu_google-plus:https://plus.google.com/+ConnecticutHistoricalSocietyMuseumandLibrary'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://plus.google.com/+ConnecticutHistoricalSocietyMuseumandLibrary',
    'router_path' => '',
    'link_title' => 'Google Plus',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'gplus-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_google-plus:https://plus.google.com/+ConnecticutHistoricalSocietyMuseumandLibrary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_instagram:https://www.instagram.com/cthistorical/.
  $menu_links['menu-chs-social-media-menu_instagram:https://www.instagram.com/cthistorical/'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://www.instagram.com/cthistorical/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_instagram:https://www.instagram.com/cthistorical/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_twitter:https://twitter.com/CTHistorical.
  $menu_links['menu-chs-social-media-menu_twitter:https://twitter.com/CTHistorical'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://twitter.com/CTHistorical',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_twitter:https://twitter.com/CTHistorical',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-chs-social-media-menu_youtube:https://www.youtube.com/user/CTHistorialSociety/videos?view=1.
  $menu_links['menu-chs-social-media-menu_youtube:https://www.youtube.com/user/CTHistorialSociety/videos?view=1'] = array(
    'menu_name' => 'menu-chs-social-media-menu',
    'link_path' => 'https://www.youtube.com/user/CTHistorialSociety/videos?view=1',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-chs-social-media-menu_youtube:https://www.youtube.com/user/CTHistorialSociety/videos?view=1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-college-context_about-:https://collections.ctdigitalarchive.org/about-connecticut-college.
  $menu_links['menu-connecticut-college-context_about-:https://collections.ctdigitalarchive.org/about-connecticut-college'] = array(
    'menu_name' => 'menu-connecticut-college-context',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-connecticut-college',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-connecticut-college-context_about-:https://collections.ctdigitalarchive.org/about-connecticut-college',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-college-context_connecticut-college-collections-:islandora/object/490002:ConnCollege.
  $menu_links['menu-connecticut-college-context_connecticut-college-collections-:islandora/object/490002:ConnCollege'] = array(
    'menu_name' => 'menu-connecticut-college-context',
    'link_path' => 'islandora/object/490002:ConnCollege',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Connecticut College Collections |',
    'options' => array(
      'identifier' => 'menu-connecticut-college-context_connecticut-college-collections-:islandora/object/490002:ConnCollege',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-college-context_wesbite:https://www.conncoll.edu/information-services/libraries/libraries-locations/linda-lear-center-for-special-collections-and-arc/.
  $menu_links['menu-connecticut-college-context_wesbite:https://www.conncoll.edu/information-services/libraries/libraries-locations/linda-lear-center-for-special-collections-and-arc/'] = array(
    'menu_name' => 'menu-connecticut-college-context',
    'link_path' => 'https://www.conncoll.edu/information-services/libraries/libraries-locations/linda-lear-center-for-special-collections-and-arc/',
    'router_path' => '',
    'link_title' => 'Wesbite',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-college-context_wesbite:https://www.conncoll.edu/information-services/libraries/libraries-locations/linda-lear-center-for-special-collections-and-arc/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-college-social-_facebook:https://www.facebook.com/LindaLearCenter/.
  $menu_links['menu-connecticut-college-social-_facebook:https://www.facebook.com/LindaLearCenter/'] = array(
    'menu_name' => 'menu-connecticut-college-social-',
    'link_path' => 'https://www.facebook.com/LindaLearCenter/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-college-social-_facebook:https://www.facebook.com/LindaLearCenter/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-college-social-_tumblr:http://lindalearcenter.tumblr.com/.
  $menu_links['menu-connecticut-college-social-_tumblr:http://lindalearcenter.tumblr.com/'] = array(
    'menu_name' => 'menu-connecticut-college-social-',
    'link_path' => 'http://lindalearcenter.tumblr.com/',
    'router_path' => '',
    'link_title' => 'Tumblr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'tumblr-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-college-social-_tumblr:http://lindalearcenter.tumblr.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-landmarks-conte_about--:https://collections.ctdigitalarchive.org/about-connecticut-landmarks.
  $menu_links['menu-connecticut-landmarks-conte_about--:https://collections.ctdigitalarchive.org/about-connecticut-landmarks'] = array(
    'menu_name' => 'menu-connecticut-landmarks-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-connecticut-landmarks',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-connecticut-landmarks-conte_about--:https://collections.ctdigitalarchive.org/about-connecticut-landmarks',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-landmarks-conte_connecticut-landmarks-collections-:islandora/object/370002:CTLandmarksJME.
  $menu_links['menu-connecticut-landmarks-conte_connecticut-landmarks-collections-:islandora/object/370002:CTLandmarksJME'] = array(
    'menu_name' => 'menu-connecticut-landmarks-conte',
    'link_path' => 'islandora/object/370002:CTLandmarksJME',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Connecticut Landmarks Collections |',
    'options' => array(
      'identifier' => 'menu-connecticut-landmarks-conte_connecticut-landmarks-collections-:islandora/object/370002:CTLandmarksJME',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-landmarks-conte_website:https://www.ctlandmarks.org/.
  $menu_links['menu-connecticut-landmarks-conte_website:https://www.ctlandmarks.org/'] = array(
    'menu_name' => 'menu-connecticut-landmarks-conte',
    'link_path' => 'https://www.ctlandmarks.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-landmarks-conte_website:https://www.ctlandmarks.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-landmarks-socia_facebook:https://www.facebook.com/ConnecticutLandmarks/.
  $menu_links['menu-connecticut-landmarks-socia_facebook:https://www.facebook.com/ConnecticutLandmarks/'] = array(
    'menu_name' => 'menu-connecticut-landmarks-socia',
    'link_path' => 'https://www.facebook.com/ConnecticutLandmarks/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-landmarks-socia_facebook:https://www.facebook.com/ConnecticutLandmarks/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-landmarks-socia_twitter:https://twitter.com/ctlandmarks?lang=en.
  $menu_links['menu-connecticut-landmarks-socia_twitter:https://twitter.com/ctlandmarks?lang=en'] = array(
    'menu_name' => 'menu-connecticut-landmarks-socia',
    'link_path' => 'https://twitter.com/ctlandmarks?lang=en',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-landmarks-socia_twitter:https://twitter.com/ctlandmarks?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-c_about-:https://collections.ctdigitalarchive.org/about-csl.
  $menu_links['menu-connecticut-state-library-c_about-:https://collections.ctdigitalarchive.org/about-csl'] = array(
    'menu_name' => 'menu-connecticut-state-library-c',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-csl',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-connecticut-state-library-c_about-:https://collections.ctdigitalarchive.org/about-csl',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-c_contact-:https://ctstatelibrary.org/contact-us/.
  $menu_links['menu-connecticut-state-library-c_contact-:https://ctstatelibrary.org/contact-us/'] = array(
    'menu_name' => 'menu-connecticut-state-library-c',
    'link_path' => 'https://ctstatelibrary.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-c_contact-:https://ctstatelibrary.org/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-c_csl-digital-collections-:islandora/object/30002:csl.
  $menu_links['menu-connecticut-state-library-c_csl-digital-collections-:islandora/object/30002:csl'] = array(
    'menu_name' => 'menu-connecticut-state-library-c',
    'link_path' => 'islandora/object/30002:csl',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CSL Digital Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-c_csl-digital-collections-:islandora/object/30002:csl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-c_website:https://ctstatelibrary.org/.
  $menu_links['menu-connecticut-state-library-c_website:https://ctstatelibrary.org/'] = array(
    'menu_name' => 'menu-connecticut-state-library-c',
    'link_path' => 'https://ctstatelibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-c_website:https://ctstatelibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-s_facebook:https://www.facebook.com/CTStateLibrary/.
  $menu_links['menu-connecticut-state-library-s_facebook:https://www.facebook.com/CTStateLibrary/'] = array(
    'menu_name' => 'menu-connecticut-state-library-s',
    'link_path' => 'https://www.facebook.com/CTStateLibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-s_facebook:https://www.facebook.com/CTStateLibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-s_flickr:https://www.flickr.com/photos/ctarchives.
  $menu_links['menu-connecticut-state-library-s_flickr:https://www.flickr.com/photos/ctarchives'] = array(
    'menu_name' => 'menu-connecticut-state-library-s',
    'link_path' => 'https://www.flickr.com/photos/ctarchives',
    'router_path' => '',
    'link_title' => 'Flickr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'flickr',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-s_flickr:https://www.flickr.com/photos/ctarchives',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-s_instagram:https://www.instagram.com/explore/locations/5177772/connecticut-state-library/.
  $menu_links['menu-connecticut-state-library-s_instagram:https://www.instagram.com/explore/locations/5177772/connecticut-state-library/'] = array(
    'menu_name' => 'menu-connecticut-state-library-s',
    'link_path' => 'https://www.instagram.com/explore/locations/5177772/connecticut-state-library/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-s_instagram:https://www.instagram.com/explore/locations/5177772/connecticut-state-library/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-library-s_twitter:https://twitter.com/LibraryofCt.
  $menu_links['menu-connecticut-state-library-s_twitter:https://twitter.com/LibraryofCt'] = array(
    'menu_name' => 'menu-connecticut-state-library-s',
    'link_path' => 'https://twitter.com/LibraryofCt',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-library-s_twitter:https://twitter.com/LibraryofCt',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-connecticut-state-museum-of_facebook:https://www.facebook.com/CSMNH/.
  $menu_links['menu-connecticut-state-museum-of_facebook:https://www.facebook.com/CSMNH/'] = array(
    'menu_name' => 'menu-connecticut-state-museum-of',
    'link_path' => 'https://www.facebook.com/CSMNH/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-connecticut-state-museum-of_facebook:https://www.facebook.com/CSMNH/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-csmnh-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-connecticut-state-museum-of-natural-history.
  $menu_links['menu-csmnh-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-connecticut-state-museum-of-natural-history'] = array(
    'menu_name' => 'menu-csmnh-contextual-menu',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-connecticut-state-museum-of-natural-history',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-csmnh-contextual-menu_about--:https://collections.ctdigitalarchive.org/about-connecticut-state-museum-of-natural-history',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-csmnh-contextual-menu_csmnh-collections-:islandora/object/20006:CTSMNH.
  $menu_links['menu-csmnh-contextual-menu_csmnh-collections-:islandora/object/20006:CTSMNH'] = array(
    'menu_name' => 'menu-csmnh-contextual-menu',
    'link_path' => 'islandora/object/20006:CTSMNH',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CSMNH Collections |',
    'options' => array(
      'identifier' => 'menu-csmnh-contextual-menu_csmnh-collections-:islandora/object/20006:CTSMNH',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-csmnh-contextual-menu_website:http://www.cac.uconn.edu/mnhhome.html.
  $menu_links['menu-csmnh-contextual-menu_website:http://www.cac.uconn.edu/mnhhome.html'] = array(
    'menu_name' => 'menu-csmnh-contextual-menu',
    'link_path' => 'http://www.cac.uconn.edu/mnhhome.html',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-csmnh-contextual-menu_website:http://www.cac.uconn.edu/mnhhome.html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-ctda-contextual-menu_about-:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive.
  $menu_links['menu-ctda-contextual-menu_about-:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ctda-contextual-menu_about-:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-ctda-contextual-menu_community-members--:https://confluence.uits.uconn.edu/confluence/display/CTDA/Community+Members.
  $menu_links['menu-ctda-contextual-menu_community-members--:https://confluence.uits.uconn.edu/confluence/display/CTDA/Community+Members'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/Community+Members',
    'router_path' => '',
    'link_title' => 'Community Members | ',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ctda-contextual-menu_community-members--:https://confluence.uits.uconn.edu/confluence/display/CTDA/Community+Members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-ctda-contextual-menu_ctda-technology-:https://confluence.uits.uconn.edu/confluence/display/CTDA/CTDA+Technology.
  $menu_links['menu-ctda-contextual-menu_ctda-technology-:https://confluence.uits.uconn.edu/confluence/display/CTDA/CTDA+Technology'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/CTDA+Technology',
    'router_path' => '',
    'link_title' => 'CTDA Technology |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ctda-contextual-menu_ctda-technology-:https://confluence.uits.uconn.edu/confluence/display/CTDA/CTDA+Technology',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-ctda-contextual-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA.
  $menu_links['menu-ctda-contextual-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA',
    'router_path' => '',
    'link_title' => 'Join',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ctda-contextual-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-ctda-contextual-menu_people-of-ctda-:https://confluence.uits.uconn.edu/confluence/display/CTDA/People+of+CTDA.
  $menu_links['menu-ctda-contextual-menu_people-of-ctda-:https://confluence.uits.uconn.edu/confluence/display/CTDA/People+of+CTDA'] = array(
    'menu_name' => 'menu-ctda-contextual-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/People+of+CTDA',
    'router_path' => '',
    'link_title' => 'People of CTDA |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ctda-contextual-menu_people-of-ctda-:https://confluence.uits.uconn.edu/confluence/display/CTDA/People+of+CTDA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-c_about-:https://collections.ctdigitalarchive.org/about-deep-river-public-library.
  $menu_links['menu-deep-river-public-library-c_about-:https://collections.ctdigitalarchive.org/about-deep-river-public-library'] = array(
    'menu_name' => 'menu-deep-river-public-library-c',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-deep-river-public-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-deep-river-public-library-c_about-:https://collections.ctdigitalarchive.org/about-deep-river-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-c_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-deep-river-public-library-c_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-deep-river-public-library-c',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-deep-river-public-library-c_bibliomation-collections-:islandora/object/140002:Biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-c_contact:mailto:deepriverpubliclibrary@gmail.com.
  $menu_links['menu-deep-river-public-library-c_contact:mailto:deepriverpubliclibrary@gmail.com'] = array(
    'menu_name' => 'menu-deep-river-public-library-c',
    'link_path' => 'mailto:deepriverpubliclibrary@gmail.com',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-deep-river-public-library-c_contact:mailto:deepriverpubliclibrary@gmail.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-c_deep-river-public-library-collections-:islandora/object/140066:DeepRiver.
  $menu_links['menu-deep-river-public-library-c_deep-river-public-library-collections-:islandora/object/140066:DeepRiver'] = array(
    'menu_name' => 'menu-deep-river-public-library-c',
    'link_path' => 'islandora/object/140066:DeepRiver',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Deep River Public Library Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-deep-river-public-library-c_deep-river-public-library-collections-:islandora/object/140066:DeepRiver',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-c_website-:http://deepriverlibrary.accountsupport.com/.
  $menu_links['menu-deep-river-public-library-c_website-:http://deepriverlibrary.accountsupport.com/'] = array(
    'menu_name' => 'menu-deep-river-public-library-c',
    'link_path' => 'http://deepriverlibrary.accountsupport.com/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-deep-river-public-library-c_website-:http://deepriverlibrary.accountsupport.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-deep-river-public-library-s_facebook:https://www.facebook.com/Deep-River-Public-Library-312574775774/.
  $menu_links['menu-deep-river-public-library-s_facebook:https://www.facebook.com/Deep-River-Public-Library-312574775774/'] = array(
    'menu_name' => 'menu-deep-river-public-library-s',
    'link_path' => 'https://www.facebook.com/Deep-River-Public-Library-312574775774/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-deep-river-public-library-s_facebook:https://www.facebook.com/Deep-River-Public-Library-312574775774/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-default-institution-context_ctda-collections:islandora/object/islandora:root.
  $menu_links['menu-default-institution-context_ctda-collections:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-default-institution-context',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CTDA Collections',
    'options' => array(
      'identifier' => 'menu-default-institution-context_ctda-collections:islandora/object/islandora:root',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-contex_about-:node/88.
  $menu_links['menu-derby-public-library-contex_about-:node/88'] = array(
    'menu_name' => 'menu-derby-public-library-contex',
    'link_path' => 'node/88',
    'router_path' => 'node/%',
    'link_title' => 'About |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-contex_about-:node/88',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-contex_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-derby-public-library-contex_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-derby-public-library-contex',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-contex_bibliomation-collections-:islandora/object/140002:Biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-contex_derby-public-library-collection-:islandora/object/140011:Derby.
  $menu_links['menu-derby-public-library-contex_derby-public-library-collection-:islandora/object/140011:Derby'] = array(
    'menu_name' => 'menu-derby-public-library-contex',
    'link_path' => 'islandora/object/140011:Derby',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Derby Public Library Collection |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-contex_derby-public-library-collection-:islandora/object/140011:Derby',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-contex_website:http://derbypubliclibrary.org/.
  $menu_links['menu-derby-public-library-contex_website:http://derbypubliclibrary.org/'] = array(
    'menu_name' => 'menu-derby-public-library-contex',
    'link_path' => 'http://derbypubliclibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-contex_website:http://derbypubliclibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-social_facebook:https://www.facebook.com/DerbyPublicLibrary?ref=hl.
  $menu_links['menu-derby-public-library-social_facebook:https://www.facebook.com/DerbyPublicLibrary?ref=hl'] = array(
    'menu_name' => 'menu-derby-public-library-social',
    'link_path' => 'https://www.facebook.com/DerbyPublicLibrary?ref=hl',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-social_facebook:https://www.facebook.com/DerbyPublicLibrary?ref=hl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-derby-public-library-social_twitter:https://twitter.com/DerbyPublicLib?lang=en.
  $menu_links['menu-derby-public-library-social_twitter:https://twitter.com/DerbyPublicLib?lang=en'] = array(
    'menu_name' => 'menu-derby-public-library-social',
    'link_path' => 'https://twitter.com/DerbyPublicLib?lang=en',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-derby-public-library-social_twitter:https://twitter.com/DerbyPublicLib?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-digital-collection-social-m_facebook:https://www.facebook.com/.
  $menu_links['menu-digital-collection-social-m_facebook:https://www.facebook.com/'] = array(
    'menu_name' => 'menu-digital-collection-social-m',
    'link_path' => 'https://www.facebook.com/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-digital-collection-social-m_facebook:https://www.facebook.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-digital-collection-social-m_pinterest:https://www.pinterest.ca/.
  $menu_links['menu-digital-collection-social-m_pinterest:https://www.pinterest.ca/'] = array(
    'menu_name' => 'menu-digital-collection-social-m',
    'link_path' => 'https://www.pinterest.ca/',
    'router_path' => '',
    'link_title' => 'Pinterest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-digital-collection-social-m_pinterest:https://www.pinterest.ca/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-digital-collection-social-m_twitter:https://twitter.com.
  $menu_links['menu-digital-collection-social-m_twitter:https://twitter.com'] = array(
    'menu_name' => 'menu-digital-collection-social-m',
    'link_path' => 'https://twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-digital-collection-social-m_twitter:https://twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-enfield-public-library-cont_about-:https://collections.ctdigitalarchive.org/about-enfield-public-library.
  $menu_links['menu-enfield-public-library-cont_about-:https://collections.ctdigitalarchive.org/about-enfield-public-library'] = array(
    'menu_name' => 'menu-enfield-public-library-cont',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-enfield-public-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-enfield-public-library-cont_about-:https://collections.ctdigitalarchive.org/about-enfield-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-enfield-public-library-cont_enfield-public-library-collections-:islandora/object/430002:EnfieldPublic.
  $menu_links['menu-enfield-public-library-cont_enfield-public-library-collections-:islandora/object/430002:EnfieldPublic'] = array(
    'menu_name' => 'menu-enfield-public-library-cont',
    'link_path' => 'islandora/object/430002:EnfieldPublic',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Enfield Public Library Collections |',
    'options' => array(
      'identifier' => 'menu-enfield-public-library-cont_enfield-public-library-collections-:islandora/object/430002:EnfieldPublic',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-enfield-public-library-cont_website:https://www.enfieldpubliclibrary.org/.
  $menu_links['menu-enfield-public-library-cont_website:https://www.enfieldpubliclibrary.org/'] = array(
    'menu_name' => 'menu-enfield-public-library-cont',
    'link_path' => 'https://www.enfieldpubliclibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-enfield-public-library-cont_website:https://www.enfieldpubliclibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-enfield-public-library-soci_facebook:https://www.facebook.com/enfieldpubliclibrary.
  $menu_links['menu-enfield-public-library-soci_facebook:https://www.facebook.com/enfieldpubliclibrary'] = array(
    'menu_name' => 'menu-enfield-public-library-soci',
    'link_path' => 'https://www.facebook.com/enfieldpubliclibrary',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-enfield-public-library-soci_facebook:https://www.facebook.com/enfieldpubliclibrary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-the-fairfield-museum-and-history-center.
  $menu_links['menu-fairfield-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-the-fairfield-museum-and-history-center'] = array(
    'menu_name' => 'menu-fairfield-museum-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-the-fairfield-museum-and-history-center',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-fairfield-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-the-fairfield-museum-and-history-center',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-contextual_contact:https://www.fairfieldhistory.org/contact-us/.
  $menu_links['menu-fairfield-museum-contextual_contact:https://www.fairfieldhistory.org/contact-us/'] = array(
    'menu_name' => 'menu-fairfield-museum-contextual',
    'link_path' => 'https://www.fairfieldhistory.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-fairfield-museum-contextual_contact:https://www.fairfieldhistory.org/contact-us/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-contextual_fairfield-museum-and-history-center-collections-:https://collections.ctdigitalarchive.org/islandora/object/80002:001.
  $menu_links['menu-fairfield-museum-contextual_fairfield-museum-and-history-center-collections-:https://collections.ctdigitalarchive.org/islandora/object/80002:001'] = array(
    'menu_name' => 'menu-fairfield-museum-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/islandora/object/80002:001',
    'router_path' => '',
    'link_title' => 'Fairfield Museum and History Center Collections |',
    'options' => array(
      'identifier' => 'menu-fairfield-museum-contextual_fairfield-museum-and-history-center-collections-:https://collections.ctdigitalarchive.org/islandora/object/80002:001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-contextual_website-:https://www.fairfieldhistory.org/.
  $menu_links['menu-fairfield-museum-contextual_website-:https://www.fairfieldhistory.org/'] = array(
    'menu_name' => 'menu-fairfield-museum-contextual',
    'link_path' => 'https://www.fairfieldhistory.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-fairfield-museum-contextual_website-:https://www.fairfieldhistory.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-social-med_facebook:https://www.facebook.com/FairfieldMuseum.
  $menu_links['menu-fairfield-museum-social-med_facebook:https://www.facebook.com/FairfieldMuseum'] = array(
    'menu_name' => 'menu-fairfield-museum-social-med',
    'link_path' => 'https://www.facebook.com/FairfieldMuseum',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-fairfield-museum-social-med_facebook:https://www.facebook.com/FairfieldMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-fairfield-museum-social-med_twitter:https://twitter.com/fairfieldmuseum.
  $menu_links['menu-fairfield-museum-social-med_twitter:https://twitter.com/fairfieldmuseum'] = array(
    'menu_name' => 'menu-fairfield-museum-social-med',
    'link_path' => 'https://twitter.com/fairfieldmuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-fairfield-museum-social-med_twitter:https://twitter.com/fairfieldmuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-co_about--:https://collections.ctdigitalarchive.org/about-florence-griswold-museum.
  $menu_links['menu-florence-griswold-museum-co_about--:https://collections.ctdigitalarchive.org/about-florence-griswold-museum'] = array(
    'menu_name' => 'menu-florence-griswold-museum-co',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-florence-griswold-museum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-florence-griswold-museum-co_about--:https://collections.ctdigitalarchive.org/about-florence-griswold-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-co_contact:http://florencegriswoldmuseum.org/contact/.
  $menu_links['menu-florence-griswold-museum-co_contact:http://florencegriswoldmuseum.org/contact/'] = array(
    'menu_name' => 'menu-florence-griswold-museum-co',
    'link_path' => 'http://florencegriswoldmuseum.org/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-co_contact:http://florencegriswoldmuseum.org/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-co_florence-griswold-museum-collections-:islandora/object/270002:FGM001.
  $menu_links['menu-florence-griswold-museum-co_florence-griswold-museum-collections-:islandora/object/270002:FGM001'] = array(
    'menu_name' => 'menu-florence-griswold-museum-co',
    'link_path' => 'islandora/object/270002:FGM001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Florence Griswold Museum Collections |',
    'options' => array(
      'identifier' => 'menu-florence-griswold-museum-co_florence-griswold-museum-collections-:islandora/object/270002:FGM001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-co_website-:http://florencegriswoldmuseum.org/.
  $menu_links['menu-florence-griswold-museum-co_website-:http://florencegriswoldmuseum.org/'] = array(
    'menu_name' => 'menu-florence-griswold-museum-co',
    'link_path' => 'http://florencegriswoldmuseum.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-co_website-:http://florencegriswoldmuseum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-so_facebook:https://www.facebook.com/florencegriswoldmuseum.
  $menu_links['menu-florence-griswold-museum-so_facebook:https://www.facebook.com/florencegriswoldmuseum'] = array(
    'menu_name' => 'menu-florence-griswold-museum-so',
    'link_path' => 'https://www.facebook.com/florencegriswoldmuseum',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-so_facebook:https://www.facebook.com/florencegriswoldmuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-so_instagram:https://www.instagram.com/florencegriswoldmuseum/.
  $menu_links['menu-florence-griswold-museum-so_instagram:https://www.instagram.com/florencegriswoldmuseum/'] = array(
    'menu_name' => 'menu-florence-griswold-museum-so',
    'link_path' => 'https://www.instagram.com/florencegriswoldmuseum/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-so_instagram:https://www.instagram.com/florencegriswoldmuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-so_twitter:https://twitter.com/griswoldmuseum.
  $menu_links['menu-florence-griswold-museum-so_twitter:https://twitter.com/griswoldmuseum'] = array(
    'menu_name' => 'menu-florence-griswold-museum-so',
    'link_path' => 'https://twitter.com/griswoldmuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-so_twitter:https://twitter.com/griswoldmuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-florence-griswold-museum-so_youtube:https://www.youtube.com/user/GriswoldMuseum.
  $menu_links['menu-florence-griswold-museum-so_youtube:https://www.youtube.com/user/GriswoldMuseum'] = array(
    'menu_name' => 'menu-florence-griswold-museum-so',
    'link_path' => 'https://www.youtube.com/user/GriswoldMuseum',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-florence-griswold-museum-so_youtube:https://www.youtube.com/user/GriswoldMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu.
  $menu_links['menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu'] = array(
    'menu_name' => 'menu-footer-lower-menu',
    'link_path' => 'http://uconn.edu',
    'router_path' => '',
    'link_title' => '© University of Connecticut',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/.
  $menu_links['menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/'] = array(
    'menu_name' => 'menu-footer-lower-menu',
    'link_path' => 'http://uconn.edu/disclaimers-privacy-copyright/',
    'router_path' => '',
    'link_title' => 'Disclaimers, Privacy & Copyright',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive.
  $menu_links['menu-footer-menu_about:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'menu-footer-menu_about:https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => 'About the CTDA',
        'target' => '_blank',
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact-us:mailto:ctda@uconn.edu.
  $menu_links['menu-footer-menu_contact-us:mailto:ctda@uconn.edu'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'mailto:ctda@uconn.edu',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'menu-footer-menu_contact-us:mailto:ctda@uconn.edu',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => 'Contact the CTDA',
        'target' => '_blank',
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA.
  $menu_links['menu-footer-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA',
    'router_path' => '',
    'link_title' => 'Join',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_join:https://confluence.uits.uconn.edu/confluence/display/CTDA/Join+the+CTDA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
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
      'alter' => TRUE,
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
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-groton-public-library-conte_about--:https://collections.ctdigitalarchive.org/about-groton-public-library.
  $menu_links['menu-groton-public-library-conte_about--:https://collections.ctdigitalarchive.org/about-groton-public-library'] = array(
    'menu_name' => 'menu-groton-public-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-groton-public-library',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-groton-public-library-conte_about--:https://collections.ctdigitalarchive.org/about-groton-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-groton-public-library-conte_contact:mailto:reference@groton-ct.gov.
  $menu_links['menu-groton-public-library-conte_contact:mailto:reference@groton-ct.gov'] = array(
    'menu_name' => 'menu-groton-public-library-conte',
    'link_path' => 'mailto:reference@groton-ct.gov',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-groton-public-library-conte_contact:mailto:reference@groton-ct.gov',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-groton-public-library-conte_groton-public-library-collections-:islandora/object/180002:GPL001.
  $menu_links['menu-groton-public-library-conte_groton-public-library-collections-:islandora/object/180002:GPL001'] = array(
    'menu_name' => 'menu-groton-public-library-conte',
    'link_path' => 'islandora/object/180002:GPL001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Groton Public Library Collections |',
    'options' => array(
      'identifier' => 'menu-groton-public-library-conte_groton-public-library-collections-:islandora/object/180002:GPL001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-groton-public-library-conte_website-:http://www.groton-ct.gov/library/.
  $menu_links['menu-groton-public-library-conte_website-:http://www.groton-ct.gov/library/'] = array(
    'menu_name' => 'menu-groton-public-library-conte',
    'link_path' => 'http://www.groton-ct.gov/library/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-groton-public-library-conte_website-:http://www.groton-ct.gov/library/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-groton-public-library-socia_facebook:https://www.facebook.com/grotonpubliclibrary/.
  $menu_links['menu-groton-public-library-socia_facebook:https://www.facebook.com/grotonpubliclibrary/'] = array(
    'menu_name' => 'menu-groton-public-library-socia',
    'link_path' => 'https://www.facebook.com/grotonpubliclibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-groton-public-library-socia_facebook:https://www.facebook.com/grotonpubliclibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-co_about-:https://collections.ctdigitalarchive.org/about-hagaman-memorial-library.
  $menu_links['menu-hagaman-memorial-library-co_about-:https://collections.ctdigitalarchive.org/about-hagaman-memorial-library'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-hagaman-memorial-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-hagaman-memorial-library-co_about-:https://collections.ctdigitalarchive.org/about-hagaman-memorial-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-co_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-hagaman-memorial-library-co_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hagaman-memorial-library-co_bibliomation-collections-:islandora/object/140002:Biblio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-co_contact:https://www.hagamanlibrary.org/staff-contacts/.
  $menu_links['menu-hagaman-memorial-library-co_contact:https://www.hagamanlibrary.org/staff-contacts/'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'link_path' => 'https://www.hagamanlibrary.org/staff-contacts/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-hagaman-memorial-library-co_contact:https://www.hagamanlibrary.org/staff-contacts/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-co_hagaman-memorial-library-collections--:islandora/object/140019:Hagaman.
  $menu_links['menu-hagaman-memorial-library-co_hagaman-memorial-library-collections--:islandora/object/140019:Hagaman'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'link_path' => 'islandora/object/140019:Hagaman',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Hagaman Memorial Library Collections | ',
    'options' => array(
      'identifier' => 'menu-hagaman-memorial-library-co_hagaman-memorial-library-collections--:islandora/object/140019:Hagaman',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-co_website-:https://www.hagamanlibrary.org/.
  $menu_links['menu-hagaman-memorial-library-co_website-:https://www.hagamanlibrary.org/'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-co',
    'link_path' => 'https://www.hagamanlibrary.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hagaman-memorial-library-co_website-:https://www.hagamanlibrary.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-hagaman-memorial-library-so_facebook:https://www.facebook.com/hagamanlibrary/.
  $menu_links['menu-hagaman-memorial-library-so_facebook:https://www.facebook.com/hagamanlibrary/'] = array(
    'menu_name' => 'menu-hagaman-memorial-library-so',
    'link_path' => 'https://www.facebook.com/hagamanlibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hagaman-memorial-library-so_facebook:https://www.facebook.com/hagamanlibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-medical-society-co_about--:https://collections.ctdigitalarchive.org/about-hartford-medical-society.
  $menu_links['menu-hartford-medical-society-co_about--:https://collections.ctdigitalarchive.org/about-hartford-medical-society'] = array(
    'menu_name' => 'menu-hartford-medical-society-co',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-hartford-medical-society',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-hartford-medical-society-co_about--:https://collections.ctdigitalarchive.org/about-hartford-medical-society',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-medical-society-co_contact:http://hartfordmedicalsociety.org/contact-us/.
  $menu_links['menu-hartford-medical-society-co_contact:http://hartfordmedicalsociety.org/contact-us/'] = array(
    'menu_name' => 'menu-hartford-medical-society-co',
    'link_path' => 'http://hartfordmedicalsociety.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-medical-society-co_contact:http://hartfordmedicalsociety.org/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-medical-society-co_hartford-medical-society-collections-:islandora/object/310002:AdminJME.
  $menu_links['menu-hartford-medical-society-co_hartford-medical-society-collections-:islandora/object/310002:AdminJME'] = array(
    'menu_name' => 'menu-hartford-medical-society-co',
    'link_path' => 'islandora/object/310002:AdminJME',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Hartford Medical Society Collections |',
    'options' => array(
      'identifier' => 'menu-hartford-medical-society-co_hartford-medical-society-collections-:islandora/object/310002:AdminJME',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-medical-society-co_website-:http://hartfordmedicalsociety.org/.
  $menu_links['menu-hartford-medical-society-co_website-:http://hartfordmedicalsociety.org/'] = array(
    'menu_name' => 'menu-hartford-medical-society-co',
    'link_path' => 'http://hartfordmedicalsociety.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-medical-society-co_website-:http://hartfordmedicalsociety.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-medical-society-so_facebook:https://www.facebook.com/HMShartfordmedicalsociety/.
  $menu_links['menu-hartford-medical-society-so_facebook:https://www.facebook.com/HMShartfordmedicalsociety/'] = array(
    'menu_name' => 'menu-hartford-medical-society-so',
    'link_path' => 'https://www.facebook.com/HMShartfordmedicalsociety/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-medical-society-so_facebook:https://www.facebook.com/HMShartfordmedicalsociety/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -7,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-men_about-:https://collections.ctdigitalarchive.org/about-hartford-public-library.
  $menu_links['menu-hartford-public-library-men_about-:https://collections.ctdigitalarchive.org/about-hartford-public-library'] = array(
    'menu_name' => 'menu-hartford-public-library-men',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-hartford-public-library',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-hartford-public-library-men_about-:https://collections.ctdigitalarchive.org/about-hartford-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-men_contact:https://www.hplct.org/contact-us.
  $menu_links['menu-hartford-public-library-men_contact:https://www.hplct.org/contact-us'] = array(
    'menu_name' => 'menu-hartford-public-library-men',
    'link_path' => 'https://www.hplct.org/contact-us',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-public-library-men_contact:https://www.hplct.org/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-men_hpl-collections--:islandora/object/50002:AdminJME02.
  $menu_links['menu-hartford-public-library-men_hpl-collections--:islandora/object/50002:AdminJME02'] = array(
    'menu_name' => 'menu-hartford-public-library-men',
    'link_path' => 'islandora/object/50002:AdminJME02',
    'router_path' => 'islandora/object/%',
    'link_title' => 'HPL Collections | ',
    'options' => array(
      'identifier' => 'menu-hartford-public-library-men_hpl-collections--:islandora/object/50002:AdminJME02',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-men_website-:https://www.hplct.org/.
  $menu_links['menu-hartford-public-library-men_website-:https://www.hplct.org/'] = array(
    'menu_name' => 'menu-hartford-public-library-men',
    'link_path' => 'https://www.hplct.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-public-library-men_website-:https://www.hplct.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-soc_facebook:https://www.facebook.com/HartfordPublicLibrary/.
  $menu_links['menu-hartford-public-library-soc_facebook:https://www.facebook.com/HartfordPublicLibrary/'] = array(
    'menu_name' => 'menu-hartford-public-library-soc',
    'link_path' => 'https://www.facebook.com/HartfordPublicLibrary/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-public-library-soc_facebook:https://www.facebook.com/HartfordPublicLibrary/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-soc_twitter:https://twitter.com/HPLCT.
  $menu_links['menu-hartford-public-library-soc_twitter:https://twitter.com/HPLCT'] = array(
    'menu_name' => 'menu-hartford-public-library-soc',
    'link_path' => 'https://twitter.com/HPLCT',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-public-library-soc_twitter:https://twitter.com/HPLCT',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-hartford-public-library-soc_youtube:https://www.youtube.com/user/HPLCT.
  $menu_links['menu-hartford-public-library-soc_youtube:https://www.youtube.com/user/HPLCT'] = array(
    'menu_name' => 'menu-hartford-public-library-soc',
    'link_path' => 'https://www.youtube.com/user/HPLCT',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-hartford-public-library-soc_youtube:https://www.youtube.com/user/HPLCT',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_browse-repository:islandora/object/islandora:root.
  $menu_links['menu-header-menu_browse-repository:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Browse repository',
    'options' => array(
      'attributes' => array(),
      'query' => array(
        'display' => 'list',
      ),
      'identifier' => 'menu-header-menu_browse-repository:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_my-bookmarks:islandora-bookmark.
  $menu_links['menu-header-menu_my-bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My Bookmarks',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_my-bookmarks:islandora-bookmark',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-ivoryton-library-contextual_about--:https://collections.ctdigitalarchive.org/about-ivoryton-library-association.
  $menu_links['menu-ivoryton-library-contextual_about--:https://collections.ctdigitalarchive.org/about-ivoryton-library-association'] = array(
    'menu_name' => 'menu-ivoryton-library-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-ivoryton-library-association',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-ivoryton-library-contextual_about--:https://collections.ctdigitalarchive.org/about-ivoryton-library-association',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-ivoryton-library-contextual_ivoryton-library-association-collections-:islandora/object/220002:ILA001.
  $menu_links['menu-ivoryton-library-contextual_ivoryton-library-association-collections-:islandora/object/220002:ILA001'] = array(
    'menu_name' => 'menu-ivoryton-library-contextual',
    'link_path' => 'islandora/object/220002:ILA001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Ivoryton Library Association Collections |',
    'options' => array(
      'identifier' => 'menu-ivoryton-library-contextual_ivoryton-library-association-collections-:islandora/object/220002:ILA001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-ivoryton-library-contextual_website:http://ivorytonlibrary.org/.
  $menu_links['menu-ivoryton-library-contextual_website:http://ivorytonlibrary.org/'] = array(
    'menu_name' => 'menu-ivoryton-library-contextual',
    'link_path' => 'http://ivorytonlibrary.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'identifier' => 'menu-ivoryton-library-contextual_website:http://ivorytonlibrary.org/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-ivoryton-library-social-med_facebook:https://www.facebook.com/Ivoryton-Library-Association-113795125303073/.
  $menu_links['menu-ivoryton-library-social-med_facebook:https://www.facebook.com/Ivoryton-Library-Association-113795125303073/'] = array(
    'menu_name' => 'menu-ivoryton-library-social-med',
    'link_path' => 'https://www.facebook.com/Ivoryton-Library-Association-113795125303073/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ivoryton-library-social-med_facebook:https://www.facebook.com/Ivoryton-Library-Association-113795125303073/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
  );
  // Exported menu link: menu-kent-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-kent-memorial-library-suffield.
  $menu_links['menu-kent-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-kent-memorial-library-suffield'] = array(
    'menu_name' => 'menu-kent-memorial-library-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-kent-memorial-library-suffield',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-kent-memorial-library-conte_about-:https://collections.ctdigitalarchive.org/about-kent-memorial-library-suffield',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-kent-memorial-library-conte_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-kent-memorial-library-conte_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-kent-memorial-library-conte',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'identifier' => 'menu-kent-memorial-library-conte_bibliomation-collections-:islandora/object/140002:Biblio',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-kent-memorial-library-conte_kent-memorial-library-collections-:islandora/object/140026:kentSuffield.
  $menu_links['menu-kent-memorial-library-conte_kent-memorial-library-collections-:islandora/object/140026:kentSuffield'] = array(
    'menu_name' => 'menu-kent-memorial-library-conte',
    'link_path' => 'islandora/object/140026:kentSuffield',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Kent Memorial Library Collections |',
    'options' => array(
      'identifier' => 'menu-kent-memorial-library-conte_kent-memorial-library-collections-:islandora/object/140026:kentSuffield',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-kent-memorial-library-conte_website:http://www.suffield-library.org/.
  $menu_links['menu-kent-memorial-library-conte_website:http://www.suffield-library.org/'] = array(
    'menu_name' => 'menu-kent-memorial-library-conte',
    'link_path' => 'http://www.suffield-library.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'identifier' => 'menu-kent-memorial-library-conte_website:http://www.suffield-library.org/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-kent-memorial-library-socia_facebook:https://www.facebook.com/KentMemorialLibrarySuffield/.
  $menu_links['menu-kent-memorial-library-socia_facebook:https://www.facebook.com/KentMemorialLibrarySuffield/'] = array(
    'menu_name' => 'menu-kent-memorial-library-socia',
    'link_path' => 'https://www.facebook.com/KentMemorialLibrarySuffield/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-kent-memorial-library-socia_facebook:https://www.facebook.com/KentMemorialLibrarySuffield/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -9,
    'customized' => 1,
  );
  // Exported menu link: menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/.
  $menu_links['menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/'] = array(
    'menu_name' => 'menu-library-support',
    'link_path' => 'http://lib.uconn.edu/about/giving/',
    'router_path' => '',
    'link_title' => 'Support the Libraries',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-conte_about--:https://collections.ctdigitalarchive.org/about-litchfield-historical-society.
  $menu_links['menu-litchfield-historical-conte_about--:https://collections.ctdigitalarchive.org/about-litchfield-historical-society'] = array(
    'menu_name' => 'menu-litchfield-historical-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-litchfield-historical-society',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-litchfield-historical-conte_about--:https://collections.ctdigitalarchive.org/about-litchfield-historical-society',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-conte_contact:http://www.litchfieldhistoricalsociety.org/contact-us/.
  $menu_links['menu-litchfield-historical-conte_contact:http://www.litchfieldhistoricalsociety.org/contact-us/'] = array(
    'menu_name' => 'menu-litchfield-historical-conte',
    'link_path' => 'http://www.litchfieldhistoricalsociety.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-conte_contact:http://www.litchfieldhistoricalsociety.org/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-conte_litchfield-historical-society-collections-:islandora/object/400002:LHS.
  $menu_links['menu-litchfield-historical-conte_litchfield-historical-society-collections-:islandora/object/400002:LHS'] = array(
    'menu_name' => 'menu-litchfield-historical-conte',
    'link_path' => 'islandora/object/400002:LHS',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Litchfield Historical Society Collections |',
    'options' => array(
      'identifier' => 'menu-litchfield-historical-conte_litchfield-historical-society-collections-:islandora/object/400002:LHS',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-conte_website-:http://www.litchfieldhistoricalsociety.org/.
  $menu_links['menu-litchfield-historical-conte_website-:http://www.litchfieldhistoricalsociety.org/'] = array(
    'menu_name' => 'menu-litchfield-historical-conte',
    'link_path' => 'http://www.litchfieldhistoricalsociety.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-conte_website-:http://www.litchfieldhistoricalsociety.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-socia_facebook:https://www.facebook.com/Litchfield.Historical.Society/.
  $menu_links['menu-litchfield-historical-socia_facebook:https://www.facebook.com/Litchfield.Historical.Society/'] = array(
    'menu_name' => 'menu-litchfield-historical-socia',
    'link_path' => 'https://www.facebook.com/Litchfield.Historical.Society/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-socia_facebook:https://www.facebook.com/Litchfield.Historical.Society/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-socia_instagram:https://www.instagram.com/litchfieldhistory/.
  $menu_links['menu-litchfield-historical-socia_instagram:https://www.instagram.com/litchfieldhistory/'] = array(
    'menu_name' => 'menu-litchfield-historical-socia',
    'link_path' => 'https://www.instagram.com/litchfieldhistory/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-socia_instagram:https://www.instagram.com/litchfieldhistory/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-socia_tumblr:http://eboardman.tumblr.com/.
  $menu_links['menu-litchfield-historical-socia_tumblr:http://eboardman.tumblr.com/'] = array(
    'menu_name' => 'menu-litchfield-historical-socia',
    'link_path' => 'http://eboardman.tumblr.com/',
    'router_path' => '',
    'link_title' => 'Tumblr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'tumblr-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-socia_tumblr:http://eboardman.tumblr.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-litchfield-historical-socia_twitter:https://twitter.com/judgereeve.
  $menu_links['menu-litchfield-historical-socia_twitter:https://twitter.com/judgereeve'] = array(
    'menu_name' => 'menu-litchfield-historical-socia',
    'link_path' => 'https://twitter.com/judgereeve',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-litchfield-historical-socia_twitter:https://twitter.com/judgereeve',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-lyman-allyn-art-museum-soci_facebook:https://www.facebook.com/lymanallynartmuseum.
  $menu_links['menu-lyman-allyn-art-museum-soci_facebook:https://www.facebook.com/lymanallynartmuseum'] = array(
    'menu_name' => 'menu-lyman-allyn-art-museum-soci',
    'link_path' => 'https://www.facebook.com/lymanallynartmuseum',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-lyman-allyn-art-museum-soci_facebook:https://www.facebook.com/lymanallynartmuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-lyman-allyn-art-museum-soci_instagram:https://www.instagram.com/lyman_allyn/.
  $menu_links['menu-lyman-allyn-art-museum-soci_instagram:https://www.instagram.com/lyman_allyn/'] = array(
    'menu_name' => 'menu-lyman-allyn-art-museum-soci',
    'link_path' => 'https://www.instagram.com/lyman_allyn/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'identifier' => 'menu-lyman-allyn-art-museum-soci_instagram:https://www.instagram.com/lyman_allyn/',
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-lyman-allyn-art-museum-soci_twitter:https://twitter.com/@LymanAllyn.
  $menu_links['menu-lyman-allyn-art-museum-soci_twitter:https://twitter.com/@LymanAllyn'] = array(
    'menu_name' => 'menu-lyman-allyn-art-museum-soci',
    'link_path' => 'https://twitter.com/@LymanAllyn',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'identifier' => 'menu-lyman-allyn-art-museum-soci_twitter:https://twitter.com/@LymanAllyn',
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-lymen-allyn-art-museum-cont_about--:https://collections.ctdigitalarchive.org/about-lyman-allyn-art-muesum.
  $menu_links['menu-lymen-allyn-art-museum-cont_about--:https://collections.ctdigitalarchive.org/about-lyman-allyn-art-muesum'] = array(
    'menu_name' => 'menu-lymen-allyn-art-museum-cont',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-lyman-allyn-art-muesum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-lymen-allyn-art-museum-cont_about--:https://collections.ctdigitalarchive.org/about-lyman-allyn-art-muesum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-lymen-allyn-art-museum-cont_lyman-allyn-art-museum-collections-:islandora/object/170002:LAAM001.
  $menu_links['menu-lymen-allyn-art-museum-cont_lyman-allyn-art-museum-collections-:islandora/object/170002:LAAM001'] = array(
    'menu_name' => 'menu-lymen-allyn-art-museum-cont',
    'link_path' => 'islandora/object/170002:LAAM001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Lyman Allyn Art Museum Collections |',
    'options' => array(
      'identifier' => 'menu-lymen-allyn-art-museum-cont_lyman-allyn-art-museum-collections-:islandora/object/170002:LAAM001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-lymen-allyn-art-museum-cont_website:https://www.lymanallyn.org/.
  $menu_links['menu-lymen-allyn-art-museum-cont_website:https://www.lymanallyn.org/'] = array(
    'menu_name' => 'menu-lymen-allyn-art-museum-cont',
    'link_path' => 'https://www.lymanallyn.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'identifier' => 'menu-lymen-allyn-art-museum-cont_website:https://www.lymanallyn.org/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-contextual_about-:https://collections.ctdigitalarchive.org/about-mattatuck-museum.
  $menu_links['menu-mattatuck-museum-contextual_about-:https://collections.ctdigitalarchive.org/about-mattatuck-museum'] = array(
    'menu_name' => 'menu-mattatuck-museum-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-mattatuck-museum',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-mattatuck-museum-contextual_about-:https://collections.ctdigitalarchive.org/about-mattatuck-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-contextual_contact:http://mattatuckmuseum.us3.list-manage1.com/subscribe?u=c29e7e791ec45edb4ebab63b7&id=dbddacc966.
  $menu_links['menu-mattatuck-museum-contextual_contact:http://mattatuckmuseum.us3.list-manage1.com/subscribe?u=c29e7e791ec45edb4ebab63b7&id=dbddacc966'] = array(
    'menu_name' => 'menu-mattatuck-museum-contextual',
    'link_path' => 'http://mattatuckmuseum.us3.list-manage1.com/subscribe?u=c29e7e791ec45edb4ebab63b7&id=dbddacc966',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-contextual_contact:http://mattatuckmuseum.us3.list-manage1.com/subscribe?u=c29e7e791ec45edb4ebab63b7&id=dbddacc966',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-contextual_mattatuck-museum-collections-:islandora/object/260002:MM001.
  $menu_links['menu-mattatuck-museum-contextual_mattatuck-museum-collections-:islandora/object/260002:MM001'] = array(
    'menu_name' => 'menu-mattatuck-museum-contextual',
    'link_path' => 'islandora/object/260002:MM001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Mattatuck Museum Collections |',
    'options' => array(
      'identifier' => 'menu-mattatuck-museum-contextual_mattatuck-museum-collections-:islandora/object/260002:MM001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-contextual_website-:https://www.mattmuseum.org/.
  $menu_links['menu-mattatuck-museum-contextual_website-:https://www.mattmuseum.org/'] = array(
    'menu_name' => 'menu-mattatuck-museum-contextual',
    'link_path' => 'https://www.mattmuseum.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-contextual_website-:https://www.mattmuseum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-social-med_facebook:https://www.facebook.com/Mattatuck-Museum-108040781038/.
  $menu_links['menu-mattatuck-museum-social-med_facebook:https://www.facebook.com/Mattatuck-Museum-108040781038/'] = array(
    'menu_name' => 'menu-mattatuck-museum-social-med',
    'link_path' => 'https://www.facebook.com/Mattatuck-Museum-108040781038/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-social-med_facebook:https://www.facebook.com/Mattatuck-Museum-108040781038/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-social-med_instagram:https://www.instagram.com/mattatuck_museum/.
  $menu_links['menu-mattatuck-museum-social-med_instagram:https://www.instagram.com/mattatuck_museum/'] = array(
    'menu_name' => 'menu-mattatuck-museum-social-med',
    'link_path' => 'https://www.instagram.com/mattatuck_museum/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-social-med_instagram:https://www.instagram.com/mattatuck_museum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-social-med_pintrest:https://www.pinterest.com/mattatuckmuseum/.
  $menu_links['menu-mattatuck-museum-social-med_pintrest:https://www.pinterest.com/mattatuckmuseum/'] = array(
    'menu_name' => 'menu-mattatuck-museum-social-med',
    'link_path' => 'https://www.pinterest.com/mattatuckmuseum/',
    'router_path' => '',
    'link_title' => 'Pintrest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-social-med_pintrest:https://www.pinterest.com/mattatuckmuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-mattatuck-museum-social-med_twitter:https://twitter.com/MattatuckMuseum.
  $menu_links['menu-mattatuck-museum-social-med_twitter:https://twitter.com/MattatuckMuseum'] = array(
    'menu_name' => 'menu-mattatuck-museum-social-med',
    'link_path' => 'https://twitter.com/MattatuckMuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mattatuck-museum-social-med_twitter:https://twitter.com/MattatuckMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-contextu_about--:https://collections.ctdigitalarchive.org/about-mystic-arts-center.
  $menu_links['menu-mystic-arts-center-contextu_about--:https://collections.ctdigitalarchive.org/about-mystic-arts-center'] = array(
    'menu_name' => 'menu-mystic-arts-center-contextu',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-mystic-arts-center',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-mystic-arts-center-contextu_about--:https://collections.ctdigitalarchive.org/about-mystic-arts-center',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-contextu_contact:https://www.mysticmuseumofart.org/visit/contact-us/.
  $menu_links['menu-mystic-arts-center-contextu_contact:https://www.mysticmuseumofart.org/visit/contact-us/'] = array(
    'menu_name' => 'menu-mystic-arts-center-contextu',
    'link_path' => 'https://www.mysticmuseumofart.org/visit/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-contextu_contact:https://www.mysticmuseumofart.org/visit/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-contextu_mystic-arts-museum-collections-:islandora/object/200002:MAC001.
  $menu_links['menu-mystic-arts-center-contextu_mystic-arts-museum-collections-:islandora/object/200002:MAC001'] = array(
    'menu_name' => 'menu-mystic-arts-center-contextu',
    'link_path' => 'islandora/object/200002:MAC001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Mystic Arts Museum Collections |',
    'options' => array(
      'identifier' => 'menu-mystic-arts-center-contextu_mystic-arts-museum-collections-:islandora/object/200002:MAC001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-contextu_website-:https://www.mysticmuseumofart.org/.
  $menu_links['menu-mystic-arts-center-contextu_website-:https://www.mysticmuseumofart.org/'] = array(
    'menu_name' => 'menu-mystic-arts-center-contextu',
    'link_path' => 'https://www.mysticmuseumofart.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-contextu_website-:https://www.mysticmuseumofart.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-social-m_facebook:https://www.facebook.com/mysticmuseumofart/.
  $menu_links['menu-mystic-arts-center-social-m_facebook:https://www.facebook.com/mysticmuseumofart/'] = array(
    'menu_name' => 'menu-mystic-arts-center-social-m',
    'link_path' => 'https://www.facebook.com/mysticmuseumofart/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-social-m_facebook:https://www.facebook.com/mysticmuseumofart/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-social-m_instagram:https://www.instagram.com/mysticmuseumofart/.
  $menu_links['menu-mystic-arts-center-social-m_instagram:https://www.instagram.com/mysticmuseumofart/'] = array(
    'menu_name' => 'menu-mystic-arts-center-social-m',
    'link_path' => 'https://www.instagram.com/mysticmuseumofart/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-social-m_instagram:https://www.instagram.com/mysticmuseumofart/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-social-m_pintrest:https://www.pinterest.com/mysticarts/.
  $menu_links['menu-mystic-arts-center-social-m_pintrest:https://www.pinterest.com/mysticarts/'] = array(
    'menu_name' => 'menu-mystic-arts-center-social-m',
    'link_path' => 'https://www.pinterest.com/mysticarts/',
    'router_path' => '',
    'link_title' => 'Pintrest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-social-m_pintrest:https://www.pinterest.com/mysticarts/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-arts-center-social-m_twitter:https://twitter.com/mysticmuseumart.
  $menu_links['menu-mystic-arts-center-social-m_twitter:https://twitter.com/mysticmuseumart'] = array(
    'menu_name' => 'menu-mystic-arts-center-social-m',
    'link_path' => 'https://twitter.com/mysticmuseumart',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-arts-center-social-m_twitter:https://twitter.com/mysticmuseumart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-contextual-m_about--:https://collections.ctdigitalarchive.org/about-mystic-seaport.
  $menu_links['menu-mystic-seaport-contextual-m_about--:https://collections.ctdigitalarchive.org/about-mystic-seaport'] = array(
    'menu_name' => 'menu-mystic-seaport-contextual-m',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-mystic-seaport',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-mystic-seaport-contextual-m_about--:https://collections.ctdigitalarchive.org/about-mystic-seaport',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-contextual-m_contact:https://www.mysticseaport.org/about/contact/.
  $menu_links['menu-mystic-seaport-contextual-m_contact:https://www.mysticseaport.org/about/contact/'] = array(
    'menu_name' => 'menu-mystic-seaport-contextual-m',
    'link_path' => 'https://www.mysticseaport.org/about/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-contextual-m_contact:https://www.mysticseaport.org/about/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-contextual-m_mystic-seaport-collections-:islandora/object/70002:AdminJME.
  $menu_links['menu-mystic-seaport-contextual-m_mystic-seaport-collections-:islandora/object/70002:AdminJME'] = array(
    'menu_name' => 'menu-mystic-seaport-contextual-m',
    'link_path' => 'islandora/object/70002:AdminJME',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Mystic Seaport Collections |',
    'options' => array(
      'identifier' => 'menu-mystic-seaport-contextual-m_mystic-seaport-collections-:islandora/object/70002:AdminJME',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-contextual-m_website-:https://www.mysticseaport.org/.
  $menu_links['menu-mystic-seaport-contextual-m_website-:https://www.mysticseaport.org/'] = array(
    'menu_name' => 'menu-mystic-seaport-contextual-m',
    'link_path' => 'https://www.mysticseaport.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-contextual-m_website-:https://www.mysticseaport.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-social-media_facebook:https://www.facebook.com/mysticseaport.
  $menu_links['menu-mystic-seaport-social-media_facebook:https://www.facebook.com/mysticseaport'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'link_path' => 'https://www.facebook.com/mysticseaport',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-social-media_facebook:https://www.facebook.com/mysticseaport',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-social-media_instagram:https://www.instagram.com/mysticseaportmuseum/.
  $menu_links['menu-mystic-seaport-social-media_instagram:https://www.instagram.com/mysticseaportmuseum/'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'link_path' => 'https://www.instagram.com/mysticseaportmuseum/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-social-media_instagram:https://www.instagram.com/mysticseaportmuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-social-media_pintrest:https://www.pinterest.com/mysticseaportmuseum/.
  $menu_links['menu-mystic-seaport-social-media_pintrest:https://www.pinterest.com/mysticseaportmuseum/'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'link_path' => 'https://www.pinterest.com/mysticseaportmuseum/',
    'router_path' => '',
    'link_title' => 'Pintrest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-social-media_pintrest:https://www.pinterest.com/mysticseaportmuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-social-media_twitter:https://twitter.com/mysticseaport.
  $menu_links['menu-mystic-seaport-social-media_twitter:https://twitter.com/mysticseaport'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'link_path' => 'https://twitter.com/mysticseaport',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-social-media_twitter:https://twitter.com/mysticseaport',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-mystic-seaport-social-media_youtube:https://www.youtube.com/user/MysticSeaportVideos.
  $menu_links['menu-mystic-seaport-social-media_youtube:https://www.youtube.com/user/MysticSeaportVideos'] = array(
    'menu_name' => 'menu-mystic-seaport-social-media',
    'link_path' => 'https://www.youtube.com/user/MysticSeaportVideos',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-mystic-seaport-social-media_youtube:https://www.youtube.com/user/MysticSeaportVideos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-nbmaa-social-media-menu_facebook:https://www.facebook.com/NBMAA.
  $menu_links['menu-nbmaa-social-media-menu_facebook:https://www.facebook.com/NBMAA'] = array(
    'menu_name' => 'menu-nbmaa-social-media-menu',
    'link_path' => 'https://www.facebook.com/NBMAA',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nbmaa-social-media-menu_facebook:https://www.facebook.com/NBMAA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-nbmaa-social-media-menu_instagram:https://www.instagram.com/nbmaa56/.
  $menu_links['menu-nbmaa-social-media-menu_instagram:https://www.instagram.com/nbmaa56/'] = array(
    'menu_name' => 'menu-nbmaa-social-media-menu',
    'link_path' => 'https://www.instagram.com/nbmaa56/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nbmaa-social-media-menu_instagram:https://www.instagram.com/nbmaa56/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-nbmaa-social-media-menu_tumblr:https://nbmaa.tumblr.com/.
  $menu_links['menu-nbmaa-social-media-menu_tumblr:https://nbmaa.tumblr.com/'] = array(
    'menu_name' => 'menu-nbmaa-social-media-menu',
    'link_path' => 'https://nbmaa.tumblr.com/',
    'router_path' => '',
    'link_title' => 'Tumblr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'tumblr-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nbmaa-social-media-menu_tumblr:https://nbmaa.tumblr.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-nbmaa-social-media-menu_twitter:https://twitter.com/NBMAA.
  $menu_links['menu-nbmaa-social-media-menu_twitter:https://twitter.com/NBMAA'] = array(
    'menu_name' => 'menu-nbmaa-social-media-menu',
    'link_path' => 'https://twitter.com/NBMAA',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nbmaa-social-media-menu_twitter:https://twitter.com/NBMAA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-new-britain-museum-of-ameri_about-:https://collections.ctdigitalarchive.org/about-nbmaa.
  $menu_links['menu-new-britain-museum-of-ameri_about-:https://collections.ctdigitalarchive.org/about-nbmaa'] = array(
    'menu_name' => 'menu-new-britain-museum-of-ameri',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-nbmaa',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-new-britain-museum-of-ameri_about-:https://collections.ctdigitalarchive.org/about-nbmaa',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-new-britain-museum-of-ameri_contact:http://www.nbmaa.org/museum-of-american-art/contact-us.
  $menu_links['menu-new-britain-museum-of-ameri_contact:http://www.nbmaa.org/museum-of-american-art/contact-us'] = array(
    'menu_name' => 'menu-new-britain-museum-of-ameri',
    'link_path' => 'http://www.nbmaa.org/museum-of-american-art/contact-us',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-britain-museum-of-ameri_contact:http://www.nbmaa.org/museum-of-american-art/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-new-britain-museum-of-ameri_nbmaa-collections--:islandora/object/210002:NBMAA.
  $menu_links['menu-new-britain-museum-of-ameri_nbmaa-collections--:islandora/object/210002:NBMAA'] = array(
    'menu_name' => 'menu-new-britain-museum-of-ameri',
    'link_path' => 'islandora/object/210002:NBMAA',
    'router_path' => 'islandora/object/%',
    'link_title' => 'NBMAA Collections | ',
    'options' => array(
      'identifier' => 'menu-new-britain-museum-of-ameri_nbmaa-collections--:islandora/object/210002:NBMAA',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-new-britain-museum-of-ameri_website-:http://www.nbmaa.org/.
  $menu_links['menu-new-britain-museum-of-ameri_website-:http://www.nbmaa.org/'] = array(
    'menu_name' => 'menu-new-britain-museum-of-ameri',
    'link_path' => 'http://www.nbmaa.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-britain-museum-of-ameri_website-:http://www.nbmaa.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-new-haven-museum.
  $menu_links['menu-new-haven-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-new-haven-museum'] = array(
    'menu_name' => 'menu-new-haven-museum-contextual',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-new-haven-museum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-new-haven-museum-contextual_about--:https://collections.ctdigitalarchive.org/about-new-haven-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-contextual_contact:http://www.newhavenmuseum.org/contact-us/.
  $menu_links['menu-new-haven-museum-contextual_contact:http://www.newhavenmuseum.org/contact-us/'] = array(
    'menu_name' => 'menu-new-haven-museum-contextual',
    'link_path' => 'http://www.newhavenmuseum.org/contact-us/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-haven-museum-contextual_contact:http://www.newhavenmuseum.org/contact-us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-contextual_new-haven-museum-collections--:islandora/object/280002:NHM001.
  $menu_links['menu-new-haven-museum-contextual_new-haven-museum-collections--:islandora/object/280002:NHM001'] = array(
    'menu_name' => 'menu-new-haven-museum-contextual',
    'link_path' => 'islandora/object/280002:NHM001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'New Haven Museum Collections | ',
    'options' => array(
      'identifier' => 'menu-new-haven-museum-contextual_new-haven-museum-collections--:islandora/object/280002:NHM001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-contextual_website-:http://www.newhavenmuseum.org/.
  $menu_links['menu-new-haven-museum-contextual_website-:http://www.newhavenmuseum.org/'] = array(
    'menu_name' => 'menu-new-haven-museum-contextual',
    'link_path' => 'http://www.newhavenmuseum.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-haven-museum-contextual_website-:http://www.newhavenmuseum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-social-med_facebook:https://www.facebook.com/NewHavenMuseum.
  $menu_links['menu-new-haven-museum-social-med_facebook:https://www.facebook.com/NewHavenMuseum'] = array(
    'menu_name' => 'menu-new-haven-museum-social-med',
    'link_path' => 'https://www.facebook.com/NewHavenMuseum',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-haven-museum-social-med_facebook:https://www.facebook.com/NewHavenMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-social-med_pintrest:https://www.pinterest.com/newhavenmuseum/.
  $menu_links['menu-new-haven-museum-social-med_pintrest:https://www.pinterest.com/newhavenmuseum/'] = array(
    'menu_name' => 'menu-new-haven-museum-social-med',
    'link_path' => 'https://www.pinterest.com/newhavenmuseum/',
    'router_path' => '',
    'link_title' => 'Pintrest',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'pinterest-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-haven-museum-social-med_pintrest:https://www.pinterest.com/newhavenmuseum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-new-haven-museum-social-med_twitter:https://twitter.com/NewHavenMuseum.
  $menu_links['menu-new-haven-museum-social-med_twitter:https://twitter.com/NewHavenMuseum'] = array(
    'menu_name' => 'menu-new-haven-museum-social-med',
    'link_path' => 'https://twitter.com/NewHavenMuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-new-haven-museum-social-med_twitter:https://twitter.com/NewHavenMuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-cont_about--:https://collections.ctdigitalarchive.org/about-norwalk-public-library.
  $menu_links['menu-norwalk-public-library-cont_about--:https://collections.ctdigitalarchive.org/about-norwalk-public-library'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-norwalk-public-library',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-norwalk-public-library-cont_about--:https://collections.ctdigitalarchive.org/about-norwalk-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-cont_contact:https://www.norwalkpl.org/directory.aspx.
  $menu_links['menu-norwalk-public-library-cont_contact:https://www.norwalkpl.org/directory.aspx'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'link_path' => 'https://www.norwalkpl.org/directory.aspx',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-norwalk-public-library-cont_contact:https://www.norwalkpl.org/directory.aspx',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-cont_norwalk-public-library-collection-:islandora/object/450002:NPL.
  $menu_links['menu-norwalk-public-library-cont_norwalk-public-library-collection-:islandora/object/450002:NPL'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'link_path' => 'islandora/object/450002:NPL',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Norwalk Public Library Collection |',
    'options' => array(
      'identifier' => 'menu-norwalk-public-library-cont_norwalk-public-library-collection-:islandora/object/450002:NPL',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-cont_website-:https://www.norwalkpl.org/.
  $menu_links['menu-norwalk-public-library-cont_website-:https://www.norwalkpl.org/'] = array(
    'menu_name' => 'menu-norwalk-public-library-cont',
    'link_path' => 'https://www.norwalkpl.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-norwalk-public-library-cont_website-:https://www.norwalkpl.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-soci_facebook:https://www.facebook.com/norwalkpubliclibrary.
  $menu_links['menu-norwalk-public-library-soci_facebook:https://www.facebook.com/norwalkpubliclibrary'] = array(
    'menu_name' => 'menu-norwalk-public-library-soci',
    'link_path' => 'https://www.facebook.com/norwalkpubliclibrary',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-norwalk-public-library-soci_facebook:https://www.facebook.com/norwalkpubliclibrary',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-soci_instagram:https://www.instagram.com/norwalklibct/?hl=en.
  $menu_links['menu-norwalk-public-library-soci_instagram:https://www.instagram.com/norwalklibct/?hl=en'] = array(
    'menu_name' => 'menu-norwalk-public-library-soci',
    'link_path' => 'https://www.instagram.com/norwalklibct/?hl=en',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-norwalk-public-library-soci_instagram:https://www.instagram.com/norwalklibct/?hl=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-norwalk-public-library-soci_twitter:https://twitter.com/NorwalkLibCT.
  $menu_links['menu-norwalk-public-library-soci_twitter:https://twitter.com/NorwalkLibCT'] = array(
    'menu_name' => 'menu-norwalk-public-library-soci',
    'link_path' => 'https://twitter.com/NorwalkLibCT',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-norwalk-public-library-soci_twitter:https://twitter.com/NorwalkLibCT',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-pt-barnum-digital-collectio_abc-a-barnum-companion:islandora/object/60002:ptb_abarnumcompanion.
  $menu_links['menu-pt-barnum-digital-collectio_abc-a-barnum-companion:islandora/object/60002:ptb_abarnumcompanion'] = array(
    'menu_name' => 'menu-pt-barnum-digital-collectio',
    'link_path' => 'islandora/object/60002:ptb_abarnumcompanion',
    'router_path' => 'islandora/object/%',
    'link_title' => 'ABC: A Barnum Companion',
    'options' => array(
      'identifier' => 'menu-pt-barnum-digital-collectio_abc-a-barnum-companion:islandora/object/60002:ptb_abarnumcompanion',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-pt-barnum-digital-collectio_about--:https://collections.ctdigitalarchive.org/about-pt-barnum-digital-collection.
  $menu_links['menu-pt-barnum-digital-collectio_about--:https://collections.ctdigitalarchive.org/about-pt-barnum-digital-collection'] = array(
    'menu_name' => 'menu-pt-barnum-digital-collectio',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-pt-barnum-digital-collection',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-pt-barnum-digital-collectio_about--:https://collections.ctdigitalarchive.org/about-pt-barnum-digital-collection',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-pt-barnum-digital-collectio_pt-barnum-digital-collection-home-:islandora/object/60002:PTBarnumDigitalCollection.
  $menu_links['menu-pt-barnum-digital-collectio_pt-barnum-digital-collection-home-:islandora/object/60002:PTBarnumDigitalCollection'] = array(
    'menu_name' => 'menu-pt-barnum-digital-collectio',
    'link_path' => 'islandora/object/60002:PTBarnumDigitalCollection',
    'router_path' => 'islandora/object/%',
    'link_title' => 'P.T. Barnum Digital Collection Home |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-pt-barnum-digital-collectio_pt-barnum-digital-collection-home-:islandora/object/60002:PTBarnumDigitalCollection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-remembering-wwi-contextual-_about-:node/92.
  $menu_links['menu-remembering-wwi-contextual-_about-:node/92'] = array(
    'menu_name' => 'menu-remembering-wwi-contextual-',
    'link_path' => 'node/92',
    'router_path' => 'node/%',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-remembering-wwi-contextual-_about-:node/92',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-remembering-wwi-contextual-_csl-digital-collections-:islandora/object/30002:csl.
  $menu_links['menu-remembering-wwi-contextual-_csl-digital-collections-:islandora/object/30002:csl'] = array(
    'menu_name' => 'menu-remembering-wwi-contextual-',
    'link_path' => 'islandora/object/30002:csl',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CSL Digital Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-remembering-wwi-contextual-_csl-digital-collections-:islandora/object/30002:csl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-remembering-wwi-contextual-_remembering-wwi-collections-:islandora/object/30002:RWWI.
  $menu_links['menu-remembering-wwi-contextual-_remembering-wwi-collections-:islandora/object/30002:RWWI'] = array(
    'menu_name' => 'menu-remembering-wwi-contextual-',
    'link_path' => 'islandora/object/30002:RWWI',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Remembering WWI Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-remembering-wwi-contextual-_remembering-wwi-collections-:islandora/object/30002:RWWI',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-cont_about--:https://collections.ctdigitalarchive.org/about-slater-memorial-museum.
  $menu_links['menu-slater-memorial-museum-cont_about--:https://collections.ctdigitalarchive.org/about-slater-memorial-museum'] = array(
    'menu_name' => 'menu-slater-memorial-museum-cont',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-slater-memorial-museum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-slater-memorial-museum-cont_about--:https://collections.ctdigitalarchive.org/about-slater-memorial-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-cont_contact:http://www.slatermuseum.org/contact/.
  $menu_links['menu-slater-memorial-museum-cont_contact:http://www.slatermuseum.org/contact/'] = array(
    'menu_name' => 'menu-slater-memorial-museum-cont',
    'link_path' => 'http://www.slatermuseum.org/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-slater-memorial-museum-cont_contact:http://www.slatermuseum.org/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-cont_slater-memorial-museum-collections-:islandora/object/230002:SMM001.
  $menu_links['menu-slater-memorial-museum-cont_slater-memorial-museum-collections-:islandora/object/230002:SMM001'] = array(
    'menu_name' => 'menu-slater-memorial-museum-cont',
    'link_path' => 'islandora/object/230002:SMM001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Slater Memorial Museum Collections |',
    'options' => array(
      'identifier' => 'menu-slater-memorial-museum-cont_slater-memorial-museum-collections-:islandora/object/230002:SMM001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-cont_website-:http://www.slatermuseum.org/.
  $menu_links['menu-slater-memorial-museum-cont_website-:http://www.slatermuseum.org/'] = array(
    'menu_name' => 'menu-slater-memorial-museum-cont',
    'link_path' => 'http://www.slatermuseum.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-slater-memorial-museum-cont_website-:http://www.slatermuseum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-soci_facebook:https://www.facebook.com/slatermemorialmuseum.
  $menu_links['menu-slater-memorial-museum-soci_facebook:https://www.facebook.com/slatermemorialmuseum'] = array(
    'menu_name' => 'menu-slater-memorial-museum-soci',
    'link_path' => 'https://www.facebook.com/slatermemorialmuseum',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-slater-memorial-museum-soci_facebook:https://www.facebook.com/slatermemorialmuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-slater-memorial-museum-soci_twitter:https://twitter.com/slatermuseum.
  $menu_links['menu-slater-memorial-museum-soci_twitter:https://twitter.com/slatermuseum'] = array(
    'menu_name' => 'menu-slater-memorial-museum-soci',
    'link_path' => 'https://twitter.com/slatermuseum',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-slater-memorial-museum-soci_twitter:https://twitter.com/slatermuseum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-conte_about--:https://collections.ctdigitalarchive.org/about-stonington-historical-society.
  $menu_links['menu-stonington-historical-conte_about--:https://collections.ctdigitalarchive.org/about-stonington-historical-society'] = array(
    'menu_name' => 'menu-stonington-historical-conte',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-stonington-historical-society',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-stonington-historical-conte_about--:https://collections.ctdigitalarchive.org/about-stonington-historical-society',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-conte_contact:https://www.stoningtonhistory.org/contact/.
  $menu_links['menu-stonington-historical-conte_contact:https://www.stoningtonhistory.org/contact/'] = array(
    'menu_name' => 'menu-stonington-historical-conte',
    'link_path' => 'https://www.stoningtonhistory.org/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-stonington-historical-conte_contact:https://www.stoningtonhistory.org/contact/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-conte_stonington-historical-society-collections-:islandora/object/240002:SHS001.
  $menu_links['menu-stonington-historical-conte_stonington-historical-society-collections-:islandora/object/240002:SHS001'] = array(
    'menu_name' => 'menu-stonington-historical-conte',
    'link_path' => 'islandora/object/240002:SHS001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Stonington Historical Society Collections |',
    'options' => array(
      'identifier' => 'menu-stonington-historical-conte_stonington-historical-society-collections-:islandora/object/240002:SHS001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-conte_website-:https://www.stoningtonhistory.org/.
  $menu_links['menu-stonington-historical-conte_website-:https://www.stoningtonhistory.org/'] = array(
    'menu_name' => 'menu-stonington-historical-conte',
    'link_path' => 'https://www.stoningtonhistory.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-stonington-historical-conte_website-:https://www.stoningtonhistory.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-socie_facebook:https://www.facebook.com/The-Stonington-Historical-Society-275577294561/.
  $menu_links['menu-stonington-historical-socie_facebook:https://www.facebook.com/The-Stonington-Historical-Society-275577294561/'] = array(
    'menu_name' => 'menu-stonington-historical-socie',
    'link_path' => 'https://www.facebook.com/The-Stonington-Historical-Society-275577294561/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-stonington-historical-socie_facebook:https://www.facebook.com/The-Stonington-Historical-Society-275577294561/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-socie_instagram:https://www.instagram.com/stoningtonhistory/.
  $menu_links['menu-stonington-historical-socie_instagram:https://www.instagram.com/stoningtonhistory/'] = array(
    'menu_name' => 'menu-stonington-historical-socie',
    'link_path' => 'https://www.instagram.com/stoningtonhistory/',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-stonington-historical-socie_instagram:https://www.instagram.com/stoningtonhistory/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-stonington-historical-socie_twitter:https://twitter.com/StoHisSociety.
  $menu_links['menu-stonington-historical-socie_twitter:https://twitter.com/StoHisSociety'] = array(
    'menu_name' => 'menu-stonington-historical-socie',
    'link_path' => 'https://twitter.com/StoHisSociety',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-stonington-historical-socie_twitter:https://twitter.com/StoHisSociety',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-trinity-college-contextual-_ctda-collections:islandora/object/islandora:root.
  $menu_links['menu-trinity-college-contextual-_ctda-collections:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-trinity-college-contextual-',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'CTDA Collections',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-trinity-college-contextual-_ctda-collections:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-trinity-college-contextual-_trinity-college-collection----:islandora/object/120002:TC.
  $menu_links['menu-trinity-college-contextual-_trinity-college-collection----:islandora/object/120002:TC'] = array(
    'menu_name' => 'menu-trinity-college-contextual-',
    'link_path' => 'islandora/object/120002:TC',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Trinity College Collection  |  ',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-trinity-college-contextual-_trinity-college-collection----:islandora/object/120002:TC',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-contextual-menu_about-:https://lib.uconn.edu/libraries/asc/about/.
  $menu_links['menu-uconn-contextual-menu_about-:https://lib.uconn.edu/libraries/asc/about/'] = array(
    'menu_name' => 'menu-uconn-contextual-menu',
    'link_path' => 'https://lib.uconn.edu/libraries/asc/about/',
    'router_path' => '',
    'link_title' => 'About |',
    'options' => array(
      'identifier' => 'menu-uconn-contextual-menu_about-:https://lib.uconn.edu/libraries/asc/about/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-contextual-menu_contact:https://lib.uconn.edu/libraries/asc/about/contact/.
  $menu_links['menu-uconn-contextual-menu_contact:https://lib.uconn.edu/libraries/asc/about/contact/'] = array(
    'menu_name' => 'menu-uconn-contextual-menu',
    'link_path' => 'https://lib.uconn.edu/libraries/asc/about/contact/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-uconn-contextual-menu_contact:https://lib.uconn.edu/libraries/asc/about/contact/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-contextual-menu_uconn-archives-blog-:http://blogs.lib.uconn.edu/archives/.
  $menu_links['menu-uconn-contextual-menu_uconn-archives-blog-:http://blogs.lib.uconn.edu/archives/'] = array(
    'menu_name' => 'menu-uconn-contextual-menu',
    'link_path' => 'http://blogs.lib.uconn.edu/archives/',
    'router_path' => '',
    'link_title' => 'UConn Archives Blog |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-contextual-menu_uconn-archives-blog-:http://blogs.lib.uconn.edu/archives/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-contextual-menu_uconn-digital-collections-:islandora/object/20002:UniversityofConnecticut.
  $menu_links['menu-uconn-contextual-menu_uconn-digital-collections-:islandora/object/20002:UniversityofConnecticut'] = array(
    'menu_name' => 'menu-uconn-contextual-menu',
    'link_path' => 'islandora/object/20002:UniversityofConnecticut',
    'router_path' => 'islandora/object/%',
    'link_title' => 'UConn Digital Collections |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-contextual-menu_uconn-digital-collections-:islandora/object/20002:UniversityofConnecticut',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-social-media-menu_facebook:https://www.facebook.com/doddcenter/?ref=ts.
  $menu_links['menu-uconn-social-media-menu_facebook:https://www.facebook.com/doddcenter/?ref=ts'] = array(
    'menu_name' => 'menu-uconn-social-media-menu',
    'link_path' => 'https://www.facebook.com/doddcenter/?ref=ts',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-social-media-menu_facebook:https://www.facebook.com/doddcenter/?ref=ts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-social-media-menu_tumblr:https://uconnarchives.tumblr.com/.
  $menu_links['menu-uconn-social-media-menu_tumblr:https://uconnarchives.tumblr.com/'] = array(
    'menu_name' => 'menu-uconn-social-media-menu',
    'link_path' => 'https://uconnarchives.tumblr.com/',
    'router_path' => '',
    'link_title' => 'Tumblr',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'tumblr-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-social-media-menu_tumblr:https://uconnarchives.tumblr.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-social-media-menu_twitter:https://twitter.com/UConnArchives.
  $menu_links['menu-uconn-social-media-menu_twitter:https://twitter.com/UConnArchives'] = array(
    'menu_name' => 'menu-uconn-social-media-menu',
    'link_path' => 'https://twitter.com/UConnArchives',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-social-media-menu_twitter:https://twitter.com/UConnArchives',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-uconn-social-media-menu_youtube:https://www.youtube.com/channel/UCCr19kY1LnBaZVIcO9zXS_Q.
  $menu_links['menu-uconn-social-media-menu_youtube:https://www.youtube.com/channel/UCCr19kY1LnBaZVIcO9zXS_Q'] = array(
    'menu_name' => 'menu-uconn-social-media-menu',
    'link_path' => 'https://www.youtube.com/channel/UCCr19kY1LnBaZVIcO9zXS_Q',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-uconn-social-media-menu_youtube:https://www.youtube.com/channel/UCCr19kY1LnBaZVIcO9zXS_Q',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-contextu_about--:https://collections.ctdigitalarchive.org/about-wadsworth-athenum-museum-of-art.
  $menu_links['menu-wadsworth-atheneum-contextu_about--:https://collections.ctdigitalarchive.org/about-wadsworth-athenum-museum-of-art'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-contextu',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-wadsworth-athenum-museum-of-art',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-wadsworth-atheneum-contextu_about--:https://collections.ctdigitalarchive.org/about-wadsworth-athenum-museum-of-art',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-contextu_contact:https://thewadsworth.org/contactus/.
  $menu_links['menu-wadsworth-atheneum-contextu_contact:https://thewadsworth.org/contactus/'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-contextu',
    'link_path' => 'https://thewadsworth.org/contactus/',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-wadsworth-atheneum-contextu_contact:https://thewadsworth.org/contactus/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-contextu_wadsworth-atheneum-collections-:islandora/object/250002:WA001.
  $menu_links['menu-wadsworth-atheneum-contextu_wadsworth-atheneum-collections-:islandora/object/250002:WA001'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-contextu',
    'link_path' => 'islandora/object/250002:WA001',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Wadsworth Atheneum Collections |',
    'options' => array(
      'identifier' => 'menu-wadsworth-atheneum-contextu_wadsworth-atheneum-collections-:islandora/object/250002:WA001',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-contextu_website-:https://thewadsworth.org/.
  $menu_links['menu-wadsworth-atheneum-contextu_website-:https://thewadsworth.org/'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-contextu',
    'link_path' => 'https://thewadsworth.org/',
    'router_path' => '',
    'link_title' => 'Website |',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-wadsworth-atheneum-contextu_website-:https://thewadsworth.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-social-m_facebook:https://www.facebook.com/WadsworthAtheneum/.
  $menu_links['menu-wadsworth-atheneum-social-m_facebook:https://www.facebook.com/WadsworthAtheneum/'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-social-m',
    'link_path' => 'https://www.facebook.com/WadsworthAtheneum/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-wadsworth-atheneum-social-m_facebook:https://www.facebook.com/WadsworthAtheneum/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-social-m_instagram:https://www.instagram.com/thewadsworth/#.
  $menu_links['menu-wadsworth-atheneum-social-m_instagram:https://www.instagram.com/thewadsworth/#'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-social-m',
    'link_path' => 'https://www.instagram.com/thewadsworth/#',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-wadsworth-atheneum-social-m_instagram:https://www.instagram.com/thewadsworth/#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 1,
  );
  // Exported menu link: menu-wadsworth-atheneum-social-m_twitter:https://twitter.com/thewadsworth.
  $menu_links['menu-wadsworth-atheneum-social-m_twitter:https://twitter.com/thewadsworth'] = array(
    'menu_name' => 'menu-wadsworth-atheneum-social-m',
    'link_path' => 'https://twitter.com/thewadsworth',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-wadsworth-atheneum-social-m_twitter:https://twitter.com/thewadsworth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-windham-textile-history-con_about--:https://collections.ctdigitalarchive.org/about-windham-textile-and-history-museum.
  $menu_links['menu-windham-textile-history-con_about--:https://collections.ctdigitalarchive.org/about-windham-textile-and-history-museum'] = array(
    'menu_name' => 'menu-windham-textile-history-con',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-windham-textile-and-history-museum',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-windham-textile-history-con_about--:https://collections.ctdigitalarchive.org/about-windham-textile-and-history-museum',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: menu-windham-textile-history-con_website:http://www.millmuseum.org/.
  $menu_links['menu-windham-textile-history-con_website:http://www.millmuseum.org/'] = array(
    'menu_name' => 'menu-windham-textile-history-con',
    'link_path' => 'http://www.millmuseum.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-windham-textile-history-con_website:http://www.millmuseum.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 1,
  );
  // Exported menu link: menu-windham-textile-history-con_windham-textile--history-museum-collections-:islandora/object/360002:AdminJEWTM.
  $menu_links['menu-windham-textile-history-con_windham-textile--history-museum-collections-:islandora/object/360002:AdminJEWTM'] = array(
    'menu_name' => 'menu-windham-textile-history-con',
    'link_path' => 'islandora/object/360002:AdminJEWTM',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Windham Textile & History Museum Collections |',
    'options' => array(
      'identifier' => 'menu-windham-textile-history-con_windham-textile--history-museum-collections-:islandora/object/360002:AdminJEWTM',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-woodbury-public-library-con_about--:https://collections.ctdigitalarchive.org/about-woodbury-public-library.
  $menu_links['menu-woodbury-public-library-con_about--:https://collections.ctdigitalarchive.org/about-woodbury-public-library'] = array(
    'menu_name' => 'menu-woodbury-public-library-con',
    'link_path' => 'https://collections.ctdigitalarchive.org/about-woodbury-public-library',
    'router_path' => '',
    'link_title' => 'About | ',
    'options' => array(
      'identifier' => 'menu-woodbury-public-library-con_about--:https://collections.ctdigitalarchive.org/about-woodbury-public-library',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-woodbury-public-library-con_bibliomation-collections-:islandora/object/140002:Biblio.
  $menu_links['menu-woodbury-public-library-con_bibliomation-collections-:islandora/object/140002:Biblio'] = array(
    'menu_name' => 'menu-woodbury-public-library-con',
    'link_path' => 'islandora/object/140002:Biblio',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Bibliomation Collections |',
    'options' => array(
      'identifier' => 'menu-woodbury-public-library-con_bibliomation-collections-:islandora/object/140002:Biblio',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-woodbury-public-library-con_website:http://www.woodburylibraryct.org/.
  $menu_links['menu-woodbury-public-library-con_website:http://www.woodburylibraryct.org/'] = array(
    'menu_name' => 'menu-woodbury-public-library-con',
    'link_path' => 'http://www.woodburylibraryct.org/',
    'router_path' => '',
    'link_title' => 'Website',
    'options' => array(
      'identifier' => 'menu-woodbury-public-library-con_website:http://www.woodburylibraryct.org/',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'target' => '_blank',
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-woodbury-public-library-con_woodbury-public-library-collections--:islandora/object/140065:Woodbury.
  $menu_links['menu-woodbury-public-library-con_woodbury-public-library-collections--:islandora/object/140065:Woodbury'] = array(
    'menu_name' => 'menu-woodbury-public-library-con',
    'link_path' => 'islandora/object/140065:Woodbury',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Woodbury Public Library Collections | ',
    'options' => array(
      'identifier' => 'menu-woodbury-public-library-con_woodbury-public-library-collections--:islandora/object/140065:Woodbury',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
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
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-woodbury-public-library-soc_facebook:https://www.facebook.com/Woodbury-Public-Library-492675417506253/.
  $menu_links['menu-woodbury-public-library-soc_facebook:https://www.facebook.com/Woodbury-Public-Library-492675417506253/'] = array(
    'menu_name' => 'menu-woodbury-public-library-soc',
    'link_path' => 'https://www.facebook.com/Woodbury-Public-Library-492675417506253/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-woodbury-public-library-soc_facebook:https://www.facebook.com/Woodbury-Public-Library-492675417506253/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A to Z Index');
  t('ABC: A Barnum Companion');
  t('ASD Collections | ');
  t('About');
  t('About the CTDA');
  t('About this site');
  t('About |');
  t('About | ');
  t('Advanced Search');
  t('All Collections');
  t('Avon Free Public Library');
  t('Avon Free Public Library Collections |');
  t('Barnum Museum');
  t('Barnum Museum Collections | ');
  t('Bethel Public Library Collections |');
  t('Bibliomation');
  t('Bibliomation Collections |');
  t('Bill Memorial Library Collections |');
  t('Bridgeport History Center');
  t('Bridgeport History Center Collections |');
  t('Browse repository');
  t('C.H. Booth Collections |');
  t('CAHSL Collections |');
  t('CHS Collections |');
  t('CSL Digital Collections |');
  t('CSMNH Collections |');
  t('CTDA Collections');
  t('CTDA Technology |');
  t('Case Memorial Library Collections | ');
  t('Community Members | ');
  t('Connecticut College Collections |');
  t('Connecticut Historical Society');
  t('Connecticut Landmarks Collections |');
  t('Connecticut State Library');
  t('Connecticut State Museum of Natural History');
  t('Contact');
  t('Contact Us');
  t('Contact |');
  t('Deep River Public Library Collections |');
  t('Derby Public Library Collection |');
  t('Disclaimers, Privacy & Copyright');
  t('Enfield Public Library Collections |');
  t('Facebook');
  t('Fairfield Museum and History Center Collections |');
  t('Flickr');
  t('Florence Griswold Museum Collections |');
  t('Google Plus');
  t('Groton Public Library');
  t('Groton Public Library Collections |');
  t('HPL Collections | ');
  t('Hagaman Memorial Library Collections | ');
  t('Hartford Medical Society Collections |');
  t('Hartford Public Library');
  t('Home');
  t('Instagram');
  t('Ivoryton Library Association Collections |');
  t('Join');
  t('Kent Memorial Library Collections |');
  t('Linkedin');
  t('Litchfield Historical Society');
  t('Litchfield Historical Society Collections |');
  t('Login');
  t('Logout');
  t('Lyman Allyn Art Museum Collections |');
  t('Make contact');
  t('Mattatuck Museum Collections |');
  t('My Bookmarks');
  t('Mystic Arts Museum Collections |');
  t('Mystic Seaport Collections |');
  t('NBMAA Collections | ');
  t('New Haven Museum Collections | ');
  t('Newspapers of Connecticut');
  t('Norwalk Public Library Collection |');
  t('P.T. Barnum Digital Collection');
  t('P.T. Barnum Digital Collection Home |');
  t('People of CTDA |');
  t('Pinterest');
  t('Pintrest');
  t('Remembering WWI');
  t('Remembering WWI Collections |');
  t('Search');
  t('Slater Memorial Museum Collections |');
  t('Stonington Historical Society Collections |');
  t('Support the Libraries');
  t('Trinity College Collection  |  ');
  t('Tumblr');
  t('Twitter');
  t('UConn Archives Blog |');
  t('UConn Digital Collections |');
  t('University of Connecticut');
  t('View All Collections');
  t('Wadsworth Atheneum Collections |');
  t('Website');
  t('Website |');
  t('Wesbite');
  t('Windham Textile & History Museum Collections |');
  t('Woodbury Public Library Collections | ');
  t('Youtube');
  t('© University of Connecticut');

  return $menu_links;
}
