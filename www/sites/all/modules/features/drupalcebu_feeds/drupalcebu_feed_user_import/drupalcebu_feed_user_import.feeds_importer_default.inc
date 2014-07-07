<?php
/**
 * @file
 * drupalcebu_feed_user_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function drupalcebu_feed_user_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_import';
  $feeds_importer->config = array(
    'name' => 'User Import',
    'description' => 'Imports csv of user list from registration.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Email Address',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Email Address',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Email Address',
            'target' => 'field_user_email',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'First Name',
            'target' => 'field_user_first_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Last Name',
            'target' => 'field_user_last_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Suffix',
            'target' => 'field_user_suffix',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['user_import'] = $feeds_importer;

  return $export;
}
