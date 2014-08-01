<?php
/**
 * @file
 * drupalcebu_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcebu_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalcebu_resource_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('A pool of useful resources, such as links and files.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
