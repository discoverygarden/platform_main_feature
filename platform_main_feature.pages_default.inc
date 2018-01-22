<?php
/**
 * @file
 * platform_main_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function platform_main_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__digital-collections-about-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Digital Collections About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bellingtons Historical Society',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '12',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'digital-collections-about-page',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-digitalarchive',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
          0 => 3,
          1 => 2,
          2 => 'main-row',
          3 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'node_description',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'node_description' => array(
        'type' => 'region',
        'title' => 'Node Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_title',
        ),
        'parent' => 'main',
        'class' => 'title',
        'hide_empty' => 0,
      ),
      'header_title' => array(
        'type' => 'region',
        'title' => 'Header Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'region-header-title-menus',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'node_description' => NULL,
      'header_title' => NULL,
      'header_region_top' => NULL,
    ),
    'header_title' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => 'default',
    ),
    'node_description' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8aac6074-0bf9-4dee-b92d-75506f4bc360';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__digital-collections-about-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $display->content['new-468aa436-1362-4ce2-8382-5d4aee5a6ad4'] = $pane;
  $display->panels['center'][0] = 'new-468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $pane = new stdClass();
  $pane->pid = 'new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $pane->panel = 'center';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $display->content['new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4'] = $pane;
  $display->panels['center'][1] = 'new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $pane = new stdClass();
  $pane->pid = 'new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $pane->panel = 'header_region_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About Node label',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => 'About',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-label',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $display->content['new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7'] = $pane;
  $display->panels['header_region_top'][0] = 'new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $pane = new stdClass();
  $pane->pid = 'new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $display->content['new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3'] = $pane;
  $display->panels['header_region_top'][1] = 'new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $pane = new stdClass();
  $pane->pid = 'new-4d371efb-3c42-4fa4-ad94-b9ff2c0848e5';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-default-institution-context';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d371efb-3c42-4fa4-ad94-b9ff2c0848e5';
  $display->content['new-4d371efb-3c42-4fa4-ad94-b9ff2c0848e5'] = $pane;
  $display->panels['header_title'][0] = 'new-4d371efb-3c42-4fa4-ad94-b9ff2c0848e5';
  $pane = new stdClass();
  $pane->pid = 'new-d277a5e2-1391-4df5-b785-a29db26b59ae';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-digital-collection-social-m';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd277a5e2-1391-4df5-b785-a29db26b59ae';
  $display->content['new-d277a5e2-1391-4df5-b785-a29db26b59ae'] = $pane;
  $display->panels['header_title'][1] = 'new-d277a5e2-1391-4df5-b785-a29db26b59ae';
  $pane = new stdClass();
  $pane->pid = 'new-e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $pane->panel = 'node_description';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_institution_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $display->content['new-e61e0f12-a952-4ece-8f10-7d99deeac45d'] = $pane;
  $display->panels['node_description'][0] = 'new-e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $pane = new stdClass();
  $pane->pid = 'new-d3ac771d-350b-4c0c-9b21-594232532cfb';
  $pane->panel = 'node_description';
  $pane->type = 'block';
  $pane->subtype = 'views-dbec0f7cd4efb3b96cd55eb546c2eeb9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd3ac771d-350b-4c0c-9b21-594232532cfb';
  $display->content['new-d3ac771d-350b-4c0c-9b21-594232532cfb'] = $pane;
  $display->panels['node_description'][1] = 'new-d3ac771d-350b-4c0c-9b21-594232532cfb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__digital-collections-about-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_7aa9ea2a-46fe-49fd-9840-c0dc00a003c1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f8db55f-7b47-4bc7-85b4-fbd6f76d2a73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_7aa9ea2a-46fe-49fd-9840-c0dc00a003c1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e438d362-10e4-4f97-8283-b92841b5ea45';
  $pane->panel = 'center';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e438d362-10e4-4f97-8283-b92841b5ea45';
  $display->content['new-e438d362-10e4-4f97-8283-b92841b5ea45'] = $pane;
  $display->panels['center'][0] = 'new-e438d362-10e4-4f97-8283-b92841b5ea45';
  $pane = new stdClass();
  $pane->pid = 'new-9d6d6eae-94c5-43cd-a9f7-8b384295ec72';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9d6d6eae-94c5-43cd-a9f7-8b384295ec72';
  $display->content['new-9d6d6eae-94c5-43cd-a9f7-8b384295ec72'] = $pane;
  $display->panels['center'][1] = 'new-9d6d6eae-94c5-43cd-a9f7-8b384295ec72';
  $pane = new stdClass();
  $pane->pid = 'new-1d45c256-822d-4488-a14b-96b3d40a94db';
  $pane->panel = 'center';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 1,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->content['new-1d45c256-822d-4488-a14b-96b3d40a94db'] = $pane;
  $display->panels['center'][2] = 'new-1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_7aa9ea2a-46fe-49fd-9840-c0dc00a003c1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a7b19614-c690-4627-9e6f-eaeb42199123';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bellingtons Historical Society About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bellingtons Historical Society',
        'keyword' => 'node_2',
        'name' => 'entity:node',
        'entity_id' => '12',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-bellingtons',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
          0 => 3,
          1 => 2,
          2 => 'main-row',
          3 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'node_description',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'node_description' => array(
        'type' => 'region',
        'title' => 'Node Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_title',
        ),
        'parent' => 'main',
        'class' => 'title',
        'hide_empty' => 0,
      ),
      'header_title' => array(
        'type' => 'region',
        'title' => 'Header Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'region-header-title-menus',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'node_description' => NULL,
      'header_title' => NULL,
      'header_region_top' => NULL,
    ),
    'header_title' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => 'default',
    ),
    'node_description' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8aac6074-0bf9-4dee-b92d-75506f4bc360';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_a7b19614-c690-4627-9e6f-eaeb42199123';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $display->content['new-468aa436-1362-4ce2-8382-5d4aee5a6ad4'] = $pane;
  $display->panels['center'][0] = 'new-468aa436-1362-4ce2-8382-5d4aee5a6ad4';
  $pane = new stdClass();
  $pane->pid = 'new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $pane->panel = 'center';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $display->content['new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4'] = $pane;
  $display->panels['center'][1] = 'new-aa8523b3-0e16-40a1-bd63-c353a2f95ea4';
  $pane = new stdClass();
  $pane->pid = 'new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $pane->panel = 'header_region_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About Node label',
    'title' => '<none>',
    'title_heading' => 'h2',
    'body' => 'About',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-label',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $display->content['new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7'] = $pane;
  $display->panels['header_region_top'][0] = 'new-6078321c-4fb8-46c5-9bab-7b9eb236dfa7';
  $pane = new stdClass();
  $pane->pid = 'new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'context_entity:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $display->content['new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3'] = $pane;
  $display->panels['header_region_top'][1] = 'new-91998be8-c1c1-4ea2-aa91-6ebd74a950a3';
  $pane = new stdClass();
  $pane->pid = 'new-5a49fb3d-74a9-45aa-81f9-00d7339806c7';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-bellingtons-contextual-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a49fb3d-74a9-45aa-81f9-00d7339806c7';
  $display->content['new-5a49fb3d-74a9-45aa-81f9-00d7339806c7'] = $pane;
  $display->panels['header_title'][0] = 'new-5a49fb3d-74a9-45aa-81f9-00d7339806c7';
  $pane = new stdClass();
  $pane->pid = 'new-f0e02f7b-23d9-46f7-8960-526e28ed981d';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-bellingtons-social-media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f0e02f7b-23d9-46f7-8960-526e28ed981d';
  $display->content['new-f0e02f7b-23d9-46f7-8960-526e28ed981d'] = $pane;
  $display->panels['header_title'][1] = 'new-f0e02f7b-23d9-46f7-8960-526e28ed981d';
  $pane = new stdClass();
  $pane->pid = 'new-e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $pane->panel = 'node_description';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_institution_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $display->content['new-e61e0f12-a952-4ece-8f10-7d99deeac45d'] = $pane;
  $display->panels['node_description'][0] = 'new-e61e0f12-a952-4ece-8f10-7d99deeac45d';
  $pane = new stdClass();
  $pane->pid = 'new-53ccdca4-711d-469b-a94f-5b74715a685c';
  $pane->panel = 'node_description';
  $pane->type = 'block';
  $pane->subtype = 'views-bellingtons_most_viewed-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Recent Additions',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '53ccdca4-711d-469b-a94f-5b74715a685c';
  $display->content['new-53ccdca4-711d-469b-a94f-5b74715a685c'] = $pane;
  $display->panels['node_description'][1] = 'new-53ccdca4-711d-469b-a94f-5b74715a685c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a7b19614-c690-4627-9e6f-eaeb42199123'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__archives-special-collections';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Archives & Special Collections',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'archives-special-collections',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_mod_field_value',
          'settings' => array(
            'mods_field' => 'owner_inst',
            'mods_value' => 'Archives & Special Collections',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
    'page_views' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__archives-special-collections';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'contextual_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'display-none',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['contextual_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane = new stdClass();
  $pane->pid = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][1] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'contextual_content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][2] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $display->content['new-7c827cc4-d308-4fd2-bf41-d7188dba6921'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane = new stdClass();
  $pane->pid = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-current_collection_view_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-collection-view-count',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $display->content['new-6d982f04-b9ac-44b5-8f5a-955ad9adc082'] = $pane;
  $display->panels['page_views'][0] = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane = new stdClass();
  $pane->pid = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'islandora_datastream_download-islandora_datastream_download_ds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a4b4ab8e-5277-4597-959e-27768142352a';
  $display->content['new-a4b4ab8e-5277-4597-959e-27768142352a'] = $pane;
  $display->panels['page_views'][1] = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane = new stdClass();
  $pane->pid = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-default-institution-context';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '30fea657-865f-4e99-98e5-5c306e39184d';
  $display->content['new-30fea657-865f-4e99-98e5-5c306e39184d'] = $pane;
  $display->panels['page_views'][2] = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane = new stdClass();
  $pane->pid = 'new-55ea8272-63a7-4d29-9d05-67974c3f709a';
  $pane->panel = 'page_views';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-digital-collection-social-m';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-digital-collection-social-m:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-digital-collection-social-m',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55ea8272-63a7-4d29-9d05-67974c3f709a';
  $display->content['new-55ea8272-63a7-4d29-9d05-67974c3f709a'] = $pane;
  $display->panels['page_views'][3] = 'new-55ea8272-63a7-4d29-9d05-67974c3f709a';
  $pane = new stdClass();
  $pane->pid = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][0] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane->panel = 'region_main_content';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $display->content['new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12'] = $pane;
  $display->panels['region_main_content'][1] = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'region_right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'none',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['region_right'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de55e6e9-506c-431b-8672-46a7a04fc649';
  $display->content['new-de55e6e9-506c-431b-8672-46a7a04fc649'] = $pane;
  $display->panels['region_right'][1] = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane = new stdClass();
  $pane->pid = 'new-c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-collection_thumbnail-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Archives & Special Collections',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $display->content['new-c894f489-ca4a-4178-93b6-10560cd2a7d4'] = $pane;
  $display->panels['test_region'][0] = 'new-c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__archives-special-collections'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__bellingtons-institute-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Bellingtons Institute Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'bellingtons-institute-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_mod_field_value',
          'settings' => array(
            'mods_field' => 'owner_inst',
            'mods_value' => 'Bellingtons',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'width' => '24.128391286559395',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Branding Description',
        'width' => '75.87160871344061',
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
    'page_views' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__bellingtons-institute-collection';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'contextual_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'display-none',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['contextual_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane = new stdClass();
  $pane->pid = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][1] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'contextual_content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][2] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $display->content['new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12'] = $pane;
  $display->panels['contextual_content'][3] = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane = new stdClass();
  $pane->pid = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $display->content['new-7c827cc4-d308-4fd2-bf41-d7188dba6921'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane = new stdClass();
  $pane->pid = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-current_collection_view_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-collection-view-count',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $display->content['new-6d982f04-b9ac-44b5-8f5a-955ad9adc082'] = $pane;
  $display->panels['page_views'][0] = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane = new stdClass();
  $pane->pid = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'islandora_datastream_download-islandora_datastream_download_ds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a4b4ab8e-5277-4597-959e-27768142352a';
  $display->content['new-a4b4ab8e-5277-4597-959e-27768142352a'] = $pane;
  $display->panels['page_views'][1] = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane = new stdClass();
  $pane->pid = 'new-dfff28cf-3f8c-4774-ac8e-a5af958311b8';
  $pane->panel = 'page_views';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-bellingtons-social-media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-bellingtons-social-media:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-bellingtons-social-media',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dfff28cf-3f8c-4774-ac8e-a5af958311b8';
  $display->content['new-dfff28cf-3f8c-4774-ac8e-a5af958311b8'] = $pane;
  $display->panels['page_views'][2] = 'new-dfff28cf-3f8c-4774-ac8e-a5af958311b8';
  $pane = new stdClass();
  $pane->pid = 'new-a9ec3d1f-a3b6-4a79-a264-cf919ec9abfc';
  $pane->panel = 'page_views';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-bellingtons-contextual-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-bellingtons-contextual-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-bellingtons-contextual-menu',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a9ec3d1f-a3b6-4a79-a264-cf919ec9abfc';
  $display->content['new-a9ec3d1f-a3b6-4a79-a264-cf919ec9abfc'] = $pane;
  $display->panels['page_views'][3] = 'new-a9ec3d1f-a3b6-4a79-a264-cf919ec9abfc';
  $pane = new stdClass();
  $pane->pid = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][0] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'region_right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['region_right'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-4bd66286-3850-462d-856f-84cbdbd23672';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4bd66286-3850-462d-856f-84cbdbd23672';
  $display->content['new-4bd66286-3850-462d-856f-84cbdbd23672'] = $pane;
  $display->panels['region_right'][1] = 'new-4bd66286-3850-462d-856f-84cbdbd23672';
  $pane = new stdClass();
  $pane->pid = 'new-23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-7dffc2c2672edc40792ded06c5f4e996';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $display->content['new-23ed1319-d521-4ced-8274-e19cbc4ff5fb'] = $pane;
  $display->panels['test_region'][0] = 'new-23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__bellingtons-institute-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__caliauto-institute-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CaliAuto Institute Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'caliauto-institute-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'uconndora',
          'settings' => array(
            'mods_field' => 'owner_inst',
            'mods_value' => 'CaliAuto',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'class' => '',
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
        'class' => '',
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
          0 => 'region_left',
          1 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_left' => array(
        'type' => 'region',
        'title' => 'Region Left',
        'width' => '25.062568645456345',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => '74.93743135454365',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__caliauto-institute-collection';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'header_region';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => 'CALI AUTO ONLY THE THING',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['header_region'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $pane->panel = 'region_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $display->content['new-ace8b51a-a85e-47d6-b127-7a139b7866dd'] = $pane;
  $display->panels['region_left'][0] = 'new-ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['region_main_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__caliauto-institute-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__connecticut-digital-archive';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Connecticut Digital Archive',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'connecticut-digital-archive',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_mod_field_value',
          'settings' => array(
            'mods_field' => 'owner_inst',
            'mods_value' => 'Connecticut Digital Archive',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
    'page_views' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__connecticut-digital-archive';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'contextual_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'display-none',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['contextual_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane = new stdClass();
  $pane->pid = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][1] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'contextual_content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][2] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $display->content['new-7c827cc4-d308-4fd2-bf41-d7188dba6921'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane = new stdClass();
  $pane->pid = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-current_collection_view_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-collection-view-count',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $display->content['new-6d982f04-b9ac-44b5-8f5a-955ad9adc082'] = $pane;
  $display->panels['page_views'][0] = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane = new stdClass();
  $pane->pid = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'islandora_datastream_download-islandora_datastream_download_ds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a4b4ab8e-5277-4597-959e-27768142352a';
  $display->content['new-a4b4ab8e-5277-4597-959e-27768142352a'] = $pane;
  $display->panels['page_views'][1] = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane = new stdClass();
  $pane->pid = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-default-institution-context';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '30fea657-865f-4e99-98e5-5c306e39184d';
  $display->content['new-30fea657-865f-4e99-98e5-5c306e39184d'] = $pane;
  $display->panels['page_views'][2] = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane = new stdClass();
  $pane->pid = 'new-55ea8272-63a7-4d29-9d05-67974c3f709a';
  $pane->panel = 'page_views';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-digital-collection-social-m';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-digital-collection-social-m:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-digital-collection-social-m',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-social-media-menu',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '55ea8272-63a7-4d29-9d05-67974c3f709a';
  $display->content['new-55ea8272-63a7-4d29-9d05-67974c3f709a'] = $pane;
  $display->panels['page_views'][3] = 'new-55ea8272-63a7-4d29-9d05-67974c3f709a';
  $pane = new stdClass();
  $pane->pid = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][0] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane->panel = 'region_main_content';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $display->content['new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12'] = $pane;
  $display->panels['region_main_content'][1] = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'region_right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'none',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['region_right'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de55e6e9-506c-431b-8672-46a7a04fc649';
  $display->content['new-de55e6e9-506c-431b-8672-46a7a04fc649'] = $pane;
  $display->panels['region_right'][1] = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane = new stdClass();
  $pane->pid = 'new-c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-collection_thumbnail-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Archives & Special Collections',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Connecticut Digital Archive',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $display->content['new-c894f489-ca4a-4178-93b6-10560cd2a7d4'] = $pane;
  $display->panels['test_region'][0] = 'new-c894f489-ca4a-4178-93b6-10560cd2a7d4';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__connecticut-digital-archive'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__default-institution-layout';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Default Institution Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default-institution-layout',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_default_institution',
          'settings' => array(
            'mods_field' => 'owner_inst',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
    'page_views' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__default-institution-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'contextual_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'display-none',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['contextual_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane = new stdClass();
  $pane->pid = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][1] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'contextual_content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][2] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $display->content['new-7c827cc4-d308-4fd2-bf41-d7188dba6921'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-7c827cc4-d308-4fd2-bf41-d7188dba6921';
  $pane = new stdClass();
  $pane->pid = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-current_collection_view_count';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-collection-view-count',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $display->content['new-6d982f04-b9ac-44b5-8f5a-955ad9adc082'] = $pane;
  $display->panels['page_views'][0] = 'new-6d982f04-b9ac-44b5-8f5a-955ad9adc082';
  $pane = new stdClass();
  $pane->pid = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'islandora_datastream_download-islandora_datastream_download_ds';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a4b4ab8e-5277-4597-959e-27768142352a';
  $display->content['new-a4b4ab8e-5277-4597-959e-27768142352a'] = $pane;
  $display->panels['page_views'][1] = 'new-a4b4ab8e-5277-4597-959e-27768142352a';
  $pane = new stdClass();
  $pane->pid = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-default-institution-context';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'panel-contextual-menu',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '30fea657-865f-4e99-98e5-5c306e39184d';
  $display->content['new-30fea657-865f-4e99-98e5-5c306e39184d'] = $pane;
  $display->panels['page_views'][2] = 'new-30fea657-865f-4e99-98e5-5c306e39184d';
  $pane = new stdClass();
  $pane->pid = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][0] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane->panel = 'region_main_content';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_markup';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $display->content['new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12'] = $pane;
  $display->panels['region_main_content'][1] = 'new-a0ff6d6b-47e4-4345-92c2-318efc6c1c12';
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'region_right';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['region_right'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'de55e6e9-506c-431b-8672-46a7a04fc649';
  $display->content['new-de55e6e9-506c-431b-8672-46a7a04fc649'] = $pane;
  $display->panels['region_right'][1] = 'new-de55e6e9-506c-431b-8672-46a7a04fc649';
  $pane = new stdClass();
  $pane->pid = 'new-23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-7dffc2c2672edc40792ded06c5f4e996';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $display->content['new-23ed1319-d521-4ced-8274-e19cbc4ff5fb'] = $pane;
  $display->panels['test_region'][0] = 'new-23ed1319-d521-4ced-8274-e19cbc4ff5fb';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__default-institution-layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__hangten';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Hangten Institute Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'hangten',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'uconndora',
          'settings' => array(
            'mods_field' => 'owner_inst',
            'mods_value' => 'Hangten',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'class' => '',
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
        'class' => '',
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
          0 => 'region_left',
          1 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_left' => array(
        'type' => 'region',
        'title' => 'Region Left',
        'width' => '25.062568645456345',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => '74.93743135454365',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__hangten';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'header_region';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => 'Hangten ONLY TITLE',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['header_region'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $pane->panel = 'region_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $display->content['new-ace8b51a-a85e-47d6-b127-7a139b7866dd'] = $pane;
  $display->panels['region_left'][0] = 'new-ace8b51a-a85e-47d6-b127-7a139b7866dd';
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['region_main_content'][0] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__hangten'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__panel_context_f23e0425-4472-4d3f-a819-687a7fa7fdbe';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'All Institute Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'islandora/object/islandora:root
islandora/object/islandora%3Aroot
islandora/object/islandora%3A5
islandora/object/islandora:5',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
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
        'class' => '',
        'hide_empty' => 1,
      ),
      'test_region' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.05333387647662',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Branding Description',
        'width' => '74.94666612352339',
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
        'class' => '',
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
          0 => 'region_left',
          1 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_left' => array(
        'type' => 'region',
        'title' => 'Region Left',
        'width' => '25.062568645456345',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => '74.93743135454365',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'region_logo' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_left' => NULL,
      'region_main_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__panel_context_f23e0425-4472-4d3f-a819-687a7fa7fdbe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane->panel = 'header_region';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45588575-4602-4b39-a20e-37b7e9396324';
  $display->content['new-45588575-4602-4b39-a20e-37b7e9396324'] = $pane;
  $display->panels['header_region'][0] = 'new-45588575-4602-4b39-a20e-37b7e9396324';
  $pane = new stdClass();
  $pane->pid = 'new-811de02c-ae69-4557-bdca-89a66c2d20d5';
  $pane->panel = 'header_region';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '811de02c-ae69-4557-bdca-89a66c2d20d5';
  $display->content['new-811de02c-ae69-4557-bdca-89a66c2d20d5'] = $pane;
  $display->panels['header_region'][1] = 'new-811de02c-ae69-4557-bdca-89a66c2d20d5';
  $pane = new stdClass();
  $pane->pid = 'new-9ff5d601-f203-41ae-809e-aabfeba4457f';
  $pane->panel = 'header_region';
  $pane->type = 'block';
  $pane->subtype = 'views-object_description-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9ff5d601-f203-41ae-809e-aabfeba4457f';
  $display->content['new-9ff5d601-f203-41ae-809e-aabfeba4457f'] = $pane;
  $display->panels['header_region'][2] = 'new-9ff5d601-f203-41ae-809e-aabfeba4457f';
  $pane = new stdClass();
  $pane->pid = 'new-d0eeae3c-1b7c-425f-b812-0ac88994faf5';
  $pane->panel = 'header_region';
  $pane->type = 'block';
  $pane->subtype = 'blockify-blockify-tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd0eeae3c-1b7c-425f-b812-0ac88994faf5';
  $display->content['new-d0eeae3c-1b7c-425f-b812-0ac88994faf5'] = $pane;
  $display->panels['header_region'][3] = 'new-d0eeae3c-1b7c-425f-b812-0ac88994faf5';
  $pane = new stdClass();
  $pane->pid = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $pane->panel = 'header_region';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_object',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->content['new-29a785ed-64df-4268-9d08-facecbfdcef3'] = $pane;
  $display->panels['header_region'][4] = 'new-29a785ed-64df-4268-9d08-facecbfdcef3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__panel_context_f23e0425-4472-4d3f-a819-687a7fa7fdbe'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_search_results_page__panel_context_05df27a8-c34e-4746-bf73-f07f04e3a5bd';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_search_results_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search Results All Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'islandora/search*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:islandora_search_and_content_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'test_region' => NULL,
      'region_right' => NULL,
      'header_region' => NULL,
      'page_views' => NULL,
      'contextual_content' => NULL,
      'region_main_content' => NULL,
      'first_sidebar_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6374158b-d703-4f27-867d-9c5450dfb27a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_search_results_page__panel_context_05df27a8-c34e-4746-bf73-f07f04e3a5bd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9aae9f9c-ecff-4476-864a-39ffe49f6073';
  $pane->panel = 'contextual_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_search_results_page',
    'override_title' => 1,
    'override_title_text' => 'All Search Results',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'display-none',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9aae9f9c-ecff-4476-864a-39ffe49f6073';
  $display->content['new-9aae9f9c-ecff-4476-864a-39ffe49f6073'] = $pane;
  $display->panels['contextual_content'][0] = 'new-9aae9f9c-ecff-4476-864a-39ffe49f6073';
  $pane = new stdClass();
  $pane->pid = 'new-8c320b5c-034e-4888-9e29-bc5f5cc2b45c';
  $pane->panel = 'contextual_content';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-islandora_solr_display_manager';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8c320b5c-034e-4888-9e29-bc5f5cc2b45c';
  $display->content['new-8c320b5c-034e-4888-9e29-bc5f5cc2b45c'] = $pane;
  $display->panels['contextual_content'][1] = 'new-8c320b5c-034e-4888-9e29-bc5f5cc2b45c';
  $pane = new stdClass();
  $pane->pid = 'new-0365568d-afdd-4bc0-83f7-838d6ad31567';
  $pane->panel = 'first_sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'islandora_solr-basic_facets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0365568d-afdd-4bc0-83f7-838d6ad31567';
  $display->content['new-0365568d-afdd-4bc0-83f7-838d6ad31567'] = $pane;
  $display->panels['first_sidebar_left'][0] = 'new-0365568d-afdd-4bc0-83f7-838d6ad31567';
  $pane = new stdClass();
  $pane->pid = 'new-dce88a12-3a44-4812-a018-bdf712509f8b';
  $pane->panel = 'region_main_content';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'islandora_search_results_page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dce88a12-3a44-4812-a018-bdf712509f8b';
  $display->content['new-dce88a12-3a44-4812-a018-bdf712509f8b'] = $pane;
  $display->panels['region_main_content'][0] = 'new-dce88a12-3a44-4812-a018-bdf712509f8b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_search_results_page__panel_context_05df27a8-c34e-4746-bf73-f07f04e3a5bd'] = $handler;

  return $export;
}
