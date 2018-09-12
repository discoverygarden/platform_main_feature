<?php
/**
 * @file
 * uconn_display_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uconn_display_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__about-page-template';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'About Page Template',
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
    'name' => 'about-page-template',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-bridgeport-history-center',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->storage_id = 'node_view__about-page-template';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][1] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][2] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__about-page-template'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__cahsl-about-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 19;
  $handler->conf = array(
    'title' => 'CAHSL About Page',
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
    'name' => 'cahsl-about-page',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-cahsl',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->title = 'Connecticut Association of Health Science Libraries';
  $display->uuid = '8aac6074-0bf9-4dee-b92d-75506f4bc360';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__cahsl-about-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e8e3e384-125f-4015-8ac0-462b67aeba68';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-f2ce6c3861e2f68b7a97434d6742aa2f';
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
  $pane->uuid = 'e8e3e384-125f-4015-8ac0-462b67aeba68';
  $display->content['new-e8e3e384-125f-4015-8ac0-462b67aeba68'] = $pane;
  $display->panels['branding_icon'][0] = 'new-e8e3e384-125f-4015-8ac0-462b67aeba68';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-9368df00-ce44-428d-a4ab-e36f0ef67016';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-cahsl-contextual-menu';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9368df00-ce44-428d-a4ab-e36f0ef67016';
  $display->content['new-9368df00-ce44-428d-a4ab-e36f0ef67016'] = $pane;
  $display->panels['header_title'][0] = 'new-9368df00-ce44-428d-a4ab-e36f0ef67016';
  $pane = new stdClass();
  $pane->pid = 'new-908da211-f7e0-44ff-aae8-0381e82e24cd';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-cahsl-social-media-menu';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '908da211-f7e0-44ff-aae8-0381e82e24cd';
  $display->content['new-908da211-f7e0-44ff-aae8-0381e82e24cd'] = $pane;
  $display->panels['header_title'][1] = 'new-908da211-f7e0-44ff-aae8-0381e82e24cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__cahsl-about-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__ch-booth-library-about-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 17;
  $handler->conf = array(
    'title' => 'CH Booth Library About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions biblio',
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
    'name' => 'ch-booth-library-about-page',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-ch-booth-library',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->title = 'About the Cyrenius H Booth Library - Bibliomation Digital Collections';
  $display->uuid = '8aac6074-0bf9-4dee-b92d-75506f4bc360';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__ch-booth-library-about-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-174c8515-8082-4796-a1fc-7f5b4c918691';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-23b93fa3b40aab9410983b3cc6d8de94';
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
  $pane->uuid = '174c8515-8082-4796-a1fc-7f5b4c918691';
  $display->content['new-174c8515-8082-4796-a1fc-7f5b4c918691'] = $pane;
  $display->panels['branding_icon'][0] = 'new-174c8515-8082-4796-a1fc-7f5b4c918691';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-b8088a11-19bf-431b-a083-f4c708b94743';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ch-booth-library-contextual';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b8088a11-19bf-431b-a083-f4c708b94743';
  $display->content['new-b8088a11-19bf-431b-a083-f4c708b94743'] = $pane;
  $display->panels['header_title'][0] = 'new-b8088a11-19bf-431b-a083-f4c708b94743';
  $pane = new stdClass();
  $pane->pid = 'new-9f58e408-da3a-47f9-9f75-639f3e46f478';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ch-booth-library-social-med';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9f58e408-da3a-47f9-9f75-639f3e46f478';
  $display->content['new-9f58e408-da3a-47f9-9f75-639f3e46f478'] = $pane;
  $display->panels['header_title'][1] = 'new-9f58e408-da3a-47f9-9f75-639f3e46f478';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__ch-booth-library-about-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__deep-river-public-library-about-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Deep River Public Library About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions biblio',
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
    'name' => 'deep-river-public-library-about-page',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-deep-river-public-library',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->title = 'About Deep River Public Library';
  $display->uuid = '8aac6074-0bf9-4dee-b92d-75506f4bc360';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__deep-river-public-library-about-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d80b4ecf-0867-4bd8-99b6-8918abffffb5';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-082aaf8afecfde74cb0c97375d86cd81';
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
  $pane->uuid = 'd80b4ecf-0867-4bd8-99b6-8918abffffb5';
  $display->content['new-d80b4ecf-0867-4bd8-99b6-8918abffffb5'] = $pane;
  $display->panels['branding_icon'][0] = 'new-d80b4ecf-0867-4bd8-99b6-8918abffffb5';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-48cd5805-0917-44e6-b6d4-863642fbc564';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-deep-river-public-library-c';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '48cd5805-0917-44e6-b6d4-863642fbc564';
  $display->content['new-48cd5805-0917-44e6-b6d4-863642fbc564'] = $pane;
  $display->panels['header_title'][0] = 'new-48cd5805-0917-44e6-b6d4-863642fbc564';
  $pane = new stdClass();
  $pane->pid = 'new-a0d0513c-0799-4c2f-bc64-a236bcbb3d89';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-deep-river-public-library-s';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0d0513c-0799-4c2f-bc64-a236bcbb3d89';
  $display->content['new-a0d0513c-0799-4c2f-bc64-a236bcbb3d89'] = $pane;
  $display->panels['header_title'][1] = 'new-a0d0513c-0799-4c2f-bc64-a236bcbb3d89';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__deep-river-public-library-about-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__derby-public-library-about-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 12;
  $handler->conf = array(
    'title' => 'Derby Public Library About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions biblio',
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
    'name' => 'derby-public-library-about-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-derby-public-library',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->storage_id = 'node_view__derby-public-library-about-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f3a015bf-50a0-4ba5-8d76-d8f563fa0ce5';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-0a950b17620b876cf3fee206ec5864c0';
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
  $pane->uuid = 'f3a015bf-50a0-4ba5-8d76-d8f563fa0ce5';
  $display->content['new-f3a015bf-50a0-4ba5-8d76-d8f563fa0ce5'] = $pane;
  $display->panels['branding_icon'][0] = 'new-f3a015bf-50a0-4ba5-8d76-d8f563fa0ce5';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-dd548f0d-bcc2-441a-91e8-2432d668207d';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-derby-public-library-contex';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd548f0d-bcc2-441a-91e8-2432d668207d';
  $display->content['new-dd548f0d-bcc2-441a-91e8-2432d668207d'] = $pane;
  $display->panels['header_title'][0] = 'new-dd548f0d-bcc2-441a-91e8-2432d668207d';
  $pane = new stdClass();
  $pane->pid = 'new-5fdb3cb7-fb7b-4061-b03c-c738c0c54c63';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-derby-public-library-social';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5fdb3cb7-fb7b-4061-b03c-c738c0c54c63';
  $display->content['new-5fdb3cb7-fb7b-4061-b03c-c738c0c54c63'] = $pane;
  $display->panels['header_title'][1] = 'new-5fdb3cb7-fb7b-4061-b03c-c738c0c54c63';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__derby-public-library-about-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__error-pages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 20;
  $handler->conf = array(
    'title' => 'Error Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'error-pages',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '403-error
404-error
',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 'main-row',
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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f8db55f-7b47-4bc7-85b4-fbd6f76d2a73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__error-pages';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->content['new-1d45c256-822d-4488-a14b-96b3d40a94db'] = $pane;
  $display->panels['center'][0] = 'new-1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__error-pages'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__manage-user-landing-pages';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 21;
  $handler->conf = array(
    'title' => 'Manage User Landing Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'manage-user-landing-pages',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'uconn-landing-page
',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 1,
          1 => 'main-row',
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
          0 => 'header_logo',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header_logo' => array(
        'type' => 'region',
        'title' => 'Header Logo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'header_logo' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f8db55f-7b47-4bc7-85b4-fbd6f76d2a73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__manage-user-landing-pages';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->content['new-1d45c256-822d-4488-a14b-96b3d40a94db'] = $pane;
  $display->panels['center'][0] = 'new-1d45c256-822d-4488-a14b-96b3d40a94db';
  $pane = new stdClass();
  $pane->pid = 'new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $pane->panel = 'header_logo';
  $pane->type = 'block';
  $pane->subtype = 'views-d424018a07bb5d783e50f9dd123cc2ff';
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
  $pane->uuid = 'b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $display->content['new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc'] = $pane;
  $display->panels['header_logo'][0] = 'new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__manage-user-landing-pages'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_36e7f535-95a8-4d61-98f1-dab18ea4bb13';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'American School for the Deaf About Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions ',
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
    'name' => 'american-school-for-the-deaf-about-page',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-american-school-for-the-deaf',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->storage_id = 'node_view__panel_context_36e7f535-95a8-4d61-98f1-dab18ea4bb13';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fae00003-6174-497f-b3d2-348efd6d8acf';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-ffbe57736519265e8834b674a37d1344';
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
  $pane->uuid = 'fae00003-6174-497f-b3d2-348efd6d8acf';
  $display->content['new-fae00003-6174-497f-b3d2-348efd6d8acf'] = $pane;
  $display->panels['branding_icon'][0] = 'new-fae00003-6174-497f-b3d2-348efd6d8acf';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-american-school-for-the-dea';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $display->content['new-f867fc5e-1588-490e-b0c4-a9fade5f6d33'] = $pane;
  $display->panels['header_title'][0] = 'new-f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $pane = new stdClass();
  $pane->pid = 'new-e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-asd-social-media';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $display->content['new-e61b6574-b363-4082-b4c5-e5b2f14dafbd'] = $pane;
  $display->panels['header_title'][1] = 'new-e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_36e7f535-95a8-4d61-98f1-dab18ea4bb13'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__rem';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 14;
  $handler->conf = array(
    'title' => 'Remembering WWI',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'about-institutions ',
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
    'name' => 'rem',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about-remembering-wwi',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'title' => 'Recently Added',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'recently-added',
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
          0 => 'branding_icon',
          1 => 'header_region_top',
        ),
        'parent' => 'main',
        'class' => 'header-row-top',
        'hide_empty' => 0,
      ),
      'header_region_top' => array(
        'type' => 'region',
        'title' => 'Header Region Top',
        'width' => '74.98245938328583',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'branding_icon' => array(
        'type' => 'region',
        'title' => 'Branding Icon',
        'width' => '25.017540616714168',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'brandning-icon',
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
      'sample_region' => NULL,
      'branding_icon' => NULL,
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
  $display->storage_id = 'node_view__rem';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-41eceb11-3aa3-4fc3-b943-5a634703a3f8';
  $pane->panel = 'branding_icon';
  $pane->type = 'block';
  $pane->subtype = 'views-e5ed3d227efc677f4c1894dcba590e81';
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
  $pane->uuid = '41eceb11-3aa3-4fc3-b943-5a634703a3f8';
  $display->content['new-41eceb11-3aa3-4fc3-b943-5a634703a3f8'] = $pane;
  $display->panels['branding_icon'][0] = 'new-41eceb11-3aa3-4fc3-b943-5a634703a3f8';
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
  $pane->pid = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
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
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $display->content['new-5e960bb5-3503-43ce-8be0-7d67cc4407fd'] = $pane;
  $display->panels['header_region_top'][0] = 'new-5e960bb5-3503-43ce-8be0-7d67cc4407fd';
  $pane = new stdClass();
  $pane->pid = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane->panel = 'header_region_top';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $display->content['new-7207f16c-0f9b-4f07-9331-f0ac20b315b0'] = $pane;
  $display->panels['header_region_top'][1] = 'new-7207f16c-0f9b-4f07-9331-f0ac20b315b0';
  $pane = new stdClass();
  $pane->pid = 'new-f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-american-school-for-the-dea';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $display->content['new-f867fc5e-1588-490e-b0c4-a9fade5f6d33'] = $pane;
  $display->panels['header_title'][0] = 'new-f867fc5e-1588-490e-b0c4-a9fade5f6d33';
  $pane = new stdClass();
  $pane->pid = 'new-e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $pane->panel = 'header_title';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-asd-social-media';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $display->content['new-e61b6574-b363-4082-b4c5-e5b2f14dafbd'] = $pane;
  $display->panels['header_title'][1] = 'new-e61b6574-b363-4082-b4c5-e5b2f14dafbd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__rem'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__user-profile-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 18;
  $handler->conf = array(
    'title' => 'User Profile Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user-profile-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'user/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
          0 => 1,
          1 => 'main-row',
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
          0 => 'header_logo',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header_logo' => array(
        'type' => 'region',
        'title' => 'Header Logo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'header_logo' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f8db55f-7b47-4bc7-85b4-fbd6f76d2a73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__user-profile-page';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d45c256-822d-4488-a14b-96b3d40a94db';
  $display->content['new-1d45c256-822d-4488-a14b-96b3d40a94db'] = $pane;
  $display->panels['center'][0] = 'new-1d45c256-822d-4488-a14b-96b3d40a94db';
  $pane = new stdClass();
  $pane->pid = 'new-ed0471bd-6907-43e1-b7c2-25982c27d674';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'system-user-menu';
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
  $pane->uuid = 'ed0471bd-6907-43e1-b7c2-25982c27d674';
  $display->content['new-ed0471bd-6907-43e1-b7c2-25982c27d674'] = $pane;
  $display->panels['center'][1] = 'new-ed0471bd-6907-43e1-b7c2-25982c27d674';
  $pane = new stdClass();
  $pane->pid = 'new-087e8886-5c8e-4e5c-8992-97c9f53441be';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'primary',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '087e8886-5c8e-4e5c-8992-97c9f53441be';
  $display->content['new-087e8886-5c8e-4e5c-8992-97c9f53441be'] = $pane;
  $display->panels['center'][2] = 'new-087e8886-5c8e-4e5c-8992-97c9f53441be';
  $pane = new stdClass();
  $pane->pid = 'new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $pane->panel = 'header_logo';
  $pane->type = 'block';
  $pane->subtype = 'views-d424018a07bb5d783e50f9dd123cc2ff';
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
  $pane->uuid = 'b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $display->content['new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc'] = $pane;
  $display->panels['header_logo'][0] = 'new-b9cc91d3-e5cb-4a9f-8db5-6efa4fdaa0cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__user-profile-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__all-institutions-page';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'All Institutions Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'root',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'all-institutions-page',
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
      'logic' => 'or',
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
          0 => 'region_main_content',
        ),
        'parent' => 'main',
        'class' => 'main-page-column',
        'hide_empty' => 0,
      ),
      'region_main_content' => array(
        'type' => 'region',
        'title' => 'Region Main Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
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
  $display->storage_id = 'pm_existing_pages_islandora_object__all-institutions-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a425faac-26a2-42d9-8b93-88e8deb85134';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ctda-contextual-menu';
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
  $pane->uuid = 'a425faac-26a2-42d9-8b93-88e8deb85134';
  $display->content['new-a425faac-26a2-42d9-8b93-88e8deb85134'] = $pane;
  $display->panels['page_views'][0] = 'new-a425faac-26a2-42d9-8b93-88e8deb85134';
  $pane = new stdClass();
  $pane->pid = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane->panel = 'region_main_content';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['region_main_content'][0] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $display->content['new-4eb1f4a3-c106-49e3-8441-6871e934cdc9'] = $pane;
  $display->panels['region_main_content'][1] = 'new-4eb1f4a3-c106-49e3-8441-6871e934cdc9';
  $pane = new stdClass();
  $pane->pid = 'new-55d996ee-d8ec-4a33-bb7b-b15f860ca8ec';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '55d996ee-d8ec-4a33-bb7b-b15f860ca8ec';
  $display->content['new-55d996ee-d8ec-4a33-bb7b-b15f860ca8ec'] = $pane;
  $display->panels['region_right'][0] = 'new-55d996ee-d8ec-4a33-bb7b-b15f860ca8ec';
  $pane = new stdClass();
  $pane->pid = 'new-e8a3ab10-cdcf-4bc0-b441-26f127831282';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'e8a3ab10-cdcf-4bc0-b441-26f127831282';
  $display->content['new-e8a3ab10-cdcf-4bc0-b441-26f127831282'] = $pane;
  $display->panels['region_right'][1] = 'new-e8a3ab10-cdcf-4bc0-b441-26f127831282';
  $pane = new stdClass();
  $pane->pid = 'new-d6f73281-be65-402b-b402-b1b1677b8308';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-ebde2b0158caed4d926680a391e122c4';
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
  $pane->uuid = 'd6f73281-be65-402b-b402-b1b1677b8308';
  $display->content['new-d6f73281-be65-402b-b402-b1b1677b8308'] = $pane;
  $display->panels['test_region'][0] = 'new-d6f73281-be65-402b-b402-b1b1677b8308';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__all-institutions-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__biblio-test-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 18;
  $handler->conf = array(
    'title' => 'Biblio Test Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'biblio',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'biblio-test-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '140009',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->title = 'Biblio Test Collection';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__biblio-test-collection';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-f5d81da5-4f80-4b47-b1b2-beb7c319c576';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-biblio-test-contextual-menu';
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
  $pane->uuid = 'f5d81da5-4f80-4b47-b1b2-beb7c319c576';
  $display->content['new-f5d81da5-4f80-4b47-b1b2-beb7c319c576'] = $pane;
  $display->panels['page_views'][2] = 'new-f5d81da5-4f80-4b47-b1b2-beb7c319c576';
  $pane = new stdClass();
  $pane->pid = 'new-33c9740b-7ec9-4571-9900-500ebc92e522';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-biblio-social-media-menu';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '33c9740b-7ec9-4571-9900-500ebc92e522';
  $display->content['new-33c9740b-7ec9-4571-9900-500ebc92e522'] = $pane;
  $display->panels['page_views'][3] = 'new-33c9740b-7ec9-4571-9900-500ebc92e522';
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
  $pane->pid = 'new-c76e418b-23b5-4415-96a6-25eb8b8d79ef';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = 'c76e418b-23b5-4415-96a6-25eb8b8d79ef';
  $display->content['new-c76e418b-23b5-4415-96a6-25eb8b8d79ef'] = $pane;
  $display->panels['region_right'][0] = 'new-c76e418b-23b5-4415-96a6-25eb8b8d79ef';
  $pane = new stdClass();
  $pane->pid = 'new-e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $display->content['new-e2cb3703-3f09-480b-bf14-897e09b1ac7f'] = $pane;
  $display->panels['region_right'][1] = 'new-e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $pane = new stdClass();
  $pane->pid = 'new-87dfc593-e10f-4bd0-b0a0-15cde1e27430';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-23b93fa3b40aab9410983b3cc6d8de94';
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
  $pane->uuid = '87dfc593-e10f-4bd0-b0a0-15cde1e27430';
  $display->content['new-87dfc593-e10f-4bd0-b0a0-15cde1e27430'] = $pane;
  $display->panels['test_region'][0] = 'new-87dfc593-e10f-4bd0-b0a0-15cde1e27430';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__biblio-test-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__ch-booth-library-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 15;
  $handler->conf = array(
    'title' => 'CH Booth Library Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'biblio',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ch-booth-library-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '140008',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
    'test_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'The Cyrenius H. Booth Library Collection - Bibliomation Digital Collections';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__ch-booth-library-collection';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-bf03310c-b08d-4d2f-b893-cb4b4795d382';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ch-booth-library-contextual';
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
  $pane->uuid = 'bf03310c-b08d-4d2f-b893-cb4b4795d382';
  $display->content['new-bf03310c-b08d-4d2f-b893-cb4b4795d382'] = $pane;
  $display->panels['page_views'][2] = 'new-bf03310c-b08d-4d2f-b893-cb4b4795d382';
  $pane = new stdClass();
  $pane->pid = 'new-49bd7233-2d2b-4927-bac3-0e827162381c';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-ch-booth-library-social-med';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '49bd7233-2d2b-4927-bac3-0e827162381c';
  $display->content['new-49bd7233-2d2b-4927-bac3-0e827162381c'] = $pane;
  $display->panels['page_views'][3] = 'new-49bd7233-2d2b-4927-bac3-0e827162381c';
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
  $pane->pid = 'new-6342b36e-1f4f-4461-a67a-458b4beaf349';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '6342b36e-1f4f-4461-a67a-458b4beaf349';
  $display->content['new-6342b36e-1f4f-4461-a67a-458b4beaf349'] = $pane;
  $display->panels['region_right'][0] = 'new-6342b36e-1f4f-4461-a67a-458b4beaf349';
  $pane = new stdClass();
  $pane->pid = 'new-ac316cba-4efc-4933-b88b-ab1d5a814c8f';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'ac316cba-4efc-4933-b88b-ab1d5a814c8f';
  $display->content['new-ac316cba-4efc-4933-b88b-ab1d5a814c8f'] = $pane;
  $display->panels['region_right'][1] = 'new-ac316cba-4efc-4933-b88b-ab1d5a814c8f';
  $pane = new stdClass();
  $pane->pid = 'new-68410807-424b-47ab-9867-c9f8266566e8';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-23b93fa3b40aab9410983b3cc6d8de94';
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
  $pane->uuid = '68410807-424b-47ab-9867-c9f8266566e8';
  $display->content['new-68410807-424b-47ab-9867-c9f8266566e8'] = $pane;
  $display->panels['test_region'][0] = 'new-68410807-424b-47ab-9867-c9f8266566e8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__ch-booth-library-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__connecticut-state-archives';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Connecticut State Archives',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'connecticut-state-archives',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'islandora/object/30002:CTSTateArchives',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__connecticut-state-archives';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-89a2a816-365b-42f2-ab8f-c61ea6608e43';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-csl-contextual-menu';
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
  $pane->uuid = '89a2a816-365b-42f2-ab8f-c61ea6608e43';
  $display->content['new-89a2a816-365b-42f2-ab8f-c61ea6608e43'] = $pane;
  $display->panels['page_views'][2] = 'new-89a2a816-365b-42f2-ab8f-c61ea6608e43';
  $pane = new stdClass();
  $pane->pid = 'new-45ddb3a4-889f-463d-84c8-39aeaae8a145';
  $pane->panel = 'page_views';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '45ddb3a4-889f-463d-84c8-39aeaae8a145';
  $display->content['new-45ddb3a4-889f-463d-84c8-39aeaae8a145'] = $pane;
  $display->panels['page_views'][3] = 'new-45ddb3a4-889f-463d-84c8-39aeaae8a145';
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
    'markup' => 'none',
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
  $pane->pid = 'new-4421c501-2ea9-4818-8516-778d37f21403';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-57ccae2fa7a974592826284858adecc4';
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
  $pane->uuid = '4421c501-2ea9-4818-8516-778d37f21403';
  $display->content['new-4421c501-2ea9-4818-8516-778d37f21403'] = $pane;
  $display->panels['test_region'][0] = 'new-4421c501-2ea9-4818-8516-778d37f21403';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__connecticut-state-archives'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__deep-river-public-library-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 14;
  $handler->conf = array(
    'title' => 'Deep River Public Library Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'biblio',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'deep-river-public-library-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '140066',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->title = 'Deep River Public Library Collection - Bibliomation Digital Collections';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__deep-river-public-library-collection';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-06edc44c-cf80-4d61-a836-1d9075591a09';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-deep-river-public-library-c';
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
  $pane->uuid = '06edc44c-cf80-4d61-a836-1d9075591a09';
  $display->content['new-06edc44c-cf80-4d61-a836-1d9075591a09'] = $pane;
  $display->panels['page_views'][2] = 'new-06edc44c-cf80-4d61-a836-1d9075591a09';
  $pane = new stdClass();
  $pane->pid = 'new-bc30054f-c4b3-4686-9859-5c194716191f';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-deep-river-public-library-s';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bc30054f-c4b3-4686-9859-5c194716191f';
  $display->content['new-bc30054f-c4b3-4686-9859-5c194716191f'] = $pane;
  $display->panels['page_views'][3] = 'new-bc30054f-c4b3-4686-9859-5c194716191f';
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
  $pane->pid = 'new-1cd1d948-e5f9-4c52-b33a-71f065fa3969';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1cd1d948-e5f9-4c52-b33a-71f065fa3969';
  $display->content['new-1cd1d948-e5f9-4c52-b33a-71f065fa3969'] = $pane;
  $display->panels['region_right'][0] = 'new-1cd1d948-e5f9-4c52-b33a-71f065fa3969';
  $pane = new stdClass();
  $pane->pid = 'new-e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $display->content['new-e2cb3703-3f09-480b-bf14-897e09b1ac7f'] = $pane;
  $display->panels['region_right'][1] = 'new-e2cb3703-3f09-480b-bf14-897e09b1ac7f';
  $pane = new stdClass();
  $pane->pid = 'new-a3009797-c8e6-4201-974d-1e6dd4c97484';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-082aaf8afecfde74cb0c97375d86cd81';
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
  $pane->uuid = 'a3009797-c8e6-4201-974d-1e6dd4c97484';
  $display->content['new-a3009797-c8e6-4201-974d-1e6dd4c97484'] = $pane;
  $display->panels['test_region'][0] = 'new-a3009797-c8e6-4201-974d-1e6dd4c97484';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__deep-river-public-library-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__derby-public-library-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Derby Public Library Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'biblio',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'derby-public-library-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '140011',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->title = 'Derby Public Library Collection - Bibliomation Digital Collections';
  $display->uuid = 'e5fb01b5-e3ef-4927-a3f1-6b9a555fee77';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_islandora_object__derby-public-library-collection';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-b10a9c1f-0dc8-4536-bc3d-b5a1d92f304c';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-derby-public-library-contex';
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
  $pane->uuid = 'b10a9c1f-0dc8-4536-bc3d-b5a1d92f304c';
  $display->content['new-b10a9c1f-0dc8-4536-bc3d-b5a1d92f304c'] = $pane;
  $display->panels['page_views'][2] = 'new-b10a9c1f-0dc8-4536-bc3d-b5a1d92f304c';
  $pane = new stdClass();
  $pane->pid = 'new-1da8d8ee-f6c2-4a04-8882-d563e0beb76d';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-derby-public-library-social';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1da8d8ee-f6c2-4a04-8882-d563e0beb76d';
  $display->content['new-1da8d8ee-f6c2-4a04-8882-d563e0beb76d'] = $pane;
  $display->panels['page_views'][3] = 'new-1da8d8ee-f6c2-4a04-8882-d563e0beb76d';
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
    'markup' => 'none',
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
  $pane->pid = 'new-cef405f0-7c83-410e-ae64-b99a38d49ee0';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-0a950b17620b876cf3fee206ec5864c0';
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
  $pane->uuid = 'cef405f0-7c83-410e-ae64-b99a38d49ee0';
  $display->content['new-cef405f0-7c83-410e-ae64-b99a38d49ee0'] = $pane;
  $display->panels['test_region'][0] = 'new-cef405f0-7c83-410e-ae64-b99a38d49ee0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__derby-public-library-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__morgans_test';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 25;
  $handler->conf = array(
    'title' => 'morgans_test',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'morgans_test',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '40002',
            'begins_with' => '1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__morgans_test';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-chs-contextual-menu';
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
  $pane->uuid = 'e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $display->content['new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd'] = $pane;
  $display->panels['page_views'][2] = 'new-e2acd7e5-b5f2-4087-8900-5aa0aeaf50bd';
  $pane = new stdClass();
  $pane->pid = 'new-7592906c-dd8b-4a29-841b-ee882c8131d8';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-chs-social-media-menu';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7592906c-dd8b-4a29-841b-ee882c8131d8';
  $display->content['new-7592906c-dd8b-4a29-841b-ee882c8131d8'] = $pane;
  $display->panels['page_views'][3] = 'new-7592906c-dd8b-4a29-841b-ee882c8131d8';
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
    'markup' => 'none',
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
  $pane->pid = 'new-c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-761c3e690708edf1750acde484294c48';
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
  $pane->uuid = 'c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $display->content['new-c2990bdb-83c7-46d7-a884-2f2c82672ae3'] = $pane;
  $display->panels['test_region'][0] = 'new-c2990bdb-83c7-46d7-a884-2f2c82672ae3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__morgans_test'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__panel_context_87188f32-d500-49c9-a457-478d7e313e6f';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Avon Free Public Library Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'avon',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'avon-free-public-library-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '150002',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__panel_context_87188f32-d500-49c9-a457-478d7e313e6f';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-bc4c6026-8a77-4fa3-8cbb-5de2adb6c7eb';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-avon-free-public-library-co';
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
  $pane->uuid = 'bc4c6026-8a77-4fa3-8cbb-5de2adb6c7eb';
  $display->content['new-bc4c6026-8a77-4fa3-8cbb-5de2adb6c7eb'] = $pane;
  $display->panels['page_views'][2] = 'new-bc4c6026-8a77-4fa3-8cbb-5de2adb6c7eb';
  $pane = new stdClass();
  $pane->pid = 'new-1ca7afe3-2bef-4ac4-8a13-121f0388abf3';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-avon-free-public-library-so';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1ca7afe3-2bef-4ac4-8a13-121f0388abf3';
  $display->content['new-1ca7afe3-2bef-4ac4-8a13-121f0388abf3'] = $pane;
  $display->panels['page_views'][3] = 'new-1ca7afe3-2bef-4ac4-8a13-121f0388abf3';
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
  $pane->pid = 'new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $display->content['new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6'] = $pane;
  $display->panels['region_right'][0] = 'new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $pane = new stdClass();
  $pane->pid = 'new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'd90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $display->content['new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a'] = $pane;
  $display->panels['region_right'][1] = 'new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $pane = new stdClass();
  $pane->pid = 'new-98d8ceba-569e-4109-9cd2-45f6ac0e0ebf';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-b4d6399d9a2139d1d4ec4f6ac2cce016';
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
  $pane->uuid = '98d8ceba-569e-4109-9cd2-45f6ac0e0ebf';
  $display->content['new-98d8ceba-569e-4109-9cd2-45f6ac0e0ebf'] = $pane;
  $display->panels['test_region'][0] = 'new-98d8ceba-569e-4109-9cd2-45f6ac0e0ebf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__panel_context_87188f32-d500-49c9-a457-478d7e313e6f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__trinity-college';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 16;
  $handler->conf = array(
    'title' => 'Trinity College',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'trinity',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'trinity-college',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '120002',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__trinity-college';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-ffabd6c5-8114-4d9b-9136-41f2f5282154';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-trinity-college-contextual-';
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
  $pane->uuid = 'ffabd6c5-8114-4d9b-9136-41f2f5282154';
  $display->content['new-ffabd6c5-8114-4d9b-9136-41f2f5282154'] = $pane;
  $display->panels['page_views'][2] = 'new-ffabd6c5-8114-4d9b-9136-41f2f5282154';
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
  $pane->pid = 'new-6585e874-a8c4-4e60-8bc2-6bfdb46c3ddd';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '6585e874-a8c4-4e60-8bc2-6bfdb46c3ddd';
  $display->content['new-6585e874-a8c4-4e60-8bc2-6bfdb46c3ddd'] = $pane;
  $display->panels['region_right'][0] = 'new-6585e874-a8c4-4e60-8bc2-6bfdb46c3ddd';
  $pane = new stdClass();
  $pane->pid = 'new-e2e4d4e2-dce3-46b9-9444-3af068874adc';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'e2e4d4e2-dce3-46b9-9444-3af068874adc';
  $display->content['new-e2e4d4e2-dce3-46b9-9444-3af068874adc'] = $pane;
  $display->panels['region_right'][1] = 'new-e2e4d4e2-dce3-46b9-9444-3af068874adc';
  $pane = new stdClass();
  $pane->pid = 'new-4d19c710-59fe-4b08-80e1-4a545e3ebdd4';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-7313e337b6c1654a8252187792958518';
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
  $pane->uuid = '4d19c710-59fe-4b08-80e1-4a545e3ebdd4';
  $display->content['new-4d19c710-59fe-4b08-80e1-4a545e3ebdd4'] = $pane;
  $display->panels['test_region'][0] = 'new-4d19c710-59fe-4b08-80e1-4a545e3ebdd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__trinity-college'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__windham-textile-history-museum';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 9;
  $handler->conf = array(
    'title' => 'Windham Textile & History Museum',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'windham-textile-history-museum',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '360002',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'width' => '24.8887781801541',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'region_right' => array(
        'type' => 'region',
        'title' => 'Branding Description',
        'width' => '75.1112218198459',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__windham-textile-history-museum';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-aaab600e-71b3-4035-9899-3312e9843289';
  $pane->panel = 'page_views';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-windham-textile-history-con';
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
  $pane->uuid = 'aaab600e-71b3-4035-9899-3312e9843289';
  $display->content['new-aaab600e-71b3-4035-9899-3312e9843289'] = $pane;
  $display->panels['page_views'][2] = 'new-aaab600e-71b3-4035-9899-3312e9843289';
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
  $pane->pid = 'new-410e59a4-857e-4f1e-a0fc-ce0cebfa0116';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '410e59a4-857e-4f1e-a0fc-ce0cebfa0116';
  $display->content['new-410e59a4-857e-4f1e-a0fc-ce0cebfa0116'] = $pane;
  $display->panels['region_right'][0] = 'new-410e59a4-857e-4f1e-a0fc-ce0cebfa0116';
  $pane = new stdClass();
  $pane->pid = 'new-443b23e6-e0f8-4e22-b231-a6c5d2dc5467';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = '443b23e6-e0f8-4e22-b231-a6c5d2dc5467';
  $display->content['new-443b23e6-e0f8-4e22-b231-a6c5d2dc5467'] = $pane;
  $display->panels['region_right'][1] = 'new-443b23e6-e0f8-4e22-b231-a6c5d2dc5467';
  $pane = new stdClass();
  $pane->pid = 'new-1feb5c8f-648e-4fb9-bc08-15119fb1d0c9';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-4fe184b50f03f9ff1dee4ee83f30103a';
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
  $pane->uuid = '1feb5c8f-648e-4fb9-bc08-15119fb1d0c9';
  $display->content['new-1feb5c8f-648e-4fb9-bc08-15119fb1d0c9'] = $pane;
  $display->panels['test_region'][0] = 'new-1feb5c8f-648e-4fb9-bc08-15119fb1d0c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__windham-textile-history-museum'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_object__world-war-one-collection';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_object';
  $handler->handler = 'panel_context';
  $handler->weight = 12;
  $handler->conf = array(
    'title' => 'World War One Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'worldwarone',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'world-war-one-collection',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '750002',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_object__world-war-one-collection';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d0e580e-7f82-423a-952f-5ab1bac68b77';
  $display->content['new-8d0e580e-7f82-423a-952f-5ab1bac68b77'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8d0e580e-7f82-423a-952f-5ab1bac68b77';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '94a371ba-a746-4583-8c4a-8778045df78e';
  $display->content['new-94a371ba-a746-4583-8c4a-8778045df78e'] = $pane;
  $display->panels['contextual_content'][1] = 'new-94a371ba-a746-4583-8c4a-8778045df78e';
  $pane = new stdClass();
  $pane->pid = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e7c7180-2993-45de-b033-8e027cb249d5';
  $display->content['new-2e7c7180-2993-45de-b033-8e027cb249d5'] = $pane;
  $display->panels['contextual_content'][2] = 'new-2e7c7180-2993-45de-b033-8e027cb249d5';
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
  $pane->pid = 'new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-mods_page_title-block';
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
  $pane->uuid = '5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $display->content['new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6'] = $pane;
  $display->panels['region_right'][0] = 'new-5a43cf9c-7f1b-43d4-be2a-07bc31cc81d6';
  $pane = new stdClass();
  $pane->pid = 'new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $pane->panel = 'region_right';
  $pane->type = 'block';
  $pane->subtype = 'uconndora-uconndora_metadata_description';
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
  $pane->uuid = 'd90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $display->content['new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a'] = $pane;
  $display->panels['region_right'][1] = 'new-d90a0abc-706d-4f3f-8dd7-0b1cf01b529a';
  $pane = new stdClass();
  $pane->pid = 'new-e0ca3302-6414-4157-b3e7-0df79403299b';
  $pane->panel = 'test_region';
  $pane->type = 'block';
  $pane->subtype = 'views-e5ed3d227efc677f4c1894dcba590e81';
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
  $pane->uuid = 'e0ca3302-6414-4157-b3e7-0df79403299b';
  $display->content['new-e0ca3302-6414-4157-b3e7-0df79403299b'] = $pane;
  $display->panels['test_region'][0] = 'new-e0ca3302-6414-4157-b3e7-0df79403299b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_islandora_object__world-war-one-collection'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_islandora_search_results_page__bibliomation-search-page';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'islandora_search_results_page';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Bibliomation Search Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'biblio',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'bibliomation-search-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'islandora_institution_namespace_value',
          'settings' => array(
            'namespace' => '140002',
            'operation' => 'is_equal_to',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->storage_id = 'pm_existing_pages_islandora_search_results_page__bibliomation-search-page';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c320b5c-034e-4888-9e29-bc5f5cc2b45c';
  $display->content['new-8c320b5c-034e-4888-9e29-bc5f5cc2b45c'] = $pane;
  $display->panels['contextual_content'][0] = 'new-8c320b5c-034e-4888-9e29-bc5f5cc2b45c';
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
  $export['pm_existing_pages_islandora_search_results_page__bibliomation-search-page'] = $handler;

  return $export;
}
