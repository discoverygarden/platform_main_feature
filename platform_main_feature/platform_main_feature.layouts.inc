<?php
/**
 * @file
 * platform_main_feature.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function platform_main_feature_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'islandora_search_and_content_page';
  $layout->admin_title = 'Islandora Search and Content Page';
  $layout->admin_description = 'Layout to be used with islandora object existing pages and islandora search existing pages.';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
          3 => 3,
          4 => 4,
          5 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'test_region',
          1 => 'region_right',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'page_views',
        ),
        'parent' => 'main',
        'class' => 'panel-no-bottom-padding',
        'hide_empty' => 1,
      ),
      'test_region' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '24.961156443736193',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Branding Description',
        'width' => '75.03884355626381',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_region',
        ),
        'parent' => 'main',
        'class' => 'header-layout-content',
        'hide_empty' => 0,
      ),
      'header_region' => array(
        'type' => 'region',
        'title' => 'Header Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'page_views' => array(
        'type' => 'region',
        'title' => 'Page Views',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'collection-context',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'contextual_content',
        ),
        'parent' => 'main',
        'class' => 'institute-collection-context',
        'hide_empty' => 0,
      ),
      'contextual_content' => array(
        'type' => 'region',
        'title' => 'Contextual Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first_sidebar_left',
          1 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => '74.98196248196248',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'first_sidebar_left' => array(
        'type' => 'region',
        'title' => 'First Sidebar Left',
        'width' => '25.018037518037517',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['islandora_search_and_content_page'] = $layout;

  return $export;
}
