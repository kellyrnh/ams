<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function resources_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_optional_fields
  $groups['page-group_optional_fields'] = array(
    'group_type' => 'standard',
    'type_name' => 'page',
    'group_name' => 'group_optional_fields',
    'label' => 'Optional Fields',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
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
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_audio_file',
      '1' => 'field_logo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Optional Fields');

  return $groups;
}
