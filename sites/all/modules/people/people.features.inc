<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function people_imagecache_default_presets() {
  $items = array(
    'PeopleImage' => array(
      'presetname' => 'PeopleImage',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '130',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function people_node_info() {
  $items = array(
    'people' => array(
      'name' => t('People'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Title is simply the title of the "node" or article. e.g. James Bourdon'),
    ),
  );
  return $items;
}
