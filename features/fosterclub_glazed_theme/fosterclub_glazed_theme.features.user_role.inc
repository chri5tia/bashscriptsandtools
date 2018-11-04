<?php
/**
 * @file
 * fosterclub_glazed_theme.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fosterclub_glazed_theme_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 13,
  );

  // Exported role: Beta Tester.
  $roles['Beta Tester'] = array(
    'name' => 'Beta Tester',
    'weight' => 8,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 12,
  );

  // Exported role: Producer.
  $roles['Producer'] = array(
    'name' => 'Producer',
    'weight' => 10,
  );

  // Exported role: Staff.
  $roles['Staff'] = array(
    'name' => 'Staff',
    'weight' => 11,
  );

  return $roles;
}
