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
  $fe_block_boxes->info = 'CTDA Information';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'ctda_info';
  $fe_block_boxes->body = 'CTDA Information';

  $export['ctda_info'] = $fe_block_boxes;

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
