


<div class="field field-type-text field-field-pr-teaser">
<div class="field-items">
      <div class="field-item"><h2><?php print $node->field_pr_teaser[0]['view'] ?></h2></div>
  </div>
</div>

<div class="field field-type-date field-field-pr-date">
<div class="field-items">
      <div class="field-item"><?php print $node->field_pr_date[0]['view'] ?></div>
  </div>
</div>


<?php print $node->content['body']['#value'] ?>

<div class="field field-type-text field-field-pr-footer">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_pr_footer[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-text field-field-pr-media-contact">
  
  <div class="field-items">
      <div class="field-item"><?php print $node->field_pr_media_contact[0]['view'] ?></div>
  </div>
</div>


<?php print $node->content['sexybookmarks']['#value'] ?>

<div class="meta-terms">

  <div class="clear-block">
 
    <div class="meta">
    <?php if ($taxonomy): ?>
      <div class="terms"><?php print $terms ?></div>
    <?php endif;?>
    
    </div>
    
    

    <?php if ($links): ?>
      <div class="links"><span>Links:</span><?php print $links; ?></div>
    <?php endif; ?>
  </div>

</div>