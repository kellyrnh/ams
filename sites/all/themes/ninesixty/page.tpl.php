<?php
// $Id: page.tpl.php,v 1.1.2.5 2011/01/24 22:49:45 dvessel Exp $
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?>">
  <div id="page" class="container-16 clearfix">

    <div id="site-header" class="clearfix">
      <div id="branding" class="grid-4">
      <?php if ($logo_img || $site_name): ?>
        <h1 id="brand-id">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
            <?php print $logo_img; ?>
            <?php if ($site_name): ?><span class="site-name"><?php print $site_name; ?></span><?php endif; ?>
          </a>
        </h1>
      <?php endif ?>
      <?php if ($site_slogan): ?>
        <div id="site-slogan"><?php print $site_slogan; ?></div>
      <?php endif; ?>
      </div>

    <?php if ($main_menu_links || $secondary_menu_links): ?>
      <div id="site-menu" class="grid-12">
        <?php print $main_menu_links; ?>
        <?php print $secondary_menu_links; ?>
      </div>
    <?php endif; ?>

    <?php if ($search_box): ?>
      <div id="search-box" class="grid-3 prefix-9"><?php print $search_box; ?></div>
    <?php endif; ?>
    </div>


  <?php if ($messages || $mission || $header): ?>
    <div id="site-subheader" class="clearfix prefix-1 suffix-1">
    <?php if ($messages): ?>
      <div id="header-messages" class="grid-14">
        <?php print $messages; ?>
      </div>
    <?php endif; ?>
    <?php if ($mission): ?>
      <div id="mission" class="clearfix<?php print ns(' grid-14', $header, 7); ?>">
        <?php print $mission; ?>
      </div>
    <?php endif; ?>

    <?php if ($header): ?>
      <div id="header-region" class="region clearfix<?php print ns(' grid-14', $mission, 7); ?>">
        <?php print $header; ?>
      </div>
    <?php endif; ?>
    </div>
  <?php endif; ?>


    <div id="main" class="column<?php print ns(' grid-16', $left, 4, $right, 3) . ns(' push-4', !$left, 4); ?>">
      <?php print $breadcrumb; ?>

    <?php if ($title): ?>
      <h1 class="title" id="page-title">
        <?php print $title; ?>
      </h1>
    <?php endif; ?>

    <?php if ($tabs): ?>
      <div class="tabs">
        <?php print $tabs; ?>
      </div>
    <?php endif; ?>

      <?php print $help; ?>

      <div id="main-content" class="region clearfix">
        <?php print $content; ?>
      </div>

      <?php print $feed_icons; ?>
    </div>

  <?php if ($left): ?>
    <div id="sidebar-left" class="column sidebar region grid-4<?php print ns(' pull-12', $right, 3); ?>">
      <?php print $left; ?>
    </div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div id="sidebar-right" class="column sidebar region grid-3">
      <?php print $right; ?>
    </div>
  <?php endif; ?>


    <div id="footer" class="clear clearfix prefix-1 suffix-1">
      <?php if ($footer): ?>
        <div id="footer-region" class="region grid-14">
          <?php print $footer; ?>
        </div>
      <?php endif; ?>

      <?php if ($footer_message): ?>
        <div id="footer-message" class="grid-14">
          <?php print $footer_message; ?>
        </div>
      <?php endif; ?>
    </div>

  </div>
  <?php print $closure; ?>
</body>
</html>
