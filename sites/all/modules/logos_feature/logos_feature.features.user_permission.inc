<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function logos_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create logos content
  $permissions['create logos content'] = array(
    'name' => 'create logos content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any logos content
  $permissions['delete any logos content'] = array(
    'name' => 'delete any logos content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own logos content
  $permissions['delete own logos content'] = array(
    'name' => 'delete own logos content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any logos content
  $permissions['edit any logos content'] = array(
    'name' => 'edit any logos content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own logos content
  $permissions['edit own logos content'] = array(
    'name' => 'edit own logos content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
