<?php
/**
 * @file
 * bookstore_map_locations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bookstore_map_locations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-map-field_address'.
  $field_instances['node-map-field_address'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'simple_gmap',
        'settings' => array(
          'apikey' => '',
          'iframe_height' => 200,
          'iframe_width' => 200,
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'langcode' => 'en',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'static_scale' => 1,
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');

  return $field_instances;
}
