<?php
/**
 * @file
 * drupalcebu_sitewide_block_settings.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function drupalcebu_sitewide_block_settings_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'dashboard_main',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 10,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_sidebar',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 1,
  'weight' => -10,
  'region' => 'dashboard_sidebar',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'context_ui',
  'delta' => 'editor',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'context_ui',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'drupalcebu_meetup_api',
  'delta' => 'meetup_upcoming',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'drupalcebu_meetup_api',
  'delta' => 'meetup_upcoming',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'formblock',
  'delta' => 'logo_contest',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'formblock',
  'delta' => 'logo_contest',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
return $export;
}