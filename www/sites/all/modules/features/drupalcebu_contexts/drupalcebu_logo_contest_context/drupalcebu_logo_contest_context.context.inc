<?php
/**
 * @file
 * drupalcebu_logo_contest_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcebu_logo_contest_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logo_contest_form';
  $context->description = 'Block that displays on the logo contest page.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'camp-logo' => 'camp-logo',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'formblock-logo_contest' => array(
          'module' => 'formblock',
          'delta' => 'logo_contest',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block that displays on the logo contest page.');
  t('blocks');
  $export['logo_contest_form'] = $context;

  return $export;
}
