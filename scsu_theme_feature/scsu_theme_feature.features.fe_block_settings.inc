<?php
/**
 * @file
 * scsu_theme_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function scsu_theme_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blockify-blockify-site-name'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-site-name',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'institute_info',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -62,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-site-slogan'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-site-slogan',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'institute_info',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -62,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-lower-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-lower-menu',
    'custom' => 0,
    'delta' => 'menu-footer-lower-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -48,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu-links',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -52,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-scsu-footer-menu-context'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-scsu-footer-menu-context',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-scsu-footer-menu-social'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-scsu-footer-menu-social',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -53,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-header_logo_data'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header_logo_data',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'logo_header',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-page_top_branding_mini_panel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page_top_branding_mini_panel',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-scsu_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scsu_footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-site_branding_data'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site_branding_data',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -60,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-footer_icon_and_info-block'] = array(
    'cache' => -1,
    'css_class' => 'footer-university-info',
    'custom' => 0,
    'delta' => 'footer_icon_and_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -51,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-scsu_footer_contact-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scsu_footer_contact-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-scsu_footer_copyright-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scsu_footer_copyright-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-scsu_footer_logo-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scsu_footer_logo-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-scsu_header_logo-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'scsu_header_logo-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'logo_header',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
