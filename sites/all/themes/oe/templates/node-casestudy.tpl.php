<?php //Case Study custom node ?>

<div id="cs-top-wrapper">
<div id="cs-image">

<div class="field field-type-filefield field-field-cs-image">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_cs_image[0]['view'] ?></div>
  </div>
</div>
</div><!--//cs-image-->

<div id="cs-left-info">

<h2 class="case-file">Case File</h2>

<div class="field field-type-text field-field-cs-need">
  <h3 class="field-label">Need:</h3>
  <div class="field-items">
      <div class="field-item"><p><?php print $node->field_cs_need[0]['view'] ?></p></div>
  </div>
</div>

<div class="field field-type-text field-field-cs-service">
  <h3 class="field-label">Service:</h3>
  <div class="field-items">
      <div class="field-item"><p><?php print $node->field_cs_service[0]['view'] ?></p></div>
  </div>
</div>

<div class="field field-type-text field-field-cs-industry">
  <h3 class="field-label">Industry:</h3>
  <div class="field-items">
      <div class="field-item"><p><?php print $node->field_cs_industry[0]['view'] ?></p></div>
  </div>
</div>

</div><!--//cs-left-info-->

</div><!--cs-top-wrapper-->



<div id="cs-bottom-wrapper">
<div id="cs-situation">

<div class="field field-type-text field-field-cs-situation">

  <div class="field-items">
      <div class="field-item"><p><strong>Situation:</strong> <?php print $node->field_cs_situation[0]['view'] ?></p></div>
  </div>
</div>

<div class="field field-type-text field-field-cs-response">

  <div class="field-items">
      <div class="field-item"><p><strong>Response:</strong> <?php print $node->field_cs_response[0]['view'] ?></p></div>
  </div>
</div>

<div class="field field-type-text field-field-cs-results">

  <div class="field-items">
      <div class="field-item"><p><strong>Results:</strong> <?php print $node->field_cs_results[0]['view'] ?></p></div>
  </div>
</div>

 <?php if(!empty($node->field_cs_background[0]['view'])) : ?>
<div class="field field-type-text field-field-cs-background">
  <div class="field-items">
      <div class="field-item"><p><strong>Background:</strong> <?php print $node->field_cs_background[0]['view'] ?></p></div>
  </div>
</div>
<?php endif; ?>

</div><!--//cs-situation-->

<div id="cs-quote-logo">

<div class="field field-type-text field-field-cs-quote">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_cs_quote[0]['view'] ?></div>
  </div>
</div>

<div class="field field-type-filefield field-field-cs-logo">

  <div class="field-items">
      <div class="field-item"><?php print $node->field_cs_logo[0]['view'] ?></div>
  </div>
</div>

</div><!--//quote-logo-->
</div><!--//cs-bottom-wrapper-->

<br class="clearer" />

<a href="/node/472"><h3>&raquo; More Case Studies</h3></a>

<div class="meta-terms">
<div class="clear-block">
 


   <?php if ($links): ?>
      <div class="links"><span>Links:</span><?php print $links; ?></div>
    <?php endif; ?>
  
  </div><!--//clear block-->
</div><!--//meta terms-->