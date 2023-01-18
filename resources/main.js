// Site Specific

$(document).ready(function() {
	var qrurl = 'http://chart.apis.google.com/chart?cht=qr&chs=300x300&chl=' + $(location).attr('href');
	$(".qrcode").attr('href', qrurl);
	var cboxopt = {transition: "fade", photo: true, initialWidth: 300, initialHeight: 300};
	$(".qrcode").colorbox(cboxopt);
	$('#breadcrumbs a').navBox('currentDeactive', 'black');
	var currLoc = window.location.pathname + window.location.search;
	currLoc = currLoc.toLowerCase();
	if (currLoc == '/' || currLoc == '/home.aspx?f=/srodek.htm' || currLoc == '/home.aspx' ||
		currLoc == '/homen.aspx' || currLoc == '/homen.aspx?f=/srodeken.htm') {
		$('#breadcrumbs a').remove();
		$('#mainMenu').attr('class', 'onHomePage');
	}
	CheckCookies();
});


// Hyphenator
//
// $(document).ready(function() {
//	Hyphenator.run();
// });

// Animations

if (!edu) {
	$("#headBanner").backstretch(
		["/img/topbanner/n001.jpg", "/img/topbanner/n002.jpg", "/img/topbanner/n003.jpg"],
		{duration: 5000, fade: 3000}
	);
}

$("#socials a").hover(
	function() {
		$(this).animate({'margin-top': '-5px'}, 50 );
		$(this).css('background-position-x', '30px');
		$(this).animate({'margin-top': '0'}, 50 );
	},
	function() {
		$(this).css('background-position-x', '0');
	}
);

$(".eurotiles a").hover(
	function() {
		$(this).css('background-position-x', '295px');
	},
	function() {
		$(this).css('background-position-x', '0');
	}
);
