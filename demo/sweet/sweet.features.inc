<?php
/**
 * @file
 * sweet.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sweet_node_info() {
  $items = array(
    'fruit' => array(
      'name' => t('Fruit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Fruit name'),
      'help' => '',
    ),
  );
  return $items;
}
