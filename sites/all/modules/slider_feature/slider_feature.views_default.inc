<?php

/**
 * Implementation of hook_views_default_views().
 */
function slider_feature_views_default_views() {
  $views = array();

  // Exported view: Slider
  $view = new view;
  $view->name = 'Slider';
  $view->description = 'ddblock image field example slideshows';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue (name) */
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['id'] = 'nodequeue_rel_queue_name';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel_queue_name']['field'] = 'nodequeue_rel_queue_name';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
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
  /* Sort criterion: Content: Slider Order (field_slider_order) */
  $handler->display->display_options['sorts']['field_slider_order_value']['id'] = 'field_slider_order_value';
  $handler->display->display_options['sorts']['field_slider_order_value']['table'] = 'node_data_field_slider_order';
  $handler->display->display_options['sorts']['field_slider_order_value']['field'] = 'field_slider_order_value';
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

  /* Display: upright10 */
  $handler = $view->new_display('block', 'upright10', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'title',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'view_node',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'default',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'top',
        'pager_event' => 'click',
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 1,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['controls'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_type'] = 'Numbered';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_hover'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['nowrap'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['sync'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'field_slide_title_value',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'field_link_url',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => '',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'vsd-upright-20p',
    'template_size_wrapper' => array(
      'template_size' => 'default',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '1000',
      'timeout' => '8000',
      'order' => 'none',
      'pause' => 0,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'prev-next-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'bottom',
        'pager_event' => 'click',
        'pager_fast' => 0,
        'pager_pause' => 0,
      ),
      'pager2' => 1,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 0,
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 0,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => 'prev',
          'pager2_slide_next' => 'next',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
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
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tab_slider' => 'tab_slider',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Taxonomy: Term ID (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vid'] = '4';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Slider Home */
  $handler = $view->new_display('block', 'Slider Home', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['controls'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_type'] = 'Numbered';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_hover'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['nowrap'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['sync'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'title',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'view_node',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => 'field_ddblock_if_pager_item_text_value',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'vsd-gradient-green-30l',
    'template_size_wrapper' => array(
      'template_size' => 'custom',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '1250',
      'timeout' => '8000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'right',
        'pager_event' => 'click',
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'right',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
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
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
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
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['format'] = 'slide_default';
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

  /* Display: upright50 */
  $handler = $view->new_display('block', 'upright50', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'title',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'view_node',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => 'field_ddblock_if_pager_item_text_value',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'vsd-upright-50p',
    'template_size_wrapper' => array(
      'template_size' => 'size_700',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'top',
        'pager_event' => 'click',
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 1,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: upright60 */
  $handler = $view->new_display('block', 'upright60', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'title',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'view_node',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => '',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'vsd-upright-60p',
    'template_size_wrapper' => array(
      'template_size' => 'size_700',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '500',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'scrollable-pager',
        'pager_container' => '.scrollable-pager-item',
        'nr_of_pager_items' => '5',
        'pager_position' => 'top',
        'pager_event' => 'click',
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 1,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'bottom',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Slider Home New */
  $handler = $view->new_display('block', 'Slider Home New', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['controls'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_type'] = 'Numbered';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_hover'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['nowrap'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['sync'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_ddblock'] = array(
    'widget' => 'cycle',
    'debug_info' => 'none',
    'mapping_wrapper' => array(
      'mappings' => array(
        0 => array(
          'target' => 'node_id',
          'source' => 'nid',
        ),
        1 => array(
          'target' => 'slide_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        2 => array(
          'target' => 'slide_title',
          'source' => 'field_slide_title_value',
        ),
        3 => array(
          'target' => 'slide_text',
          'source' => 'field_ddblock_if_slide_text_value',
        ),
        4 => array(
          'target' => 'slide_read_more',
          'source' => 'view_node',
        ),
        5 => array(
          'target' => 'pager_image',
          'source' => 'field_ddblock_if_image_fid',
        ),
        6 => array(
          'target' => 'pager_text',
          'source' => 'field_ddblock_if_pager_item_text_value',
        ),
        7 => array(
          'target' => '',
          'source' => '',
        ),
        8 => array(
          'target' => '',
          'source' => '',
        ),
        9 => array(
          'target' => '',
          'source' => '',
        ),
        10 => array(
          'target' => '',
          'source' => '',
        ),
        11 => array(
          'target' => '',
          'source' => '',
        ),
        12 => array(
          'target' => '',
          'source' => '',
        ),
        13 => array(
          'target' => '',
          'source' => '',
        ),
        14 => array(
          'target' => '',
          'source' => '',
        ),
        15 => array(
          'target' => '',
          'source' => '',
        ),
      ),
    ),
    'template' => 'vsd-upright-30p',
    'template_size_wrapper' => array(
      'template_size' => 'custom',
    ),
    'custom_template_size' => '',
    'custom_template' => '',
    'content_container' => array(
      'container' => 'div.slide',
      'overfow' => 0,
      'overflow' => 0,
    ),
    'settings' => array(
      'fx' => 'fade',
      'speed' => '1250',
      'timeout' => '5000',
      'order' => 'none',
      'pause' => 1,
      'next' => 0,
      'pager_toggle' => 1,
      'pager_settings' => array(
        'pager' => 'custom-pager',
        'pager_container' => '.custom-pager-item',
        'nr_of_pager_items' => '3',
        'pager_position' => 'bottom',
        'pager_event' => 'click',
        'pager_fast' => 1,
        'pager_pause' => 1,
      ),
      'pager2' => 0,
      'pager2_settings' => array(
        'pager2_event' => 'click',
        'pager2_position' => array(
          'slide' => 'slide',
          'pager' => 'pager',
        ),
        'pager2_pager' => array(
          'pager2_pager_prev' => 'prev',
          'pager2_pager_next' => 'next',
          'pager2_pager_hide' => 1,
        ),
        'pager2_slide' => array(
          'pager2_slide_prev' => '',
          'pager2_slide_next' => '',
          'pager2_slide_hide' => 1,
        ),
      ),
      'slide_text' => 1,
      'slide_text_settings' => array(
        'slide_text_container' => 'div.slide-text',
        'slide_text_position' => 'right',
        'slide_text_jquery' => 0,
        'slide_jquery' => array(
          'slide_text_before_effect' => 'hide',
          'slide_text_before_speed' => '500',
          'slide_text_after_effect' => 'show',
          'slide_text_after_speed' => '500',
        ),
      ),
      'custom' => array(
        'custom_jquery' => '',
      ),
    ),
    'template_submit' => 'get template sizes',
  );
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_ddblock';
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
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
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
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_ddblock_if_image_fid']['format'] = 'slide_new_default';
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
  $translatables['Slider'] = array(
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
    t('queue'),
    t('Nid'),
    t('Title'),
    t('Image'),
    t('Slide text'),
    t('Pager item text'),
    t('Link'),
    t('Read more...'),
    t('upright10'),
    t('Home'),
    t('Slider Home'),
    t('upright50'),
    t('upright60'),
    t('Slider Home New'),
  );

  $views[$view->name] = $view;

  return $views;
}
