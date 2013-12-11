<?php
// $Id$

/**
 * Views Slideshow Dynamic display block module template: vsd-gradient-green-30l - content template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 (26-JAN-2011) 
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */

/**
 * @file
 * Views Slideshow Dynamic display block module template: vsd-gradient-green-30l - content template
 * - Custom pager with image and text
 *
 * Available variables:
 * - $settings['delta']: Block number of the block.
 *
 * - $settings['template']: template name
 * - $settings['output_type']: type of content
 *
 * - $views_slideshow_ddblock_slider_items: array with slidecontent
 * - $settings['slide_text_position']: of the text in the slider (top | right | bottom | left)
 * - $settings['slide_direction']: direction of the text in the slider (horizontal | vertical )
 * - 
 * - $views_slideshow_ddblock_pager_content: Themed pager content
 * - $settings['pager_position']: position of the pager (left | right)
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
 
$settings = $views_slideshow_ddblock_slider_settings;
$slideshow_width=$settings['template_size'];/*slideshow width configurable to 460, 700 or 940*/
$settings['slide_direction'] = 'vertical';
$settings['slide_text_position'] = 'right';

// add Cascading style sheet
drupal_add_css($directory .'/custom/modules/views_slideshow_ddblock/' . $settings['template'] . '/views-slideshow-ddblock-cycle-'. $settings['template'] . '.css', 'template', 'all', FALSE);
drupal_add_css($directory .'/custom/modules/views_slideshow_ddblock/' . $settings['template'] . '/' .$slideshow_width.  '/views-slideshow-ddblock-cycle-'. $settings['template'] . '-'.$slideshow_width. '.css', 'template', 'all', FALSE);
?>
<!-- dynamic display block slideshow -->
<div id="views-slideshow-ddblock-<?php print $settings['delta'] ?>" class="views-slideshow-ddblock-cycle-<?php print $settings['template'] ?> clear-block">
 <div class="container clear-block border">
  <div class="image-box-white-grey-white-10">
   <div class="image-box-corner-wrapper">
    <div class="image-box-top-side">
    <div class="left"></div>
    <div class="right"></div>
    </div>
     <div class="image-box-left-side">
      <div class="image-box-right-side">
  <div class="container-inner clear-block border">
   <!-- prev/next pager on slide -->
   <?php if ($settings['pager2'] == 1 && $settings['pager2_position']['slide'] === 'slide'): ?>
    <div class="nav-slide-container prev-container prev-container-<?php print $settings['pager_position'] ?>-<?php print $settings['slide_text_position'] ?>">
     <a class="prev" href="#"><?php print $settings['pager2_slide_prev']?></a>
    </div>
    <div class="nav-slide-container next-container next-container-<?php print $settings['pager_position'] ?>-<?php print $settings['slide_text_position'] ?>">
     <a class="next" href="#"><?php print $settings['pager2_slide_next']?></a>
    </div>
   <?php endif; ?>
   <?php if ($settings['pager_position'] == "left" || $settings['pager_position'] == "right") : ?>
    <!-- custom pager images --> 
    <?php print $views_slideshow_ddblock_pager_content ?>
   <?php else : ?>
    <?php if ($settings['pager2'] == 1 && $settings['pager2_position']['pager'] === 'pager'): ?>  
     <!-- prev next pager. -->
     <div id="views-slideshow-ddblock-prev-next-pager-<?php print $settings['delta'] ?>" class="prev-next-pager views-slideshow-ddblock-pager clear-block">
      <div class="prev-next-pager-inner clear-block">
       <a class="prev" href="#"><?php print $settings['pager2_pager_prev']?></a>
       <a class="count">1</a>
       <a class="next" href="#"><?php print $settings['pager2_pager_next']?></a>
      </div> 
     </div>
    <?php endif; ?>  
   <?php endif; ?> 
   <!-- slider content -->
   <div class="slider slider-<?php print $settings['pager_position'] ?> clear-block border">
    <div class="slider-inner clear-block border">
     <?php if ($settings['output_type'] == 'view_fields') : ?>
      <?php foreach ($views_slideshow_ddblock_slider_items as $slider_item): ?>
       <div class="slide slide-<?php print $settings['pager_position'] ?> clear-block border">
        <div class="slide-inner clear-block border">
         <div class="corners">
          <?php print $slider_item['slide_image']; ?>
          <div class="tl"></div>
          <div class="tr"></div>
          <div class="bl"></div>
          <div class="br"></div>
         </div>                   
         <?php if ($settings['slide_text'] == 1) :?>
          <div class="slide-text slide-text-<?php print $settings['slide_direction'] ?> slide-text-<?php print $settings['slide_text_position'] ?> clear-block border">
           <div class="slide-text-inner slide-text-inner-<?php print $settings['slide_direction'] ?> clear-block border">
            <?php if (!empty($slider_item['slide_title'])) :?>
             <div class="slide-title slide-title-<?php print $settings['slide_direction'] ?> clear-block border">
              <div class="slide-title-inner clear-block border">
               <h2><?php print $slider_item['slide_title'] ?></h2>
              </div> <!-- slide-title-inner-->
             </div>  <!-- slide-title-->
            <?php endif; ?>
            <?php if (!empty($slider_item['slide_text'])) :?>
             <div class="slide-body-<?php print $settings['slide_direction'] ?> clear-block border">
              <div class="slide-body-inner clear-block border">
               <?php print $slider_item['slide_text'] ?>
              </div> <!-- slide-body-inner-->
             </div>  <!-- slide-body-->
            <?php endif; ?>
            <?php if (!empty($slider_item['slide_read_more'])) :?>
             <div class="slide-read-more clear-block border">
              <?php print $slider_item['slide_read_more'] ?>
             </div><!-- slide-read-more-->
            <?php endif; ?>
           </div> <!-- slide-text-inner-->
          </div>  <!-- slide-text-->
         <?php endif; ?>
        </div> <!-- slide-inner-->
       </div>  <!-- slide-->
      <?php endforeach; ?>
     <?php endif; ?>
    </div> <!-- slider-inner-->
   </div>  <!-- slider-->
   <?php if ($settings['pager_position'] == "bottom") : ?>
    <!-- custom pager images--> 
    <?php print $views_slideshow_ddblock_pager_content ?>
   <?php else : ?>
    <?php if ($settings['pager2'] == 1 && $settings['pager2_position']['pager'] === 'pager'): ?>  
     <!-- prev next pager. -->
     <div id="views-slideshow-ddblock-prev-next-pager-<?php print $settings['delta'] ?>" class="prev-next-pager views-slideshow-ddblock-pager clear-block">
      <div class="prev-next-pager-inner clear-block">
       <a class="prev" href="#"><?php print $settings['pager2_pager_prev']?></a>
       <a class="count">1</a>
       <a class="next" href="#"><?php print $settings['pager2_pager_next']?></a>
      </div>
     </div>
    <?php endif; ?>  
   <?php endif; ?> 
  </div> <!-- container-inner-->
      </div> <!--image-box-right-side-->
     </div> <!--image-box-left-side-->
    <div class="image-box-bottom-side"><div class="left"></div><div class="right"></div></div>
   </div> <!--image-box-corner-wrapper-->
  </div> <!--image-box-white-greyshadow-white-10-->
 </div> <!--container-->
</div> <!--  template -->