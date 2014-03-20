<?php
/**
 * @file
 * kala_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function kala_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function kala_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: kala_carousel_image.
  $styles['kala_carousel_image'] = array(
    'name' => 'kala_carousel_image',
    'label' => 'Kala Carousel Image (900x500)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
