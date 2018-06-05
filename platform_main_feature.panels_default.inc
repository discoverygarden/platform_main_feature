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
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 99.999999999998991,
        'width_type' => '%',
        'parent' => 'main-row',
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_logo_data';
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
  $display->storage_id = 'header_logo_data';
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
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Bellingtons',
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
      1 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'uconn',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-uconn',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'uconn-header-data-logo',
  );
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
  $pane = new stdClass();
  $pane->pid = 'new-e9afc396-cc76-4d46-8255-07a4f3f3c698';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-4e2fcd9f25f368fc885f2d2a486460c2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Digital Collections',
        ),
        'not' => FALSE,
      ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e9afc396-cc76-4d46-8255-07a4f3f3c698';
  $display->content['new-e9afc396-cc76-4d46-8255-07a4f3f3c698'] = $pane;
  $display->panels['center'][4] = 'new-e9afc396-cc76-4d46-8255-07a4f3f3c698';
  $pane = new stdClass();
  $pane->pid = 'new-6811a68f-2818-48ea-b256-d59e49dcc9b2';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-1f7a1a11e6c508ae09ee0cbc4d128b16';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-csl',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '30002',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '6811a68f-2818-48ea-b256-d59e49dcc9b2';
  $display->content['new-6811a68f-2818-48ea-b256-d59e49dcc9b2'] = $pane;
  $display->panels['center'][5] = 'new-6811a68f-2818-48ea-b256-d59e49dcc9b2';
  $pane = new stdClass();
  $pane->pid = 'new-0a6f8c51-e490-4dd8-a24a-89648d33c352';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-2ea22aa680aa43109d7ddb6fd5068817';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'CTDA',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Archives & Special Collections',
        ),
        'not' => FALSE,
      ),
      4 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'solr_field' => 'mods_titleInfo_title_ms',
        ),
        'not' => FALSE,
      ),
      5 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'islandora/object/islandora:root',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'connecticut-digital-archive',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0a6f8c51-e490-4dd8-a24a-89648d33c352';
  $display->content['new-0a6f8c51-e490-4dd8-a24a-89648d33c352'] = $pane;
  $display->panels['center'][6] = 'new-0a6f8c51-e490-4dd8-a24a-89648d33c352';
  $pane = new stdClass();
  $pane->pid = 'new-e0928338-a75e-407d-8303-111ba592db5e';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-2330b6cb076ca863ab7aa233ab1e1f79';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Lormaks',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-lormacks',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e0928338-a75e-407d-8303-111ba592db5e';
  $display->content['new-e0928338-a75e-407d-8303-111ba592db5e'] = $pane;
  $display->panels['center'][7] = 'new-e0928338-a75e-407d-8303-111ba592db5e';
  $pane = new stdClass();
  $pane->pid = 'new-0493d35e-160f-423f-afc4-6065dfafc199';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-6d34bb1ff2bc6fed4080febc26959fd6';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-bibliomation',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_solr_field_value',
        'settings' => array(
          'solr_field' => 'mods_note_ownership_ms',
          'solr_value' => 'Bibliomation',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0493d35e-160f-423f-afc4-6065dfafc199';
  $display->content['new-0493d35e-160f-423f-afc4-6065dfafc199'] = $pane;
  $display->panels['center'][8] = 'new-0493d35e-160f-423f-afc4-6065dfafc199';
  $pane = new stdClass();
  $pane->pid = 'new-6761bdcb-fc41-4cdc-9f3d-c91115d51097';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-hangten_collection_logo-block_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-barnum-museum',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_solr_field_value',
        'settings' => array(
          'solr_field' => 'mods_note_ownership_ms',
          'solr_value' => 'Barnum Museum',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '6761bdcb-fc41-4cdc-9f3d-c91115d51097';
  $display->content['new-6761bdcb-fc41-4cdc-9f3d-c91115d51097'] = $pane;
  $display->panels['center'][9] = 'new-6761bdcb-fc41-4cdc-9f3d-c91115d51097';
  $pane = new stdClass();
  $pane->pid = 'new-c315c888-879c-4130-af26-3e0ee64a5ac1';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-28f305e0b363163ab7222d28fcede019';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-litchfield',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_solr_field_value',
        'settings' => array(
          'solr_field' => 'mods_note_ownership_ms',
          'solr_value' => 'Litchfield Historical Society',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'c315c888-879c-4130-af26-3e0ee64a5ac1';
  $display->content['new-c315c888-879c-4130-af26-3e0ee64a5ac1'] = $pane;
  $display->panels['center'][10] = 'new-c315c888-879c-4130-af26-3e0ee64a5ac1';
  $pane = new stdClass();
  $pane->pid = 'new-cd5a8b59-fd6a-429e-94e7-235807530e09';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-f2ce6c3861e2f68b7a97434d6742aa2f';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-institution',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '20002',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'cd5a8b59-fd6a-429e-94e7-235807530e09';
  $display->content['new-cd5a8b59-fd6a-429e-94e7-235807530e09'] = $pane;
  $display->panels['center'][11] = 'new-cd5a8b59-fd6a-429e-94e7-235807530e09';
  $pane = new stdClass();
  $pane->pid = 'new-b5a98867-ba65-41c6-9a3f-28587765b80f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-e97765dd15448528002bef8a4a8db050';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-chi',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '480002',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'b5a98867-ba65-41c6-9a3f-28587765b80f';
  $display->content['new-b5a98867-ba65-41c6-9a3f-28587765b80f'] = $pane;
  $display->panels['center'][12] = 'new-b5a98867-ba65-41c6-9a3f-28587765b80f';
  $pane = new stdClass();
  $pane->pid = 'new-7f2bdaab-a9d2-4078-9f05-d76d5de438c6';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-6d34bb1ff2bc6fed4080febc26959fd6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '140002',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '7f2bdaab-a9d2-4078-9f05-d76d5de438c6';
  $display->content['new-7f2bdaab-a9d2-4078-9f05-d76d5de438c6'] = $pane;
  $display->panels['center'][13] = 'new-7f2bdaab-a9d2-4078-9f05-d76d5de438c6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-338f7677-f2e7-448a-b5c9-54fcf2b12c7c';
  $mini->display = $display;
  $export['header_logo_data'] = $mini;

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
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'uconn',
        ),
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-uconn',
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
      1 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'uconn',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-uconn',
        ),
        'context' => 'empty',
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
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Bellingtons',
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
      1 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Archives & Special Collections',
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
      2 => array(
        'name' => 'front',
        'settings' => NULL,
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
  $pane = new stdClass();
  $pane->pid = 'new-13ad3dce-2a6e-47a1-ac4d-f4f7837eb1ed';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-4ec321651079ce0064161e71bafb1ce6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Archives & Special Collections',
        ),
        'not' => FALSE,
      ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '13ad3dce-2a6e-47a1-ac4d-f4f7837eb1ed';
  $display->content['new-13ad3dce-2a6e-47a1-ac4d-f4f7837eb1ed'] = $pane;
  $display->panels['center'][4] = 'new-13ad3dce-2a6e-47a1-ac4d-f4f7837eb1ed';
  $pane = new stdClass();
  $pane->pid = 'new-f238e92f-84fb-47e5-8e40-975414107a0c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-lormacks_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Lormaks',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-lormacks',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'f238e92f-84fb-47e5-8e40-975414107a0c';
  $display->content['new-f238e92f-84fb-47e5-8e40-975414107a0c'] = $pane;
  $display->panels['center'][5] = 'new-f238e92f-84fb-47e5-8e40-975414107a0c';
  $pane = new stdClass();
  $pane->pid = 'new-5070d5c0-3565-4b1e-858f-0517e4de617c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-dfd006a7ccd885c07586abb22a0e7fc9';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      2 => array(
        'name' => 'islandora_institution_mod_field_value',
        'settings' => array(
          'solr_field' => 'mods_owner_inst_s',
          'solr_value' => 'Archives & Special Collections',
        ),
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-ctda',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      4 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      6 => array(
        'name' => 'islandora_institution_default_institution',
        'settings' => array(
          'solr_field' => 'mods_titleInfo_title_ms',
        ),
        'not' => FALSE,
      ),
      7 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'islandora/object/islandora:root',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5070d5c0-3565-4b1e-858f-0517e4de617c';
  $display->content['new-5070d5c0-3565-4b1e-858f-0517e4de617c'] = $pane;
  $display->panels['center'][6] = 'new-5070d5c0-3565-4b1e-858f-0517e4de617c';
  $pane = new stdClass();
  $pane->pid = 'new-4b79bfc7-a5d9-47a7-96ad-27a4108ebdc9';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-csl_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-csl',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '30002',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '4b79bfc7-a5d9-47a7-96ad-27a4108ebdc9';
  $display->content['new-4b79bfc7-a5d9-47a7-96ad-27a4108ebdc9'] = $pane;
  $display->panels['center'][7] = 'new-4b79bfc7-a5d9-47a7-96ad-27a4108ebdc9';
  $pane = new stdClass();
  $pane->pid = 'new-7c2478d9-2c55-496a-b4cc-b7d67c1a5dfe';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-a4227f966a652d5295e410a29425a55f';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '20002',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'about-uconn',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7c2478d9-2c55-496a-b4cc-b7d67c1a5dfe';
  $display->content['new-7c2478d9-2c55-496a-b4cc-b7d67c1a5dfe'] = $pane;
  $display->panels['center'][8] = 'new-7c2478d9-2c55-496a-b4cc-b7d67c1a5dfe';
  $pane = new stdClass();
  $pane->pid = 'new-168aad0e-596f-45d1-a054-7b1e3da3586f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-chi_archive_info-block';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '480002',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '168aad0e-596f-45d1-a054-7b1e3da3586f';
  $display->content['new-168aad0e-596f-45d1-a054-7b1e3da3586f'] = $pane;
  $display->panels['center'][9] = 'new-168aad0e-596f-45d1-a054-7b1e3da3586f';
  $pane = new stdClass();
  $pane->pid = 'new-0287da2a-4905-4553-9093-42172d4653e2';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'views-4b35fc718ae24c8c04f9d27a0a59b795';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'islandora_institution_namespace_value',
        'settings' => array(
          'namespace' => '140002',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '0287da2a-4905-4553-9093-42172d4653e2';
  $display->content['new-0287da2a-4905-4553-9093-42172d4653e2'] = $pane;
  $display->panels['center'][10] = 'new-0287da2a-4905-4553-9093-42172d4653e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-df9698ce-4148-42cb-8d7f-e7e6f33fa3b4';
  $mini->display = $display;
  $export['site_branding_data'] = $mini;

  return $export;
}
