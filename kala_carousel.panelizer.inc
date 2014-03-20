<?php
/**
 * @file
 * kala_carousel.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function kala_carousel_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:kala_carousel:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'kala_carousel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Slide field collection (field_kala_carousel_slide) from fieldable_panels_pane (kala_carousel)',
      'keyword' => 'Field collection',
      'name' => 'field_collection_from_field:fieldable_panels_pane:kala_carousel:field_kala_carousel_slide',
      'delta' => '0',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7fe5fd6-68a1-45e5-8ba1-f47c5702c79a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'kala_carousel-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '364a6f0f-e15d-4718-93fe-eb9f612aff2c';
    $display->content['new-364a6f0f-e15d-4718-93fe-eb9f612aff2c'] = $pane;
    $display->panels['center'][0] = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-364a6f0f-e15d-4718-93fe-eb9f612aff2c';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:kala_carousel:default:default'] = $panelizer;

  return $export;
}
