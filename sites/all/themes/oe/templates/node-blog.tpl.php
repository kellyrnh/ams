<div id="node-<?php print $node->nid; ?>" class="node post<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

<?php print $picture ?>

<div class="dateblock">
      <span class="month"><?php print $date_month ?></span>
      <span class="day"><?php print $date_day ?></span>
      <span class="year"><?php print $date_year ?></span>
 </div>
    
<?php if (!$page): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<div class="meta post-info">
  <?php if ($submitted): ?>
    <span class="submitted">Posted by <?php print theme('username', $node) ?></span>
  <?php endif; ?>

</div>

  <div class="content">
    
    <?php print $content ?>
  </div>

<div class="meta-terms">
<div class="clear-block">
 
    <div class="meta">
    <?php if ($taxonomy): ?>
      <div class="terms"><?php print $terms ?></div>
    <?php endif;?>
    </div><!--//meta-->

    <?php if ($links): ?>
      <div class="links">Links:<?php print $links; ?></div>
    <?php endif; ?>
  
  </div><!--//clear block-->
</div><!--//meta terms-->

</div>