<?php
/**
 * @file
 * drupalcebu_meetup_api.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcebu_meetup_api_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'meetup_api_key';
  $strongarm->value = '7ba596b1414726d336571172b4d454';
  $export['meetup_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'meetup_api_key_nowarn';
  $strongarm->value = 0;
  $export['meetup_api_key_nowarn'] = $strongarm;

  return $export;
}
