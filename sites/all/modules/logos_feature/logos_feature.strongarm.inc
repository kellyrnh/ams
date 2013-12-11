<?php

/**
 * Implementation of hook_strongarm().
 */
function logos_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_logos';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'path' => '6',
    'path_redirect' => '5',
    'print' => '4',
    'nodewords' => '0',
  );
  $export['content_extra_weights_logos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_logos';
  $strongarm->value = '0';
  $export['language_content_type_logos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_logos';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_logos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_logos';
  $strongarm->value = '0';
  $export['upload_logos'] = $strongarm;

  return $export;
}
