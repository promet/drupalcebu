<?php
/**
 * @file
 * drupalcebu_events_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function drupalcebu_events_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'events' => array(
      'name' => 'Events',
      'machine_name' => 'events',
      'description' => 'Taxonomy to be used of events and generating certificates.',
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
