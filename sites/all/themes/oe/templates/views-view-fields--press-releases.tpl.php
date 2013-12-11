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
 */
?>


<!--date-->
<div class="prdate-area eqhts">
<div class="views-field-field-event-date-value">
<div class="newslabel">News</div><?php print $fields['field_pr_date_value']->content ?>
</div>
</div>

<div class="prcontent-area eqhts">
<!--title-->
<h2><?php if ($fields['title']): ?><?php print $fields['title']->content ?><?php endif; ?></h2>

<?php if ($fields['field_pr_teaser_value']): ?><?php print $fields['field_pr_teaser_value']->content ?><?php endif; ?>

<!--Location Name-->
<?php if ($fields['name']): ?><?php print $fields['name']->content ?><?php endif; ?>

<?php print $fields['view_node']->content ?>
</div>
