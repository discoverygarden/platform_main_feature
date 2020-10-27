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
  $fe_block_boxes->info = 'Advanced Search Link';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'advanced_islandora_search_link';
  $fe_block_boxes->body = '<a href="/advanced-search" title="Refine Your Search">Advanced Search</a>
';

  $export['advanced_islandora_search_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Announcements and Postings';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'announcements';
  $fe_block_boxes->body = '<p>Carnegie Library for Local History is now offering basic research and scanning services&nbsp;<a href="mailto:AskCarnegie@boulderlibrary.org" data-name="by email" data-type="email">by email.</a>&nbsp;Requests are fulfilled first-come first-served.</p>
';

  $export['announcements'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Provides a label for use with Featured Collections';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'featured_collections_label';
  $fe_block_boxes->body = '<h2 class="block__title">Carnegie Library Collection Sampler</h2>';

  $export['featured_collections_label'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Copyright';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '© 2017 Boulder Public Library';

  $export['footer_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Social Media';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<div class="footer-social-media--links">
<a title="Facebook" href="https://www.facebook.com/boulderlibrary/"><i class=\'icon-facebook-squared\'></i></a>
<a title="Flickr" href="https://www.flickr.com/photos/boulderlibrary/"><i class=\'icon-flickr\'></i></a>
<a title="YouTube" href="https://www.youtube.com/user/boulderlibrary"><i class=\'icon-youtube-squared\'></i></a>
</div>';

  $export['social_media_footer'] = $fe_block_boxes;

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

  return $export;
}
