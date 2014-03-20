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
    'label' => 'Kala Carousel Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 500,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
