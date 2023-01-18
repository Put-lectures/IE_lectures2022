function CreateOKCookie() {
	var date = new Date();
	date.setTime(date.getTime() + (365*24*60*60*1000));
	var expires = "expires=" + date.toGMTString();
	document.cookie = name+"cookies_accepted=OK; "+expires+"; path=/";
}
function ReadOKCookie() {
	var nameEQ = "cookies_accepted=";
	var ca = document.cookie.split(';');
	for(var i=0; i < ca.length; i++) {
		var c = ca[i];
		while (c.charAt(0) == ' ') c = c.substring(1, c.length);
		if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length, c.length);
	}
	return null;
}
function CheckCookies() {
	if(ReadOKCookie() != 'OK') {
		$("#cookies-message-container").show("blind", null, 500);
	}
}
function CloseCookiesWindow() {
	CreateOKCookie();
	$("#cookies-message-container").hide("blind", null, 500);
}
