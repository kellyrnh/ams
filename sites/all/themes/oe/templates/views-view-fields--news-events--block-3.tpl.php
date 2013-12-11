<?php
/**
* Home page panels custom template for events
*  
* $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
*
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

<!--show news or event heading-->
<div class="newsevent">
  <?php if ($fields['field_pr_date_value']): ?><h3>News</h3><?php endif; ?>
  <?php if ($fields['field_event_date_value']): ?><h3>Event</h3><?php endif; ?>
</div>

<!--Node title linked-->
<?php if ($fields['title']): ?>
  <h3 class="blue-bold-title"><?php print $fields['title']->content ?></h3>
<?php endif; ?>


<!--date-->
<?php if ($fields['field_pr_date_value']): ?><?php print $fields['field_pr_date_value']->content ?><br /><?php endif; ?>
  <?php if ($fields['field_event_date_value']): ?><?php print $fields['field_event_date_value']->content ?><br /><?php endif; ?>


  <!--Location Name-->
  <?php if ($fields['name']): ?><?php print $fields['name']->content ?><br /><?php endif; ?>


  <!--city / state-->
  <?php if ($fields['city']): ?><?php print $fields['city']->content ?><?php endif; ?><?php if ($fields['province']): ?>, <?php print $fields['province']->content ?><?php endif; ?>

  <!--PR teaser-->

  <?php if ($fields['field_pr_teaser_value']): ?><?php print $fields['field_pr_teaser_value']->content ?><?php endif; ?>

