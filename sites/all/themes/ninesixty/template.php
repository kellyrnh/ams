<?php
// $Id: template.php,v 1.1.2.10 2011/01/24 20:39:57 dvessel Exp $


/**
 * Preprocessor for page.tpl.php template file.
 */
function ninesixty_preprocess_page(&$vars, $hook) {

  // For easy printing of variables.
  // Branding
  $vars['logo_img'] = '';
  if (!empty($vars['logo'])) {
    // If the path leads to an external source (CDN for example),
    // pass it through with the 'getsize' parameter set to false.
    if (menu_path_is_external($vars['logo'])) {
      $vars['logo_img'] = theme('image', $vars['logo'], t('Site Logo'), '', NULL, FALSE);
    }
    else {
      // A local image path needs the base path stripped for theme_image to work.
      $vars['logo_img'] = theme('image', substr($vars['logo'], strlen(base_path())), t('Site Logo'));
    }
  }
  $vars['linked_logo_img'] = '';
  if (!empty($vars['logo_img'])) {
    $vars['linked_logo_img'] = l($vars['logo_img'], '<front>', array(
      'html' => TRUE,
      'attributes' => array(
        'rel'   => 'home',
        'title' => t('Home'),
      ),
    ));
  }
  $vars['linked_site_name'] = '';
  if (!empty($vars['site_name'])) {
    $vars['linked_site_name'] = l($vars['site_name'], '<front>', array(
      'attributes' => array(
        'rel'   => 'home',
        'title' => t('Home'),
      ),
    ));
  }
  // Site navigation links.
  $vars['main_menu_links']      = theme('links', $vars['primary_links'], array(
    'id'    => 'main-menu',
    'class' => 'main-menu links',
  ));
  $vars['secondary_menu_links'] = theme('links', $vars['secondary_links'], array(
    'id'    => 'secondary-menu',
    'class' => 'secondary-menu links',
  ));

  ninesixty_css_alter($vars['css']);
  $vars['styles'] = drupal_get_css($vars['css']);
}

/**
 * Contextually adds 960 Grid System classes.
 *
 * The first parameter passed is the *default class*. All other parameters must
 * be set in pairs like so: "$variable, 3". The variable can be anything available
 * within a template file and the integer is the width set for the adjacent box
 * containing that variable.
 *
 *  class="<?php print ns('grid-16', $var_a, 6); ?>"
 *
 * If $var_a contains data, the next parameter (integer) will be subtracted from
 * the default class. See the README.txt file.
 */
function ns() {
  $args = func_get_args();
  $default = array_shift($args);
  // Get the type of class, i.e., 'grid', 'pull', 'push', etc.
  // Also get the default unit for the type to be procesed and returned.
  list($type, $return_unit) = explode('-', $default);

  // Process the conditions.
  $flip_states = array('var' => 'int', 'int' => 'var');
  $state = 'var';
  foreach ($args as $arg) {
    if ($state == 'var') {
      $var_state = !empty($arg);
    }
    elseif ($var_state) {
      $return_unit = $return_unit - $arg;
    }
    $state = $flip_states[$state];
  }

  $output = '';
  // Anything below a value of 1 is not needed.
  if ($return_unit > 0) {
    $output = $type . '-' . $return_unit;
  }
  return $output;
}

/**
 * Implements hook_css_alter.
 *
 * Alters the css based on the theme settings.
 */
function ninesixty_css_alter(&$css) {
  global $language;

  // Get .info defined settings.
  $settings = array();
  foreach (ns_active_themes() as $active_theme) {
    $settings += ns_theme_info('settings', array(), $active_theme);
  }

  // Get floats.
  $css_float = array();
  if (isset($settings['css_float'])) {
    $css_float = array_flip($settings['css_float']);
  }

  // Setup to replace when alternate grid columns are defined.
  $grid_replace = array();
  $ns_target  = isset($settings['ns_columns_target']) ? $settings['ns_columns_target'] : '';
  $ns_options = isset($settings['ns_columns_option']) ? $settings['ns_columns_option'] : array();
  $ns_select  = isset($settings['ns_columns_select']) ? $settings['ns_columns_select'] : '';
  if ($ns_target && isset($ns_options[$ns_select])) {
    $grid_replace[$ns_target] = $ns_options[$ns_select];
  }

  foreach ($css as $media => $groups) {
    // Setup a separate float group. Will come before module and theme groups.
    foreach ($groups as $group => $styles) {
      // Ensure styles are unique based on its name. Core doesn't check for
      // styles placed in different directories relative to each theme. Latter
      // styles will overwrite the former. This allows consistent overrides.
      $unique_styles = array();
      foreach ($styles as $css_path => $preprocess) {
        // Skip RTL styles. They will be added back later.
        if ($language->direction == LANGUAGE_RTL && strpos($css_path, '-rtl.css') !== FALSE) {
          continue;
        }
        // Prevent multiple 960 styles. This can happen if a subtheme includes
        // one manually. Since there are multiple iterations with different
        // names, overriding won't be predictable. This will only work for all
        // the known names set from settings[ns_olumns_option].
        $basename = basename($css_path);
        if (in_array($basename, $ns_options)) {
          $basename = $ns_target;
        }
        $unique_styles[str_replace('.css', '', $basename)] = array(
          'name'       => basename($css_path),
          'path'       => $css_path,
          'preprocess' => $preprocess,
        );
      }
      $re_css = $css_group_float = array();
      foreach ($unique_styles as $css_data) {
        $target_name = $css_data['name'];
        $target_path = $css_data['path'];
        $preprocess  = $css_data['preprocess'];

        // We want to ensure the original order is preserved. Using this skip flag
        // helps to that end by adding/removing in the same order its processed.
        $skip_css = FALSE;

        // Process floats.
        if (isset($css_float[$target_name])) {
          $css_group_float[$target_path] = $preprocess;
          // Added to float group. Don't add back into current group.
          $skip_css = TRUE;
        }

        // Process grid replacement.
        if (isset($grid_replace[$target_name])) {
          $target_grid = str_replace($target_name, $grid_replace[$target_name], $target_path);
          if ($target_grid != $target_path && file_exists($target_grid)) {
            $re_css[$target_grid] = $preprocess;
            // Replacement style added. Don't add the original.
            $skip_css = TRUE;
          }
        }

        // If nothing was changed, add back the original file.
        if ($skip_css == FALSE) {
          $re_css[$target_path] = $preprocess;
        }

        // Process grid debugging style.
        if ((bool) $settings['ns_columns_debug'] && in_array($target_name, $ns_options)) {
          $ns_debug_style = str_replace($target_name, $settings['ns_columns_debug_css'], $target_path);
          if (file_exists($ns_debug_style)) {
            $re_css[$ns_debug_style] = $preprocess;
          }
        }
      }
      // Add back styles for the group.
      $css[$media][$group] = $re_css;

      // Merge floating css.
      if (!empty($css_group_float)) {
        if (!isset($css[$media]['float'])) {
          $css[$media] = array('float' => array()) + $css[$media];
        }
        $css[$media]['float'] += $css_group_float;
      }
    }

    // Process RTL styles.
    if ($language->direction == LANGUAGE_RTL) {
      foreach ($css[$media] as $group => $styles) {
        $re_css = array();
        foreach ($styles as $css_path => $preprocess) {
          $re_css[$css_path] = $preprocess;
          $rtl_path = str_replace('.css', '-rtl.css', $css_path);
          if (file_exists($rtl_path)) {
            $re_css[$rtl_path] = $preprocess;
          }
        }
        // Add back styles for the group.
        $css[$media][$group] = $re_css;
      }
    }
  }
}

/**
 * Returns the current active theme. Use this instead of the global variable.
 */
function ns_active_theme() {
  global $theme_key;
  return $theme_key;
}

/**
 * List the active sub-theme and their connected parents.
 */
function ns_active_themes() {

  $themes        = list_themes();
  $active_theme  = ns_active_theme();
  $active_themes = array($active_theme => $active_theme);
  $parent_key    = $active_theme;

  while ($parent_key && isset($themes[$parent_key]->base_theme)) {
    $parent_key                 = $themes[$themes[$parent_key]->name]->base_theme;
    $active_themes[$parent_key] = $parent_key;
  }

  return $active_themes;
}

/**
 * Get the values defined within the .info file.
 * 
 * @param $info_key
 *  (required) The key to retrieve.
 * @param $default
 *  Fall back value if nothing is found.
 * @param $theme
 *  Theme specific value. If not set, it will return the value for the active
 *  theme.
 */
function ns_theme_info($info_key, $default = NULL, $theme_key = NULL) {

  if (!isset($theme_key)) {
    $theme_key = ns_active_theme();
  }
  $list_themes = list_themes();

  return isset($list_themes[$theme_key]->info[$info_key]) ? $list_themes[$theme_key]->info[$info_key] : $default;
}
