<?php
/**
 * @file
 * platform_main_feature.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function platform_main_feature_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_left',
          1 => 'center',
          2 => 'footer_region_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '50.10591877361484',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'footer_region_left' => array(
        'type' => 'region',
        'title' => 'Footer Region Left',
        'width' => '24.94306508744334',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-region-left',
        'hide_empty' => 0,
      ),
      'footer_region_right' => array(
        'type' => 'region',
        'title' => 'Footer Region Right',
        'width' => '24.951016138940822',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'footer-region-right',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_bottom',
        ),
        'parent' => 'main',
        'class' => 'footer-row-bottom',
        'hide_empty' => 0,
      ),
      'footer_region_bottom' => array(
        'type' => 'region',
        'title' => 'Footer Region Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'footer-region-bottom',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_region_left' => NULL,
      'footer_region_right' => NULL,
      'footer_region_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2e13fc24-7e48-41f1-a979-9f9eda274ebe';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7dad3a92-3f8d-486b-8f94-c4ebb2cb98f2';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu';
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
    'css_class' => 'footer-menu-links',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7dad3a92-3f8d-486b-8f94-c4ebb2cb98f2';
  $display->content['new-7dad3a92-3f8d-486b-8f94-c4ebb2cb98f2'] = $pane;
  $display->panels['center'][0] = 'new-7dad3a92-3f8d-486b-8f94-c4ebb2cb98f2';
  $pane = new stdClass();
  $pane->pid = 'new-e40b288b-dc4c-462c-9690-55fc1e801ea9';
  $pane->panel = 'footer_region_bottom';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-lower-menu';
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
    'css_class' => 'footer-lower-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e40b288b-dc4c-462c-9690-55fc1e801ea9';
  $display->content['new-e40b288b-dc4c-462c-9690-55fc1e801ea9'] = $pane;
  $display->panels['footer_region_bottom'][0] = 'new-e40b288b-dc4c-462c-9690-55fc1e801ea9';
  $pane = new stdClass();
  $pane->pid = 'new-9c6583e8-845a-4f8f-adfc-7f7d61ef5ac3';
  $pane->panel = 'footer_region_left';
  $pane->type = 'block';
  $pane->subtype = 'views-footer_icon_and_info-block';
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
    'css_class' => 'footer-university-info',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9c6583e8-845a-4f8f-adfc-7f7d61ef5ac3';
  $display->content['new-9c6583e8-845a-4f8f-adfc-7f7d61ef5ac3'] = $pane;
  $display->panels['footer_region_left'][0] = 'new-9c6583e8-845a-4f8f-adfc-7f7d61ef5ac3';
  $pane = new stdClass();
  $pane->pid = 'new-0d5ac6a7-f411-4ca2-87af-542ee7974e1c';
  $pane->panel = 'footer_region_right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-library-support';
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
    'css_class' => 'btn-libraries',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0d5ac6a7-f411-4ca2-87af-542ee7974e1c';
  $display->content['new-0d5ac6a7-f411-4ca2-87af-542ee7974e1c'] = $pane;
  $display->panels['footer_region_right'][0] = 'new-0d5ac6a7-f411-4ca2-87af-542ee7974e1c';
  $pane = new stdClass();
  $pane->pid = 'new-bab63333-4c08-40ef-8582-c84990a74563';
  $pane->panel = 'footer_region_right';
  $pane->type = 'block';
  $pane->subtype = 'views-footer_social_media-block';
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
  $pane->uuid = 'bab63333-4c08-40ef-8582-c84990a74563';
  $display->content['new-bab63333-4c08-40ef-8582-c84990a74563'] = $pane;
  $display->panels['footer_region_right'][1] = 'new-bab63333-4c08-40ef-8582-c84990a74563';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9c6583e8-845a-4f8f-adfc-7f7d61ef5ac3';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mini_panel_facets';
  $mini->category = '';
  $mini->admin_title = 'Mini Panel Facets';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '0824d0d8-ac7a-4614-b675-b5c9f5170ff5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'mini_panel_facets';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-173212f6-002c-4c4f-bab1-71f53d3b67dc';
  $pane->panel = 'center';
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
  $pane->uuid = '173212f6-002c-4c4f-bab1-71f53d3b67dc';
  $display->content['new-173212f6-002c-4c4f-bab1-71f53d3b67dc'] = $pane;
  $display->panels['center'][0] = 'new-173212f6-002c-4c4f-bab1-71f53d3b67dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-173212f6-002c-4c4f-bab1-71f53d3b67dc';
  $mini->display = $display;
  $export['mini_panel_facets'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'page_top_branding_mini_panel';
  $mini->category = '';
  $mini->admin_title = 'Page Top Branding';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'af139b59-6ca8-444f-926b-f7520d6b149d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'page_top_branding_mini_panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ca580150-b02a-4145-9d79-c81c58f13327';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'NULL',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'uconndora_default_institution',
        'settings' => array(
          'institution_exists' => '0',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'mods_field' => 'owner_inst',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'My Super Tiutle',
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
  $pane->uuid = 'ca580150-b02a-4145-9d79-c81c58f13327';
  $display->content['new-ca580150-b02a-4145-9d79-c81c58f13327'] = $pane;
  $display->panels['center'][0] = 'new-ca580150-b02a-4145-9d79-c81c58f13327';
  $pane = new stdClass();
  $pane->pid = 'new-fd6f7db8-8735-4adb-9e53-660ffa53179e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'mods_field' => 'owner_inst',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fd6f7db8-8735-4adb-9e53-660ffa53179e';
  $display->content['new-fd6f7db8-8735-4adb-9e53-660ffa53179e'] = $pane;
  $display->panels['center'][1] = 'new-fd6f7db8-8735-4adb-9e53-660ffa53179e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ca580150-b02a-4145-9d79-c81c58f13327';
  $mini->display = $display;
  $export['page_top_branding_mini_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'site_branding_data';
  $mini->category = '';
  $mini->admin_title = 'Site Branding Data';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '00ba4d02-c6c1-49a0-8cf4-cae68a33299d';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'site_branding_data';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-df9698ce-4148-42cb-8d7f-e7e6f33fa3b4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-bellington_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-bellingtons',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'uconndora_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
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
  $pane->uuid = 'df9698ce-4148-42cb-8d7f-e7e6f33fa3b4';
  $display->content['new-df9698ce-4148-42cb-8d7f-e7e6f33fa3b4'] = $pane;
  $display->panels['center'][0] = 'new-df9698ce-4148-42cb-8d7f-e7e6f33fa3b4';
  $pane = new stdClass();
  $pane->pid = 'new-ed6bea75-5cc6-43d4-a35b-1871b529c4d5';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-current_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'mods_field' => 'owner_inst',
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
  $pane->uuid = 'ed6bea75-5cc6-43d4-a35b-1871b529c4d5';
  $display->content['new-ed6bea75-5cc6-43d4-a35b-1871b529c4d5'] = $pane;
  $display->panels['center'][1] = 'new-ed6bea75-5cc6-43d4-a35b-1871b529c4d5';
  $pane = new stdClass();
  $pane->pid = 'new-b42c52b6-41a8-4215-8c46-00c4bb70045e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-caliauto_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'CaliAuto',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-caliauto',
        ),
        'context' => 'empty',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b42c52b6-41a8-4215-8c46-00c4bb70045e';
  $display->content['new-b42c52b6-41a8-4215-8c46-00c4bb70045e'] = $pane;
  $display->panels['center'][2] = 'new-b42c52b6-41a8-4215-8c46-00c4bb70045e';
  $pane = new stdClass();
  $pane->pid = 'new-dcb32791-d94c-4d6e-b110-117e0f1e3000';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-hangten_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Hangten',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-hangten',
        ),
        'context' => 'empty',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dcb32791-d94c-4d6e-b110-117e0f1e3000';
  $display->content['new-dcb32791-d94c-4d6e-b110-117e0f1e3000'] = $pane;
  $display->panels['center'][3] = 'new-dcb32791-d94c-4d6e-b110-117e0f1e3000';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-df9698ce-4148-42cb-8d7f-e7e6f33fa3b4';
  $mini->display = $display;
  $export['site_branding_data'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'test_minin_panel';
  $mini->category = 'Header';
  $mini->admin_title = 'Header Logo Data';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Mini Panel header logo';
  $display->uuid = 'c470f084-a9c5-4df9-b87c-5db1088d86d5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'test_minin_panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-338f7677-f2e7-448a-b5c9-54fcf2b12c7c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-7dffc2c2672edc40792ded06c5f4e996';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-bellingtons',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'uconndora_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
        ),
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Bellingtons',
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
  $pane->uuid = '338f7677-f2e7-448a-b5c9-54fcf2b12c7c';
  $display->content['new-338f7677-f2e7-448a-b5c9-54fcf2b12c7c'] = $pane;
  $display->panels['center'][0] = 'new-338f7677-f2e7-448a-b5c9-54fcf2b12c7c';
  $pane = new stdClass();
  $pane->pid = 'new-7f035057-0da7-4967-b8fe-b4a0a35ed9cf';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-00729068b4b0f61c1c8771a4374b4d08';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'institution_exists' => '0',
          'mods_field' => 'owner_inst',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $pane->uuid = '7f035057-0da7-4967-b8fe-b4a0a35ed9cf';
  $display->content['new-7f035057-0da7-4967-b8fe-b4a0a35ed9cf'] = $pane;
  $display->panels['center'][1] = 'new-7f035057-0da7-4967-b8fe-b4a0a35ed9cf';
  $pane = new stdClass();
  $pane->pid = 'new-dacb71bb-b738-4d2e-9039-1c45d58ca902';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-caliauto_collection_logo-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-caliauto',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'CaliAuto',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dacb71bb-b738-4d2e-9039-1c45d58ca902';
  $display->content['new-dacb71bb-b738-4d2e-9039-1c45d58ca902'] = $pane;
  $display->panels['center'][2] = 'new-dacb71bb-b738-4d2e-9039-1c45d58ca902';
  $pane = new stdClass();
  $pane->pid = 'new-4e3c8d51-8167-4632-aa94-5bf4b5fabad6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-hangten_collection_logo-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'uconndora',
        'settings' => array(
          'mods_field' => 'owner_inst',
          'mods_value' => 'Hangten',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-hangten',
        ),
        'context' => 'empty',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4e3c8d51-8167-4632-aa94-5bf4b5fabad6';
  $display->content['new-4e3c8d51-8167-4632-aa94-5bf4b5fabad6'] = $pane;
  $display->panels['center'][3] = 'new-4e3c8d51-8167-4632-aa94-5bf4b5fabad6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-338f7677-f2e7-448a-b5c9-54fcf2b12c7c';
  $mini->display = $display;
  $export['test_minin_panel'] = $mini;

  return $export;
}
