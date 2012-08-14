<?php
/**
 * @file
 * pro_101_support_accounts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_support_accounts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_readonly';
  $strongarm->value = array(
    'user_readonly' => array(
      'mode' => 'deny',
      'roles' => array(
        160159362 => '160159362',
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        121011395 => 0,
      ),
      'action' => 'hide',
    ),
    'name' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'mail' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'pass' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'status' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'roles' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'notify' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'signature' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'picture' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'picture_current' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'picture_delete' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'picture_upload' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'field_first_name' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'field_last_name' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'field_pro_bio' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'field_title' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'submit' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
    'cancel' => array(
      'mode' => 'default',
      'roles' => array(
        2 => 0,
        8998634 => 0,
        96220023 => 0,
        160159362 => 0,
        121011395 => 0,
      ),
      'action' => 'default',
    ),
  );
  $export['user_readonly'] = $strongarm;

  return $export;
}
