<?php

/**
 * Implementation of hook_views_default_views().
 */
function case_studies_feature_views_default_views() {
  $views = array();

  // Exported view: case_study
  $view = new view;
  $view->name = 'case_study';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Case Study';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Case Studies';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Case Study Form Reference (field_cs_ref) */
  $handler->display->display_options['relationships']['field_cs_ref_nid']['id'] = 'field_cs_ref_nid';
  $handler->display->display_options['relationships']['field_cs_ref_nid']['table'] = 'node_data_field_cs_ref';
  $handler->display->display_options['relationships']['field_cs_ref_nid']['field'] = 'field_cs_ref_nid';
  /* Field: Content: Case Study Image (field_case_study) */
  $handler->display->display_options['fields']['field_case_study_fid']['id'] = 'field_case_study_fid';
  $handler->display->display_options['fields']['field_case_study_fid']['table'] = 'node_data_field_case_study';
  $handler->display->display_options['fields']['field_case_study_fid']['field'] = 'field_case_study_fid';
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_case_study_fid']['format'] = 'image_plain';
  /* Field: Content: Industry (field_cs_industry) */
  $handler->display->display_options['fields']['field_cs_industry_value']['id'] = 'field_cs_industry_value';
  $handler->display->display_options['fields']['field_cs_industry_value']['table'] = 'node_data_field_cs_industry';
  $handler->display->display_options['fields']['field_cs_industry_value']['field'] = 'field_cs_industry_value';
  $handler->display->display_options['fields']['field_cs_industry_value']['label'] = 'Industry';
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['link_to_node'] = 0;
  /* Field: Content: Service (field_cs_service) */
  $handler->display->display_options['fields']['field_cs_service_value']['id'] = 'field_cs_service_value';
  $handler->display->display_options['fields']['field_cs_service_value']['table'] = 'node_data_field_cs_service';
  $handler->display->display_options['fields']['field_cs_service_value']['field'] = 'field_cs_service_value';
  $handler->display->display_options['fields']['field_cs_service_value']['label'] = 'Service';
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['link_to_node'] = 0;
  /* Field: Content: Situation (field_cs_situation) */
  $handler->display->display_options['fields']['field_cs_situation_value']['id'] = 'field_cs_situation_value';
  $handler->display->display_options['fields']['field_cs_situation_value']['table'] = 'node_data_field_cs_situation';
  $handler->display->display_options['fields']['field_cs_situation_value']['field'] = 'field_cs_situation_value';
  $handler->display->display_options['fields']['field_cs_situation_value']['label'] = 'Situation';
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['link_to_node'] = 0;
  /* Field: Content: Case Study Image (field_cs_image) */
  $handler->display->display_options['fields']['field_cs_image_fid']['id'] = 'field_cs_image_fid';
  $handler->display->display_options['fields']['field_cs_image_fid']['table'] = 'node_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image_fid']['field'] = 'field_cs_image_fid';
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_cs_image_fid']['format'] = 'CaseStudy_View_default';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn more...';
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'casestudy' => 'casestudy',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'case-studies-page';

  /* Display: Case Studies Block */
  $handler = $view->new_display('block', 'Case Studies Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Case Study Form Reference (field_cs_ref) */
  $handler->display->display_options['relationships']['field_cs_ref_nid']['id'] = 'field_cs_ref_nid';
  $handler->display->display_options['relationships']['field_cs_ref_nid']['table'] = 'node_data_field_cs_ref';
  $handler->display->display_options['relationships']['field_cs_ref_nid']['field'] = 'field_cs_ref_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Case Study Image (field_case_study) */
  $handler->display->display_options['fields']['field_case_study_fid']['id'] = 'field_case_study_fid';
  $handler->display->display_options['fields']['field_case_study_fid']['table'] = 'node_data_field_case_study';
  $handler->display->display_options['fields']['field_case_study_fid']['field'] = 'field_case_study_fid';
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_case_study_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_case_study_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_case_study_fid']['format'] = 'image_plain';
  /* Field: Content: Industry (field_cs_industry) */
  $handler->display->display_options['fields']['field_cs_industry_value']['id'] = 'field_cs_industry_value';
  $handler->display->display_options['fields']['field_cs_industry_value']['table'] = 'node_data_field_cs_industry';
  $handler->display->display_options['fields']['field_cs_industry_value']['field'] = 'field_cs_industry_value';
  $handler->display->display_options['fields']['field_cs_industry_value']['label'] = 'Industry';
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_industry_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_industry_value']['link_to_node'] = 0;
  /* Field: Content: Service (field_cs_service) */
  $handler->display->display_options['fields']['field_cs_service_value']['id'] = 'field_cs_service_value';
  $handler->display->display_options['fields']['field_cs_service_value']['table'] = 'node_data_field_cs_service';
  $handler->display->display_options['fields']['field_cs_service_value']['field'] = 'field_cs_service_value';
  $handler->display->display_options['fields']['field_cs_service_value']['label'] = 'Service';
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_service_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_service_value']['link_to_node'] = 0;
  /* Field: Content: Situation (field_cs_situation) */
  $handler->display->display_options['fields']['field_cs_situation_value']['id'] = 'field_cs_situation_value';
  $handler->display->display_options['fields']['field_cs_situation_value']['table'] = 'node_data_field_cs_situation';
  $handler->display->display_options['fields']['field_cs_situation_value']['field'] = 'field_cs_situation_value';
  $handler->display->display_options['fields']['field_cs_situation_value']['label'] = 'Situation';
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_situation_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_situation_value']['link_to_node'] = 0;
  /* Field: Content: Case Study Image (field_cs_image) */
  $handler->display->display_options['fields']['field_cs_image_fid']['id'] = 'field_cs_image_fid';
  $handler->display->display_options['fields']['field_cs_image_fid']['table'] = 'node_data_field_cs_image';
  $handler->display->display_options['fields']['field_cs_image_fid']['field'] = 'field_cs_image_fid';
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_cs_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_cs_image_fid']['format'] = 'CaseStudy_View_default';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn more...';
  /* Field: Content: Case Study Form Reference (field_cs_ref) */
  $handler->display->display_options['fields']['field_cs_ref_nid']['id'] = 'field_cs_ref_nid';
  $handler->display->display_options['fields']['field_cs_ref_nid']['table'] = 'node_data_field_cs_ref';
  $handler->display->display_options['fields']['field_cs_ref_nid']['field'] = 'field_cs_ref_nid';
  $handler->display->display_options['fields']['field_cs_ref_nid']['label'] = 'Download';
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cs_ref_nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_cs_ref_nid']['label_type'] = 'custom';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_cs_ref_nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $translatables['case_study'] = array(
    t('Defaults'),
    t('Case Studies'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Case Study Form Reference'),
    t('Industry'),
    t('Service'),
    t('Situation'),
    t('Learn more...'),
    t('Page'),
    t('Case Studies Block'),
    t('Download'),
    t('Nid'),
  );

  $views[$view->name] = $view;

  return $views;
}
