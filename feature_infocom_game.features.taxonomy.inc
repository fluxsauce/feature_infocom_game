<?php
/**
 * @file
 * feature_infocom_game.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_infocom_game_taxonomy_default_vocabularies() {
  return array(
    'author' => array(
      'name' => 'Author',
      'machine_name' => 'author',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'difficulty' => array(
      'name' => 'Difficulty',
      'machine_name' => 'difficulty',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'genre' => array(
      'name' => 'Genre',
      'machine_name' => 'genre',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
