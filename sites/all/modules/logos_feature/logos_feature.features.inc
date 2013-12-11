<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function logos_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function logos_feature_imagecache_default_presets() {
  $items = array(
    'flex_logo' => array(
      'presetname' => 'flex_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100%',
            'height' => '208px',
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
function logos_feature_node_info() {
  $items = array(
    'logos' => array(
      'name' => t('Logos'),
      'module' => 'features',
      'description' => t('A flexible content type for things like clients, investors etc...'),
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
function logos_feature_views_api() {
  return array(
    'api' => '3.0',
  );
}
