<?php
/**
 * @file
 * kala_carousel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function kala_carousel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_kala_carousel_slide'
  $field_bases['field_kala_carousel_slide'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kala_carousel_slide',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
