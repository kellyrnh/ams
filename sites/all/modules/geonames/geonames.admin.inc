<?php
// $Id: geonames.admin.inc,v 1.1.2.5 2011/01/06 09:06:46 lyricnz Exp $

/**
 * @file
 * Administration-related functions for GeoNames
 */

/**
 * Admin Settings Page
 */
function geonames_admin_settings() {
  $form['geonames_docs_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to GeoNames Documentation'),
    '#description' => t('Where do you want the documentation to reside?'),
    '#default_value' => variable_get('geonames_docs_path', 'geonames/docs'),
  );
  $form['cache'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cache'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $tvalues = array(
    '%num' => _geonames_cache_items(),
    '!clearlink' => l(t('Clear cache'), 'admin/settings/geonames/clear_cache'),
  );
  $form['cache']['clear_cache'] = array(
    '#prefix' => '<div>',
    '#value' => t('There are currently %num items in the cache. [!clearlink]', $tvalues),
    '#suffix' => '</div>',
  );
  $form['cache']['geonames_cache'] = array(
    '#type' => 'radios',
    '#title' => t('Caching'),
    '#description' => t('Enable unless you have a good reason to disable it.'),
    '#default_value' => variable_get('geonames_cache', TRUE),
    '#options' => array(1 => 'Enabled', 0 => 'Disabled'),
  );
  $form['cache']['geonames_cache_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Cache lifetime'),
    '#description' => t('Cache items for ... days'),
    '#default_value' => variable_get('geonames_cache_limit', 14),
  );
  $form['cache']['geonames_reveal_cache'] = array(
    '#type' => 'radios',
    '#title' => t('Reveal Cache'),
    '#description' => t('If an item is retrieved from the cache, the request[cached] property will be available in the result object if this switch is set to Yes.'),
    '#default_value' => variable_get('geonames_reveal_cache', TRUE),
    '#options' => array(1 => 'Yes', 0 => 'No'),
  );

  $commercial_collapsed = (variable_get('geonames_commercial_active', FALSE) == TRUE) ? FALSE : TRUE;

  $form['commercial'] = array(
    '#type' => 'fieldset',
    '#title' => t('GeoNames Commercial Webservices'),
    '#collapsible' => TRUE,
    '#collapsed' => $commercial_collapsed
  );
  $form['commercial']['leadingtext'] = array(
    '#prefix' => '<div>',
    '#value' => t('You should always support developers of quality services. Increased performance is cheap, and you should afford it. Visit the !link page for more information', array('!link' => l(t('GeoNames Commercial Webservices'), 'http://www.geonames.org/professional-webservices.html'))),
    '#suffix' => '</div>'
  );
  if (variable_get('geonames_commercial_active', FALSE) == TRUE) {
    // Show the Status and Credits Counter (ick)
    $tvalues = array(
      '@credits' => variable_get('geonames_commercial_credits', 0),
      '@date' => format_date(variable_get('geonames_commercial_credits_since', 'unknown')),
      '!link' => l(t('Reset'), 'admin/settings/geonames/reset_credits'),
    );
    $form['commercial']['counter'] = array(
      '#prefix' => '<div><p>',
      '#value' => '<b>'. t('Status') .':</b><br />'. t('You have used @credits credits since @date. [!link]', $tvalues),
      '#suffix' => '</p></div>'
    );
  }
  $form['commercial']['geonames_commercial_active'] = array(
    '#type' => 'radios',
    '#title' => t('GeoNames Commercial Webservices'),
    '#default_value' => variable_get('geonames_commercial_active', 0),
    '#options' => array(1 => 'Enabled', 0 => 'Disabled'),
  );
  $form['commercial']['geonames_commercial_server'] = array(
    '#type' => 'textfield',
    '#title' => t('URL to Commercial Service Server'),
    '#description' => 'Example: http://ws.geonames.net - without the trailing slash',
    '#default_value' => variable_get('geonames_commercial_server', 'http://ws.geonames.net'),
  );
  $form['commercial']['geonames_commercial_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#default_value' => variable_get('geonames_commercial_username', ''),
  );


  $updated = variable_get('geonames_metadata_updated', 0);
  $values = array(
    '!numcountries' => db_result(db_query('SELECT COUNT(*) FROM {geonames_countryinfo}')),
    '!numfeaturecodes' => db_result(db_query('SELECT COUNT(*) FROM {geonames_featurecodes}')),
    '!updated' => $updated ? t('Last run !interval ago', array('!interval' => format_interval(time() - $updated))) : t('Never updated'),
  );

  // The state and title of the fieldset depend on whether the metadata is complete.
  if ($values['!numcountries'] == 0 || $values['!numfeaturecodes'] == 0) {
    $form['metadata'] = array(
      '#type' => 'fieldset',
      '#title' => t('Metadata - Incomplete'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
  }
  else {
    $form['metadata'] = array(
      '#type' => 'fieldset',
      '#title' => t('Metadata'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
  }

  $form['metadata']['metadata_status'] = array(
    '#prefix' => '<div>',
    '#value' => t('There are currently !numcountries countries and !numfeaturecodes feature codes in the local tables. !updated.', $values),
    '#suffix' => '</div>',
  );
  $form['metadata']['metadata_refresh'] = array(
    '#type' => 'button',
    '#value' => t('Refresh metadata from geonames.org'),
    '#executes_submit_callback' => TRUE,
    '#submit' => array('geonames_metadata_update'),
  );

  $tvalues = array(
    '!geonameslink' => l(t('GeoNames'), 'http://www.geonames.org/'),
    '!theirsitelink' => l(t('their site'), 'http://www.geonames.org/'), // should be translated
    '!cclink' =>  l(t('Creative Commons Attribution Licence 3.0'), 'http://creativecommons.org/licenses/by/3.0/'),
  );
  $form['licencing'] = array(
    '#prefix' => '<ul><li>',
    '#value' => t('Note: You must give credit to !geonameslink if you are not using the commercial services, for example by including a link to !theirsitelink on your pages. The GeoNames geographical database is released under the !cclink.', $tvalues),
    '#suffix' => '</li></ul>'
  );

  return system_settings_form($form);
}

/**
 * Admin Settings Page : Validation
 */
function geonames_admin_settings_validate($form, &$form_state) {
  $values = $form_state['values'];

  // cache
  if ($values['geonames_cache']) {
    $geonames_cache_table = variable_get('geonames_cache_table', 'cache_geonames');
    if (!db_table_exists($geonames_cache_table)) {
      form_set_error('cache', t('Table %table does not exist in the database, please create it.', array('%table' => $geonames_cache_table)));
    }
  }

  // have Commercial Services settings changed?
  $commercial_changed = FALSE;
  $commercial_elements = array('geonames_commercial_active', 'geonames_commercial_username', 'geonames_commercial_server');
  foreach ($commercial_elements as $key) {
    if ($form['commercial'][$key]['#default_value'] != $values[$key]) {
      $commercial_changed = TRUE;
    }
  }

  // if active and changed, validate
  if ($values['geonames_commercial_active'] && $commercial_changed) {

    // verify that a username is set
    if ($values['geonames_commercial_username'] === '') {
      form_set_error('', t('Commercial Webservices: You must provide a username.'));
    }
    else {
      // verify if the service works
      // Test using the search service
      $url = $values['geonames_commercial_server'] .'/search?username='. $values['geonames_commercial_username'] .'&name=nydalen';
      $data = drupal_http_request($url);
      if ($data->code != '200') {
        form_set_error('', t('There is a problem with the response from the URL you have specified.') .'<br />'. t('The server returned errorcode %code: %error', array('%code' => $data->code, '%error' => $data->error)));
      }
      else {
        $xml = new SimpleXMLElement($data->data);
        if ($xml->status['message']) {
          form_set_error('', t('GeoNames Service Response: %message (code: %code)', array('%message' => $xml->status['message'], '%code' => $xml->status['value'])));
        }
        else {
          geonames_credits_pay(1); // use one credit! ;)
            if ($xml->geoname[0]->name == 'Nydalen') {
            drupal_set_message(t('Your account has been successfully tested and is properly configured!'));
          }
          else {
            form_set_error('', t('Unknown Error'));
          }
        }
      }
    }
  }
}

/**
 * Clear the Results and Data Cache.
 */
function geonames_cache_clear($adminpage = TRUE) {
  $geonames_cache_table = variable_get('geonames_cache_table', 'cache_geonames');
  cache_clear_all(NULL, $geonames_cache_table);
  if ($adminpage) {
    drupal_set_message(t('Cache cleared.'));
    drupal_goto('admin/settings/geonames');
  }
}

/**
 * Commercial Service: Reset Credits Counter
 */
function geonames_credits_reset($adminpage = TRUE) {
  variable_set('geonames_commercial_credits', 0);
  variable_set('geonames_commercial_credits_since', time());
  if ($adminpage) {
    drupal_set_message(t('Credits and time reset.'));
    drupal_goto('admin/settings/geonames');
  }
}

/**
 * Return the Number of Items Currently in the Cache
 */
function _geonames_cache_items() {
  $geonames_cache_table = variable_get('geonames_cache_table', 'cache_geonames');
  return db_result(db_query('SELECT COUNT(*) FROM {%s}', $geonames_cache_table));
}
