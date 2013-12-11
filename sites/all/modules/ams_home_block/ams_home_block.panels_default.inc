<?php

/**
 * Implementation of hook_default_panels_mini().
 */
function ams_home_block_default_panels_mini() {
  $export = array();

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_home_panel';
  $mini->category = '';
  $mini->admin_title = 'Footer Home Panel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About',
      'title' => 'About AMS',
      'body' => '<p>As the leading resource for outsourced accounting and financial management services in the Northeast, Accounting Management Solutions provides a wide range of tailored services that match your needs and evolve as your objectives change.</p>
<p>An accountant can crunch the numbers. But it takes a good deal more depth—experience, perspective, and resources—to bring clarity when your organization faces change.</p>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Client satisfaction',
      'title' => 'Client Satisfaction',
      'body' => '<p>Accounting Management Solutions Consultants exceeded expectations for two-thirds of our clients.</p>
<p>AMS understands the importance of listening to clients, seeking feedback and refining our offerings, techniques, hiring practices and work methodologies based on that feedback.&nbsp; We expect a high level of service and expertise from our finance and accounting professionals, and our customers do too.&nbsp; This is one reason we are so proud of our phenomenal client satisfaction rating.</p>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Rapid Diagnostic',
      'title' => 'AMS Rapid Diagnostic',
      'body' => '<p>AMS Rapid Diagnostic is a comprehensive service used to assess the financial health of an organization.&nbsp; The Rapid Diagnostic provides an efficient assessment of financial and accounting operations, activities, financial management reporting, and business performance.</p>
',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['right'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_home_panel'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_page';
  $mini->category = '';
  $mini->admin_title = 'Home Page';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => NULL,
      'top' => array(),
      'left' => array(),
      'right' => array(),
      'bottom' => array(),
    ),
    'style' => 'stylizer',
    'top' => array(
      'style' => 'stylizer',
    ),
    'left' => array(
      'style' => 'stylizer',
    ),
    'right' => array(
      'style' => 'stylizer',
    ),
    'bottom' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = 'AMS: Premier providers of executive level accounting and finance professionals';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-news_events-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'What\'s New',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-new-home',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul class="four-square">
<li>
<h3>Case Studies</h3>
<a href="#"><img src="/sites/all/themes/oe/images/home/cta-case-studies.jpg" alt="" title="" /></a>
</li>
<li>
<h3>AMS Report</h3>
<a href="#"><img src="/sites/all/themes/oe/images/home/cta-ams-report.jpg" alt="" title="" /></a>
</li>
<li>
<h3>White Papers</h3>
<a href="#"><img src="/sites/all/themes/oe/images/home/cta-white-papers.jpg" alt="" title="" /></a>
</li>
<li>
<h3>AMS e-Books</h3>
<a href="#"><img src="/sites/all/themes/oe/images/home/cta-ebooks.jpg" alt="" title="" /></a>
</li>
</ul>
',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-featured-home',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-news_events-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-events-home',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['right'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['home_page'] = $mini;

  return $export;
}
