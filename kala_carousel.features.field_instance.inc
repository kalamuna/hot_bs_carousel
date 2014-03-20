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

  // Exported field_instance: 'field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_capt'
  $field_instances['field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_capt'] = array(
    'bundle' => 'field_kala_carousel_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_kala_carousel_slide_capt',
    'label' => 'Slide Caption',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_image'
  $field_instances['field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_image'] = array(
    'bundle' => 'field_kala_carousel_slide',
    'deleted' => 0,
    'description' => '<div class="alert alert-info">
<strong>Heads up!</strong>
You\'re media will be scaled to 900px by 500px by default. Think about editing your image before uploading.
</div>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_kala_carousel_slide_image',
    'label' => 'Slide Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '6MB',
      'max_resolution' => '',
      'min_resolution' => '900x500',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_title'
  $field_instances['field_collection_item-field_kala_carousel_slide-field_kala_carousel_slide_title'] = array(
    'bundle' => 'field_kala_carousel_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '
URLs are optional.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_kala_carousel_slide_title',
    'label' => 'Slide Title',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

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
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('
URLs are optional.
');
  t('<div class="alert alert-info">
<strong>Heads up!</strong>
You\'re media will be scaled to 900px by 500px by default. Think about editing your image before uploading.
</div>');
  t('Slide');
  t('Slide Caption');
  t('Slide Image');
  t('Slide Title');

  return $field_instances;
}
