<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>Season's Greetings 2009 from AMS</title>
<meta name="robots" content="noindex,nofollow">
<script src="/scripts/AC_RunActiveContent.js" type="text/javascript"></script>
<script src="/scripts/send.js" type="text/javascript"></script>
<script type="text/javascript">

var dhtmlgoodies_slideSpeed = 30;	// Higher value = faster
var dhtmlgoodies_timer = 3;	// Lower value = faster

var objectIdToSlideDown = false;
var dhtmlgoodies_activeId = false;
var dhtmlgoodies_slideInProgress = false;
function showHideContent(e,inputId)
{
	if(dhtmlgoodies_slideInProgress)return;
	dhtmlgoodies_slideInProgress = true;
	if(!inputId)inputId = this.id;
	inputId = inputId + '';
	var numericId = inputId.replace(/[^0-9]/g,'');
	var answerDiv = document.getElementById('dhtmlgoodies_a' + numericId);

	objectIdToSlideDown = false;
	
	if(!answerDiv.style.display || answerDiv.style.display=='none'){		
		if(dhtmlgoodies_activeId &&  dhtmlgoodies_activeId!=numericId){			
			objectIdToSlideDown = numericId;
			slideContent(dhtmlgoodies_activeId,(dhtmlgoodies_slideSpeed*-1));
		}else{
			
			answerDiv.style.display='block';
			answerDiv.style.visibility = 'visible';
			
			slideContent(numericId,dhtmlgoodies_slideSpeed);
		}
	}else{
		slideContent(numericId,(dhtmlgoodies_slideSpeed*-1));
		dhtmlgoodies_activeId = false;
	}	
}

function slideContent(inputId,direction)
{
	
	var obj =document.getElementById('dhtmlgoodies_a' + inputId);
	var contentObj = document.getElementById('dhtmlgoodies_ac' + inputId);
	height = obj.clientHeight;
	if(height==0)height = obj.offsetHeight;
	height = height + direction;
	rerunFunction = true;
	if(height>contentObj.offsetHeight){
		height = contentObj.offsetHeight;
		rerunFunction = false;
	}
	if(height<=1){
		height = 1;
		rerunFunction = false;
	}

	obj.style.height = height + 'px';
	var topPos = height - contentObj.offsetHeight;
	if(topPos>0)topPos=0;
	contentObj.style.top = topPos + 'px';
	if(rerunFunction){
		setTimeout('slideContent(' + inputId + ',' + direction + ')',dhtmlgoodies_timer);
	}else{
		if(height<=1){
			obj.style.display='none'; 
			if(objectIdToSlideDown && objectIdToSlideDown!=inputId){
				document.getElementById('dhtmlgoodies_a' + objectIdToSlideDown).style.display='block';
				document.getElementById('dhtmlgoodies_a' + objectIdToSlideDown).style.visibility='visible';
				slideContent(objectIdToSlideDown,dhtmlgoodies_slideSpeed);				
			}else{
				dhtmlgoodies_slideInProgress = false;
			}
		}else{
			dhtmlgoodies_activeId = inputId;
			dhtmlgoodies_slideInProgress = false;
		}
	}
}



function initShowHideDivs()
{
	var divs = document.getElementsByTagName('DIV');
	var divCounter = 1;
	for(var no=0;no<divs.length;no++){
		if(divs[no].className=='dhtmlgoodies_question'){
			divs[no].onclick = showHideContent;
			divs[no].id = 'dhtmlgoodies_q'+divCounter;
			var answer = divs[no].nextSibling;
			while(answer && answer.tagName!='DIV'){
				answer = answer.nextSibling;
			}
			answer.id = 'dhtmlgoodies_a'+divCounter;	
			contentDiv = answer.getElementsByTagName('DIV')[0];
			contentDiv.style.top = 0 - contentDiv.offsetHeight + 'px'; 	
			contentDiv.className='dhtmlgoodies_answer_content';
			contentDiv.id = 'dhtmlgoodies_ac' + divCounter;
			answer.style.display='none';
			answer.style.height='1px';
			divCounter++;
		}		
	}	
}
window.onload = initShowHideDivs;
</script>



<link rel="shortcut icon" href="/images/favicon.ico" />

<style type="text/css">

body{
	font-family: arial, Trebuchet MS, Lucida Sans Unicode, sans-serif;	/* Font to use */
	margin:0px;
	
}

a {color:#004477; text-decoration: none;}

a:link,

a:visited, {color:#004477; }

a:hover,

a:focus { color:#333; text-decoration: underline; }

.dhtmlgoodies_question{	/* Styling question */
	/* Start layout CSS */
	color:#333;
	font-size:0.9em;
	text-align: center;
	width:650px;
	margin-bottom:2px;
	margin-top:12px;
	padding-left:2px;
		
	height:20px;
	
	/* End layout CSS */
	
	overflow:hidden;
	cursor:pointer;
}
.dhtmlgoodies_answer{	/* Parent box of slide down content */
	/* Start layout CSS */
	
	
	width:650px;
	text-align: center;
	/* End layout CSS */
	
	visibility:hidden;

	overflow:hidden;
	position:relative;

}
.dhtmlgoodies_answer_content{	/* Content that is slided down */
	padding:1px;
	font-size:0.9em;	
	position:relative;
}

</style>


</head>

<body>


<div style="width:650px; margin:0 auto;">


<script type="text/javascript">
AC_FL_RunContent( 'codebase','http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,28,0','width','650','height','500','title','Season\'s Greetings 2009 from AMS','src','media/sk-7','quality','high','pluginspage','http://www.adobe.com/shockwave/download/download.cgi?P1_Prod_Version=ShockwaveFlash','movie','/flash/sk-7' ); //end AC code
</script><noscript><object classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,28,0" width="650" height="500" title="Season's Greetings 2009 from AMS">
  <param name="movie" value="/flash/sk-7.swf" />
  <param name="quality" value="high" />
  <embed src="/flash/sk-7.swf" quality="high" pluginspage="http://www.adobe.com/shockwave/download/download.cgi?P1_Prod_Version=ShockwaveFlash" type="application/x-shockwave-flash" width="650" height="500"></embed>
</object></noscript>


  
  <div class="dhtmlgoodies_question" style="border-bottom: 1px dotted #333; padding-bottom:10px;"><a href="#">Send to a friend (click here)</a></div>
<div class="dhtmlgoodies_answer">
  <div style="height:250px;">
   <form name ="itellform" id = "itellform"action="thanks.php" method="post" onsubmit="return validate(this);"> 
 <p>Use the form below to tell a friend about this card! </p>

 <p>
<strong>Your Name:</strong><input name="name" id = "name"type="text"><br />
<strong>Your friend's email address:</strong>
<input type="text" name ="email[]" id = "email" />

<div id="filediv"></div>

<input type="button" name="addmore" value="Add More Friends!" onclick="addmorefile()"/>
<input class ="colorbtn"name="Send" type="submit" value="Send this to your friend now!" >

</form>
</p>

  </div>
</div>  <!--end question-->
 <div style="width:142px; margin:0 auto; margin-top:20px; ">
<a href="http://www.amsolutions.net/"><img src="http://www.amsolutions.net/images/logo.gif" alt="AMS website" width="142" height="72" border="0" title="AMS website" /></a>
  </div>
</div><!--/end-->

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
