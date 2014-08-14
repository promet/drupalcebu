<?php
/**
 * @file
 * drupalcebu_logo_contents_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalcebu_logo_contents_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_logo_agreement'.
  $permissions['create field_logo_agreement'] = array(
    'name' => 'create field_logo_agreement',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create logo_contest content'.
  $permissions['create logo_contest content'] = array(
    'name' => 'create logo_contest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_logo_agreement'.
  $permissions['edit field_logo_agreement'] = array(
    'name' => 'edit field_logo_agreement',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_logo_agreement'.
  $permissions['edit own field_logo_agreement'] = array(
    'name' => 'edit own field_logo_agreement',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_logo_agreement'.
  $permissions['view field_logo_agreement'] = array(
    'name' => 'view field_logo_agreement',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_logo_agreement'.
  $permissions['view own field_logo_agreement'] = array(
    'name' => 'view own field_logo_agreement',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
