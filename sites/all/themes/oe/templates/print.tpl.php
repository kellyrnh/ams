<?php
// $Id: print.tpl.php,v 1.8.2.16 2010/07/13 11:04:57 jcnventura Exp $

/**
 * @file
 * Default print module template
 *
 * @ingroup print
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $print['language']; ?>" xml:lang="<?php print $print['language']; ?>">
  <head>
    <?php print $print['head']; ?>
    <title><?php print $print['title']; ?></title>
    <?php print $print['scripts']; ?>
    <?php print $print['sendtoprinter']; ?>
    <?php print $print['robots_meta']; ?>
    <?php print $print['base_href']; ?>
    <?php print $print['favicon']; ?>
    <?php print $print['css']; ?>
    <link type="text/css" rel="stylesheet" media="all" href="/sites/all/themes/oe/styles/printpage.css" />

  </head>
  <body class="printversion">
  

  
    <?php if (!empty($print['message'])) {
      print '<div class="print-message">'. $print['message'] .'</div><p />';
    } ?>
    
 
    
    <div class="print-logo"><?php print $print['logo']; ?></div>
    <div class="print-site_name"><?php print $print['site_name']; ?></div>
    <p />
    
         <a href="javascript:history.go(-1)">&laquo; Back to site</a>
<div class="printcontent">
    <hr class="print-hr" />
    <h1 class="print-title"><?php print $print['title']; ?></h1>
    <div class="print-submitted"><?php print $print['submitted']; ?></div>
    <div class="print-created"><?php print $print['created']; ?></div>
    <div class="print-content"><?php print $print['content']; ?></div>

    <div class="print-footer"><?php print $print['footer_message']; ?></div>
    <hr class="print-hr" />
&copy; 2011, Accounting Management Solutions, Inc. 

</div>
  </body>
</html>
