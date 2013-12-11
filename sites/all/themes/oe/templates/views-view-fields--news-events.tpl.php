<!--custom template for news / events home -->
<!--show news or event heading-->
<div class="newsevent">
<?php if ($fields['field_pr_date_value']): ?><h3>News</h3><?php endif; ?>
<?php if ($fields['field_event_date_value']): ?><h3>Event</h3><?php endif; ?>
</div>

<!--Node title linked-->
<?php if ($fields['title']): ?><?php print $fields['title']->content ?><br /><?php endif; ?>


<!--date-->
<?php if ($fields['field_pr_date_value']): ?><?php print $fields['field_pr_date_value']->content ?><br /><?php endif; ?>
<?php if ($fields['field_event_date_value']): ?><?php print $fields['field_event_date_value']->content ?><br /><?php endif; ?>


<!--Location Name-->
<?php if ($fields['name']): ?><?php print $fields['name']->content ?><br /><?php endif; ?>


<!--city / state-->
<?php if ($fields['city']): ?><?php print $fields['city']->content ?><?php endif; ?><?php if ($fields['province']): ?>, <?php print $fields['province']->content ?><?php endif; ?>

<!--PR teaser-->

<?php if ($fields['field_pr_teaser_value']): ?><?php print $fields['field_pr_teaser_value']->content ?><?php endif; ?>

