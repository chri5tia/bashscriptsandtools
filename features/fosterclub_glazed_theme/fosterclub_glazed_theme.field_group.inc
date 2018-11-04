<?php
/**
 * @file
 * fosterclub_glazed_theme.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fosterclub_glazed_theme_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_glazed|node|whitelabel|form';
  $field_group->group_name = 'group_glazed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'whitelabel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Glazed Page Settings',
    'weight' => '6',
    'children' => array(
      0 => 'field_glazed_content_design',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Glazed Page Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-glazed field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_glazed|node|whitelabel|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Glazed Page Settings');

  return $field_groups;
}
