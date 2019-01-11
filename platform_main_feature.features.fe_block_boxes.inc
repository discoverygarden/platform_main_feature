<?php

/**
 * @file
 * platform_main_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function platform_main_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'More info about this site';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_this_site';
  $fe_block_boxes->body = '<div class="jumbotron">
<div class="more-info-block">
<h2>Explore our collections – freely, easily, openly</h2>

<p>Explore Chicago Collections lets researchers, teachers and students search many locations at once. Our unified search lets you locate thousands of archival collections and digital images at member institutions all over the Chicago area.</p>

<a href="/islandora">Learn more about us</a><a href="islandora">See all Libraries & Archives</a>
</div>
</div>';

  $export['about_this_site'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Newcomb Contact';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newcomb_contact';
  $fe_block_boxes->body = '<span>
NEWCOMB COLLEGE INSTITUTE, 7025 FRERET STREET, NEW ORLEANS, LA 70118 EMAIL: NEWCOMB@TULANE.EDU PHONE: 888-327-0009 FAX: 504-862-8589
</span>';

  $export['newcomb_contact'] = $fe_block_boxes;

  return $export;
}
