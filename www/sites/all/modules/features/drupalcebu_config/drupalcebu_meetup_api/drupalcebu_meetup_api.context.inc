<?php
/**
 * @file
 * drupalcebu_meetup_api.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcebu_meetup_api_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'meetup_upcoming_events';
  $context->description = 'A block of list of upcoming events from meetup.com';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalcebu_helpers-meetup_upcoming' => array(
          'module' => 'drupalcebu_helpers',
          'delta' => 'meetup_upcoming',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A block of list of upcoming events from meetup.com');
  t('blocks');
  $export['meetup_upcoming_events'] = $context;

  return $export;
}
