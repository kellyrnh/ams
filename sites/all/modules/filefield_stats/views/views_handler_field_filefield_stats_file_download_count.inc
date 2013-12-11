<?php

/**
 * @file
 * Filefield Stats: This include contains the handler for the download count views field
 */


class views_handler_field_filefield_stats_file_download_count extends views_handler_field_numeric {
  function query() {
    if ($this->options['stat_range_days'] > 0) {
      $sql_time_filter = ' AND filefield_stats.timestamp >= '. (time() - ($this->options['stat_range_days'] * 60 * 60 * 24));
    }
    $sql = 'SELECT COUNT(*) FROM {filefield_stats} WHERE filefield_stats.fid = files.fid'. $sql_time_filter;
    $field_alias = $this->query->add_field('', "($sql)", 'filefield_stats_download_count_'. $this->options['stat_range_days']);
    $this->field_alias = $field_alias;
  }


  function options(&$options) {
    parent::options($options);
    $options['stat_range_days'] = 0;
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['stat_range_days'] = array('default' => '0');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['stat_range_days'] = array(
      '#title' => t('Number of days to count downloads'),
      '#type' => 'textfield',
      '#default_value' => $this->options['stat_range_days'],
      '#size' => 4,
      '#weight' => -1,
      '#description' => t('Enter the number of days to count downloads, eg 14 will count downloads over the past 14 days. Use 0 (zero) to count all downloads'),
    );
  }
}
