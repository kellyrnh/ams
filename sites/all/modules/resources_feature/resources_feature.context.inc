<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function resources_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/77' => 'node/77',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Resources-block_3' => array(
          'module' => 'views',
          'delta' => 'Resources-block_3',
          'region' => 'node_panel_66',
          'weight' => 0,
        ),
        'views-Resources-block_1' => array(
          'module' => 'views',
          'delta' => 'Resources-block_1',
          'region' => 'node_panel_66',
          'weight' => 1,
        ),
        'views-Resources-block_2' => array(
          'module' => 'views',
          'delta' => 'Resources-block_2',
          'region' => 'node_panel_66',
          'weight' => 2,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'node_panel_33',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'node_panel_33',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['resources_home'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_nonprofit';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/740' => 'node/740',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Resources-block_6' => array(
          'module' => 'views',
          'delta' => 'Resources-block_6',
          'region' => 'node_panel_66',
          'weight' => 0,
        ),
        'views-Resources-block_5' => array(
          'module' => 'views',
          'delta' => 'Resources-block_5',
          'region' => 'node_panel_66',
          'weight' => 1,
        ),
        'views-Resources-block_4' => array(
          'module' => 'views',
          'delta' => 'Resources-block_4',
          'region' => 'node_panel_66',
          'weight' => 2,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'node_panel_33',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'node_panel_33',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['resources_nonprofit'] = $context;

  return $export;
}
