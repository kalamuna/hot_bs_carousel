<?php
/**
 * @file
 * kala_carousel.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function kala_carousel_defaultconfig_features() {
  return array(
    'kala_carousel' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function kala_carousel_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-kala_carousel-field_kala_carousel_slide'.
  $fields['fieldable_panels_pane-kala_carousel-field_kala_carousel_slide'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
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
        'hide_blank_items' => 0,
        'path' => '',
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    ),
    'field_instance' => array(
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
      'required' => 1,
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
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slide');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function kala_carousel_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__kala_carousel';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__kala_carousel'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function kala_carousel_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable kala_carousel'.
  $permissions['create fieldable kala_carousel'] = array(
    'name' => 'create fieldable kala_carousel',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable kala_carousel'.
  $permissions['delete fieldable kala_carousel'] = array(
    'name' => 'delete fieldable kala_carousel',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable kala_carousel'.
  $permissions['edit fieldable kala_carousel'] = array(
    'name' => 'edit fieldable kala_carousel',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
