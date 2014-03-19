<?php
/**
 * @file
 * kala_carousel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kala_carousel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-kala_carousel-field_kala_carousel_slide'
  $field_instances['fieldable_panels_pane-kala_carousel-field_kala_carousel_slide'] = array(
    'bundle' => 'kala_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_kala_carousel_slide',
    'label' => 'Slide',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slide');

  return $field_instances;
}
