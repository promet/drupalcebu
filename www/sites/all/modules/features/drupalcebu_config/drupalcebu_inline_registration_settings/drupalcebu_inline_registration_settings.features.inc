<?php
/**
 * @file
 * drupalcebu_inline_registration_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcebu_inline_registration_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
