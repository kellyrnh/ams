<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>"
      lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <!--script type="text/javascript" src="https://getfirebug.com/firebug-lite-debug.js"></script-->
  <?php print $scripts; ?>
  <link rel="stylesheet" type="text/css" media="screen, projection" charset="utf-8"
        href="http://fonts.googleapis.com/css?family=Old+Standard+TT|Merriweather|OFL+Sorts+Mill+Goudy+TT|Crimson+Text|IM+Fell+English+SC|Old+Standard+TT"/>

  <!-- Standard iPhone -->
  <link rel="apple-touch-icon" sizes="57x57"
        href="<?php echo base_path() . path_to_theme(); ?>/images/apple-touch-icon-iphone-114.png"/>
  <!-- Retina iPhone -->
  <link rel="apple-touch-icon" sizes="114x114"
        href="<?php echo base_path() . path_to_theme(); ?>/images/apple-touch-icon-iphone-114.png"/>
  <!-- Standard iPad -->
  <link rel="apple-touch-icon" sizes="72x72"
        href="<?php echo base_path() . path_to_theme(); ?>/images/apple-touch-icon-ipad-144.png"/>
  <!-- Retina iPad -->
  <link rel="apple-touch-icon" sizes="144x144"
        href="<?php echo base_path() . path_to_theme(); ?>/images/apple-touch-icon-ipad-144.png"/>

  <!--[if IE 7]>
  <link href="<?php echo base_path() . path_to_theme(); ?>/styles/ie7.css" rel="stylesheet" type="text/css"/>
  <![endif]-->

  <!--[if IE 8]>
  <link href="<?php echo base_path() . path_to_theme(); ?>/styles/ie8-fixes.css" rel="stylesheet" type="text/css"/>
  <![endif]-->

</head>

<body class="<?php print $body_classes; ?>" id="node-<?php print $node->nid ?>">

<div id="top-bg-wrap">
  <div id="page" class="clear-block">
    <div id="header-wrap">
      <div id="header" class="container-16 clear-block">
        <div id="site-header" class="clear-block">
          <div id="branding" class="grid-3">
            <?php if ($linked_logo_img): ?>
              <span id="logo"><?php print $linked_logo_img; ?></span>
            <?php endif; ?>
            <?php if ($linked_site_name): ?>
              <h1 id="site-name"><?php print $linked_site_name; ?></h1>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
              <div id="site-slogan"><?php print $site_slogan; ?></div>
            <?php endif; ?>
          </div>
          <div id="nav" class="grid-13">

            <div id="top">
              <div id="search-box"><?php print $search_box; ?></div>
              <?php print $top_links; ?>
              <?php if ($search_box): ?>

              <?php endif; ?>

            </div>
            <!--//top-->

            <?php if ($primary_links): ?>
              <div id="navigation" class="">
                <?php print $primary_links_tree; ?>
              </div><!--//navigation-->
            <?php endif; ?>

            <!--div id="user-links" class="clear-block"><?php //if ($user_links) print theme('links', $user_links) ?></div-->

          </div>

        </div>
      </div>
    </div>
    <!--header wrap-->

  </div>
  <!--//page-->
</div>
<!--//top bg wrap-->

<!-- end of header -->

<div id="bg-wrap">

  <div id="slider-wrap" class="slider-content <?php if (!$slider) print 'empty' ?>">
    <?php if ($slider): ?>
      <div id="slider" class="container-12 clear-block">
        <div class="grid-12 region">
          <?php print $slider; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>

  <?php if ($preface_one || $preface_two || $preface_three): ?>
    <div id="preface" class="container-12 clear-block">
      <?php if ($preface_one): ?>
        <div class="<?php print'grid-' . 12 / $preface; ?> one">
          <?php print $preface_one; ?>
        </div>
      <?php endif; ?>
      <?php if ($preface_two): ?>
        <div class="<?php print'grid-' . 12 / $preface; ?> two">
          <?php print $preface_two; ?>
        </div>
      <?php endif; ?>
      <?php if ($preface_three): ?>
        <div class="<?php print'grid-' . 12 / $preface; ?> three">
          <?php print $preface_three; ?>
        </div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div id="content-wrap" class="<?php print ns('container-12', $two_sidebars, -4); ?> clear-block">

    <?php if ($is_front): // home page- dont render content ?>
    <?php else : ?>
      <div class="container-12 clear-block">
        <div class="grid-12" id="section-header"></div>
      </div>
    <?php endif; ?>

    <div id="main"
         class="column <?php print ns('grid-12', $two_sidebars, -4, $left, 3, $right, 4) . ' ' . ns('push-0', $left, -3); ?>">
      <?php if ($title): ?>
        <h1 class="title" id="page-title"><?php if ($content['field_title_node'] == '<') print $title ?></h1>
      <?php endif; ?>
      <?php if ($tabs): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print $help; ?>

      <div id="main-content" class="region clear-block">

        <?php if ($is_front): // home page- don't render content var ?>

        <?php else : ?>

          <?php if ($precontent): ?>
            <div id="precontent">
              <?php print $precontent; ?>
            </div>
          <?php endif; ?>

          <?php print $content; ?>
          <?php print $feed_icons; ?>
        <?php endif; ?>

      </div>
    </div>

    <?php if ($left): ?>
      <div id="sidebar-left" class="column sidebar region grid-3 pull-9">
        <div class="border">
          <?php print $left; ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($right): ?>
      <div id="sidebar-right" class="column sidebar region grid-4">
        <div class="border">
          <?php print $right; ?>
        </div>
      </div>
    <?php endif; ?>


  </div>

  <!--//bg-wrap-->

  <div id="footer-bg">
    <div id="footer-wrap" class="container-12 clear-block">
      <?php if ($bottom_one || $bottom_two || $bottom_three || $bottom_four): ?>
        <div id="bottom" class="container-12 clear-block">
          <?php if ($bottom_one): ?>
            <div class="region <?php print'grid-' . 12 / $bottom; ?>">
              <?php print $bottom_one; ?>
            </div>
          <?php endif; ?>
          <?php if ($bottom_two): ?>
            <div class="region <?php print'grid-' . 12 / $bottom; ?>">
              <?php print $bottom_two; ?>
            </div>
          <?php endif; ?>
          <?php if ($bottom_three): ?>
            <div class="region <?php print'grid-' . 12 / $bottom; ?>">
              <?php print $bottom_three; ?>
            </div>
          <?php endif; ?>
          <?php if ($bottom_four): ?>
            <div class="region <?php print'grid-' . 12 / $bottom; ?>">
              <?php print $bottom_four; ?>
            </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>


      <div id="footer" class="region grid-12">
        <?php print $footer; ?>
      </div>
      <!--//footer-->

    </div>


  </div>

</div>
<!--//footer-bg-->

<!-- ThriveHive code-->
<script type="text/javascript">
  var scripturl = (("https:" == document.location.protocol) ? "https://" : "http://") + "my.thrivehive.com/content/WebTrack/catracker.js";
  document.write(unescape("%3Cscript src='" + scripturl + "' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
  try {
    var cat = new CATracker("b13f35dbeaa341cba172422e61afe920");
    cat.Pause = true;
    cat.TrackOutboundLinks();
    cat.PageView();
  } catch (err) {
    document.write("There has been an error initializing web tracking.");
  }
</script>
<noscript><img src='http://my.thrivehive.com?noscript=1&amp;aweid=b13f35dbeaa341cba172422e61afe920&amp;action=PageView'
               alt="track me"></img></noscript>
<!--end ThriveHive code-->

<!--snap engage -->
<div id="snap-engage">

  <script type="text/javascript">
    document.write(unescape("%3Cscript src='" + ((document.location.protocol == "https:") ? "https://snapabug.appspot.com" : "http://www.snapengage.com") + "/snapabug.js' type='text/javascript'%3E%3C/script%3E"));</script>
  <script type="text/javascript">
    SnapABug.addButton("ea5db583-053b-4a87-b386-ea56f0783000", "0", "30%");
  </script>
  <a href="#" onclick="return SnapABug.startLink();"><img
      src="https://snapabug.appspot.com/statusImage?w=ea5db583-053b-4a87-b386-ea56f0783000" alt="Contact us" border="0"></a>

</div>
<!--// snap engage -->


<!--LeadLander -->
<?php
$host = $_SERVER['HTTP_HOST'];
if ($host == "www.amsolutions.net" or $host == "amsolutions.net" or $host == "http://amsolutions.net"
  or $host == "http://www.amsolutions.net"
): ?>

  <script type="text/javascript" language="javascript">llactid = 23262</script>
  <script type="text/javascript" language="javascript" src="http://t6.trackalyzer.com/trackalyze.js"></script>

<?php endif; ?>
<!--// LeadLander -->

<?php print $closure; ?>

</body>
</html>
