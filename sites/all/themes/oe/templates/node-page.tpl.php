<?php
// $Id: node.tpl.php,v 1.5 2007/10/11 09:51:29 goba Exp $
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print node_class($node) ?> node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">
<div id="inner-node-wrapper">
<?php print $picture ?>

<?php if ($page == 0): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted; ?></span>
  <?php endif; ?>

  <div class="content node-content clear-block">
    <?php //print $content ?>
    
    
    <?php if(!empty($node->field_audio_file[0]['view'])){?>
    <div id="audio-wrapper">
    <h3>Audio File:</h3>
    <?php print $node->field_audio_file[0]['view'] ?>
    </div>
    <?php } ?>
    
    
    <?php if(!empty($node->field_logo[0]['view'])) :?>
    <div class="logo-field">
    <?php print $node->field_logo[0]['view'] ?>
    </div>
  <?php endif; ?>
    
    <?php print $node->content['body']['#value'] ?>
  </div>

<?php if ($node_panel_66 || $node_panel_33): ?>

<div id="node-panel-wrapper">

    <?php if ($node_panel_66): ?>
    <div class="node-panel-66">
        <?php print $node_panel_66; ?>
    </div>
    <?php endif; ?>

    <?php if ($node_panel_33): ?>
    <div class="node-panel-33">
        <?php print $node_panel_33; ?>
    </div>
    <?php endif; ?>

</div>

 <?php endif; ?>

    <?php if ($node_block): ?>
<div id="nodeblock">
<?php print $node_block; ?>
</div>
<?php endif; ?>

 <div class="meta-terms">

  <div class="clear-block">
 
   

    <?php if ($links): ?>
      <div class="links"><span>Links:</span><?php print $links; ?></div>
    <?php endif; ?>
  </div>

</div>
</div>
</div>


