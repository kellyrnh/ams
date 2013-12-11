<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function case_studies_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_cs_ref
  $permissions['edit field_cs_ref'] = array(
    'name' => 'edit field_cs_ref',
    'roles' => array(
      '0' => 'Editor',
      '1' => 'admin',
    ),
  );

  return $permissions;
}
