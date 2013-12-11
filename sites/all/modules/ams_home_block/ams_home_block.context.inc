<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ams_home_block_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'Home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-slideshow_panel' => array(
          'module' => 'panels_mini',
          'delta' => 'slideshow_panel',
          'region' => 'slider',
          'weight' => 0,
        ),
        'panels_mini-home_page' => array(
          'module' => 'panels_mini',
          'delta' => 'home_page',
          'region' => 'preface_one',
          'weight' => 0,
        ),
        'panels_mini-footer_home_panel' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_home_panel',
          'region' => 'footer',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  $export['home'] = $context;

  return $export;
}
