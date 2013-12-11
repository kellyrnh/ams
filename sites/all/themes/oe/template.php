<?php
//drupal_add_css(path_to_theme() .'/html-elements.css', 'theme', 'all', $preprocess);

function phptemplate_preprocess_node(&$vars) {
// If we have any terms...
  if ($vars['node']->taxonomy) {
    // Let's iterate through each term.
    foreach ($vars['node']->taxonomy as $term) {
      // We will build a new array where there will be as many
      // nested arrays as there are vocabularies
      // The key for each nested array is the vocabulary ID.
      $vocabweight = taxonomy_vocabulary_load($term->vid)->weight;
      $vocabulary[$vocabweight][$term->vid]['taxonomy_term_'. $term->tid]  = array(
        'title' => $term->name,
        'href' => taxonomy_term_path($term),
        'attributes' => array(
          'rel' => 'tag',
          'title' => strip_tags($term->description),
          'class' => 'tag',
        ),
      );
    }
    // Making sure vocabularies appear in the same order as the weight
    ksort($vocabulary, SORT_NUMERIC);
    // We will get rid of the old $terms variable.
    unset($vars['terms']);
    // And build a new $terms.
    foreach ($vocabulary as $vocabweight => $vid) {
      foreach($vid as $vid => $terms) {
        // Getting the name of the vocabulary.
        $name = taxonomy_vocabulary_load($vid)->name;
        // Using the theme('links', ...) function to theme terms list.
        $terms = theme('links', $terms, array('class' => 'links inline'));
        // Wrapping the terms list.
        $vars['terms'] .= '<div class="vocabulary taxonomy_vid_';
        $vars['terms'] .= $vid;
        $vars['terms'] .= '">';
        $vars['terms'] .= '<span class="label">';
        $vars['terms'] .= $name;
        $vars['terms'] .= ':&nbsp;';
        $vars['terms'] .= '</span>';
        $vars['terms'] .= $terms;
        $vars['terms'] .= '</div>';
      }
    }
  }
}

/**
 * Set count variables so column numbers can be dynamic.
 */
function oe_preprocess_page (&$vars, $hook) {
  $vars['preface'] = count(array_filter(array($vars['preface_one'], $vars['preface_two'], $vars['preface_three'])));
  $vars['columns'] = count(array_filter(array($vars['left'], $vars['right'])));
  count(array_filter(array($vars['left'], $vars['right']))) == 2 ? $vars['two_sidebars'] = true : $vars['two_sidebars'] = false;
  $vars['bottom'] = count(array_filter(array($vars['bottom_one'], $vars['bottom_two'], $vars['bottom_three'], $vars['bottom_four'])));
  // Display user account links.
  $vars['user_links'] = _oe_user_links();
  //dpm($vars);
  
  $vars['primary_links_tree'] = menu_tree(variable_get('menu_primary_links_source', 'primary-links'));


// Add flexslider to the homepage
  if ($vars['is_front']) {
    if (module_exists('libraries')) {
      $path_flexslider = libraries_get_path('flexslider');
      drupal_add_css($path_flexslider . '/flexslider.css');
      drupal_add_js($path_flexslider . '/jquery.flexslider.js');
      $vars['styles'] = drupal_get_css();
    }
  }

}

//body class

function phptemplate_preprocess_page(&$vars, $hook) {
 
  // Classes for body element. Allows advanced theming based on context
  // (home page, node of certain type, etc.)
  $body_classes = array($vars['body_classes']);
  if (!$vars['is_front']) {
    // Add unique classes for each page and website section
    $path = drupal_get_path_alias($_GET['q']);
    list($section, ) = explode('/', $path, 2);
    $body_classes[] = oe_id_safe('page-' . $path);
    $body_classes[] = oe_id_safe('section-' . $section);
    if (arg(0) == 'node') {
      if (arg(1) == 'add') {
        if ($section == 'node') {
          array_pop($body_classes); // Remove 'section-node'
        }
        $body_classes[] = 'section-node-add'; // Add 'section-node-add'
      }
      elseif (is_numeric(arg(1)) && (arg(2) == 'edit' || arg(2) == 'delete')) {
        if ($section == 'node') {
          array_pop($body_classes); // Remove 'section-node'
        }
        $body_classes[] = 'section-node-' . arg(2); // Add 'section-node-edit' or 'section-node-delete'
      }
    }
  }
  //http://drupal.org/node/204482#comment-1100772
  if (module_exists('taxonomy') && $vars['node']->nid) {
    foreach (taxonomy_node_get_terms($vars['node']) as $term) {
    $body_classes[] = 'cat-' . eregi_replace('[^a-z0-9]', '-', $term->name);
    }
  }

  $vars['body_classes'] = implode(' ', $body_classes); // Concatenate with spaces

}

/**
* Converts a string to a suitable html ID attribute.
*
* - Preceeds initial numeric with 'n' character.
* - Replaces any character except A-Z, numbers, and underscores with dashes.
* - Converts entire string to lowercase.
* - Works for classes too!
*
* @param $string
*   The string
* @return
*   The converted string
*/
function oe_id_safe($string) {
  if (is_numeric($string{0})) {
    // If the first character is numeric, add 'n' in front
    $string = 'n'. $string;
  }
  return strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));
}


/**
 * User/account related links.
 */
function _oe_user_links() {
  // Add user-specific links
  global $user;
  $user_links = array();
  if (empty($user->uid)) {
    $user_links['login'] = array('title' => t('Login'), 'href' => 'user');
    // Do not display register link if registration is not allowed.
    if (variable_get('user_register', 1)) {
      $user_links['register'] = array('title' => t('Register'), 'href' => 'user/register');
    }
  }
  else {
    $user_links['account'] = array('title' => t('Hello @username', array('@username' => $user->name)), 'href' => 'user', 'html' => TRUE);
    $user_links['logout'] = array('title' => t('Logout'), 'href' => "logout");
  }
  return $user_links;
}

function oe_preprocess_node(&$vars, $hook) {

  // Grab the node object.
  $node = $vars['node'];
  // Make individual variables for the parts of the date.
  $vars['date_day'] = format_date($node->created, 'custom', 'j');
  $vars['date_month'] = format_date($node->created, 'custom', 'M');
  $vars['date_year'] = format_date($node->created, 'custom', 'Y');



//http://drupal.org/node/361209#comment-1670654
 $vars['node_block'] = theme('blocks', 'node_block');
 $vars['node_panel_66'] = theme('blocks', 'node_panel_66');
 $vars['node_panel_33'] = theme('blocks', 'node_panel_33');

}


//Return a file based on the URL alias, else return a default file
function unique_section_header() {
  $path = drupal_get_path_alias($_GET['q']);
  list($sections, ) = explode('/', $path, 2);
  $section = safe_string($sections);
  $filepath = path_to_theme() . '/images/sections/header-' . $section .'.jpg';
  if (file_exists($filepath)) {
    $output = $filepath;
  }
  else {
    $output = path_to_theme() . '/images/sections/header-default.jpg';
  }
  return $output;
}
   
//Make a string safe
function safe_string($string) {
  $string = strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));
  return $string;
}

function oe_date_all_day_label() {
  return '';
}



/**
 * Block edit links function
 * Create block edit links for admins
 */
function oe_edit_links($block) {
  $path = 'admin/build/block/configure/' . $block->module . '/' . $block->delta;
  $return = drupal_get_destination();
  // Use 'edit' for custom blocks, 'configure' for others
  if ($block->module == 'block') {
    $text = t('edit block');
    $block_info = array('@region' => str_replace('_', ' ', $block->region));
    $attributes = array('title' => t('edit the content of this Custom block (in @region)', $block_info), 'class' => 'fusion-block-edit');
  }
  else {
    $text = t('configure block');
    $block_info = array('@type' => ucfirst($block->module), '@region' => str_replace('_', ' ', $block->region));
    $attributes = array('title' => t('configure this @type block (in @region)', $block_info), 'class' => 'fusion-block-config');
  }
  $edit_links[] = l($text, $path, array('attributes' => $attributes, 'query' => $return));
  // Add extra 'edit menu' for menu blocks
  if (user_access('administer menu') && ($block->module == 'menu' || ($block->module == 'user' && $block->delta == 1))) {
    $text = t('edit menu');
    $path = 'admin/build/menu-customize/' . (($block->module == 'user') ? 'navigation' : $block->delta);
    $attributes = array('title' => t('edit the menu of this @type block (in @region)', $block_info), 'class' => 'fusion-edit-menu');
    $edit_links[] = l($text, $path, array('attributes' => $attributes, 'query' => $return));
  }
  return $edit_links;
}

function oe_preprocess_block(&$vars) {

 global $theme_info, $user;
  // Add block edit links for admins
  if (user_access('administer blocks', $user)) {
    $vars['edit_links'] = '<div class="fusion-edit">'. implode(' ', oe_edit_links($vars['block'])) .'</div>';
  }
}



function oe_audiofield_players_wpaudioplayer($player_path, $audio_file){
  return '<object id="audioplayer2" height="24" width="180" data="' . $player_path . '" type="application/x-shockwave-flash">
                          <param value="' . $player_path . '" name="movie"/>
                          <param value="playerID=2&amp;bg=0xCDDFF3&amp;leftbg=0x357DCE&amp;lefticon=0xF2F2F2&amp;rightbg=0xF06A51&amp;rightbghover=0xAF2910&amp;righticon=0xF2F2F2&amp;righticonhover=0xFFFFFF&amp;text=0x357DCE&amp;slider=0x357DCE&amp;track=0xFFFFFF&amp;border=0xFFFFFF&amp;loader=0xAF2910&amp;soundFile=' . $audio_file . '" name="FlashVars"/>
                          <param value="high" name="quality"/>
                          <param value="false" name="menu"/>
                          <param value="wmode" name="transparent"/>
                          </object>';
}


