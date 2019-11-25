<?php

/**
 * @file
 * cths_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cths_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Collection Administrator.
  $roles['Collection Administrator'] = array(
    'name' => 'Collection Administrator',
    'weight' => 3,
  );

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  return $roles;
}
