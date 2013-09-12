/*
* JQuery Case Insensitive :icontains selector
*/
$.expr[':'].icontains = function(obj, index, meta, stack){
	return (obj.textContent.replace(/\[[0-9]+\]/g, "") || obj.innerText.replace(/\[[0-9]+\]/g, "") || jQuery(obj).text().replace(/\[[0-9]+\]/g, "") || '').toLowerCase().indexOf(meta[3].toLowerCase()) >= 0;
};

/*
* Add folding and filtering facilities to class description page.
*/
$(document).ready(function() {

	// Menu nav folding
	$(".menu nav h3")
	.prepend(
		$(document.createElement("a"))
		.html("-")
		.addClass("fold")
	)
	.css("cursor", "pointer")
	.click( function() {
			if($(this).find("a.fold").html() == "+") {
				$(this).find("a.fold").html("-");
			} else {
				$(this).find("a.fold").html("+");
			}
			$(this).nextAll().toggle();
	})

	// Insert filter field
	$("article.filterable h2, nav.filterable h3")
	.after(
		$(document.createElement("div"))
		.addClass("filter")
		.append(
			$(document.createElement("input"))
			.attr({
				type:	"text",
				value:	"filter..."
			})
			.addClass("notUsed")
			.keyup(function() {
				$(this).parent().parent().find("ul li:not(:icontains('" + $(this).val() + "'))").addClass("hide");
				$(this).parent().parent().find("ul li:icontains('" + $(this).val() + "')").removeClass("hide");
			})
			.focusout(function() {
				if($(this).val() == "") {
					$(this).addClass("notUsed");
					$(this).val("filter...");
				}
			})
			.focusin(function() {
				if($(this).val() == "filter...") {
					$(this).removeClass("notUsed");
					$(this).val("");
				}
			})
		)
	);

	// Filter toggle between H I R in nav porperties list
	$("nav.properties.filterable .filter")
	.append(
		$(document.createElement("a"))
		.html("H")
		.attr({
			title:	"hide inherited properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.inherit").show();
			} else {
				$(this).parent().parent().find("li.inherit").hide();
			}

			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("R")
		.attr({
			title:	"hide redefined properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.redef").show();
			} else {
				$(this).parent().parent().find("li.redef").hide();
			}

			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("I")
		.attr({
			title:	"hide introduced properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.intro").show();
			} else {
				$(this).parent().parent().find("li.intro").hide();
			}

			$(this).toggleClass("hidden");
		})
	);

	// Filter toggle between I R in
	$("article.properties.filterable .filter, article.classes.filterable .filter")
	.append(
		$(document.createElement("a"))
		.html("I")
		.attr({
			title:	"hide introduced properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.intro").show();
			} else {
				$(this).parent().parent().find("li.intro").hide();
			}

			$(this).toggleClass("hidden");
		})
	)
	.append(
		$(document.createElement("a"))
		.html("R")
		.attr({
			title:	"hide redefined properties"
		})
		.click( function() {
			if($(this).hasClass("hidden")) {
				$(this).parent().parent().find("li.redef").show();
			} else {
				$(this).parent().parent().find("li.redef").hide();
			}

			$(this).toggleClass("hidden");
		})
	);

	//Preload filter fields with query string
	preloadFilters();

	//Copy to clipboard utility on signatures
	$(".signature").each(function(){
		$(this).append(
			$("<button class='copyButton' data-clipboard-text='" + $(this).attr("data-untyped-signature") + "'></button>")
			.append($("<img src='./resources/icons/copy.png' />"))
		)
	});

	var clip = new ZeroClipboard($(".copyButton"), {
	  moviePath: "./ZeroClipboard.swf"
	} );
});

/* Parse current URL and return anchor name */
function currentAnchor() {
    var index = document.location.hash.indexOf("#");
    if (index >= 0) {
		return document.location.hash.substring(index + 1);
	}
	return null;
}

/* Prealod filters field using search query */
function preloadFilters() {
	// Parse URL and get query string
	var search = currentAnchor();

	if(search == null || search.indexOf("q=") == -1)
		return;

	search = search.substring(2, search.length);

	if(search == "" || search == "undefined")
		return;

	$(":text").val(search);
	$(".filter :text")
		.removeClass("notUsed")
		.trigger("keyup");

}

