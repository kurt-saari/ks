<?php
/**
 * @file
 * kslink.features.inc
 */

/**
 * Implements hook_views_api().
 */
function kslink_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kslink_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('Used for cool web tools'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Link is required'),
    ),
  );
  return $items;
}
