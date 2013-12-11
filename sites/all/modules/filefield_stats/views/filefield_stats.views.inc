<?php

/**
 * @file
 * Filefield Stats: This include handles the data and handlers views hook implementations
 */


/**
 * Implementation of hook_views_data().
 */
function filefield_stats_views_data() {
  $data = array();

  $data['files']['filefield_stats_download_count'] = array(
    'title'  => t('Download Count (Filefield)'),
    'help'   => t('Number of downloads for a file'),
    'field'  => array('handler' => 'views_handler_field_filefield_stats_file_download_count', 'click sortable' => TRUE, ),
  );

  return $data;
}


/**
 * Implementation of hook_views_handlers().
 */
function filefield_stats_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'filefield_stats') . '/views',
    ),
    'handlers' => array(
      'views_handler_field_filefield_stats_file_download_count'  => array('parent' => 'views_handler_field_numeric'),
    ),
  );
}
