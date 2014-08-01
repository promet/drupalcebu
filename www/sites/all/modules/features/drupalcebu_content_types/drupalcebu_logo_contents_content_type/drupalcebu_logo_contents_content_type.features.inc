<?php
/**
 * @file
 * drupalcebu_logo_contents_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcebu_logo_contents_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalcebu_logo_contents_content_type_node_info() {
  $items = array(
    'logo_contest' => array(
      'name' => t('Logo Contest'),
      'base' => 'node_content',
      'description' => t('Node type for Logo Contest'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
