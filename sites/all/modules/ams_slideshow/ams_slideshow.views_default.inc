<?php

/**
 * Implementation of hook_views_default_views().
 */
function ams_slideshow_views_default_views() {
  $views = array();

  // Exported view: slideshow
  $view = new view;
  $view->name = 'slideshow';
  $view->description = 'Flexslider slideshow';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'slides';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue (name) */
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['id'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['field'] = 'nodequeue_rel_queue_name';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Image (field_ddblock_if_image) */
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['id'] = 'field_ddblock_if_image_fid';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['table'] = 'node_data_field_ddblock_if_image';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['field'] = 'field_ddblock_if_image_fid';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['label'] = 'Image';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['format'] = 'image_plain';
  /* Field: Content: Slide text (field_ddblock_if_slide_text) */
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['id'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['table'] = 'node_data_field_ddblock_if_slide_text';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['field'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['label'] = 'Slide text';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['link_to_node'] = 0;
  /* Field: Content: Pager item text (field_ddblock_if_pager_item_text) */
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['id'] = 'field_ddblock_if_pager_item_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['table'] = 'node_data_field_ddblock_if_pager_item_text';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['field'] = 'field_ddblock_if_pager_item_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['label'] = 'Pager item text';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['format'] = 'plain';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more...';
  /* Field: Content: Slide Title (field_slide_title) */
  $handler->display->display_options['fields']['field_slide_title_value']['id'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['table'] = 'node_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_value']['field'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['label_type'] = 'none';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'whitepapers' => 'whitepapers',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Slide text (field_ddblock_if_slide_text) */
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['id'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['table'] = 'node_data_field_ddblock_if_slide_text';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['field'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['case'] = 1;

  /* Display: Slideshow Home */
  $handler = $view->new_display('block', 'Slideshow Home', 'flexslider_block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'slides';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue (name) */
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['id'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['field'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['names'] = array(
    'slideshow_queue' => 'slideshow_queue',
    'home_left' => 0,
    'home_right' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 1;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Image (field_ddblock_if_image) */
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['id'] = 'field_ddblock_if_image_fid';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['table'] = 'node_data_field_ddblock_if_image';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['field'] = 'field_ddblock_if_image_fid';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['format'] = 'flexslider_default';
  /* Field: Content: Slide text (field_ddblock_if_slide_text) */
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['id'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['table'] = 'node_data_field_ddblock_if_slide_text';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['field'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_slide_text_value']['label_type'] = 'none';
  /* Field: Content: Pager item text (field_ddblock_if_pager_item_text) */
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['id'] = 'field_ddblock_if_pager_item_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['table'] = 'node_data_field_ddblock_if_pager_item_text';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['field'] = 'field_ddblock_if_pager_item_text_value';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_ddblock_if_pager_item_text_value']['format'] = 'plain';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more...';
  /* Field: Content: Slide Title (field_slide_title) */
  $handler->display->display_options['fields']['field_slide_title_value']['id'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['table'] = 'node_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_value']['field'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['label_type'] = 'none';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'whitepapers' => 'whitepapers',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Slide text (field_ddblock_if_slide_text) */
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['id'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['table'] = 'node_data_field_ddblock_if_slide_text';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['field'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['case'] = 1;

  /* Display: Slideshow Controls */
  $handler = $view->new_display('block', 'Slideshow Controls', 'flexslider_controls');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'custom-controls';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue (name) */
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['id'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['field'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['names'] = array(
    'slideshow_queue' => 'slideshow_queue',
    'home_left' => 0,
    'home_right' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Slide Title (field_slide_title) */
  $handler->display->display_options['fields']['field_slide_title_value']['id'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['table'] = 'node_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_value']['field'] = 'field_slide_title_value';
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['text'] = '<a href="#" class="slide-text-control">[field_slide_title_value]</a>';
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_title_value']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_title_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_slide_title_value']['label_type'] = 'none';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'whitepapers' => 'whitepapers',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Content: Slide text (field_ddblock_if_slide_text) */
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['id'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['table'] = 'node_data_field_ddblock_if_slide_text';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['field'] = 'field_ddblock_if_slide_text_value';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ddblock_if_slide_text_value']['case'] = 1;
  $translatables['slideshow'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Title'),
    t('Image'),
    t('Slide text'),
    t('Pager item text'),
    t('Link'),
    t('Read more...'),
    t('Slideshow Home'),
    t('Nid'),
    t('Slideshow Controls'),
    t('<a href="#" class="slide-text-control">[field_slide_title_value]</a>'),
  );

  $views[$view->name] = $view;

  return $views;
}
