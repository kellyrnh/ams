<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>Season's Greetings 2009 from AMS</title>
<meta name="robots" content="noindex,nofollow">

</head>
<body>

<?php

$count = 0;
foreach($_POST[email] as $key => $value){
// Sam hack finish//
if($value != ""){
$name=$_POST['name'];
$optionselected = $_POST['optionselected'];
$optionselected = stripslashes($optionselected);
//$email=$_POST['email'];
$email = $_POST[email][$key];
$subject = $name. " has forwarded you Holiday Greetings from AMS";

$message= "<div style=\"margin:1px; font-family:Verdana, Arial, Helvetica, sans-serif; font-size:14px;\">

<a href=\"http://www.amsolutions.net\"><img src=\"http://www.amsolutions.net/images/logo.gif\" border=\"0\" alt=\"AMS\"/></a>
 <br />

Your friend, ". $name . ", has just viewed the animated 2010 AMS Holiday Greeting card <a href=\"http://www.amsolutions.net/holiday-card/\">http://www.amsolutions.net/holiday-card/</a> and is inviting you to see it also.<br />

</div>";

$headers = 'From: admin@amsolutions.net' . "\n" ;
$headers .= "MIME-Version: 1.0\n";
$headers.= "Content-Type: text/html; charset=iso-8859-1\n"; 
/*if(mail($email, $subject, $message, $headers))
$count++; // this is to keep track of emails sent//*/ // original by sam//
// modified by sam after this function stopped working//
if(mail($email, $subject, $message, $headers)){

$count++; // this is to keep track of emails sent//
}

}//if loop ends//



}// foreach loop ends//

?>
      <div style="width:650px; margin:0 auto; text-align:center;">
  
    <div style="width:142px; margin:0 auto;"><br />
  <br />
  <a href="http://www.amsolutions.net/"><img src="http://www.amsolutions.net/images/logo.gif" alt="Go to the AMS website" width="142" height="72" border="0" title="Go to the AMS website" /></a>
  

  </div>
  <br />
  Thanks for viewing our holiday card!
   <br />
  <a href="http://www.amsolutions.net/">  Go to the AMS website</a>
 <br />
      </div>
      <script type="text/javascript">
var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl."
: "http://www.");
document.write(unescape("%3Cscript src='" + gaJsHost +
"google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
try {
var pageTracker = _gat._getTracker("UA-1592947-1");
pageTracker._trackPageview();
} catch(err) {}</script>


<!--Conversion Associates code-->
<script type="text/javascript">
var scripturl = (("https:" == document.location.protocol) ? "https://" : "http://") + "cap.conversionassociates.com/WebTrack/catracker.js";
document.write(unescape("%3Cscript src='" + scripturl + "' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
    try {
    var cat = new CATracker(9917759831);
    cat.Pause = true; cat.TrackOutboundLinks(); cat.PageView();
    } catch (err) {document.write("There has been an error initializing CAP web tracking.");}
</script>
<noscript><img src='http://cap.conversionassociates.com/WebTrack/track.gif?noscript=1&aweid=9917759831&action=PageView'/></noscript>
<!--end Conversion Associates code-->
      
      </body>
      </html>