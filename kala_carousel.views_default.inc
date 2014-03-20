<?php
/**
 * @file
 * kala_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kala_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kala_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Kala-Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
  $handler->display->display_options['row_options']['image'] = 'field_kala_carousel_slide_image';
  $handler->display->display_options['row_options']['title'] = 'field_kala_carousel_slide_title';
  $handler->display->display_options['row_options']['description'] = 'field_kala_carousel_slide_capt';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Field collection item: Slide Caption */
  $handler->display->display_options['fields']['field_kala_carousel_slide_capt']['id'] = 'field_kala_carousel_slide_capt';
  $handler->display->display_options['fields']['field_kala_carousel_slide_capt']['table'] = 'field_data_field_kala_carousel_slide_capt';
  $handler->display->display_options['fields']['field_kala_carousel_slide_capt']['field'] = 'field_kala_carousel_slide_capt';
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_kala_carousel_slide_title']['id'] = 'field_kala_carousel_slide_title';
  $handler->display->display_options['fields']['field_kala_carousel_slide_title']['table'] = 'field_data_field_kala_carousel_slide_title';
  $handler->display->display_options['fields']['field_kala_carousel_slide_title']['field'] = 'field_kala_carousel_slide_title';
  $handler->display->display_options['fields']['field_kala_carousel_slide_title']['click_sort_column'] = 'url';
  /* Field: Field collection item: Slide Image */
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['id'] = 'field_kala_carousel_slide_image';
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['table'] = 'field_data_field_kala_carousel_slide_image';
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['field'] = 'field_kala_carousel_slide_image';
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kala_carousel_slide_image']['settings'] = array(
    'image_style' => 'kala_carousel_image',
    'image_link' => '',
  );
  /* Filter criterion: Filter invalid images */
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['id'] = 'field_kala_carousel_slide_image_width';
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['table'] = 'field_data_field_kala_carousel_slide_image';
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['field'] = 'field_kala_carousel_slide_image_width';
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['ui_name'] = 'Filter invalid images';
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['operator'] = '>';
  $handler->display->display_options['filters']['field_kala_carousel_slide_image_width']['value']['value'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $export['kala_carousel'] = $view;

  return $export;
}
