<?php
/**
 * @file
 * drupalcebu_mail_chimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcebu_mail_chimp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
