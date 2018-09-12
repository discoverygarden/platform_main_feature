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
  $view->name = 'header_logos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Logos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hangten Collection Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'f3b4e475-850f-4fae-a294-a001eccdd3dc';

  /* Display: CSL Header Logo */
  $handler = $view->new_display('block', 'CSL Header Logo', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSL Header Logo';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['uuid']['value'] = '43743804-49a4-4d69-a868-03f8c6255ae5';
  $handler->display->display_options['block_description'] = 'CSL Header Logo';
  $export['header_logos'] = $view;

  $view = new view();
  $view->name = 'manage_user_landing_page_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage User Landing Page Header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage User Landing Page Header';
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
  $handler->display->display_options['filters']['uuid']['value'] = '00b2bb07-167a-4fdf-a390-a9b280f2d1e3';

  /* Display: Manage User Landing Page Header */
  $handler = $view->new_display('block', 'Manage User Landing Page Header', 'block');
  $handler->display->display_options['block_description'] = 'Manage User Landing Page Header';
  $export['manage_user_landing_page_header'] = $view;

  $view = new view();
  $view->name = 'mods_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Mods Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mods Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = 'title';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['fields']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['fields']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['fields']['RELS_EXT_hasModel_uri_ms']['label'] = 'contentModel';
  $handler->display->display_options['fields']['RELS_EXT_hasModel_uri_ms']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'uri';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '/islandora/object/[PID]/datastream/MODS/view';
  /* Field: Islandora Solr: fgs_lastModifiedDate_dt */
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['id'] = 'fgs_lastModifiedDate_dt';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['field'] = 'fgs_lastModifiedDate_dt';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['label'] = 'lastModified';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['date_format'] = 'custom';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['custom_date_format'] = 'Y-m-d H:i:s';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/islandora:binaryObjectCModel';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_1']['id'] = 'RELS_EXT_hasModel_uri_ms_1';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_1']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_1']['value'] = 'info:fedora/islandora:bookCModel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_2']['id'] = 'RELS_EXT_hasModel_uri_ms_2';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_2']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_2']['value'] = 'info:fedora/islandora:compoundCModel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_3']['id'] = 'RELS_EXT_hasModel_uri_ms_3';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_3']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_3']['value'] = 'info:fedora/islandora:sp_basic_image';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_4']['id'] = 'RELS_EXT_hasModel_uri_ms_4';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_4']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_4']['value'] = 'info:fedora/islandora:sp_document';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_5']['id'] = 'RELS_EXT_hasModel_uri_ms_5';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_5']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_5']['value'] = 'info:fedora/islandora:sp-audioCModel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_6']['id'] = 'RELS_EXT_hasModel_uri_ms_6';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_6']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_6']['value'] = 'info:fedora/islandora:manuscriptCModel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_7']['id'] = 'RELS_EXT_hasModel_uri_ms_7';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_7']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_7']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_7']['value'] = 'info:fedora/islandora:newspaperCModel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_8']['id'] = 'RELS_EXT_hasModel_uri_ms_8';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_8']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_8']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_8']['value'] = 'info:fedora/islandora:sp_large_image_cmodel';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_9']['id'] = 'RELS_EXT_hasModel_uri_ms_9';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_9']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_9']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_9']['value'] = 'info:fedora/islandora:sp_pdf';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_10']['id'] = 'RELS_EXT_hasModel_uri_ms_10';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_10']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_10']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms_10']['value'] = 'info:fedora/islandora:sp_videoCModel';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'mods';
  $handler->display->display_options['style_options']['item_node'] = 'mod';
  $handler->display->display_options['path'] = 'mods-export/xml';
  $export['mods_export'] = $view;

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
