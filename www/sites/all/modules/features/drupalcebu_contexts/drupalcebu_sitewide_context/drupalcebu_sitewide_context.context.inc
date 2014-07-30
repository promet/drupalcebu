<?php
/**
 * @file
 * drupalcebu_sitewide_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcebu_sitewide_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_context';
  $context->description = 'Sitewide blocks configurations.';
  $context->tag = 'blocks';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide blocks configurations.');
  t('blocks');
  $export['sitewide_context'] = $context;

  return $export;
}
