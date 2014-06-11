<?php
/**
 * @file
 * drupalcebu_user_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalcebu_user_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_email'
  $field_instances['user-user-field_user_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_email',
    'label' => 'Mailchimp Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_user_first_name'
  $field_instances['user-user-field_user_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_user_last_name'
  $field_instances['user-user-field_user_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_user_mailchimp'
  $field_instances['user-user-field_user_mailchimp'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_mailchimp',
    'label' => 'Mailchimp',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => 'field_user_email',
        'FNAME' => 'field_user_first_name',
        'LNAME' => 'field_user_last_name',
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_user_suffix'
  $field_instances['user-user-field_user_suffix'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Such as "Jr.", "III", and etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_suffix',
    'label' => 'Suffix',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('First Name');
  t('Last Name');
  t('Mailchimp');
  t('Mailchimp Email');
  t('Such as "Jr.", "III", and etc.');
  t('Suffix');

  return $field_instances;
}
