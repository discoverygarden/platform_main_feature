<?php

/**
 * @file
 * platform_main_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function platform_main_feature_user_default_roles() {
  $roles = array();

  // Exported role: collection admin.
  $roles['Collection Admin'] = array(
    'name' => 'Collection Admin',
    'weight' => 3,
  );

  // Exported role: staff.
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
