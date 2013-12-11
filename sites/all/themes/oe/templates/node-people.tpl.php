<div id="people-pages">

<div class="left">

<div class="field field-type-filefield field-field-people-image">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_people_image[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-text field-field-people-title">

  <div class="field-items">
      <div class="field-item"><strong><?php print $node->field_people_title[0]['view'] ?></strong></div>
  </div>
</div>

<div class="field field-type-email field-field-people-email">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_people_email[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-link field-field-people-twitter">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_people_twitter[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-link field-field-people-linkedin">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_people_linkedin[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-cck-vcard-show field-field-vcard">
 
  <div class="field-items">
      <div class="field-item"><?php print $node->field_vcard[0]['view'] ?>
      

  
  <?php if(!empty($node->field_first_name[0]['view'])){?>
  
<?php print $node->content['field_vcard']['field']['#children'] ?>  
<?php } ?>
   
      </div>
  </div>
</div>

    <!-- from http://drupal.org/node/686920 -->
<?php if(!empty($node->field_twitter_feed[0]['view'])){?>
    <h2>Twitter Feed</h2>
    <?php print twitter_pull_render($node->field_twitter_feed[0]['view']); ?>
  <?php } ?>

</div><!--//left-->


<div class="right">
<div class="field field-type-text field-field-people-bio">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_people_bio[0]['view'] ?></div>
  </div>
</div>




</div><!--//right-->

<br class="clearer" />

<div class="meta-terms">
<div class="clear-block">
 


    <?php if ($links): ?>
      <div class="links">Links:<?php print $links; ?></div>
    <?php endif; ?>
  
  </div><!--//clear block-->
</div><!--//meta terms-->

</div>