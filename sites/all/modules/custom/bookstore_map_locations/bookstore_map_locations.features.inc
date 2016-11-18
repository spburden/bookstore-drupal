<?php
/**
 * @file
 * bookstore_map_locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bookstore_map_locations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bookstore_map_locations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bookstore_map_locations_node_info() {
  $items = array(
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => t('Store Location Map'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
