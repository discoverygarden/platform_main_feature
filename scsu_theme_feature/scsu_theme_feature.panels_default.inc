<?php
/**
 * @file
 * scsu_theme_feature.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function scsu_theme_feature_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'scsu_footer';
  $mini->category = '';
  $mini->admin_title = 'SCSU Footer';
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
          0 => 4,
          1 => 3,
          2 => 2,
          3 => 'main',
          4 => 8,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '14.238931008876683',
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
        'title' => 'Footer Region D',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '16.7408000170119',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 7,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '15.387146018831562',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => '14.89430611049371',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_a',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_region_a' => array(
        'type' => 'region',
        'title' => 'Footer Region A',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_b',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_region_b' => array(
        'type' => 'region',
        'title' => 'Footer Region B',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_c',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_region_c' => array(
        'type' => 'region',
        'title' => 'Footer Region C',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => '13.738816844786072',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_region_e',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_region_e' => array(
        'type' => 'region',
        'title' => 'Footer Region E',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_region_a' => NULL,
      'footer_region_b' => NULL,
      'footer_region_c' => NULL,
      'footer_region_e' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd8682b6d-9ed9-41ad-ad9c-acbf5effd3ba';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'scsu_footer';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9a23b538-2246-47f0-9f39-2431c816915c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-scsu-footer-menu-context';
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
  $pane->uuid = '9a23b538-2246-47f0-9f39-2431c816915c';
  $display->content['new-9a23b538-2246-47f0-9f39-2431c816915c'] = $pane;
  $display->panels['center'][0] = 'new-9a23b538-2246-47f0-9f39-2431c816915c';
  $pane = new stdClass();
  $pane->pid = 'new-8686a79c-807f-4e9f-b61b-4d38fd43b8ab';
  $pane->panel = 'footer_region_a';
  $pane->type = 'block';
  $pane->subtype = 'views-scsu_footer_logo-block';
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
  $pane->uuid = '8686a79c-807f-4e9f-b61b-4d38fd43b8ab';
  $display->content['new-8686a79c-807f-4e9f-b61b-4d38fd43b8ab'] = $pane;
  $display->panels['footer_region_a'][0] = 'new-8686a79c-807f-4e9f-b61b-4d38fd43b8ab';
  $pane = new stdClass();
  $pane->pid = 'new-149a9785-5e71-44ad-8717-e9953a06055a';
  $pane->panel = 'footer_region_b';
  $pane->type = 'block';
  $pane->subtype = 'views-scsu_footer_contact-block';
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
  $pane->uuid = '149a9785-5e71-44ad-8717-e9953a06055a';
  $display->content['new-149a9785-5e71-44ad-8717-e9953a06055a'] = $pane;
  $display->panels['footer_region_b'][0] = 'new-149a9785-5e71-44ad-8717-e9953a06055a';
  $pane = new stdClass();
  $pane->pid = 'new-da7a271c-5934-4769-912a-ce5c226ede18';
  $pane->panel = 'footer_region_c';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-scsu-footer-menu-social';
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
  $pane->uuid = 'da7a271c-5934-4769-912a-ce5c226ede18';
  $display->content['new-da7a271c-5934-4769-912a-ce5c226ede18'] = $pane;
  $display->panels['footer_region_c'][0] = 'new-da7a271c-5934-4769-912a-ce5c226ede18';
  $pane = new stdClass();
  $pane->pid = 'new-26bcc051-97d3-4834-bbbb-45289c7c9f2f';
  $pane->panel = 'footer_region_e';
  $pane->type = 'block';
  $pane->subtype = 'views-scsu_footer_copyright-block';
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
  $pane->uuid = '26bcc051-97d3-4834-bbbb-45289c7c9f2f';
  $display->content['new-26bcc051-97d3-4834-bbbb-45289c7c9f2f'] = $pane;
  $display->panels['footer_region_e'][0] = 'new-26bcc051-97d3-4834-bbbb-45289c7c9f2f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['scsu_footer'] = $mini;

  return $export;
}
