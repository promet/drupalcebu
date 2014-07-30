<?php
/**
 * @file
 * drupalcebu_google_analytics_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcebu_google_analytics_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
