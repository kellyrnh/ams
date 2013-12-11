<?php

/**
 * Form callback for the webform configuration subpage
 *
 * @param array $form_state 
 * @param object $node 
 * @return void
 */

function webform_protected_downloads_configuration_form($form_state, $node) {
  
  $mail_fields = array();
  foreach ($node->webform['components'] as $cid => $component) {
    if (strpos($component['type'], 'mail') !== FALSE && $component['mandatory']) {
      $mail_fields[$cid] = $component['name'];
    }
  }
  
  $form = array();
  
  if (count($node->files) == 0) {
    $form['not_available'] = array('#value' => t('You need to attach files to this node before you can configure protected downloads.'));
  }
  elseif (!count($mail_fields)) {
    $form['not_available'] = array('#value' => t('You need to add at least one mandatory email field to this webform in order to configure protected downloads.'));
  }
  else {
    
    // get existing configuration for this node if any
    $conf = webform_protected_downloads_get_configuration($node->nid);
    
    $form['#tree'] = TRUE;
    
    $form['node'] = array('#type' => 'value', '#value' => $node);
    
    $form['files'] = array(
      '#type' => 'fieldset',
      '#title' => t('Files'),
    );
    
    foreach ($node->files as $key => $file) {
      
      $form['files'][$key] = array(
        '#type' => 'checkbox',
        '#title' => $file->filename,
        '#default_value' => webform_protected_downloads_file_is_protected($node->nid, $file->fid),
      );
    }
    
    $form['access_verification'] = array(
      '#type' => 'fieldset',
      '#title' => t('Access verification'),
    );
    
    $form['access_verification']['mail_field_cid'] = array(
      '#type' => 'select',
      '#title' => t('Mail confirmation to'),
      '#description' => t('Webform component that will be used for the confirmation mail'),
      '#options' => $mail_fields,
      '#required' => TRUE,
    );
    
    $form['access_verification']['mail_from'] = array(
      '#type' => 'textfield',
      '#title' => t('From'),
      '#default_value' => $conf ? $conf->mail_from : '',
      '#description' => t('The <em>From</em> address for the confirmation mail. Leave empty to use the sites email address (%site_mail).', array('%site_mail' => variable_get('site_mail', NULL))),
    );
    
    $form['access_verification']['mail_subject'] = array(
      '#type' => 'textfield',
      '#title' => t('Subject'),
      '#default_value' => $conf ? $conf->mail_subject : t('Download link for [site-url]'),
      '#required' => TRUE,
    );
    
    $form['access_verification']['mail_body'] = array(
      '#type' => 'textarea',
      '#title' => t('Body'),
      '#default_value' => $conf ? $conf->mail_body : t("Dear visitor,\n\nThank you for your interest.\nPlease use the following link to download the requested files: [download-url]\n\nThis link will be accessible until [download-expires]. If you need access after the link expires, don't hesitate to revisit the download page on [site-url]"),
      '#rows' => 10,
      '#required' => TRUE,
    );
    
    if (module_exists('token')) {
      $form['access_verification']['token_help'] = array(
        '#title' => t('Replacement patterns'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#description' => t('Besides the listed replacement patterns you can insert any placeholder of the form <em>%value[key]</em> to access values that the user has submitted in the webform.'),
      );

      $form['access_verification']['token_help']['help'] = array(
        '#value' => theme('token_help', array('global', 'webform_protected_downloads')),
      );
      
    }
    
    $form['access_verification']['testmail'] = array(
      '#type' => 'textfield',
      '#title' => t('Send testmail to'),
      '#description' => t('Enter a valid mail adress if you want to see what the mail will look like. The mail will be sent after the settings have been saved. Please note that the created link to the file downloads is not valid and can not be used to actually access the protected files. Also webform tokens will not be replaced, because there is no submission data in this test case.'),
    );
    
    $form['access_verification']['access_type'] = array(
      '#type' => 'radios',
      '#title' => t('Access type'),
      '#options' => array(
        WEBFORM_PROTECTED_DOWNLOADS_ACCESS_TYPE_SINGLE => t('One-time access only'),
        WEBFORM_PROTECTED_DOWNLOADS_ACCESS_TYPE_EXPIRES => t('Access expires')
      ),
      '#default_value' => $conf ? $conf->access_type : WEBFORM_PROTECTED_DOWNLOADS_DEFAULT_ACCESS_TYPE,
      '#description' => t('<em>One-time access only</em> means that the download page will only stay accessible for the duration of the session expiration period that you must configure below. Also you should update the mail body to indicate that this is a one-time access link. Note that you can safely set the downloads expiration to <em>0</em> for <em>One-time access only</em> but you need to set the session expiration to a value that is high enough that the user has time to view / download the file(s).<br /><em>Access expires</em> means that the link stays accessible until the download expires and can be accessed from different computers and persons as long as they know the link.'),
    );
    
    $form['access_verification']['expiration_download'] = array(
      '#type' => 'textfield',
      '#title' => t('Downloads expire after (seconds)'),
      '#default_value' => $conf ? $conf->expiration_download : WEBFORM_PROTECTED_DOWNLOADS_DEFAULT_EXPIRATION_DOWNLOAD,
      '#size' => 10,
      '#description' => t('The time in seconds that the download should be available to the user, counting from form submission. Set to 0 for no limit.'),
    );
    
    $form['access_verification']['expiration_session'] = array(
      '#type' => 'textfield',
      '#title' => t('Session expires after (seconds)'),
      '#default_value' => $conf ? $conf->expiration_session : WEBFORM_PROTECTED_DOWNLOADS_DEFAULT_EXPIRATION_SESSION,
      '#size' => 10,
      '#description' => t('The time in seconds that the session should be left open for a user when he has accessed the download page. The result is that the protected file stays accessible using the direct file path. Set to 0 for no limit.'),
    );
    
    $form['access_verification']['retroactive'] = array(
      '#type' => 'checkbox',
      '#title' => t('Retroactive'),
      '#description' => t("Allow access to files that have been protected after the user has initially submitted the form. If unchecked, users who have received the mail with the link to the download page won't be able to access files that have been protected after the mail has been send, unless they resubmit the form."),
      '#default_value' => $conf ? $conf->retroactive : WEBFORM_PROTECTED_DOWNLOADS_DEFAULT_RETROACTIVE,
    );
    
    $form['access_verification']['redirect'] = array(
      '#type' => 'checkbox',
      '#title' => t('Redirect to downloads page after form submission'),
      '#description' => t("Check this, if you want to redirect the user to the downloads page, directly after the webform has been submitted. This circumvents the mail verification, thus allowing <strong>any</strong> user to access the files simply by submitting the form. Use with care!"),
      '#default_value' => $conf ? $conf->redirect : WEBFORM_PROTECTED_DOWNLOADS_DEFAULT_REDIRECT,
    );
    
    $format = filter_format_load($node->format);
    $filter_explication = t('You can use the same format as for the webforms body: <em>!format</em>.<br /><a href="!url">More information on filter formats</a>', array(
      '!format' => $format->name,
      '!url' => url('filter/tips'),
    ));
    $form['protected_download_page'] = array(
      '#type' => 'fieldset',
      '#title' => t('Protected download page'),
    );
    
    $form['protected_download_page']['text_download_access'] = array(
      '#type' => 'textarea',
      '#title' => t('Success'),
      '#description' => t('This text will be shown above the file listing on the protected downloads page.') . '<br />' . $filter_explication,
      '#default_value' => $conf ? $conf->text_download_access : t('Thank you for your interest. Below you find the requested files.'),
      '#required' => TRUE,
    );
    
    if (module_exists('token')) {
      $form['protected_download_page']['token_help_text_download_access'] = array(
        '#title' => t('Replacement patterns'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        '#description' => t('Besides the listed replacement patterns you can insert any placeholder of the form <em>%value[key]</em> to access values that the user has submitted in the webform.'),
      );

      $form['protected_download_page']['token_help_text_download_access']['help'] = array(
        '#value' => theme('token_help', array('global', 'webform_protected_downloads')),
      );
      
    }
    
    $form['protected_download_page']['text_download_noaccess'] = array(
      '#type' => 'textarea',
      '#title' => t('Access denied'),
      '#description' => t('This text will be shown if the access is denied, e.g. if the download link expired.') . '<br />' . $filter_explication,
      '#default_value' => $conf ? $conf->text_download_noaccess : t('This link is not valid. If you think that this is an error, please contact the <a href="mailto:[site-mail]">site administrator</a>.'),
      '#required' => TRUE,
    );
    
    if (module_exists('token')) {
      $form['protected_download_page']['token_help_text_download_noaccess'] = array(
        '#title' => t('Replacement patterns'),
        '#type' => 'fieldset',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );

      $form['protected_download_page']['token_help_text_download_noaccess']['help'] = array(
        '#value' => theme('token_help', array('global')),
        );
    }
    
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Submit'),
    );
  }
  
  return $form;
}

/**
 * Implementation of hook_validate().
 *
 * @param array $form 
 * @param array $form_state 
 * @return void
 */

function webform_protected_downloads_configuration_form_validate($form, $form_state) {
  
  $mail = $form_state['values']['access_verification']['testmail'];
  if (!empty($mail)) {
    if (!valid_email_address($mail)) {
      form_set_error('access_verification][testmail', t('Please enter a valid mail adress.'));
    }
  }
  
}

/**
 * Implementation of hook_submit().
 *
 * @param array $form 
 * @param array $form_state 
 * @return void
 */

function webform_protected_downloads_configuration_form_submit($form, $form_state) {
  $values = $form_state['values'];
  $node = $values['node'];
  
  foreach ($values['files'] as $key => $protected) {
    
    $protected = (boolean) $protected;
    $private = $protected ? TRUE : _private_upload_is_file_private($node->files[$key]->filepath);
    
    $node->files[$key]->private = $private;
    $node->files[$key]->list = $protected ? FALSE : $node->files[$key]->list;
    
    webform_protected_downloads_file_set_protected(
      $node->nid,
      $node->files[$key]->fid,
      $protected
    );
  }
  
  webform_protected_downloads_set_configuration(
    $node->nid,
    array(
      'mail_field_cid' => $values['access_verification']['mail_field_cid'],
      'mail_from' => $values['access_verification']['mail_from'],
      'mail_subject' => $values['access_verification']['mail_subject'],
      'mail_body' => $values['access_verification']['mail_body'],
      'access_type' => $values['access_verification']['access_type'],
      'expiration_download' => $values['access_verification']['expiration_download'],
      'expiration_session' => $values['access_verification']['expiration_session'],
      'retroactive' => $values['access_verification']['retroactive'],
      'redirect' => $values['access_verification']['redirect'],
      'text_download_access' => $values['protected_download_page']['text_download_access'],
      'text_download_noaccess' => $values['protected_download_page']['text_download_noaccess'],
    )
  );
  node_save($node);
  drupal_set_message(t('Your changes have been saved.'));
  
  // check if a testmail should be sent
  $mail = $form_state['values']['access_verification']['testmail'];
  if (!empty($mail)) {
    $hash = webform_protected_downloads_create_hash();
    webform_protected_downloads_send_mail(NULL, $node->nid, $mail, $hash);
    drupal_set_message(t('A test mail has been send to @mail.', array('@mail' => $mail)));
  }
}

/**
 * Theme function for the configuration form
 *
 * @param array $form 
 * @return void
 */

function theme_webform_protected_downloads_configuration_form($form) {
  $output = '';
  $header = array(
    t('Filename'),
    t('Location'),
    t('Size'),
    t('Protected')
  );
  $rows = array();
  $node = $form['node']['#value'];
  if (isset($form['files']) && count($form['files'])) {
    foreach ($form['files'] as $key => &$element) {
      if ($key[0] != '#') {
        unset($element['#title']);
        $rows[] = array(
          $node->files[$key]->filename,
          $node->files[$key]->filepath,
          format_size($node->files[$key]->filesize),
          drupal_render($element),
        );
      }
    }
    $form['files']['#value'] = theme('table', $header, $rows);
  }
  $output .= drupal_render($form);
  return $output;
}
