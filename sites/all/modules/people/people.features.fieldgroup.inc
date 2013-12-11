<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function people_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_vcard
  $groups['people-group_vcard'] = array(
    'group_type' => 'standard',
    'type_name' => 'people',
    'group_name' => 'group_vcard',
    'label' => 'Vcard Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '16',
    'fields' => array(
      '0' => 'field_first_name',
      '1' => 'field_last_name',
      '2' => 'field_people_company',
      '3' => 'field_biz_phone',
      '4' => 'field_cell_phone',
      '5' => 'field_biz_address',
      '6' => 'field_city',
      '7' => 'field_state',
      '8' => 'field_zip_code',
      '9' => 'field_web_address',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vcard Info');

  return $groups;
}
