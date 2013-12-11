<?php
/**
 * @file views-view-grid.tpl.php
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $class contains the class of the table.
 * - $attributes contains other attributes for the table.
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
  <h2 class="giving-cat-name"><?php print $title; ?></h3>
<?php endif; ?>

<div class="<?php print $class; ?>"<?php print $attributes; ?>>

    <?php foreach ($rows as $row_number => $columns): ?>
    
      <ul class="<?php print $row_classes[$row_number]; ?> views-row">
        <?php foreach ($columns as $column_number => $item): ?>
        
          <li class="<?php print $column_classes[$row_number][$column_number]; ?> views-list-item">
            <?php print $item; ?>
          </li>

        <?php endforeach; ?>
          <li class="givinglistend clearer"></li>
      </ul>  
    <?php endforeach; ?>
    
</div>
