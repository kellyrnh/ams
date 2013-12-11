<?php

/**
 * @file
 * Filefield Stats: The admin include contains all the functions for the admin end of things, mostly the for logs & reports
 */

define('FILEFIELD_STATS_PAGER_SIZE_DEFAULT', 4);


/**
 * Report callback. This produces a page of stats... TODO: This should be better...
 */
function filefield_stats_report() {
  $pager_size = (isset($_GET['pager_size']) && (int)$_GET['pager_size'] > 0) ? (int)$_GET['pager_size'] : FILEFIELD_STATS_PAGER_SIZE_DEFAULT;

  $range = array();
  $range['start'] = (isset($_GET['start']) && (int)$_GET['start'] > 0) ? (int)$_GET['start'] : strtotime('last week');
  $range['end']   = (isset($_GET['end'])   && (int)$_GET['end']   > 0) ? (int)$_GET['end']   : time();

  if (empty($_POST)) {
    drupal_set_message(t('Stats below are between the period %start and %end', array('%start' => format_date($range['start'], 'small'), '%end' => format_date($range['end'], 'small'))));
  }

  $output .= drupal_get_form('filefield_stats_report_filter_form');

  // Most popular files
  $query = 'SELECT fs.fid, f.filename, COUNT(*) AS cnt
            FROM {filefield_stats} AS fs
            INNER JOIN {files} f ON fs.fid = f.fid
            WHERE fs.timestamp BETWEEN %d AND %d
            GROUP BY fs.fid
            ORDER BY cnt DESC';
  $count_query = 'SELECT COUNT(DISTINCT fid) FROM {filefield_stats} fs WHERE fs.timestamp BETWEEN %d AND %d';
  $result = pager_query($query, $pager_size, 0, $count_query, $range['start'], $range['end']);
  $rows = array();
  while ($row = db_fetch_array($result)) {
    $row['filename'] = check_plain($row['filename']);
    $rows[] = $row;
  }
  $header = array(t('File ID'), t('Filename'), t('Count'));
  $output .= theme('box', t('Popular files'), theme('table', $header, $rows) . theme('pager', array(), $pager_size, 0));



  // Most recent downloads
  $query = 'SELECT fs.fid, f.filename, fs.timestamp, u.uid, u.name, fs.hostname, fs.referer
            FROM {filefield_stats} AS fs
            INNER JOIN {files} f ON fs.fid = f.fid
            INNER JOIN {users} u ON fs.uid = u.uid
            WHERE fs.timestamp BETWEEN %d AND %d
            ORDER BY fs.timestamp DESC';
  $count_query = 'SELECT COUNT(*) FROM {filefield_stats} fs WHERE fs.timestamp BETWEEN %d AND %d';
  $result = pager_query($query, $pager_size, 1, $count_query, $range['start'], $range['end']);
  $rows = array();
  while ($row = db_fetch_array($result)) {
    if ($row['uid'] == 0) {
      $row['name'] = t(variable_get('anonymous', 'Anonymous'));
    }
    $row['name'] = check_plain($row['name']);
    unset($row['uid']);
    $row['filename'] = check_plain($row['filename']);
    $row['referer'] = check_url($row['referer']);
    $row['timestamp'] = format_date($row['timestamp'], 'small');
    $rows[] = $row;
  }
  $header = array(t('File ID'), t('Filename'), t('Time'), t('User'), t('Host'), t('Referer'));
  $output .= theme('box', t('Files downloaded'), theme('table', $header, $rows) . theme('pager', array(), $pager_size, 1));



  // Files downloaded by user
  $query = 'SELECT u.uid, u.name, fs.fid, f.filename, COUNT(*) as cnt
            FROM {filefield_stats} AS fs
            INNER JOIN {files} f ON fs.fid = f.fid
            INNER JOIN {users} u ON fs.uid = u.uid
            WHERE fs.timestamp BETWEEN %d AND %d
            GROUP BY fs.fid, u.uid
            ORDER BY cnt DESC, u.name ASC, f.filename ASC';
  $count_query = 'SELECT COUNT(DISTINCT fid) FROM {filefield_stats} fs WHERE fs.timestamp BETWEEN %d AND %d';
  $result = pager_query($query, $pager_size, 1, $count_query, $range['start'], $range['end']);
  $rows = array();
  while ($row = db_fetch_array($result)) {
    if ($row['uid'] == 0) {
      $row['name'] = t(variable_get('anonymous', 'Anonymous'));
    }
    $row['name'] = check_plain($row['name']);
    unset($row['uid']);
    $row['filename'] = check_plain($row['filename']);
    $rows[] = $row;
  }
  $header = array(t('User'), t('File ID'), t('Filename'), t('Downloads'));
  $output .= theme('box', t('Files downloaded by user'), theme('table', $header, $rows) . theme('pager', array(), $pager_size, 1));


  // Most downloading user
  $query = 'SELECT fs.uid, u.name, COUNT(*) AS cnt
            FROM {filefield_stats} AS fs
            INNER JOIN {users} u ON fs.uid = u.uid
            WHERE fs.timestamp BETWEEN %d AND %d
            GROUP BY fs.uid
            ORDER BY cnt DESC';
  $count_query = 'SELECT COUNT(DISTINCT fs.uid) FROM {filefield_stats} fs WHERE fs.timestamp BETWEEN %d AND %d GROUP BY fs.uid';
  $result = pager_query($query, $pager_size, 2, $count_query, $range['start'], $range['end']);
  $rows = array();
  while ($row = db_fetch_array($result)) {
    if ($row['uid'] == 0) {
      $row['name'] = t(variable_get('anonymous', 'Anonymous'));
    }

    $row['name'] = check_plain($row['name']);
    unset($row['uid']);
    $rows[] = $row;
  }
  $header = array(t('User'), t('Downloads'));
  $output .= theme('box', t('Most downloads per user'), theme('table', $header, $rows) . theme('pager', array(), $pager_size, 2));




  // Most downloading host
  $query = 'SELECT fs.hostname, COUNT(*) AS cnt
            FROM {filefield_stats} AS fs
            WHERE fs.timestamp BETWEEN %d AND %d
            GROUP BY fs.hostname
            ORDER BY cnt DESC';
  $count_query = 'SELECT COUNT(DISTINCT fs.hostname) FROM {filefield_stats} fs WHERE fs.timestamp BETWEEN %d AND %d GROUP BY fs.hostname';
  $result = pager_query($query, $pager_size, 3, $count_query, $range['start'], $range['end']);
  $rows = array();
  while ($row = db_fetch_array($result)) {
    $row['hostname'] = check_plain($row['hostname']);
    $rows[] = $row;
  }
  $header = array(t('Host'), t('Downloads'));
  $output .= theme('box', t('Most downloads per host'), theme('table', $header, $rows) . theme('pager', array(), $pager_size, 3));

  return $output;
}


/**
 * The filter form is used in the above stats report. It allows the report to be narrows to a specific time range.
 */
function filefield_stats_report_filter_form() {
  $form = array();

  $form['filter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Filter'),
    '#collapsible' => TRUE,
    '#collapsed' => !(isset($_GET['start']) || isset($_GET['end']) || isset($_GET['pager_size'])),
  );


  $start = (isset($_GET['start']) && (int)$_GET['start'] > 0) ? date('d-m-Y H:i:s', (int)$_GET['start']) : FALSE;
  $form['filter']['start'] = array(
    '#type' => 'textfield',
    '#title' => t('Start'),
    '#prefix' => '<div class="container-inline form-item">',
    '#suffix' => '</div>',
    '#default_value' => $start === FALSE ? '' : $start,
  );

  $end = (isset($_GET['end']) && (int)$_GET['end'] > 0) ? date('d-m-Y H:i:s', (int)$_GET['end']) : FALSE;
  $form['filter']['end'] = array(
    '#type' => 'textfield',
    '#title' => t('End'),
    '#prefix' => '<div class="container-inline form-item">',
    '#suffix' => '</div>',
    '#default_value' => $end === FALSE ? '' : $end,
  );

  $pager_size = (isset($_GET['pager_size']) && (int)$_GET['pager_size'] > 0) ? (int)$_GET['pager_size'] : FILEFIELD_STATS_PAGER_SIZE_DEFAULT;
  $form['filter']['pager_size'] = array(
    '#type' => 'textfield',
    '#title' => t('Pager Size'),
    '#prefix' => '<div class="container-inline form-item">',
    '#suffix' => '</div>',
    '#default_value' => $pager_size,
    '#maxlength' => 3,
    '#size' => 2,
    '#description' => '<div>'. t('Set the pager size here if you would like larger lists below. Warning: if this is set too high, the page could take a long time to load') .'</div>',
  );

  $form['filter']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  $form['filter']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
  );

  return $form;
}


/**
 * Check the submitted filter values are sensible (ie, the dates and pager value)
 */
function filefield_stats_report_filter_form_validate($form, &$form_state) {
  if ($form_state['values']['op'] == t('Reset')) {
    return;
  }

  if (!empty($form_state['values']['start']) && strtotime($form_state['values']['start']) === FALSE) {
    form_set_error('start', t('Start date does not seem valid'));
  }

  if (!empty($form_state['values']['end']) && strtotime($form_state['values']['end']) === FALSE) {
    form_set_error('start', t('End date does not seem valid'));
  }

  if (!empty($form_state['values']['pager_size']) && preg_match('|[^0-9]|', $form_state['values']['pager_size'])) {
    form_set_error('pager_size', t('The Pager Size should be a positive and whole number.'));
  }
}


/**
 * If the values validate, then redirect with a query string constaining the settings.
 */
function filefield_stats_report_filter_form_submit(&$form, &$form_state) {
  $querystring = array();

  if ($form_state['values']['op'] != t('Reset')) {
    if (!empty($form_state['values']['start'])) {
      $querystring['start'] = strtotime($form_state['values']['start']);
    }
    if (!empty($form_state['values']['end'])) {
      $querystring['end'] = strtotime($form_state['values']['end']);
    }
    if (!empty($form_state['values']['pager_size']) && $form_state['values']['pager_size'] != FILEFIELD_STATS_PAGER_SIZE_DEFAULT) {
      $querystring['pager_size'] = (int)$form_state['values']['pager_size'];
    }
  }

  $form['#redirect'] = array('admin/reports/filefield_stats', drupal_query_string_encode($querystring));
}
