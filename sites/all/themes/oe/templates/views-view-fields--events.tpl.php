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
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 http://www.businessweek.com/magazine/news/articles/business_news.htm
 
 */
?>


  
      
    

<!--date-->
<div class="date-area">
<div class="views-field-field-event-date-value">
<div class="newslabel">Event</div><?php print $fields['field_event_date_value']->content ?>
</div>
</div>

<!--title-->
<h2><?php if ($fields['title']): ?><?php print $fields['title']->content ?><?php endif; ?></h2>


<!--Location Name-->
<?php if ($fields['name']): ?><?php print $fields['name']->content ?><?php endif; ?>
<br />

<!--city / state-->
<?php if ($fields['city']): ?>
<?php print $fields['city']->content ?><?php endif; ?><?php if ($fields['province']): ?>, <?php print $fields['province']->content ?>
<?php endif; ?>
<br />
<?php print $fields['view_node']->content ?>

