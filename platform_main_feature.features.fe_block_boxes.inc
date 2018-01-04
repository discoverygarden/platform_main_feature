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
  $fe_block_boxes->info = 'Submit to collection Anonymous';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_anonymous';
  $fe_block_boxes->body = '<a href="/user">|+| Submit to a collection</a>';

  $export['submit_to_collection_anonymous'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_box';
  $fe_block_boxes->body = '<a href="/islandora/object/islandora%3Aroot">|+| Submit to a collection</a>';

  $export['submit_to_collection_box'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'UCONN Branding Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'uconn_branding';
  $fe_block_boxes->body = '<div id="branding" class="branding branding-top page designkit">
    <div class="limiter">
      <div class="branding-wrapper">
        <a href="http://research.lib.uconn.edu" target="_blank">
          <span id="branding_text_left">UCONN</span>
          <span id="branding_text_right">UNIVERSITY OF CONNECTICUT</span>
        </a>
      </div>
      <div class="branding-button-wrapper">
        <nav class="header__secondary-menu limiter" id="secondary-menu" role="navigation">
        <h2 class="element-invisible">User menu</h2><ul class="links inline clearfix"><li class="menu-778 first"><a href="http://uconn.edu/search"><span><i class="icon icon-search search" aria-hidden="true"></i></span>
</a></li>
<li class="menu-777 last"><a href="http://uconn.edu/azindex.php"><span><i class="icon icon-sort-alphabet sort-alphabet" aria-hidden="true"></i></span>
</a></li>';

  $export['uconn_branding'] = $fe_block_boxes;

  return $export;
}
