<?php

/**
 * Implementation of hook_views_default_views().
 */
function giving_page_feature_views_default_views() {
  $views = array();

  // Exported view: giving_page
  $view = new view;
  $view->name = 'giving_page';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Giving Page';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['group']['element_type'] = 'h2';
  $handler->display->display_options['style_options']['group']['class'] = 'giving-cat-name';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'giving-group';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['class'] = 'giving-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>Sorry, there were no results for this category</h2>';
  $handler->display->display_options['empty']['area']['format'] = '2';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Organization Logo (field_giving_logo) */
  $handler->display->display_options['fields']['field_giving_logo_fid']['id'] = 'field_giving_logo_fid';
  $handler->display->display_options['fields']['field_giving_logo_fid']['table'] = 'node_data_field_giving_logo';
  $handler->display->display_options['fields']['field_giving_logo_fid']['field'] = 'field_giving_logo_fid';
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_giving_logo_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_giving_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_giving_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_giving_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_giving_logo_fid']['format'] = 'cs_node_logo_default';
  /* Field: Content: Description (field_giving_description) */
  $handler->display->display_options['fields']['field_giving_description_value']['id'] = 'field_giving_description_value';
  $handler->display->display_options['fields']['field_giving_description_value']['table'] = 'node_data_field_giving_description';
  $handler->display->display_options['fields']['field_giving_description_value']['field'] = 'field_giving_description_value';
  $handler->display->display_options['fields']['field_giving_description_value']['label'] = 'Description';
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['element_wrapper_class'] = 'giving-description-content';
  $handler->display->display_options['fields']['field_giving_description_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_giving_description_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_giving_description_value']['link_to_node'] = 0;
  /* Field: Content: Link (field_giving_link) */
  $handler->display->display_options['fields']['field_giving_link_url']['id'] = 'field_giving_link_url';
  $handler->display->display_options['fields']['field_giving_link_url']['table'] = 'node_data_field_giving_link';
  $handler->display->display_options['fields']['field_giving_link_url']['field'] = 'field_giving_link_url';
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_giving_link_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_giving_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_giving_link_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_giving_link_url']['label_type'] = 'none';
  /* Field: Taxonomy: Term */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_class'] = 'giving-description';
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Sort criterion: Taxonomy: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
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
    'giving' => 'giving',
  );
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    139 => '139',
    140 => '140',
    141 => '141',
    142 => '142',
    143 => '143',
    144 => '144',
    145 => '145',
    146 => '146',
    147 => '147',
    148 => '148',
    149 => '149',
    150 => '150',
    151 => '151',
    152 => '152',
    153 => '153',
    154 => '154',
    155 => '155',
    156 => '156',
    157 => '157',
    158 => '158',
    159 => '159',
    160 => '160',
    161 => '161',
    162 => '162',
    163 => '163',
    164 => '164',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Filter by category:';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['reduce'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '12';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'name';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['giving_page'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Text area'),
    t('<h2>Sorry, there were no results for this category</h2>'),
    t('<h3>[title]</h3>'),
    t('Description'),
    t('Filter by category:'),
    t('Block'),
  );

  $views[$view->name] = $view;

  return $views;
}
