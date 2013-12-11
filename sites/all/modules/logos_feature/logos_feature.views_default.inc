<?php

/**
 * Implementation of hook_views_default_views().
 */
function logos_feature_views_default_views() {
  $views = array();

  // Exported view: logos
  $view = new view;
  $view->name = 'logos';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Logos';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo Link (field_logo_link) */
  $handler->display->display_options['fields']['field_logo_link_url']['id'] = 'field_logo_link_url';
  $handler->display->display_options['fields']['field_logo_link_url']['table'] = 'node_data_field_logo_link';
  $handler->display->display_options['fields']['field_logo_link_url']['field'] = 'field_logo_link_url';
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logo_link_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_logo_link_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_logo_link_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_logo_link_url']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_logo_link_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_logo_link_url']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_logo_link_url']['format'] = 'plain';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Logo (field_flex_logo) */
  $handler->display->display_options['fields']['field_flex_logo_fid']['id'] = 'field_flex_logo_fid';
  $handler->display->display_options['fields']['field_flex_logo_fid']['table'] = 'node_data_field_flex_logo';
  $handler->display->display_options['fields']['field_flex_logo_fid']['field'] = 'field_flex_logo_fid';
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['element_type'] = '0';
  $handler->display->display_options['fields']['field_flex_logo_fid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_flex_logo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_flex_logo_fid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_flex_logo_fid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_flex_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_flex_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_flex_logo_fid']['format'] = 'flex_logo_default';
  /* Sort criterion: Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'logos' => 'logos',
  );
  /* Filter: Content: Select Type (field_logo_select) - Allowed values */
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['id'] = 'field_logo_select_value_many_to_one';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['table'] = 'node_data_field_logo_select';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['field'] = 'field_logo_select_value_many_to_one';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['value'] = array(
    'Investor' => 'Investor',
  );
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['reduce_duplicates'] = 0;

  /* Display: Clients Block */
  $handler = $view->new_display('block', 'Clients Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clients-view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'clients-view-list';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'logos' => 'logos',
  );
  /* Filter: Content: Select Type (field_logo_select) - Allowed values */
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['id'] = 'field_logo_select_value_many_to_one';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['table'] = 'node_data_field_logo_select';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['field'] = 'field_logo_select_value_many_to_one';
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['value'] = array(
    'Client' => 'Client',
  );
  $handler->display->display_options['filters']['field_logo_select_value_many_to_one']['reduce_duplicates'] = 0;

  /* Display: Investors Block */
  $handler = $view->new_display('block', 'Investors Block', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clients-view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'clients-view-list';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['logos'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Clients Block'),
    t('Investors Block'),
  );

  $views[$view->name] = $view;

  return $views;
}
