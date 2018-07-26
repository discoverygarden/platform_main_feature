<?php
/**
 * @file
 * uconn_display_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uconn_display_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bd_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'BD Test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'BD Test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Islandora Solr: Score */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastream_info_MODS_FEDORA_URI_ms */
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_ms']['id'] = 'fedora_datastream_info_MODS_FEDORA_URI_ms';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_ms']['field'] = 'fedora_datastream_info_MODS_FEDORA_URI_ms';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastream_info_MODS_FEDORA_URI_mt */
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_mt']['id'] = 'fedora_datastream_info_MODS_FEDORA_URI_mt';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_mt']['field'] = 'fedora_datastream_info_MODS_FEDORA_URI_mt';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_FEDORA_URI_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastream_info_MODS_ID_ms */
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_ms']['id'] = 'fedora_datastream_info_MODS_ID_ms';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_ms']['field'] = 'fedora_datastream_info_MODS_ID_ms';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastream_info_MODS_ID_mt */
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_mt']['id'] = 'fedora_datastream_info_MODS_ID_mt';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_mt']['field'] = 'fedora_datastream_info_MODS_ID_mt';
  $handler->display->display_options['fields']['fedora_datastream_info_MODS_ID_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastreams_ms */
  $handler->display->display_options['fields']['fedora_datastreams_ms']['id'] = 'fedora_datastreams_ms';
  $handler->display->display_options['fields']['fedora_datastreams_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastreams_ms']['field'] = 'fedora_datastreams_ms';
  $handler->display->display_options['fields']['fedora_datastreams_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: fedora_datastreams_mt */
  $handler->display->display_options['fields']['fedora_datastreams_mt']['id'] = 'fedora_datastreams_mt';
  $handler->display->display_options['fields']['fedora_datastreams_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastreams_mt']['field'] = 'fedora_datastreams_mt';
  $handler->display->display_options['fields']['fedora_datastreams_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.identifier */
  $handler->display->display_options['fields']['dc.identifier']['id'] = 'dc.identifier';
  $handler->display->display_options['fields']['dc.identifier']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.identifier']['field'] = 'dc.identifier';
  $handler->display->display_options['fields']['dc.identifier']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_identifier_all_ms */
  $handler->display->display_options['fields']['mods_identifier_all_ms']['id'] = 'mods_identifier_all_ms';
  $handler->display->display_options['fields']['mods_identifier_all_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_identifier_all_ms']['field'] = 'mods_identifier_all_ms';
  $handler->display->display_options['fields']['mods_identifier_all_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_identifier_all_mt */
  $handler->display->display_options['fields']['mods_identifier_all_mt']['id'] = 'mods_identifier_all_mt';
  $handler->display->display_options['fields']['mods_identifier_all_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_identifier_all_mt']['field'] = 'mods_identifier_all_mt';
  $handler->display->display_options['fields']['mods_identifier_all_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_identifier_local_ss */
  $handler->display->display_options['fields']['mods_identifier_local_ss']['id'] = 'mods_identifier_local_ss';
  $handler->display->display_options['fields']['mods_identifier_local_ss']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_identifier_local_ss']['field'] = 'mods_identifier_local_ss';
  $handler->display->display_options['fields']['mods_identifier_local_ss']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_identifier_local_t */
  $handler->display->display_options['fields']['mods_identifier_local_t']['id'] = 'mods_identifier_local_t';
  $handler->display->display_options['fields']['mods_identifier_local_t']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_identifier_local_t']['field'] = 'mods_identifier_local_t';
  $handler->display->display_options['fields']['mods_identifier_local_t']['link_to_object'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bd-test';
  $export['bd_test'] = $view;

  $view = new view();
  $view->name = 'bibliomation_title_and_slogan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibliomation Title and Slogan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bibliomation Title and Slogan';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Institution Site Name */
  $handler->display->display_options['fields']['field_institution_site_name']['id'] = 'field_institution_site_name';
  $handler->display->display_options['fields']['field_institution_site_name']['table'] = 'field_data_field_institution_site_name';
  $handler->display->display_options['fields']['field_institution_site_name']['field'] = 'field_institution_site_name';
  $handler->display->display_options['fields']['field_institution_site_name']['label'] = '';
  $handler->display->display_options['fields']['field_institution_site_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution_site_name']['element_label_colon'] = FALSE;
  /* Field: Content: Institution Site Name Link */
  $handler->display->display_options['fields']['field_institution_site_name_link']['id'] = 'field_institution_site_name_link';
  $handler->display->display_options['fields']['field_institution_site_name_link']['table'] = 'field_data_field_institution_site_name_link';
  $handler->display->display_options['fields']['field_institution_site_name_link']['field'] = 'field_institution_site_name_link';
  $handler->display->display_options['fields']['field_institution_site_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_institution_site_name_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution_site_name_link']['element_label_colon'] = FALSE;
  /* Field: Content: Institution Site Slogan */
  $handler->display->display_options['fields']['field_institution_site_slogan']['id'] = 'field_institution_site_slogan';
  $handler->display->display_options['fields']['field_institution_site_slogan']['table'] = 'field_data_field_institution_site_slogan';
  $handler->display->display_options['fields']['field_institution_site_slogan']['field'] = 'field_institution_site_slogan';
  $handler->display->display_options['fields']['field_institution_site_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_institution_site_slogan']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution_site_slogan']['element_label_colon'] = FALSE;
  /* Field: Content: Institution Site Slogan Link */
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['id'] = 'field_institution_site_slogan_li';
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['table'] = 'field_data_field_institution_site_slogan_li';
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['field'] = 'field_institution_site_slogan_li';
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['label'] = '';
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_institution_site_slogan_li']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '      <div class="header__name-and-slogan" id="name-and-slogan">
          <h1 class="header__site-name" id="site-name">
            <a href="[field_institution_site_name_link]" target="_blank" title="[field_institution_site_name_link]" class="header__site-link" rel="home"><span>[field_institution_site_name]</span></a>
          </h1>
          <div class="header__site-slogan" id="site-slogan">
            <a href="[field_institution_site_slogan_li]" title="[field_institution_site_slogan]" class="header__site-slogan" rel="home"><span>[field_institution_site_slogan]</span></a>
          </div>
      </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
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
  $handler->display->display_options['filters']['uuid']['value'] = '6d2c13c7-9281-40e2-aaa2-9c9a217d4d1d';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Bibliomation Title and Slogan';
  $export['bibliomation_title_and_slogan'] = $view;

  $view = new view();
  $view->name = 'wwi_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'WWI Logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WWI Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;

  /* Display: WWI Logo */
  $handler = $view->new_display('block', 'WWI Logo', 'block');
  $handler->display->display_options['block_description'] = 'WWI Logo';
  $export['wwi_logo'] = $view;

  return $export;
}
