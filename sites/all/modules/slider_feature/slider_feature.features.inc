<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function slider_feature_imagecache_default_presets() {
  $items = array(
    'slide_new' => array(
      'presetname' => 'slide_new',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '465',
            'height' => '310',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function slider_feature_views_api() {
  return array(
    'api' => '3.0',
  );
}
