<?php
/**
 * @file
 * uconn_display_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function uconn_display_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'information list';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cdta_info1';
  $fe_block_boxes->body = '<ul>
	<li><a href="https://confluence.uits.uconn.edu/confluence/display/CTDA/About+the+Connecticut+Digital+Archive" target="_blank">About the CTDA</a></li>
	<li><a href="https://confluence.uits.uconn.edu/confluence/display/CTDA/CTDA+Resource+Center" target="_blank">Resource Center</a></li>
	<li><a href="https://connecticut-digital-archive-community.mobilize.io/network-groups" target="_blank">Community Center</a></li>
	<li><a href="https://connecticut-digital-archive-community.mobilize.io/registrations/groups/21426" target="_blank">Alert List</a></li>
	<li><a href="mailto:ctda@uconn.edu">Contact the CTDA</a></li>
</ul>
';

  $export['cdta_info1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'News about the CTDA';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'news';
  $fe_block_boxes->body = 'Thing one
Thing two
Thing three';

  $export['news'] = $fe_block_boxes;

  return $export;
}
