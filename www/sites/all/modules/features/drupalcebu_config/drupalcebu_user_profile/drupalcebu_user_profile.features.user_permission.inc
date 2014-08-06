<?php
/**
 * @file
 * drupalcebu_user_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalcebu_user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_user_participated_events'.
  $permissions['create field_user_participated_events'] = array(
    'name' => 'create field_user_participated_events',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_participated_events'.
  $permissions['edit field_user_participated_events'] = array(
    'name' => 'edit field_user_participated_events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_participated_events'.
  $permissions['edit own field_user_participated_events'] = array(
    'name' => 'edit own field_user_participated_events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_participated_events'.
  $permissions['view field_user_participated_events'] = array(
    'name' => 'view field_user_participated_events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_participated_events'.
  $permissions['view own field_user_participated_events'] = array(
    'name' => 'view own field_user_participated_events',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
