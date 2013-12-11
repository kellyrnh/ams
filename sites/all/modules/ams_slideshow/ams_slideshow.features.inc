<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ams_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ams_slideshow_imagecache_default_presets() {
  $items = array(
    'flexslider' => array(
      'presetname' => 'flexslider',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '960',
            'height' => '300',
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
function ams_slideshow_views_api() {
  return array(
    'api' => '3.0',
  );
}
