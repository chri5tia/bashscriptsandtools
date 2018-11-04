<?php
/**
 * @file
 * fosterclub_glazed_theme.features.uuid_file_entity.inc
 */

/**
 * Implements hook_uuid_features_default_file_entities().
 */
function fosterclub_glazed_theme_uuid_features_default_file_entities() {
  $files = array();

  $files[] = array(
    'filename' => 'fc-logo-print.png',
    'uri' => 'temporary://fc-logo-print.png',
    'filemime' => 'image/png',
    'filesize' => 12199,
    'status' => 0,
    'type' => 'image',
    'uuid' => '83ea4605-e274-441d-9b7f-4466fe9df9b0',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'rdf_mapping' => array(),
    'metadata' => array(
      'height' => 122,
      'width' => 576,
    ),
    'height' => 122,
    'width' => 576,
    'uuid_features_packaged_file_path' => 'assets/fc-logo-print.png',
    'user_uuid' => '42772b7f-40f8-4518-b411-b364959f14ef',
  );
  return $files;
}
