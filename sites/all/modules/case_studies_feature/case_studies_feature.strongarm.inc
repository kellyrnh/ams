<?php

/**
 * Implementation of hook_strongarm().
 */
function case_studies_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_casestudy';
  $strongarm->value = '0';
  $export['comment_anonymous_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_casestudy';
  $strongarm->value = '0';
  $export['comment_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_casestudy';
  $strongarm->value = '3';
  $export['comment_controls_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_casestudy';
  $strongarm->value = '4';
  $export['comment_default_mode_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_casestudy';
  $strongarm->value = '1';
  $export['comment_default_order_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_casestudy';
  $strongarm->value = '50';
  $export['comment_default_per_page_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_casestudy';
  $strongarm->value = '0';
  $export['comment_form_location_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_casestudy';
  $strongarm->value = '1';
  $export['comment_preview_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_casestudy';
  $strongarm->value = '1';
  $export['comment_subject_field_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_casestudy';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '11',
    'author' => '10',
    'options' => '12',
    'menu' => '-3',
    'path' => '15',
    'page_title' => '-4',
    'path_redirect' => '14',
    'print' => '13',
    'nodewords' => '9',
  );
  $export['content_extra_weights_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_casestudy';
  $strongarm->value = '0';
  $export['language_content_type_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_casestudy';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_casestudy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_casestudy';
  $strongarm->value = '0';
  $export['upload_casestudy'] = $strongarm;

  return $export;
}
