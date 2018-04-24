<?php
/**
 * @file
 * scsu_theme_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function scsu_theme_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-scsu-footer-menu-context_directories:http://directory.southernct.edu/.
  $menu_links['menu-scsu-footer-menu-context_directories:http://directory.southernct.edu/'] = array(
    'menu_name' => 'menu-scsu-footer-menu-context',
    'link_path' => 'http://directory.southernct.edu/',
    'router_path' => '',
    'link_title' => 'Directories',
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
      'identifier' => 'menu-scsu-footer-menu-context_directories:http://directory.southernct.edu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-scsu-footer-menu-context_feedback:https://form.jotform.com/53275880154964.
  $menu_links['menu-scsu-footer-menu-context_feedback:https://form.jotform.com/53275880154964'] = array(
    'menu_name' => 'menu-scsu-footer-menu-context',
    'link_path' => 'https://form.jotform.com/53275880154964',
    'router_path' => '',
    'link_title' => 'Feedback',
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
      'identifier' => 'menu-scsu-footer-menu-context_feedback:https://form.jotform.com/53275880154964',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-scsu-footer-menu-context_map--directions:http://southernct.edu/about/directions.html.
  $menu_links['menu-scsu-footer-menu-context_map--directions:http://southernct.edu/about/directions.html'] = array(
    'menu_name' => 'menu-scsu-footer-menu-context',
    'link_path' => 'http://southernct.edu/about/directions.html',
    'router_path' => '',
    'link_title' => 'Map / Directions',
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
      'identifier' => 'menu-scsu-footer-menu-context_map--directions:http://southernct.edu/about/directions.html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-scsu-footer-menu-social_facebook:https://www.facebook.com/southernct.
  $menu_links['menu-scsu-footer-menu-social_facebook:https://www.facebook.com/southernct'] = array(
    'menu_name' => 'menu-scsu-footer-menu-social',
    'link_path' => 'https://www.facebook.com/southernct',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
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
      'identifier' => 'menu-scsu-footer-menu-social_facebook:https://www.facebook.com/southernct',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-scsu-footer-menu-social_instagram:https://instagram.com/scsugram.
  $menu_links['menu-scsu-footer-menu-social_instagram:https://instagram.com/scsugram'] = array(
    'menu_name' => 'menu-scsu-footer-menu-social',
    'link_path' => 'https://instagram.com/scsugram',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'instagram-1',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
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
      'identifier' => 'menu-scsu-footer-menu-social_instagram:https://instagram.com/scsugram',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-scsu-footer-menu-social_twitter:https://twitter.com/scsu.
  $menu_links['menu-scsu-footer-menu-social_twitter:https://twitter.com/scsu'] = array(
    'menu_name' => 'menu-scsu-footer-menu-social',
    'link_path' => 'https://twitter.com/scsu',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'breadcrumb' => 0,
        'title_wrapper' => 1,
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
      'identifier' => 'menu-scsu-footer-menu-social_twitter:https://twitter.com/scsu',
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
  t('Directories');
  t('Facebook');
  t('Feedback');
  t('Instagram');
  t('Map / Directions');
  t('Twitter');

  return $menu_links;
}
