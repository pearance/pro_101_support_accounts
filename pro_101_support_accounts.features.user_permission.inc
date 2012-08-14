<?php
/**
 * @file
 * pro_101_support_accounts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_support_accounts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer user read-only settings.
  $permissions['administer user read-only settings'] = array(
    'name' => 'administer user read-only settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user_readonly',
  );

  // Exported permission: edit pro_101_qa_checklist checklistapi checklist.
  $permissions['edit pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'edit pro_101_qa_checklist checklistapi checklist',
    'roles' => array(),
    'module' => 'checklistapi',
  );

  // Exported permission: modify user read-only settings.
  $permissions['modify user read-only settings'] = array(
    'name' => 'modify user read-only settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user_readonly',
  );

  // Exported permission: view pro_101_qa_checklist checklistapi checklist.
  $permissions['view pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'view pro_101_qa_checklist checklistapi checklist',
    'roles' => array(),
    'module' => 'checklistapi',
  );

  return $permissions;
}
