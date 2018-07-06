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
  $view->name = 'about_page_most_viewed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'About Page Most Viewed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bridgeport most viewed';
  $handler->display->display_options['css_class'] = 'about-recent-additions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Quick Look</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/islandora:13">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '110002:Admin001';

  /* Display: Bridgeport Most Viewed */
  $handler = $view->new_display('block', 'Bridgeport Most Viewed', 'block');
  $handler->display->display_options['block_description'] = 'Bridgeport Most Viewed';

  /* Display: Hartford Public Library most viewed */
  $handler = $view->new_display('block', 'Hartford Public Library most viewed', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Public Library most viewed';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Recently Added to the Hartford Public Library Collection</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/50002:AdminJME02">More<i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '50002:AdminJME02';
  $handler->display->display_options['block_description'] = 'Hartford Public Library most viewed';
  $export['about_page_most_viewed'] = $view;

  $view = new view();
  $view->name = 'about_page_recently_added';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'About Page Recently Added';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bridgeport most viewed';
  $handler->display->display_options['css_class'] = 'about-recent-additions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Recently Added</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/islandora:13">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '110002:Admin001';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['exposed'] = TRUE;
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_mt';

  /* Display: Bridgeport Recently Added */
  $handler = $view->new_display('block', 'Bridgeport Recently Added', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bridgeport Recently Added';
  $handler->display->display_options['block_description'] = 'Bridgeport Recently Added';

  /* Display: Hartford Public Library Recently Added */
  $handler = $view->new_display('block', 'Hartford Public Library Recently Added', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Public Library Recently Added';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Recently Added</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/50002:AdminJME02">More<i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '50002:AdminJME02';
  $handler->display->display_options['block_description'] = 'Hartford Public Library Recently Added';

  /* Display: ASD Recently Added */
  $handler = $view->new_display('block', 'ASD Recently Added', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ASD Recently Added';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Recently Added</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/50002:AdminJME02">More<i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '50002:AdminJME02';
  $handler->display->display_options['block_description'] = 'ASD Recently Added';

  /* Display: Avon Free Public Library Recently Added */
  $handler = $view->new_display('block', 'Avon Free Public Library Recently Added', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Avon Free Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/150002:001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '150002:001';
  $handler->display->display_options['block_description'] = 'Avon Free Public Library Recently Added';

  /* Display: Bethel Public Library Recently Added */
  $handler = $view->new_display('block', 'Bethel Public Library Recently Added', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bethel Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/140006:Bethel">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '140006:Bethel';
  $handler->display->display_options['block_description'] = 'Bethel Public Library Recently Added';

  /* Display: Bibliomation Recently Added */
  $handler = $view->new_display('block', 'Bibliomation Recently Added', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bibliomation Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/140002:Biblio">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '140002:Biblio';
  $handler->display->display_options['block_description'] = 'Bibliomation Recently Added';

  /* Display: Bill Memorial Library Recently Added */
  $handler = $view->new_display('block', 'Bill Memorial Library Recently Added', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bill Memorial Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/350002:BillMemorialLibrary">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '350002:BillMemorialLibrary';
  $handler->display->display_options['block_description'] = 'Bill Memorial Library Recently Added';

  /* Display: Case Memorial Library Recently Added */
  $handler = $view->new_display('block', 'Case Memorial Library Recently Added', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Case Memorial Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/320002:AdminJME">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '320002:AdminJME';
  $handler->display->display_options['block_description'] = 'Case Memorial Library Recently Added';

  /* Display: Connecticut Historical Society Recently Added */
  $handler = $view->new_display('block', 'Connecticut Historical Society Recently Added', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connecticut Historical Society Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/40002:CHS001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '40002:CHS001';
  $handler->display->display_options['block_description'] = 'Connecticut Historical Society Recently Added';

  /* Display: Connecticut Landmarks Recently Added */
  $handler = $view->new_display('block', 'Connecticut Landmarks Recently Added', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connecticut Landmarks Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/370002:CTLandmarksJME">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '370002:CTLandmarksJME';
  $handler->display->display_options['block_description'] = 'Connecticut Landmarks Recently Added';

  /* Display: Connecticut State Museum of Natural History Recently Added */
  $handler = $view->new_display('block', 'Connecticut State Museum of Natural History Recently Added', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connecticut State Museum of Natural History Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/20006:CTSMNH">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '20006:CTSMNH';
  $handler->display->display_options['block_description'] = 'Connecticut State Museum of Natural History Recently Added';

  /* Display: Enfield Public Library Recently Added */
  $handler = $view->new_display('block', 'Enfield Public Library Recently Added', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Enfield Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/430002:EnfieldPublic">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '430002:EnfieldPublic';
  $handler->display->display_options['block_description'] = 'Enfield Public Library Recently Added';

  /* Display: Fairfield Museum & History Center Recently Added */
  $handler = $view->new_display('block', 'Fairfield Museum & History Center Recently Added', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fairfield Museum & History Center Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/80002:001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '80002:001';
  $handler->display->display_options['block_description'] = 'Fairfield Museum & History Center Recently Added';

  /* Display: Florence Griswold Museum Recently Added */
  $handler = $view->new_display('block', 'Florence Griswold Museum Recently Added', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Florence Griswold Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/270002:FGM001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '270002:FGM001';
  $handler->display->display_options['block_description'] = 'Florence Griswold Museum Recently Added';

  /* Display: Groton Public Library Recently Added */
  $handler = $view->new_display('block', 'Groton Public Library Recently Added', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groton Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/180002:GPL001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '180002:GPL001';
  $handler->display->display_options['block_description'] = 'Groton Public Library Recently Added';

  /* Display: Hagaman Memorial Library Recently Added */
  $handler = $view->new_display('block', 'Hagaman Memorial Library Recently Added', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hagaman Memorial Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/140019:Hagaman">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '140019:Hagaman';
  $handler->display->display_options['block_description'] = 'Hagaman Memorial Library Recently Added';

  /* Display: Hartford Medical Society Recently Added */
  $handler = $view->new_display('block', 'Hartford Medical Society Recently Added', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Medical Society Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/310002:AdminJME">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '310002:AdminJME';
  $handler->display->display_options['block_description'] = 'Hartford Medical Society Recently Added';

  /* Display: Ivoryton Library Association Recently Added */
  $handler = $view->new_display('block', 'Ivoryton Library Association Recently Added', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ivoryton Library Association Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/220002:ILA001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '220002:ILA001';
  $handler->display->display_options['block_description'] = 'Ivoryton Library Association Recently Added';

  /* Display: Kent Memorial Library Recently Added */
  $handler = $view->new_display('block', 'Kent Memorial Library Recently Added', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kent Memorial Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/140026:kentSuffield">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '140026:kentSuffield';
  $handler->display->display_options['block_description'] = 'Kent Memorial Library Recently Added';

  /* Display: Litchfield Historical Society Recently Added */
  $handler = $view->new_display('block', 'Litchfield Historical Society Recently Added', 'block_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Litchfield Historical Society Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/400002:LHS">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '400002:LHS';
  $handler->display->display_options['block_description'] = 'Litchfield Historical Society Recently Added';

  /* Display: Lyman Allyn Art Museum Recently Added */
  $handler = $view->new_display('block', 'Lyman Allyn Art Museum Recently Added', 'block_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lyman Allyn Art Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/170002:LAAM001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '170002:LAAM001';
  $handler->display->display_options['block_description'] = 'Lyman Allyn Art Museum Recently Added';

  /* Display: Mattatuck Museum Recently Added */
  $handler = $view->new_display('block', 'Mattatuck Museum Recently Added', 'block_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mattatuck Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/260002:MM001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '260002:MM001';
  $handler->display->display_options['block_description'] = 'Mattatuck Museum Recently Added';

  /* Display: Mystic Arts Center Recently Added */
  $handler = $view->new_display('block', 'Mystic Arts Center Recently Added', 'block_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Arts Center Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/200002:MAC001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '200002:MAC001';
  $handler->display->display_options['block_description'] = 'Mystic Arts Center Recently Added';

  /* Display: Mystic Seaport Recently Added */
  $handler = $view->new_display('block', 'Mystic Seaport Recently Added', 'block_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Seaport Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/70002:AdminJME">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '70002:AdminJME';
  $handler->display->display_options['block_description'] = 'Mystic Seaport Recently Added';

  /* Display: New Britain Museum of American Art Recently Added */
  $handler = $view->new_display('block', 'New Britain Museum of American Art Recently Added', 'block_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Britain Museum of American Art Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/210002:NBMAA">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '210002:NBMAA';
  $handler->display->display_options['block_description'] = 'New Britain Museum of American Art Recently Added';

  /* Display: New Haven Museum Recently Added */
  $handler = $view->new_display('block', 'New Haven Museum Recently Added', 'block_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Haven Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/280002:NHM001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '280002:NHM001';
  $handler->display->display_options['block_description'] = 'New Haven Museum Recently Added';

  /* Display: Norwalk Public Library Recently Added */
  $handler = $view->new_display('block', 'Norwalk Public Library Recently Added', 'block_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Norwalk Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/450002:NPL">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '450002:NPL';
  $handler->display->display_options['block_description'] = 'Norwalk Public Library Recently Added';

  /* Display: Slater Memorial Museum Recently Added */
  $handler = $view->new_display('block', 'Slater Memorial Museum Recently Added', 'block_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slater Memorial Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/230002:SMM001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '230002:SMM001';
  $handler->display->display_options['block_description'] = 'Slater Memorial Museum Recently Added';

  /* Display: Stonington Historical Society Recently Added */
  $handler = $view->new_display('block', 'Stonington Historical Society Recently Added', 'block_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stonington Historical Society Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/240002:SHS001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '240002:SHS001';
  $handler->display->display_options['block_description'] = 'Stonington Historical Society Recently Added';

  /* Display: Wadsworth Atheneum Museum of Art Recently Added */
  $handler = $view->new_display('block', 'Wadsworth Atheneum Museum of Art Recently Added', 'block_29');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wadsworth Atheneum Museum of Art Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/250002:WA001">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '250002:WA001';
  $handler->display->display_options['block_description'] = 'Wadsworth Atheneum Museum of Art Recently Added';

  /* Display: Windham Textile & History Museum Recently Added */
  $handler = $view->new_display('block', 'Windham Textile & History Museum Recently Added', 'block_30');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Windham Textile & History Museum Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/360002:AdminJEWTM">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '360002:AdminJEWTM';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['exposed'] = TRUE;
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['block_description'] = 'Windham Textile & History Museum Recently Added';

  /* Display: Woodbury Public Library Recently Added */
  $handler = $view->new_display('block', 'Woodbury Public Library Recently Added', 'block_31');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Woodbury Public Library Recently Added';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/140065:Woodbury">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '140065:Woodbury';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['exposed'] = TRUE;
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['identifier'] = 'rels_ext_ismemberofcollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['block_description'] = 'Woodbury Public Library Recently Added';
  $export['about_page_recently_added'] = $view;

  $view = new view();
  $view->name = 'all_institutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'All Institutions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Institutions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'all_institutions_node_view:page';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'institution';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['fields']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['label'] = '';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_createdDate_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['fgs_createdDate_dt']['date_format'] = 'custom';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['custom_date_format'] = 'd/m/Y';
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:sp_large_image_collection';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'islandora:sp_basic_image_collection';
  $handler->display->display_options['filters']['PID_2']['group'] = 2;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:ondemand_background_image_collection';
  $handler->display->display_options['filters']['PID_1']['group'] = 3;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'all-institutions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Institutions';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['all_institutions'] = $view;

  $view = new view();
  $view->name = 'all_institutions_node_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Institutions Node View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Institutions Node View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c22f8bdb-9a5f-497a-9f98-cab24ef272b8';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-institutions-node-view';
  $export['all_institutions_node_view'] = $view;

  $view = new view();
  $view->name = 'bellington_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Site Slogans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bellington Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c8de4fb2-ba0e-4d42-ab9a-74654cf47f78';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Bibliomation Slogan */
  $handler = $view->new_display('block', 'Bibliomation Slogan', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bibliomation Slogan';
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
  $handler->display->display_options['filters']['uuid']['value'] = '79ec7dc1-d168-4e2d-b2ef-12c265859966';
  $handler->display->display_options['block_description'] = 'Bibliomation Slogan';
  $export['bellington_archive_info'] = $view;

  $view = new view();
  $view->name = 'bellington_collection_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Institution Collection Logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Digital Collections Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/islandora:root2" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
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
  $handler->display->display_options['filters']['uuid']['value'] = '694c072c-3fca-474f-8d3b-92c38051e175';

  /* Display: Bellington Logo */
  $handler = $view->new_display('block', 'Bellington Logo', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bellington Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c8de4fb2-ba0e-4d42-ab9a-74654cf47f78';

  /* Display: UConn Logo */
  $handler = $view->new_display('block', 'UConn Logo', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'UConn Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b7bf5104-d103-43e8-b686-97a72150dff7';

  /* Display: Digital Collections */
  $handler = $view->new_display('block', 'Digital Collections', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Digital Collections Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '2da4b953-9a82-47fc-918a-fe31e027a05c';

  /* Display: Digital Collections Logo */
  $handler = $view->new_display('block', 'Digital Collections Logo', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Digital Collections Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Header Logo */
  $handler->display->display_options['fields']['field_institution_header_logo']['id'] = 'field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['table'] = 'field_data_field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['field'] = 'field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_header_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_header_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_header_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '2da4b953-9a82-47fc-918a-fe31e027a05c';

  /* Display: Connecticut Digital Archive */
  $handler = $view->new_display('block', 'Connecticut Digital Archive', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CTDA Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Header Logo */
  $handler->display->display_options['fields']['field_institution_header_logo']['id'] = 'field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['table'] = 'field_data_field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['field'] = 'field_institution_header_logo';
  $handler->display->display_options['fields']['field_institution_header_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_header_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_header_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_header_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'bc455c26-912a-4111-8668-08baddddb536';

  /* Display: Lormacks Logo */
  $handler = $view->new_display('block', 'Lormacks Logo', 'block_5');
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c239f1bb-4a8c-47fd-bf2d-86d2ba8ddf75';

  /* Display: Hartford Public Library Logo */
  $handler = $view->new_display('block', 'Hartford Public Library Logo', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/50002:AdminJME02" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '89e4fef8-c501-439e-bc8d-347aba32e0cf';
  $handler->display->display_options['block_description'] = 'Hartford Public Library Logo';

  /* Display: NBMAA Logo */
  $handler = $view->new_display('block', 'NBMAA Logo', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'NBMAA Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/210002:NBMAA" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '961a3992-ccd4-413a-8123-e0d436de9238';
  $handler->display->display_options['block_description'] = 'NBMAA Logo';

  /* Display: ASD Logo */
  $handler = $view->new_display('block', 'ASD Logo', 'block_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ASD Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/290002:ASDAdminJME" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '59f9ceea-d436-4b5f-90aa-f69598f2ca83';
  $handler->display->display_options['block_description'] = 'ASD Logo';

  /* Display: Avon Free Public Library Logo */
  $handler = $view->new_display('block', 'Avon Free Public Library Logo', 'block_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Avon Free Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/150002:001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '148270a8-3d3d-4a64-a7b8-d4654d3af01c';
  $handler->display->display_options['block_description'] = 'Avon Free Public Library Logo';

  /* Display: Barnum Museum Logo */
  $handler = $view->new_display('block', 'Barnum Museum Logo', 'block_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Barnum Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/60002:BarnumMuseum" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '176d1903-0e60-4876-98cb-bda611ea5ab3';
  $handler->display->display_options['block_description'] = 'Barnum Museum Logo';

  /* Display: Bibliomation Logo */
  $handler = $view->new_display('block', 'Bibliomation Logo', 'block_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bibliomation Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/140002:Biblio" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '79ec7dc1-d168-4e2d-b2ef-12c265859966';
  $handler->display->display_options['block_description'] = 'Bibliomation Logo';

  /* Display: Bethel Public Library Logo */
  $handler = $view->new_display('block', 'Bethel Public Library Logo', 'block_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bethel Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/140006:Bethel" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'f3a2d39d-9039-4ce3-a057-3b3b2e471be1';
  $handler->display->display_options['block_description'] = 'Bethel Public Library Logo';

  /* Display: Bill Memorial Library Logo */
  $handler = $view->new_display('block', 'Bill Memorial Library Logo', 'block_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bill Memorial Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/350002:BillMemorialLibrary" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '24d58143-216a-446a-8e44-fa0b3d192677';
  $handler->display->display_options['block_description'] = 'Bill Memorial Library Logo';

  /* Display: Bridgeport History Center Logo */
  $handler = $view->new_display('block', 'Bridgeport History Center Logo', 'block_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bridgeport History Center Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/110002:Admin001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'eba864b0-baa3-4a17-a22b-da5b89de901d';
  $handler->display->display_options['block_description'] = 'Bridgeport History Center Logo';

  /* Display: Case Memorial Library Logo */
  $handler = $view->new_display('block', 'Case Memorial Library Logo', 'block_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Case Memorial Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/320002:AdminJME" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'df2c996f-f9c4-42f7-bd09-a75cd1ab998a';
  $handler->display->display_options['block_description'] = 'Case Memorial Library';

  /* Display: CAHSL Logo */
  $handler = $view->new_display('block', 'CAHSL Logo', 'block_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CASHL Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/460002:CAHSL" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c2a3409d-f31b-4903-a529-b7d5decbb92c';
  $handler->display->display_options['block_description'] = 'CASHL Logo';

  /* Display: Conn College Logo */
  $handler = $view->new_display('block', 'Conn College Logo', 'block_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conn College Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/490002:ConnCollege" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b606bb18-fb24-410d-898b-fe402ad82211';
  $handler->display->display_options['block_description'] = 'Conn College';

  /* Display: CHS Logo */
  $handler = $view->new_display('block', 'CHS Logo', 'block_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CHS Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/40002:CHS001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '5e5d6c93-67df-421e-a5ff-2a0780627c59';
  $handler->display->display_options['block_description'] = 'CHS Logo';

  /* Display: Connecticut Landmarks Logo */
  $handler = $view->new_display('block', 'Connecticut Landmarks Logo', 'block_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connecticut Landmarks Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/370002:CTLandmarksJME" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b9561a26-15c2-4375-ac09-eb6f57adc146';
  $handler->display->display_options['block_description'] = 'Connecticut Landmarks Logo';

  /* Display: CT State Museum of Natural History Logo */
  $handler = $view->new_display('block', 'CT State Museum of Natural History Logo', 'block_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CT State Museum of Natural History Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/20006:CTSMNH" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '1d16fd1d-0ef8-42a1-a280-0e44de54f80f';
  $handler->display->display_options['block_description'] = 'CT State Museum of Natural History Logo';

  /* Display: Enfield Public Library Logo */
  $handler = $view->new_display('block', 'Enfield Public Library Logo', 'block_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Enfield Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/430002:EnfieldPublic" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '16c8301d-d515-44b6-97fc-de626aaebd80';
  $handler->display->display_options['block_description'] = 'Enfield Public Library Logo';

  /* Display: Fairfield Museum & History Center Logo */
  $handler = $view->new_display('block', 'Fairfield Museum & History Center Logo', 'block_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fairfield Museum & History Center Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/80002:001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c9de6ae3-17dd-4c74-bae2-689aee68fd97';
  $handler->display->display_options['block_description'] = 'Fairfield Museum & History Center Logo';

  /* Display: Florence Griswold Museum Logo */
  $handler = $view->new_display('block', 'Florence Griswold Museum Logo', 'block_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Florence Griswold Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/270002:FGM001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'aa2ef5c9-09bd-4b1e-bb3a-0a9fc7e005ee';
  $handler->display->display_options['block_description'] = 'Florence Griswold Museum Logo';

  /* Display: Groton Public Library Logo */
  $handler = $view->new_display('block', 'Groton Public Library Logo', 'block_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groton Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/180002:GPL001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '76ce18bd-d017-45b3-8a17-7ecbabaa85ac';
  $handler->display->display_options['block_description'] = 'Groton Public Library Logo';

  /* Display: Hagaman Memorial Library Logo */
  $handler = $view->new_display('block', 'Hagaman Memorial Library Logo', 'block_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hagaman Memorial Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/140019:Hagaman" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'da0665b2-360d-4def-87ea-e95edf3d59ab';
  $handler->display->display_options['block_description'] = 'Hagaman Memorial Library Logo';

  /* Display: Hartford Medical Society Logo */
  $handler = $view->new_display('block', 'Hartford Medical Society Logo', 'block_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Medical Society Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/310002:AdminJME" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b9621c3b-47e8-4e82-acd5-ceb892207a48';
  $handler->display->display_options['block_description'] = 'Hartford Medical Society Logo';

  /* Display: Ivoryton Library Association Logo */
  $handler = $view->new_display('block', 'Ivoryton Library Association Logo', 'block_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ivoryton Library Association Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/220002:ILA001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '7533e6f1-692a-41f8-a9cc-d9461ce9550e';
  $handler->display->display_options['block_description'] = 'Ivoryton Library Association Logo';

  /* Display: Kent Memorial Library Logo */
  $handler = $view->new_display('block', 'Kent Memorial Library Logo', 'block_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kent Memorial Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/140026:kentSuffield" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c9c1b047-167a-42cf-9b91-fd2ed85d73e2';
  $handler->display->display_options['filters']['uuid']['expose']['operator_id'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['label'] = 'Node UUID';
  $handler->display->display_options['filters']['uuid']['expose']['operator'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['identifier'] = 'uuid';
  $handler->display->display_options['block_description'] = 'Kent Memorial Library Logo';

  /* Display: Litchfield Historical SocietyLogo */
  $handler = $view->new_display('block', 'Litchfield Historical SocietyLogo', 'block_29');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Litchfield Historical Society Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/400002:LHS" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '52de19ca-b14d-49c4-82b1-1276a258dc5f';
  $handler->display->display_options['block_description'] = 'Litchfield Historical Society Logo';

  /* Display: Lyman Allyn Art Museum Logo */
  $handler = $view->new_display('block', 'Lyman Allyn Art Museum Logo', 'block_30');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lyman Allyn Art Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/170002:LAAM001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '4f81be04-d5e8-4ba1-a3eb-ebbcfea76c9a';

  /* Display: Mattatuck Museum Logo */
  $handler = $view->new_display('block', 'Mattatuck Museum Logo', 'block_31');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mattatuck Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/260002:MM001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'bb1d5dea-ce71-48d0-839d-ed1e5d36ea46';
  $handler->display->display_options['block_description'] = 'Mattatuck Museum Logo';

  /* Display: Mystic Seaport Logo */
  $handler = $view->new_display('block', 'Mystic Seaport Logo', 'block_32');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Seaport Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/70002:AdminJME" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'e66512be-bba2-478d-b2f3-1c043d820ae0';
  $handler->display->display_options['block_description'] = 'Mystic Seaport Logo';

  /* Display: Mystic Arts Center Logo */
  $handler = $view->new_display('block', 'Mystic Arts Center Logo', 'block_33');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Arts Center Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/200002:MAC001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'dc229512-eec9-4b50-8b81-6d07339539f8';
  $handler->display->display_options['block_description'] = 'Mystic Arts Center Logo';

  /* Display: New Haven Museum Logo */
  $handler = $view->new_display('block', 'New Haven Museum Logo', 'block_34');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Haven Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/280002:NHM001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'fa50138e-95e5-42c5-ab0b-2ac3c61e8517';
  $handler->display->display_options['block_description'] = 'New Haven Museum Logo';

  /* Display: Norwalk Public Library Logo */
  $handler = $view->new_display('block', 'Norwalk Public Library Logo', 'block_35');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Norwalk Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/450002:NPL" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '35ddf214-4d01-46f8-be94-fb2b8d15ee2b';
  $handler->display->display_options['block_description'] = 'Norwalk Public Library Logo';

  /* Display: Slater Memorial Museum Logo */
  $handler = $view->new_display('block', 'Slater Memorial Museum Logo', 'block_36');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slater Memorial Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/230002:SMM001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '20eee815-f8e5-4ae9-80a1-45204b672095';
  $handler->display->display_options['block_description'] = 'Slater Memorial Museum Logo';

  /* Display: Stonington Historical Society Logo */
  $handler = $view->new_display('block', 'Stonington Historical Society Logo', 'block_37');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stonington Historical Society Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/240002:SHS001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '40916a82-1fd7-49f2-9c77-da26e33fbb65';
  $handler->display->display_options['block_description'] = 'Stonington Historical Society Logo';

  /* Display: Wadsworth Athenum Museum of Art Logo */
  $handler = $view->new_display('block', 'Wadsworth Athenum Museum of Art Logo', 'block_38');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wadsworth Athenum Museum of Art Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/250002:WA001" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '55313034-2e88-4100-973f-716d79688bb6';
  $handler->display->display_options['block_description'] = 'Wadsworth Athenum Museum of Art Logo';

  /* Display: Windham Textile & History Museum Logo */
  $handler = $view->new_display('block', 'Windham Textile & History Museum Logo', 'block_39');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Windham Textile & History Museum Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/360002:AdminJEWTM" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '609fc413-a7bd-47eb-ba6f-a42c8c9a5443';
  $handler->display->display_options['block_description'] = 'Windham Textile & History Museum Logo';

  /* Display: Woodbury Public Library Logo */
  $handler = $view->new_display('block', 'Woodbury Public Library Logo', 'block_40');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Woodbury Public Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/140065:Woodbury" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b7b92b7c-27e0-487a-989f-cd358c1f266e';
  $handler->display->display_options['block_description'] = 'Woodbury Public Library Logo';

  /* Display: Connecticut State Library Logo */
  $handler = $view->new_display('block', 'Connecticut State Library Logo', 'block_41');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Connecticut State Library Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/30002:csl" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = 'f1c2b4ff-3da7-477c-ab2f-ece5c0d75d37';
  $handler->display->display_options['block_description'] = 'Connecticut State Library Logo';

  /* Display: UCONN Institution Logo */
  $handler = $view->new_display('block', 'UCONN Institution Logo', 'block_42');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'UCONN Institution Logo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institution_logo']['alter']['text'] = '<a href="/islandora/object/20002:UniversityofConnecticut" title=[field_institution_logo-title]">
 [field_institution_logo]
</a>';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['uuid']['value'] = '408630dd-9e71-4334-8d49-470432826e96';
  $handler->display->display_options['block_description'] = 'UCONN Institution Logo';

  /* Display: CHI Logo */
  $handler = $view->new_display('block', 'CHI Logo', 'block_43');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CHI Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '537dbe8b-b463-4b78-93f2-eadc4c6b28c1';
  $handler->display->display_options['block_description'] = 'CHI Logo';
  $export['bellington_collection_logo'] = $view;

  $view = new view();
  $view->name = 'bellingtons_most_viewed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Bellingtons most viewed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bellingtons most viewed';
  $handler->display->display_options['css_class'] = 'about-recent-additions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Quick Look</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/islandora:13">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:13';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['bellingtons_most_viewed'] = $view;

  $view = new view();
  $view->name = 'bridgeport_most_viewed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Bridgeport most viewed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bridgeport most viewed';
  $handler->display->display_options['css_class'] = 'about-recent-additions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Most Viewed</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/islandora:13">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '110002:Admin001';

  /* Display: Bridgeport Most Viewed */
  $handler = $view->new_display('block', 'Bridgeport Most Viewed', 'block');
  $handler->display->display_options['block_description'] = 'Bridgeport Most Viewed';

  /* Display: American School for the Deaf Most Viewed */
  $handler = $view->new_display('block', 'American School for the Deaf Most Viewed', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'American School for the Deaf Most Viewed';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '290002:ASDAdminJME';
  $handler->display->display_options['block_description'] = 'American School for the Deaf Most Viewed';

  /* Display: Avon Free Public Library Most Viewed */
  $handler = $view->new_display('block', 'Avon Free Public Library Most Viewed', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Avon Free Public Library Most Viewed';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '150002:001';
  $handler->display->display_options['block_description'] = 'Avon Free Public Library Most Viewed';

  /* Display: Barnum Museum Most Viewed */
  $handler = $view->new_display('block', 'Barnum Museum Most Viewed', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Barnum Museum Most Viewed';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = '60002:BarnumMuseum';
  $handler->display->display_options['block_description'] = 'Barnum Museum Most Viewed';
  $export['bridgeport_most_viewed'] = $view;

  $view = new view();
  $view->name = 'caliauto_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CaliAuto Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CaliAuto Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '1dd94df1-5d8f-4c35-970e-9e0a02586aba';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['caliauto_archive_info'] = $view;

  $view = new view();
  $view->name = 'caliauto_collection_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CaliAuto Collection Logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CaliAuto Collection Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
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
  $handler->display->display_options['filters']['uuid']['value'] = '1dd94df1-5d8f-4c35-970e-9e0a02586aba';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['caliauto_collection_logo'] = $view;

  $view = new view();
  $view->name = 'chi_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CHI Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CHI Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '537dbe8b-b463-4b78-93f2-eadc4c6b28c1';

  /* Display: CSL Archive Info */
  $handler = $view->new_display('block', 'CSL Archive Info', 'block');
  $handler->display->display_options['block_description'] = 'CHI Archive Info';
  $export['chi_archive_info'] = $view;

  $view = new view();
  $view->name = 'clone_of_islandora_usage_stats_for_collections';
  $view->description = 'Usage Stats for Collections';
  $view->tag = 'default';
  $view->base_table = 'islandora_usage_stats_object_access_log';
  $view->human_name = 'Clone of Islandora Usage Stats for Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Usage Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'pid' => 'pid',
    'id' => 'id',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No view counts found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Islandora Usage Stats: Collection */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  /* Relationship: Islandora Usage Stats: Object */
  $handler->display->display_options['relationships']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['pid_id']['field'] = 'pid_id';
  /* Relationship: Islandora Usage Stats: Collection Object */
  $handler->display->display_options['relationships']['collection']['id'] = 'collection';
  $handler->display->display_options['relationships']['collection']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['collection']['field'] = 'collection';
  $handler->display->display_options['relationships']['collection']['relationship'] = 'id';
  /* Relationship: Islandora Usage Stats: Object Collection Access */
  $handler->display->display_options['relationships']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['relationship'] = 'id';
  /* Field: Islandora Usage Stats: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: PID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pid']['alter']['text'] = '<a href="/islandora/object/[pid]" title="[label]">[label]</a>';
  $handler->display->display_options['fields']['pid']['alter']['path'] = 'islandora/object/[pid]';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<span>[id] views</span>';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['sorts']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['sorts']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['relationship'] = 'id';
  $handler->display->display_options['sorts']['object_access_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['object_access_id']['order'] = 'DESC';
  /* Contextual filter: Islandora Usage Stats: PID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'collection';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['limit'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'usage_stats');
  $handler->display->display_options['block_description'] = 'Usage Stats for Collections';

  /* Display: Collection Usage Views */
  $handler = $view->new_display('block', 'Collection Usage Views', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: COUNT(DISTINCT Islandora Usage Stats: PID) */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['arguments']['pid']['group_type'] = 'count_distinct';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $export['clone_of_islandora_usage_stats_for_collections'] = $view;

  $view = new view();
  $view->name = 'collection_thumbnail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection Thumbnail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Thumbnail';
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
  $export['collection_thumbnail'] = $view;

  $view = new view();
  $view->name = 'connecticut_digital_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Connecticut Digital Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'bc455c26-912a-4111-8668-08baddddb536';

  /* Display: Digital Collections Archive Info */
  $handler = $view->new_display('block', 'Digital Collections Archive Info', 'block');
  $export['connecticut_digital_archive_info'] = $view;

  $view = new view();
  $view->name = 'csl_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CSL Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CSL Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'f1c2b4ff-3da7-477c-ab2f-ece5c0d75d37';

  /* Display: CSL Archive Info */
  $handler = $view->new_display('block', 'CSL Archive Info', 'block');
  $handler->display->display_options['block_description'] = 'CSL Archive Info';
  $export['csl_archive_info'] = $view;

  $view = new view();
  $view->name = 'current_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Current Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '697a8710-c712-46c4-86d4-cc22830226b6';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['current_archive_info'] = $view;

  $view = new view();
  $view->name = 'digital_collections_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Digital Collections Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '2da4b953-9a82-47fc-918a-fe31e027a05c';

  /* Display: Digital Collections Archive Info */
  $handler = $view->new_display('block', 'Digital Collections Archive Info', 'block');
  $export['digital_collections_archive_info'] = $view;

  $view = new view();
  $view->name = 'digital_collections_most_viewed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Digital Collections most viewed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bellingtons most viewed';
  $handler->display->display_options['css_class'] = 'about-recent-additions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div>
  <h5>Quick Look</h5>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div>
  <a href="/islandora/object/islandora:13">More <i title="right-circle" class="icon icon-right-circle right-circle" aria-hidden="true"></i></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'object-label';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:30';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['digital_collections_most_viewed'] = $view;

  $view = new view();
  $view->name = 'enhanced_collections_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enhanced Collections Logo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Digital Collections Logo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
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
  $handler->display->display_options['filters']['uuid']['value'] = '694c072c-3fca-474f-8d3b-92c38051e175';

  /* Display: Fairfield Museum & History Center Logo */
  $handler = $view->new_display('block', 'Fairfield Museum & History Center Logo', 'block_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fairfield Museum & History Center Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c9de6ae3-17dd-4c74-bae2-689aee68fd97';
  $handler->display->display_options['block_description'] = 'Fairfield Museum & History Center Logo';

  /* Display: Florence Griswold Museum Logo */
  $handler = $view->new_display('block', 'Florence Griswold Museum Logo', 'block_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Florence Griswold Museum Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'aa2ef5c9-09bd-4b1e-bb3a-0a9fc7e005ee';
  $handler->display->display_options['block_description'] = 'Florence Griswold Museum Logo';

  /* Display: Groton Public Library Logo */
  $handler = $view->new_display('block', 'Groton Public Library Logo', 'block_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groton Public Library Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '76ce18bd-d017-45b3-8a17-7ecbabaa85ac';
  $handler->display->display_options['block_description'] = 'Groton Public Library Logo';

  /* Display: Hagaman Memorial Library Logo */
  $handler = $view->new_display('block', 'Hagaman Memorial Library Logo', 'block_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hagaman Memorial Library Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'da0665b2-360d-4def-87ea-e95edf3d59ab';
  $handler->display->display_options['block_description'] = 'Hagaman Memorial Library Logo';

  /* Display: Hartford Medical Society Logo */
  $handler = $view->new_display('block', 'Hartford Medical Society Logo', 'block_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hartford Medical Society Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'b9621c3b-47e8-4e82-acd5-ceb892207a48';
  $handler->display->display_options['block_description'] = 'Hartford Medical Society Logo';

  /* Display: Ivoryton Library Association Logo */
  $handler = $view->new_display('block', 'Ivoryton Library Association Logo', 'block_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ivoryton Library Association Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '7533e6f1-692a-41f8-a9cc-d9461ce9550e';
  $handler->display->display_options['block_description'] = 'Ivoryton Library Association Logo';

  /* Display: Kent Memorial Library Logo */
  $handler = $view->new_display('block', 'Kent Memorial Library Logo', 'block_28');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kent Memorial Library Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'c9c1b047-167a-42cf-9b91-fd2ed85d73e2';
  $handler->display->display_options['filters']['uuid']['expose']['operator_id'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['label'] = 'Node UUID';
  $handler->display->display_options['filters']['uuid']['expose']['operator'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['identifier'] = 'uuid';
  $handler->display->display_options['block_description'] = 'Kent Memorial Library Logo';

  /* Display: Litchfield Historical SocietyLogo */
  $handler = $view->new_display('block', 'Litchfield Historical SocietyLogo', 'block_29');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Litchfield Historical Society Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '52de19ca-b14d-49c4-82b1-1276a258dc5f';
  $handler->display->display_options['block_description'] = 'Litchfield Historical Society Logo';

  /* Display: Mattatuck Museum Logo */
  $handler = $view->new_display('block', 'Mattatuck Museum Logo', 'block_31');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mattatuck Museum Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'bb1d5dea-ce71-48d0-839d-ed1e5d36ea46';
  $handler->display->display_options['block_description'] = 'Mattatuck Museum Logo';

  /* Display: Mystic Seaport Logo */
  $handler = $view->new_display('block', 'Mystic Seaport Logo', 'block_32');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Seaport Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'e66512be-bba2-478d-b2f3-1c043d820ae0';
  $handler->display->display_options['block_description'] = 'Mystic Seaport Logo';

  /* Display: Mystic Arts Center Logo */
  $handler = $view->new_display('block', 'Mystic Arts Center Logo', 'block_33');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mystic Arts Center Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'dc229512-eec9-4b50-8b81-6d07339539f8';
  $handler->display->display_options['block_description'] = 'Mystic Arts Center Logo';

  /* Display: New Haven Museum Logo */
  $handler = $view->new_display('block', 'New Haven Museum Logo', 'block_34');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Haven Museum Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'fa50138e-95e5-42c5-ab0b-2ac3c61e8517';
  $handler->display->display_options['block_description'] = 'New Haven Museum Logo';

  /* Display: Norwalk Public Library Logo */
  $handler = $view->new_display('block', 'Norwalk Public Library Logo', 'block_35');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Norwalk Public Library Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '35ddf214-4d01-46f8-be94-fb2b8d15ee2b';
  $handler->display->display_options['block_description'] = 'Norwalk Public Library Logo';

  /* Display: PT Barnum Digital Collection Logo */
  $handler = $view->new_display('block', 'PT Barnum Digital Collection Logo', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PT Barnum Digital Collection Logo';
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
  $handler->display->display_options['filters']['uuid']['value'] = '5aa1e5b6-2fa1-409e-993c-e312569d64c1';
  $handler->display->display_options['block_description'] = 'PT Barnum Digital Collection Logo';
  $export['enhanced_collections_logo'] = $view;

  $view = new view();
  $view->name = 'footer_icon_and_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer Icon and Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer Icon and Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'e2c6f941-2917-4bda-bc9a-79b6cb36dddc';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'footer-icon-and-info';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['footer_icon_and_info'] = $view;

  $view = new view();
  $view->name = 'footer_social_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Media';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Social Media Icon */
  $handler->display->display_options['fields']['field_social_media_icon']['id'] = 'field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['table'] = 'field_data_field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['field'] = 'field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_media_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_media_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_media_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Social Link */
  $handler->display->display_options['fields']['field_social_link']['id'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['table'] = 'field_data_field_social_link';
  $handler->display->display_options['fields']['field_social_link']['field'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['text'] = '<a href="[field_social_link-value]" title="[title]">[field_social_media_icon]</a>';
  $handler->display->display_options['fields']['field_social_link']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
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
    'social_media_icon' => 'social_media_icon',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'social-media';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['footer_social_media'] = $view;

  $view = new view();
  $view->name = 'front_page_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Icons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image URL */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a href="[field_image_url]" title="[title]" target="_blank">
[field_image_block]
</a>';
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '81336753-b010-4409-90b4-422784f01c89';
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['value'] = '8ed54dec-3a17-4d0f-94ff-0679a7a6bacc';
  $handler->display->display_options['filters']['uuid_2']['group'] = 2;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '3ba99df5-4c20-4094-af98-149f9a5a006e';
  $handler->display->display_options['filters']['uuid']['group'] = 3;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-icons';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'OR',
    3 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '81336753-b010-4409-90b4-422784f01c89';
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '3ba99df5-4c20-4094-af98-149f9a5a006e';
  $handler->display->display_options['filters']['uuid']['group'] = 2;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['value'] = '30e9886b-0cc0-44a0-a832-8f09724500e4';
  $handler->display->display_options['filters']['uuid_2']['group'] = 3;
  $export['front_page_icons'] = $view;

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
  $handler->display->display_options['style_plugin'] = 'galleria';
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
  $handler->display->display_options['style_options']['row_class'] = 'browse-collections-row';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

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
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';

  /* Display: Recent additions */
  $handler = $view->new_display('block', 'Recent additions', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent additions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recent-additions-row';
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
  $handler->display->display_options['fields']['dc.title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['alter']['text'] = '<a href="/islandora/object/[PID]" title="[dc.title]">[dc.title]</a>';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  $export['frontpage_solr_boxes'] = $view;

  $view = new view();
  $view->name = 'hangten_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hangten Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hangten Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = 'f3b4e475-850f-4fae-a294-a001eccdd3dc';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['hangten_archive_info'] = $view;

  $view = new view();
  $view->name = 'hangten_collection_logo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hangten Collection Logo';
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
  /* Field: Content: Institution Logo */
  $handler->display->display_options['fields']['field_institution_logo']['id'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['table'] = 'field_data_field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['field'] = 'field_institution_logo';
  $handler->display->display_options['fields']['field_institution_logo']['label'] = '';
  $handler->display->display_options['fields']['field_institution_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_institution_logo']['settings'] = array(
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['hangten_collection_logo'] = $view;

  $view = new view();
  $view->name = 'hartford_public_library_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hartford Public Library Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hartford Public Library Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '89e4fef8-c501-439e-bc8d-347aba32e0cf';

  /* Display: Hartford Public Library Archive Info */
  $handler = $view->new_display('block', 'Hartford Public Library Archive Info', 'block');
  $handler->display->display_options['block_description'] = 'Hartford Public Library Archive Info';
  $export['hartford_public_library_archive_info'] = $view;

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
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Published */
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
  /* Filter criterion: Content: Published */
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
  $export['image_blocks'] = $view;

  $view = new view();
  $view->name = 'mods_page_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'MODS Page Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'MODS Page Title';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_type'] = 'h1';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 0;
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

  /* Display: MODS Page Title */
  $handler = $view->new_display('block', 'MODS Page Title', 'block');
  $handler->display->display_options['block_description'] = 'MODS Page Title';
  $export['mods_page_title'] = $view;

  $view = new view();
  $view->name = 'new_britain_museum';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'New Britain Museum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Britain Museum Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '961a3992-ccd4-413a-8123-e0d436de9238';

  /* Display: New Britain Museum Archive Info */
  $handler = $view->new_display('block', 'New Britain Museum Archive Info', 'block');
  $handler->display->display_options['block_description'] = 'New Britain Museum';
  $export['new_britain_museum'] = $view;

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
  $handler->display->display_options['title'] = 'Bellington Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_abstract_ms */
  $handler->display->display_options['fields']['mods_abstract_ms']['id'] = 'mods_abstract_ms';
  $handler->display->display_options['fields']['mods_abstract_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_abstract_ms']['field'] = 'mods_abstract_ms';
  $handler->display->display_options['fields']['mods_abstract_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_abstract_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_abstract_ms']['link_to_object'] = 0;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:13';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: All Institutions Description */
  $handler = $view->new_display('block', 'All Institutions Description', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Institutions';
  $handler->display->display_options['display_description'] = 'All Institutions Description';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: mods_abstract_ms */
  $handler->display->display_options['fields']['mods_abstract_ms']['id'] = 'mods_abstract_ms';
  $handler->display->display_options['fields']['mods_abstract_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_abstract_ms']['field'] = 'mods_abstract_ms';
  $handler->display->display_options['fields']['mods_abstract_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_abstract_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_abstract_ms']['link_to_object'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:5';

  /* Display: Default Institution Object Description */
  $handler = $view->new_display('block', 'Default Institution Object Description', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Defualt institution Object Description';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $export['platform_front_page'] = $view;

  $view = new view();
  $view->name = 'slideshow_galleria';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow Galleria';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'None';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
    'field_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['responsive'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_info'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slides */
  $handler->display->display_options['fields']['field_slides']['id'] = 'field_slides';
  $handler->display->display_options['fields']['field_slides']['table'] = 'field_data_field_slides';
  $handler->display->display_options['fields']['field_slides']['field'] = 'field_slides';
  $handler->display->display_options['fields']['field_slides']['label'] = '';
  $handler->display->display_options['fields']['field_slides']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slides']['type'] = 'galleria';
  $handler->display->display_options['fields']['field_slides']['settings'] = array(
    'optionset' => 'default',
  );
  $handler->display->display_options['fields']['field_slides']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Galleria Slideshow */
  $handler = $view->new_display('page', 'Galleria Slideshow', 'page');
  $handler->display->display_options['path'] = 'slideshow-galleria';

  /* Display: Slideshow Galleria */
  $handler = $view->new_display('block', 'Slideshow Galleria', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['slideshow_galleria'] = $view;

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
  /* Field: Internal Search: Site Search Category */
  $handler->display->display_options['fields']['facet']['id'] = 'facet';
  $handler->display->display_options['fields']['facet']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['facet']['field'] = 'searchCategory';
  $handler->display->display_options['fields']['facet']['label'] = 'Facet Terms';
  $handler->display->display_options['fields']['facet']['alter']['path'] = '[facet]';
  /* Field: Internal Search: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search: Results Pageviews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Field: Internal Search: Search Term */
  $handler->display->display_options['fields']['search']['id'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['search']['field'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['label'] = 'Search Terms';
  /* Field: Internal Search: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search: Results Pageviews */
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
  $export['top_site_searches'] = $view;

  $view = new view();
  $view->name = 'uconn_institution_archive_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UCONN Institution Archive Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Archive Info';
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
  $handler->display->display_options['filters']['uuid']['value'] = '408630dd-9e71-4334-8d49-470432826e96';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['uconn_institution_archive_info'] = $view;

  return $export;
}
