

/*function addmorefile()
{
var count =1;
var getdivID= document.getElementById('filediv');
var newdiv = document.createElement('div');
var newdivIdName = 'email[]';
newdiv.setAttribute('id',newdivIdName );
newdiv.setAttribute('name',newdivIdName );
newdiv.innerHTML = '<br /><input type="text" name ="email[]" /><br />';
getdivID.appendChild(newdiv);

}*/ // original function before max slot feature//

var emailslots = 1;
var maxemailslots = 3;
function addmorefile()
{
if(emailslots<maxemailslots)
{
var count =1;
var getdivID= document.getElementById('filediv');
var newdiv = document.createElement('div');
var newdivIdName = 'email[]';
newdiv.setAttribute('id',newdivIdName );
newdiv.setAttribute('name',newdivIdName );
newdiv.innerHTML = '<br /><input type="text" name ="email[]" /><br />';
getdivID.appendChild(newdiv);
emailslots++;
}
else
alert("You can only send three total at a time!");
}


function validate(form)
{
if( document.getElementById('name').value == "")
{
alert("Please enter your First name");
return false;
}
else if(document.getElementById('email').value ==""){
alert(" Please fill in at least one friends's email address. ");
return false;
}

else if (echeck(document.getElementById('email').value)==false){
		alert(" Please enter a valid email address");
		return false
	}


else
return true;

}
function echeck(str) {

		var at="@"
		var dot="."
		var lat=str.indexOf(at)
		var lstr=str.length
		var ldot=str.indexOf(dot)
		if (str.indexOf(at)==-1){
		  // alert("Invalid E-mail ID")
		   return false
		}

		if (str.indexOf(at)==-1 || str.indexOf(at)==0 || str.indexOf(at)==lstr){
		 //  alert("Invalid E-mail ID")
		   return false
		}

		if (str.indexOf(dot)==-1 || str.indexOf(dot)==0 || str.indexOf(dot)==lstr){
		 //   alert("Invalid E-mail ID")
		    return false
		}

		 if (str.indexOf(at,(lat+1))!=-1){
		   // alert("Invalid E-mail ID")
		    return false
		 }

		 if (str.substring(lat-1,lat)==dot || str.substring(lat+1,lat+2)==dot){
		 //   alert("Invalid E-mail ID")
		    return false
		 }

		 if (str.indexOf(dot,(lat+2))==-1){
		   // alert("Invalid E-mail ID")
		    return false
		 }
		
		 if (str.indexOf(" ")!=-1){
		   // alert("Invalid E-mail ID")
		    return false
		 }

 		 return true					
	}


