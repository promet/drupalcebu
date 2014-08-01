<?php
/**
 * @file
 * drupalcebu_feed_user_import.feeds.inc
 */

/**
 * Implements hook_feeds_after_save().
 */
function drupalcebu_feed_user_import_feeds_after_save(FeedsSource $source, $entity, $item, $entity_id) {
  if ($source->id == 'user_import') {
    $field        = field_info_field('field_user_mailchimp');
    $instance     = field_info_instance('user', 'field_user_mailchimp', 'user');

    if ($field && $instance && $field['type'] == 'mailchimp_lists_subscription') {
      $mc_list_id  = $field['settings']['mc_list_id'];
      $email_field = $instance['settings']['mergefields']['EMAIL'];

      mailchimp_subscribe($mc_list_id, $entity->{$email_field}[LANGUAGE_NONE][0]['value']);
    }
  }
}
