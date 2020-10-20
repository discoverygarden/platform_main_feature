<?php

/**
 * @file
 * platform_main_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function platform_main_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'islandora_object_by_path';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'islandora/object/*' => 'islandora/object/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '',
          ),
          'description' => array(
            'value' => '',
          ),
          'abstract' => array(
            'value' => '',
          ),
          'keywords' => array(
            'value' => '',
          ),
          'author' => array(
            'value' => '',
          ),
          'robots' => array(
            'value' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
          ),
          'standout' => array(
            'value' => '',
          ),
          'rating' => array(
            'value' => '',
          ),
          'referrer' => array(
            'value' => '',
          ),
          'generator' => array(
            'value' => '',
          ),
          'rights' => array(
            'value' => '',
          ),
          'image_src' => array(
            'value' => '',
          ),
          'canonical' => array(
            'value' => '',
          ),
          'set_cookie' => array(
            'value' => '',
          ),
          'shortlink' => array(
            'value' => '',
          ),
          'original-source' => array(
            'value' => '',
          ),
          'prev' => array(
            'value' => '',
          ),
          'next' => array(
            'value' => '',
          ),
          'content-language' => array(
            'value' => '',
          ),
          'geo.position' => array(
            'value' => '',
          ),
          'geo.placename' => array(
            'value' => '',
          ),
          'geo.region' => array(
            'value' => '',
          ),
          'icbm' => array(
            'value' => '',
          ),
          'refresh' => array(
            'value' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
          ),
          'pragma' => array(
            'value' => '',
          ),
          'cache-control' => array(
            'value' => '',
          ),
          'expires' => array(
            'value' => '',
          ),
          'google' => array(
            'value' => '',
          ),
          'fb:admins' => array(
            'value' => '',
          ),
          'fb:app_id' => array(
            'value' => '',
          ),
          'fb:pages' => array(
            'value' => '',
          ),
          'og:site_name' => array(
            'value' => '',
          ),
          'og:type' => array(
            'value' => '',
          ),
          'og:url' => array(
            'value' => '',
          ),
          'og:title' => array(
            'value' => '',
          ),
          'og:determiner' => array(
            'value' => '',
          ),
          'og:description' => array(
            'value' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
          ),
          'og:see_also' => array(
            'value' => '',
          ),
          'og:image' => array(
            'value' => '[islandora_object:thumbnail_url]',
          ),
          'og:image:url' => array(
            'value' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
          ),
          'og:image:alt' => array(
            'value' => '',
          ),
          'og:image:type' => array(
            'value' => '',
          ),
          'og:image:width' => array(
            'value' => '200',
          ),
          'og:image:height' => array(
            'value' => '200',
          ),
          'og:latitude' => array(
            'value' => '',
          ),
          'og:longitude' => array(
            'value' => '',
          ),
          'og:street_address' => array(
            'value' => '',
          ),
          'og:locality' => array(
            'value' => '',
          ),
          'og:region' => array(
            'value' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
          ),
          'og:country_name' => array(
            'value' => '',
          ),
          'og:email' => array(
            'value' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
          ),
          'og:locale' => array(
            'value' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
          ),
          'article:author' => array(
            'value' => '',
          ),
          'article:publisher' => array(
            'value' => '',
          ),
          'article:section' => array(
            'value' => '',
          ),
          'article:tag' => array(
            'value' => '',
          ),
          'article:published_time' => array(
            'value' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
          ),
          'profile:username' => array(
            'value' => '',
          ),
          'profile:gender' => array(
            'value' => '',
          ),
          'og:audio' => array(
            'value' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
          ),
          'book:author' => array(
            'value' => '',
          ),
          'book:isbn' => array(
            'value' => '',
          ),
          'book:release_date' => array(
            'value' => '',
          ),
          'book:tag' => array(
            'value' => '',
          ),
          'og:video:url' => array(
            'value' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
          ),
          'og:video:width' => array(
            'value' => '',
          ),
          'og:video:height' => array(
            'value' => '',
          ),
          'og:video:type' => array(
            'value' => '',
          ),
          'video:actor' => array(
            'value' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
          ),
          'video:director' => array(
            'value' => '',
          ),
          'video:writer' => array(
            'value' => '',
          ),
          'video:duration' => array(
            'value' => '',
          ),
          'video:release_date' => array(
            'value' => '',
          ),
          'video:tag' => array(
            'value' => '',
          ),
          'video:series' => array(
            'value' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['islandora_object_by_path'] = $context;

  return $export;
}
