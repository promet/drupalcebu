<?php
/**
 * @file
 * drupalcebu_inline_registration_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcebu_inline_registration_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'inline_registration_logo_contest';
  $strongarm->value = 1;
  $export['inline_registration_logo_contest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'inline_registration_weight_logo_contest';
  $strongarm->value = '-10';
  $export['inline_registration_weight_logo_contest'] = $strongarm;

  return $export;
}
