<?php
/**
 * @file
 * fosterclub_glazed_theme.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fosterclub_glazed_theme_taxonomy_default_vocabularies() {
  return array(
    'target_audience' => array(
      'name' => 'Target audience',
      'machine_name' => 'target_audience',
      'description' => 'Who is this post for?',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
