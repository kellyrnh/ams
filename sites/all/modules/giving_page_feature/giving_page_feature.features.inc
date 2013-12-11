<?php

/**
 * Implementation of hook_node_info().
 */
function giving_page_feature_node_info() {
  $items = array(
    'giving' => array(
      'name' => t('Giving Page'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function giving_page_feature_views_api() {
  return array(
    'api' => '3.0',
  );
}
