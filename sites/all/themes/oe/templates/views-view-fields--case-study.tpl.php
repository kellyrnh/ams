<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or div based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php if ($fields['field_cs_image_fid']): ?>
<div class="cs-img-content">
<?php print $fields['field_cs_image_fid']->content ?>
</div>
<?php endif; ?>

<div class="cs-view-content">

  <div class="cs-views-industry-service">
      <span class="cs-industry"><strong>Industry:</strong> <?php print $fields['field_cs_industry_value']->content ?></span> <span class="cs-service"><strong>Service:</strong> <?php print $fields['field_cs_service_value']->content ?></span>
  </div>

  <?php if ($fields['field_cs_situation_value']): ?>
  <div class="cs-views-situation">
    <strong>Situation:</strong>
    <?php print $fields['field_cs_situation_value']->content ?><br />
    <?php if ($fields['nid']): ?>
    <span class="cs-readmore">
    	<a href="/node/<?php print $fields['nid']->content ?>"><div class="read_more"></div></a>
    </span>
       <?php endif; ?>
  </div>
  <?php endif; ?>
  
 



</div><!--//cs-view-content-->

