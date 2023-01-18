/**
 * NBP jQuery helper plugin for www.nbp.pl
 * CC BY-SA 3.0, 2012, NBP (kp22ab@nbp.pl)
 * .
 * $.navBox() - funkcje do grupy linków nawigacyjnych
 * .
 */

(function( $ ){

	// Global Vars
	var currenturl = window.location.pathname + window.location.search;

	// Global Functions
	isLinkCurrent = function( element ) {
		return (element.attr('href') == currenturl) ? true : false;
	};

	// NavBox
	var navBoxMethods = {
	init : function( options ) {
		$.error( 'Specify options for jQuery.navBox!' );
	},
	currentAria : function( classname ) {
		this.each(function(){
			if ( isLinkCurrent( $(this) ) ) {
				$(this).addClass(classname);
				$(this).attr('aria-current', 'page');
				$(this).css('cursor', 'default');
				$(this).css('text-decoration', 'none');
			}
		});
	},
	currentDeactive : function( classname ) {
		this.each(function(){
			if ( isLinkCurrent( $(this) ) ) {
				$(this).addClass(classname);
				$(this).attr('aria-current', 'page');
				$(this).removeAttr('href');
				$(this).css('cursor', 'default');
				$(this).css('text-decoration', 'none');
			}
		});
	},
	currentReplace : function( element ) {
		element = element || "span";
		this.each(function(){
			if ( isLinkCurrent( $(this) ) ) {
				$(this).replaceWith( "<" + element + ">" + $(this).text() + "</" + element + ">" );
			}
		});
	},
	currentRemove : function( element ) {
		this.each(function(){
			if ( isLinkCurrent( $(this) ) ) {
				$(this).remove();
			}
		});
	},
	currentHide : function( element ) {
		this.each(function(){
			if ( isLinkCurrent( $(this) ) ) {
				$(this).css('display', 'none');
			}
		});
	},
	otherAddClass : function( classname ) {
		this.each(function(){
			if ( !isLinkCurrent( $(this) ) ) {
				$(this).addClass(classname);
			}
		});
	}
	};

	$.fn.navBox = function( method ) {
		if ( navBoxMethods[method] ) {
			return navBoxMethods[ method ].apply( this, Array.prototype.slice.call( arguments, 1 ));
		} else if ( typeof method === 'object' || ! method ) {
			return navBoxMethods.init.apply( this, arguments );
		} else {
			$.error( 'Method ' +  method + ' does not exist on jQuery.navBox' );
		}
	};
	// END NavBox

	$.fn.fbHelper = function( title ) {
		$('title').contents().replaceWith(title);
	};

})( jQuery );