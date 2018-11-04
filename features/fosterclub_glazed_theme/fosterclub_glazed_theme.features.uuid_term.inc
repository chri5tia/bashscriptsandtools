<?php
/**
 * @file
 * fosterclub_glazed_theme.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function fosterclub_glazed_theme_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Foster youth',
    'description' => '',
    'format' => 'wysiwyg_full',
    'weight' => 0,
    'uuid' => '0aec70df-6303-4c5a-8349-f059ec5fa5ca',
    'vocabulary_machine_name' => 'target_audience',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'page-audience/foster-youth',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Concerned Citizen',
    'description' => '',
    'format' => 'wysiwyg_full',
    'weight' => 0,
    'uuid' => '2d72afae-2a9e-4b4b-a990-cf5a1f685c42',
    'vocabulary_machine_name' => 'target_audience',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'page-audience/concerned-citizen',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Foster parent/Caretaker',
    'description' => '',
    'format' => 'wysiwyg_full',
    'weight' => 0,
    'uuid' => '8f268b3c-8f12-439a-9c74-69c180d024d6',
    'vocabulary_machine_name' => 'target_audience',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'page-audience/foster-parentcaretaker',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Child Welfare Professional',
    'description' => '',
    'format' => 'wysiwyg_full',
    'weight' => 0,
    'uuid' => 'c5548b77-9ce3-45db-8b6a-5ed1fc14d742',
    'vocabulary_machine_name' => 'target_audience',
    'path' => array(
      'pathauto' => 1,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'page-audience/child-welfare-professional',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
