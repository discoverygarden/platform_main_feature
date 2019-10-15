<?php

/**
 * @file
 * platform_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function platform_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carnegie_library_image_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carnegie Library Image Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carnegie Library Image Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a title="Home" href="/">[field_image_block]</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'bf4935c0-cdce-47d2-967d-67dc72efc064';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['carnegie_library_image_block'] = array(
    t('Master'),
    t('Carnegie Library Image Block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a title="Home" href="/">[field_image_block]</a>'),
    t('Block'),
  );
  $export['carnegie_library_image_block'] = $view;

  $view = new view();
  $view->name = 'contact_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '329a2134-140a-4447-a59f-389948bef2ba';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['contact_information'] = array(
    t('Master'),
    t('Contact Information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['contact_information'] = $view;

  $view = new view();
  $view->name = 'featured_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Featured Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Collection Three';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'tn_cache' => 0,
    'dc.title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'tn_cache' => 0,
    'dc.title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'fadeout';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '800';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['random'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="owl-pager-count"></span>';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'JPG';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'owl_slider_thumbnail_explore';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:41016';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:41026';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:41113';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;

  /* Display: Featured Collection One */
  $handler = $view->new_display('block', 'Featured Collection One', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Featured Collection Two */
  $handler = $view->new_display('block', 'Featured Collection Two', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Two';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:43855';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:30060';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:23787';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:29532';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:38313';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:2531';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:3158';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_7']['id'] = 'PID_7';
  $handler->display->display_options['filters']['PID_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_7']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_7']['value'] = 'islandora:3711';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:3195';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:16800';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:30849';

  /* Display: Featured Collection Three */
  $handler = $view->new_display('block', 'Featured Collection Three', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'JPG';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'owl_slider_thumbnail_explore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:40748';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:7695';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:7704';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:8051';
  $handler->display->display_options['filters']['PID_3']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:3149';
  $handler->display->display_options['filters']['PID_5']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:65281';
  $handler->display->display_options['filters']['PID_6']['group'] = 1;
  $handler->display->display_options['filters']['PID_6']['exposed'] = TRUE;
  $handler->display->display_options['filters']['PID_6']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['PID_6']['expose']['identifier'] = 'pid_6';
  $handler->display->display_options['filters']['PID_6']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:37540';
  $handler->display->display_options['filters']['PID_8']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:40690';
  $handler->display->display_options['filters']['PID_9']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:22544';
  $handler->display->display_options['filters']['PID_10']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:62060';
  $handler->display->display_options['filters']['PID_11']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_12']['id'] = 'PID_12';
  $handler->display->display_options['filters']['PID_12']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_12']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_12']['value'] = 'islandora:68167';
  $handler->display->display_options['filters']['PID_12']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_14']['id'] = 'PID_14';
  $handler->display->display_options['filters']['PID_14']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_14']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_14']['value'] = 'islandora:2606';
  $handler->display->display_options['filters']['PID_14']['group'] = 1;

  /* Display: Featured Collection Four */
  $handler = $view->new_display('block', 'Featured Collection Four', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Four';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'JPG';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'owl_slider_thumbnail_explore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:76880';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:76883';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:76927';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:77002';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:77019';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:77026';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:77028';

  /* Display: Explore */
  $handler = $view->new_display('block', 'Explore', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Explore';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-collection-explore';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = '/islandora/object/islandora:root';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_owl-carousel-explore';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: Score */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  $handler->display->display_options['fields']['score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['score']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'owl_slider_thumbnail_explore';
  /* Field: Islandora Solr: fgs_label_ms */
  $handler->display->display_options['fields']['fgs_label_ms']['id'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_ms']['field'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_ms']['link_to_object'] = 1;

  /* Display: Featured Collection Five */
  $handler = $view->new_display('block', 'Featured Collection Five', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Five';

  /* Display: Featured Collection Six */
  $handler = $view->new_display('block', 'Featured Collection Six', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Six';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:68527';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:61543';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;
  $handler->display->display_options['filters']['PID_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['PID_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['PID_2']['expose']['identifier'] = 'pid_2';
  $handler->display->display_options['filters']['PID_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:61879';
  $handler->display->display_options['filters']['PID_3']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:62052';
  $handler->display->display_options['filters']['PID_4']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:56000';
  $handler->display->display_options['filters']['PID_5']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:56492';
  $handler->display->display_options['filters']['PID_6']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_7']['id'] = 'PID_7';
  $handler->display->display_options['filters']['PID_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_7']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_7']['value'] = 'islandora:61167';
  $handler->display->display_options['filters']['PID_7']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:56761';
  $handler->display->display_options['filters']['PID_9']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:32393';
  $handler->display->display_options['filters']['PID_10']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:14780';
  $handler->display->display_options['filters']['PID_11']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_12']['id'] = 'PID_12';
  $handler->display->display_options['filters']['PID_12']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_12']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_12']['value'] = 'islandora:61843';
  $handler->display->display_options['filters']['PID_12']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:51314';
  $handler->display->display_options['filters']['PID_8']['group'] = 1;

  /* Display: Featured Collection Seven */
  $handler = $view->new_display('block', 'Featured Collection Seven', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Seven';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:7747';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:8036';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:7780';
  $handler->display->display_options['filters']['PID_2']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:7712';
  $handler->display->display_options['filters']['PID_3']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:7931';
  $handler->display->display_options['filters']['PID_4']['group'] = 1;
  $handler->display->display_options['filters']['PID_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['PID_4']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['PID_4']['expose']['identifier'] = 'pid_4';
  $handler->display->display_options['filters']['PID_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:7900';
  $handler->display->display_options['filters']['PID_5']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:7786';
  $handler->display->display_options['filters']['PID_6']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_7']['id'] = 'PID_7';
  $handler->display->display_options['filters']['PID_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_7']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_7']['value'] = 'islandora:7985';
  $handler->display->display_options['filters']['PID_7']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:7813';
  $handler->display->display_options['filters']['PID_8']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:7868';
  $handler->display->display_options['filters']['PID_9']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:7979';
  $handler->display->display_options['filters']['PID_11']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:7971';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_12']['id'] = 'PID_12';
  $handler->display->display_options['filters']['PID_12']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_12']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_12']['value'] = 'islandora:7730';

  /* Display: Featured Collection Eight */
  $handler = $view->new_display('block', 'Featured Collection Eight', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Eight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_15']['id'] = 'PID_15';
  $handler->display->display_options['filters']['PID_15']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_15']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_15']['value'] = 'islandora:70049';
  $handler->display->display_options['filters']['PID_15']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:22502';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:70471';
  $handler->display->display_options['filters']['PID_3']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:70812';
  $handler->display->display_options['filters']['PID_6']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:22537';
  $handler->display->display_options['filters']['PID_9']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:24658';
  $handler->display->display_options['filters']['PID_10']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:24930';
  $handler->display->display_options['filters']['PID_4']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:22986';
  $handler->display->display_options['filters']['PID_5']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:23350';
  $handler->display->display_options['filters']['PID_8']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:23478';
  $handler->display->display_options['filters']['PID_11']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_13']['id'] = 'PID_13';
  $handler->display->display_options['filters']['PID_13']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_13']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_13']['value'] = 'islandora:24627';
  $handler->display->display_options['filters']['PID_13']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_12']['id'] = 'PID_12';
  $handler->display->display_options['filters']['PID_12']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_12']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_12']['value'] = 'islandora:24936';
  $handler->display->display_options['filters']['PID_12']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_14']['id'] = 'PID_14';
  $handler->display->display_options['filters']['PID_14']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_14']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_14']['value'] = 'islandora:25897';
  $handler->display->display_options['filters']['PID_14']['group'] = 1;

  /* Display: Featured Collection Nine */
  $handler = $view->new_display('block', 'Featured Collection Nine', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Nine';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:68983';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:68987';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:69024';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:69026';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:69038';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:69042';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:70012';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_7']['id'] = 'PID_7';
  $handler->display->display_options['filters']['PID_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_7']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_7']['value'] = 'islandora:70014';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:70113';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:70115';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:70335';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:70337';

  /* Display: Featured Collection Ten */
  $handler = $view->new_display('block', 'Featured Collection Ten', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collection Ten';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:62140';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:62128';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'islandora:62112';
  $handler->display->display_options['filters']['PID_3']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'islandora:50444';
  $handler->display->display_options['filters']['PID_4']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'islandora:50482';
  $handler->display->display_options['filters']['PID_5']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:50475';
  $handler->display->display_options['filters']['PID_6']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_7']['id'] = 'PID_7';
  $handler->display->display_options['filters']['PID_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_7']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_7']['value'] = 'islandora:50545';
  $handler->display->display_options['filters']['PID_7']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_8']['id'] = 'PID_8';
  $handler->display->display_options['filters']['PID_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_8']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_8']['value'] = 'islandora:60702';
  $handler->display->display_options['filters']['PID_8']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_9']['id'] = 'PID_9';
  $handler->display->display_options['filters']['PID_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_9']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_9']['value'] = 'islandora:50627';
  $handler->display->display_options['filters']['PID_9']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_10']['id'] = 'PID_10';
  $handler->display->display_options['filters']['PID_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_10']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_10']['value'] = 'islandora:50520';
  $handler->display->display_options['filters']['PID_10']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_11']['id'] = 'PID_11';
  $handler->display->display_options['filters']['PID_11']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_11']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_11']['value'] = 'islandora:50501';
  $handler->display->display_options['filters']['PID_11']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_12']['id'] = 'PID_12';
  $handler->display->display_options['filters']['PID_12']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_12']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_12']['value'] = 'islandora:50509';
  $handler->display->display_options['filters']['PID_12']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_13']['id'] = 'PID_13';
  $handler->display->display_options['filters']['PID_13']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_13']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_13']['value'] = 'islandora:50538';
  $handler->display->display_options['filters']['PID_13']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_14']['id'] = 'PID_14';
  $handler->display->display_options['filters']['PID_14']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_14']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_14']['value'] = 'islandora:62104';
  $handler->display->display_options['filters']['PID_14']['group'] = 1;
  $translatables['featured_collection'] = array(
    t('Master'),
    t('Featured Collection Three'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span class="owl-pager-count"></span>'),
    t('Featured Collection One'),
    t('Featured Collection'),
    t('Featured Collection Two'),
    t('Featured Collection Four'),
    t('Explore'),
    t('Score'),
    t('PID'),
    t('Featured Collection Five'),
    t('Featured Collection Six'),
    t('Featured Collection Seven'),
    t('Featured Collection Eight'),
    t('Featured Collection Nine'),
    t('Featured Collection Ten'),
  );
  $export['featured_collection'] = $view;

  $view = new view();
  $view->name = 'footer_logos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer Logos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer Logos';
  $handler->display->display_options['css_class'] = 'footer-logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '009933cb-8a1c-417f-9f0b-821e64b18689';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Image (field_image:title) */
  $handler->display->display_options['filters']['field_image_title']['id'] = 'field_image_title';
  $handler->display->display_options['filters']['field_image_title']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_title']['field'] = 'field_image_title';
  $handler->display->display_options['filters']['field_image_title']['value'] = 'Boulder Daily Camera logo';
  $handler->display->display_options['filters']['field_image_title']['group'] = 1;

  /* Display: City of Boulder Logo */
  $handler = $view->new_display('block', 'City of Boulder Logo', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a title="City of Boulder, Colorado" href="https://bouldercolorado.gov/">[field_image_block]</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '379d2261-818d-49be-bc8b-512126b15242';

  /* Display: BPL Logo */
  $handler = $view->new_display('block', 'BPL Logo', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a title="Boulder Library" href="https://boulderlibrary.org/">[field_image_block]</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );

  /* Display: Museum of Boulder Logo */
  $handler = $view->new_display('block', 'Museum of Boulder Logo', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '6c1a7fbc-4e28-4ad9-b021-3199ef134902';

  /* Display: Genealogical Society Logo */
  $handler = $view->new_display('block', 'Genealogical Society Logo', 'block_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'fcf3ee69-3b74-4973-8ce9-a1e1f16f6b8d';
  $translatables['footer_logos'] = array(
    t('Master'),
    t('Footer Logos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('City of Boulder Logo'),
    t('<a title="City of Boulder, Colorado" href="https://bouldercolorado.gov/">[field_image_block]</a>'),
    t('BPL Logo'),
    t('<a title="Boulder Library" href="https://boulderlibrary.org/">[field_image_block]</a>'),
    t('Museum of Boulder Logo'),
    t('Genealogical Society Logo'),
  );
  $export['footer_logos'] = $view;

  $view = new view();
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'desc-field';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'flexslider_full';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:74316';
  $handler->display->display_options['filters']['PID']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_class'] = 'desc-field';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'JPG';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'flexslider_full';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:78689';
  $handler->display->display_options['filters']['PID_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Front Page Owl Slideshow';
  $translatables['front_page_slideshow'] = array(
    t('Master'),
    t('Front Page Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Front Page Owl Slideshow'),
  );
  $export['front_page_slideshow'] = $view;

  $view = new view();
  $view->name = 'frontpage_solr_boxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Solr boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Solr boxes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;

  /* Display: Browse Collections */
  $handler = $view->new_display('block', 'Browse Collections', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'dc.title' => 'dc.title',
    'counter' => 'counter',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = 'Object TN';
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'YY';
  /* Field: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['fields']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['fields']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;

  /* Display: Featured Collections */
  $handler = $view->new_display('block', 'Featured Collections', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Featured Collections';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no featured collections.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['dc.description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['id'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['field'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['value'] = 'islandora:266';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';
  $translatables['frontpage_solr_boxes'] = array(
    t('Master'),
    t('Frontpage Solr boxes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Browse Collections'),
    t('Object TN'),
    t('RELS_EXT_isMemberOfCollection_uri_mt'),
    t('Featured Collections'),
    t('There are no featured collections.'),
    t('<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>'),
  );
  $export['frontpage_solr_boxes'] = $view;

  $view = new view();
  $view->name = 'grid_item_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Grid Item Metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grid Item Metadata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_label_ms */
  $handler->display->display_options['fields']['fgs_label_ms']['id'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_ms']['field'] = 'fgs_label_ms';
  $handler->display->display_options['fields']['fgs_label_ms']['label'] = 'Title';
  $handler->display->display_options['fields']['fgs_label_ms']['link_to_object'] = 1;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['grid_item_metadata'] = array(
    t('Master'),
    t('Grid Item Metadata'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('All'),
    t('Block'),
  );
  $export['grid_item_metadata'] = $view;

  $view = new view();
  $view->name = 'image_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: Image Block 1 */
  $handler = $view->new_display('block', 'Image Block 1', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="sites/all/modules/platform_main_feature/images/award_winning.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '15310bdf-5e1b-408b-8a7b-19ae5569eabd';

  /* Display: Footer logo */
  $handler = $view->new_display('block', 'Footer logo', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="/sites/all/modules/platform_main_feature/images/dgi-footer-logo.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '847549c5-2502-4938-8fbb-4ea35e2f4815';

  /* Display: Welcome Message */
  $handler = $view->new_display('block', 'Welcome Message', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '9c8f491e-d901-4fc8-9b5d-75490185bdd6';
  $translatables['image_blocks'] = array(
    t('Master'),
    t('Image blocks'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Image Block 1'),
    t('<img src="sites/all/modules/platform_main_feature/images/award_winning.png"/>'),
    t('Footer logo'),
    t('<img src="/sites/all/modules/platform_main_feature/images/dgi-footer-logo.png"/>'),
    t('Welcome Message'),
  );
  $export['image_blocks'] = $view;

  $view = new view();
  $view->name = 'list_item_metadata';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'List Item Metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List Item Metadata';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Browse';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a title="Browse" href="/islandora/object/[PID]">Browse</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Islandora Solr: bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms */
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['id'] = 'bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms';
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['field'] = 'bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms';
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bpl_mods_titleInfo_title_concatenated_nonSort_concatenated_subTitle_ms']['link_to_object'] = 1;
  /* Field: Islandora Solr: mods_identifier_non-marc-call-number_ms */
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['id'] = 'mods_identifier_non-marc-call-number_ms';
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['field'] = 'mods_identifier_non-marc-call-number_ms';
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['label'] = 'Call Number';
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_identifier_non-marc-call-number_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_originInfo_dateIssued_s */
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['id'] = 'mods_originInfo_dateIssued_s';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['field'] = 'mods_originInfo_dateIssued_s';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['label'] = 'Date';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_s']['link_to_object'] = 0;
  /* Field: Islandora Solr: bpl_mods_physicalDescription_extent_concatenated_unit_ms */
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['id'] = 'bpl_mods_physicalDescription_extent_concatenated_unit_ms';
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['field'] = 'bpl_mods_physicalDescription_extent_concatenated_unit_ms';
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['label'] = 'Contents';
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bpl_mods_physicalDescription_extent_concatenated_unit_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: bpl_mods_abstract_all_types_mt */
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['id'] = 'bpl_mods_abstract_all_types_mt';
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['field'] = 'bpl_mods_abstract_all_types_mt';
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['label'] = 'Description';
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bpl_mods_abstract_all_types_mt']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = '/islandora/object/!1';
  $translatables['list_item_metadata'] = array(
    t('Master'),
    t('List Item Metadata'),
    t('Browse'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a title="Browse" href="/islandora/object/[PID]">Browse</a>'),
    t('Call Number'),
    t('Contents'),
    t('Date'),
    t('Description'),
    t('All'),
    t('Block'),
    t('more'),
  );
  $export['list_item_metadata'] = $view;

  $view = new view();
  $view->name = 'object_description';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Object Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Object Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['mods_abstract_Summary_ms']['id'] = 'mods_abstract_Summary_ms';
  $handler->display->display_options['fields']['mods_abstract_Summary_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_abstract_Summary_ms']['field'] = 'mods_abstract_Summary_ms';
  $handler->display->display_options['fields']['mods_abstract_Summary_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_abstract_Summary_ms']['element_label_colon'] = FALSE;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['object_description'] = array(
    t('Master'),
    t('Object Description'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['object_description'] = $view;

  $view = new view();
  $view->name = 'platform_front_page';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Platform Front page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Sticky status */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Promoted to front page status */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $translatables['platform_front_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['platform_front_page'] = $view;

  $view = new view();
  $view->name = 'top_facet_searches';
  $view->description = 'Google Analytics integration, top facet searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Facet Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Facet Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchCategory' => 'searchCategory',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchCategory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal search dimensions: Site Search Category */
  $handler->display->display_options['fields']['facet']['id'] = 'facet';
  $handler->display->display_options['fields']['facet']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['facet']['field'] = 'searchCategory';
  $handler->display->display_options['fields']['facet']['label'] = 'Facet Terms';
  $handler->display->display_options['fields']['facet']['alter']['path'] = '[facet]';
  /* Field: Internal search metrics: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal search metrics: Results Pageviews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['top_facet_searches'] = array(
    t('Master'),
    t('Top Facet Searches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Facet Terms'),
    t('# of Searches'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['top_facet_searches'] = $view;

  $view = new view();
  $view->name = 'top_site_searches';
  $view->description = 'Google Analytics integration, top site searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Site Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Site Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchKeyword' => 'searchKeyword',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchKeyword' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal search dimensions: Search Term */
  $handler->display->display_options['fields']['search']['id'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['search']['field'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['label'] = 'Search Terms';
  /* Field: Internal search metrics: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal search metrics: Results Pageviews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Top Site Searches';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You need to configure Google Analytics to show the Top Site Searches';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $translatables['top_site_searches'] = array(
    t('Master'),
    t('Top Site Searches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Search Terms'),
    t('# of Searches'),
    t('.'),
    t(','),
    t('Block'),
    t('You need to configure Google Analytics to show the Top Site Searches'),
  );
  $export['top_site_searches'] = $view;

  return $export;
}
