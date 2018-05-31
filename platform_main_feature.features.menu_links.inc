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

  // Exported menu link: main-menu_all-institutions:islandora.
  $menu_links['main-menu_all-institutions:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'All Institutions',
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
      'identifier' => 'main-menu_all-institutions:islandora',
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
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_about-:node/40.
  $menu_links['menu-avon-free-public-library-co_about-:node/40'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'node/40',
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
      'identifier' => 'menu-avon-free-public-library-co_about-:node/40',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-co_avon-free-public-library-collection--:http://ctda-staging1.lib.uconn.edu/islandora/object/150002%3AAvon.
  $menu_links['menu-avon-free-public-library-co_avon-free-public-library-collection--:http://ctda-staging1.lib.uconn.edu/islandora/object/150002%3AAvon'] = array(
    'menu_name' => 'menu-avon-free-public-library-co',
    'link_path' => 'http://ctda-staging1.lib.uconn.edu/islandora/object/150002%3AAvon',
    'router_path' => '',
    'link_title' => 'Avon Free Public Library Collection | ',
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
      'identifier' => 'menu-avon-free-public-library-co_avon-free-public-library-collection--:http://ctda-staging1.lib.uconn.edu/islandora/object/150002%3AAvon',
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
    'weight' => -3,
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
    'weight' => -6,
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
    'weight' => -10,
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
    'weight' => -6,
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
    'weight' => -4,
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
    'weight' => -8,
    'customized' => 1,
  );
  // Exported menu link: menu-avon-free-public-library-so_youtube:https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg.
  $menu_links['menu-avon-free-public-library-so_youtube:https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg'] = array(
    'menu_name' => 'menu-avon-free-public-library-so',
    'link_path' => 'https://www.youtube.com/channel/UC5AvnDd-eJCCS8WdxYODErg',
    'router_path' => '',
    'link_title' => 'YouTube',
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
    'weight' => -2,
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
  // Exported menu link: menu-bellingtons-social-media_facebook:https://www.facebook.com/.
  $menu_links['menu-bellingtons-social-media_facebook:https://www.facebook.com/'] = array(
    'menu_name' => 'menu-bellingtons-social-media',
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
      'identifier' => 'menu-bellingtons-social-media_facebook:https://www.facebook.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bellingtons-social-media_pinterest:https://www.pinterest.ca/.
  $menu_links['menu-bellingtons-social-media_pinterest:https://www.pinterest.ca/'] = array(
    'menu_name' => 'menu-bellingtons-social-media',
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
      'identifier' => 'menu-bellingtons-social-media_pinterest:https://www.pinterest.ca/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bellingtons-social-media_twitter:https://twitter.com.
  $menu_links['menu-bellingtons-social-media_twitter:https://twitter.com'] = array(
    'menu_name' => 'menu-bellingtons-social-media',
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
      'identifier' => 'menu-bellingtons-social-media_twitter:https://twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bellingtons-social-media_youtube:https://www.youtube.com.
  $menu_links['menu-bellingtons-social-media_youtube:https://www.youtube.com'] = array(
    'menu_name' => 'menu-bellingtons-social-media',
    'link_path' => 'https://www.youtube.com',
    'router_path' => '',
    'link_title' => 'YouTube',
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
      'identifier' => 'menu-bellingtons-social-media_youtube:https://www.youtube.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: menu-browse-content_root-collection:islandora.
  $menu_links['menu-browse-content_root-collection:islandora'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Root Collection',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-browse-content_root-collection:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-csl-contextual-menu_about:node/34.
  $menu_links['menu-csl-contextual-menu_about:node/34'] = array(
    'menu_name' => 'menu-csl-contextual-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'About',
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
      'identifier' => 'menu-csl-contextual-menu_about:node/34',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-csl-contextual-menu_home:islandora/object/30002:csl.
  $menu_links['menu-csl-contextual-menu_home:islandora/object/30002:csl'] = array(
    'menu_name' => 'menu-csl-contextual-menu',
    'link_path' => 'islandora/object/30002:csl',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Home',
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
      'identifier' => 'menu-csl-contextual-menu_home:islandora/object/30002:csl',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-default-institution-context_home--:http://ctda-staging1.lib.uconn.edu/islandora/object/Islandora%3Agreg.
  $menu_links['menu-default-institution-context_home--:http://ctda-staging1.lib.uconn.edu/islandora/object/Islandora%3Agreg'] = array(
    'menu_name' => 'menu-default-institution-context',
    'link_path' => 'http://ctda-staging1.lib.uconn.edu/islandora/object/Islandora%3Agreg',
    'router_path' => '',
    'link_title' => 'Home | ',
    'options' => array(
      'identifier' => 'menu-default-institution-context_home--:http://ctda-staging1.lib.uconn.edu/islandora/object/Islandora%3Agreg',
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
  // Exported menu link: menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/.
  $menu_links['menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://lib.uconn.edu/services/research/research-data/archiving/',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu.
  $menu_links['menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'mailto:researchdata@lib.uconn.edu',
    'router_path' => '',
    'link_title' => 'Feedback',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
  // Exported menu link: menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/.
  $menu_links['menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://lib.uconn.edu/services/research/research-data/archiving/',
    'router_path' => '',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_submit:http://research.lib.uconn.edu/submit.
  $menu_links['menu-footer-menu_submit:http://research.lib.uconn.edu/submit'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://research.lib.uconn.edu/submit',
    'router_path' => '',
    'link_title' => 'Submit',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_submit:http://research.lib.uconn.edu/submit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
  // Exported menu link: user-menu_a-to-z-index:http://uconn.edu/azindex.php.
  $menu_links['user-menu_a-to-z-index:http://uconn.edu/azindex.php'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://uconn.edu/azindex.php',
    'router_path' => '',
    'link_title' => 'A to Z Index',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'sort-alphabet',
        'wrapper' => 'span',
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
      'identifier' => 'user-menu_a-to-z-index:http://uconn.edu/azindex.php',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_search:http://uconn.edu/search.
  $menu_links['user-menu_search:http://uconn.edu/search'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'http://uconn.edu/search',
    'router_path' => '',
    'link_title' => 'Search',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'search',
        'wrapper' => 'span',
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
      'identifier' => 'user-menu_search:http://uconn.edu/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A to Z Index');
  t('About');
  t('About this site');
  t('About |');
  t('All Institutions');
  t('Avon Free Public Library Collection | ');
  t('Browse repository');
  t('Contact');
  t('Disclaimers, Privacy & Copyright');
  t('Facebook');
  t('Feedback');
  t('Home');
  t('Home | ');
  t('Instagram');
  t('Log out');
  t('Login');
  t('Logout');
  t('Make contact');
  t('My Bookmarks');
  t('Pinterest');
  t('Pintrest');
  t('Policies');
  t('Root Collection');
  t('Search');
  t('Submit');
  t('Support the Libraries');
  t('Twitter');
  t('User account');
  t('Website |');
  t('YouTube');
  t('© University of Connecticut');

  return $menu_links;
}
