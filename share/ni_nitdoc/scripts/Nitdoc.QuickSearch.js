/*
 *	QuickSearch
 */

// Current search results preview table
var currentTable = null;

//Hightlighted index in search result preview table
var currentIndex = -1;

$(document).ready(function() {

	// Insert search field
	$("nav.main ul")
	.append(
		$(document.createElement("li"))
		.append(
			$(document.createElement("form"))
			.append(
				$(document.createElement("input"))
				.attr({
					id: "search",
					type:	"text",
					autocomplete: "off",
					value: "quick search..."
				})
				.addClass("notUsed")

				// Key management
				.keyup(function(e) {
					switch(e.keyCode) {
						// Up
						case 38:
							Nitdoc.QuickSearch.selectPrevResult();
						break;

						// Down
						case 40:
							Nitdoc.QuickSearch.selectNextResult();
						break;
						// Enter
						case 13:
							Nitdoc.QuickSearch.goToResult();
							return false;
						break;

						// Escape
						case 27:
							$(this).blur();
							Nitdoc.QuickSearch.close();
						break;

						// Other keys
						default:
							var query = $("#search").val();
							if(!query) {
								return false;
							}
							var results = Nitdoc.QuickSearch.search(query);
							Nitdoc.QuickSearch.showResults(query, results);
						break;
					}
				})
				.focusout(function() {
					if($(this).val() == "") {
						$(this).addClass("notUsed");
						$(this).val("quick search...");
					}
				})
				.focusin(function() {
					if($(this).val() == "quick search...") {
						$(this).removeClass("notUsed");
						$(this).val("");
					}
				})
			)
			.submit( function() {
				return false;
			})
		)
	 );

	 // Close quicksearch list on click
	 $(document).click(function(e) {
		Nitdoc.QuickSearch.close();
	 });
});

var Nitdoc = {};
Nitdoc.QuickSearch = {};

// Do search
Nitdoc.QuickSearch.search = function(query) {
	// Escape regexp related characters in query
	query = query.replace(/\\/gi, "\\\\");
	query = query.replace(/\[/gi, "\\[");
	query = query.replace(/\|/gi, "\\|");
	query = query.replace(/\*/gi, "\\*");
	query = query.replace(/\+/gi, "\\+");
	query = query.replace(/\?/gi, "\\?");
	query = query.replace(/\(/gi, "\\(");
	query = query.replace(/\)/gi, "\\)");
	query = query.replace(/&/gi, "&&");
	// Look for matches in JSON entries
	var results = new Array();
	var regexp = new RegExp("^" + query, "i");
	for(var entry in entries) {
		var match = entry.match(regexp);
		if(match != null) {
			for(var i in entries[entry]) {
				var result = entries[entry][i];
				result.entry = entry;
				results[results.length] = result;
			}
		}
	}
	return results;
}

// Display resulsts in popup table
Nitdoc.QuickSearch.showResults = function(query, results) {
	// Remove previous table
	if(currentTable != null) {
		currentTable.remove();
	}
	// Build results table
	currentIndex = -1;
	currentTable = $(document.createElement("table"));
	var overflow = 0;
	for(var i in results) {
		if(i > 10) {
			overflow++;
			break;
		}
		var result = results[i];
		currentTable.append(
			$(document.createElement("tr"))
			.data("searchDetails", {name: result.entry, url: result.url})
			.data("index", i)
			.append($(document.createElement("td")).html(result.entry))
			.append(
				$(document.createElement("td"))
					.addClass("entryInfo")
					.html(result.txt + "&nbsp;&raquo;")
			)
			.mouseover( function() {
				$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
				$(this).addClass("activeSearchResult");
				currentIndex = $(this).data("index");
			})
			.mouseout( function() {
				$(this).removeClass("activeSearchResult");
			 })
			.click( function() {
				window.location = $(this).data("searchDetails")["url"];
			})
		);
	}
	if(overflow > 0) {
		currentTable.append(
			$("<tr class='overflow'>")
			.append(
				$("<td colspan='2'>")
				.append(
					$("<a href='#' title='Show all results' data-query='"+ query +"'>" + overflow + " more results for '" + query + "'</a>")
					.click(function() {
						window.location = "search.html#q=" + $(this).attr("data-query");
						if(window.location.href.indexOf("search.html") > -1) {
							location.reload();
						}
					})
				)
			)
		);
	}
	// Initialize table properties
	currentTable.attr("id", "searchTable");
	currentTable.css("position", "absolute");
	currentTable.width($("#search").outerWidth());
	$("body").append(currentTable);
	currentTable.offset({left: $("#search").offset().left + ($("#search").outerWidth() - currentTable.outerWidth()), top: $("#search").offset().top + $("#search").outerHeight()});
	// Preselect first entry
	if(currentTable.find("tr").length > 0) {
		currentIndex = 0;
		$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
		$("#search").focus();
	}
}

// Select the previous result
Nitdoc.QuickSearch.selectPrevResult = function() {
	// If already on first result, focus search input
	if(currentIndex == 0) {
		$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
		$("#search").focus();
	// Else select previous result
	} else if(currentIndex > 0) {
		$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
		currentIndex--;
		$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
		$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
		$("#search").focus();
	}
}

// Select the next result
Nitdoc.QuickSearch.selectNextResult = function() {
	if(currentIndex < currentTable.find("tr").length - 1) {
		if($(currentTable.find("tr")[currentIndex + 1]).hasClass("overflow")) {
			return;
		}
		$(currentTable.find("tr")[currentIndex]).removeClass("activeSearchResult");
		currentIndex++;
		$(currentTable.find("tr")[currentIndex]).addClass("activeSearchResult");
		$("#search").val($(currentTable.find("tr")[currentIndex]).data("searchDetails").name);
		$("#search").focus();
	}
}

// Load selected search result
Nitdoc.QuickSearch.goToResult = function() {
	if(currentIndex > -1) {
		window.location = $(currentTable.find("tr")[currentIndex]).data("searchDetails").url;
		return;
	}

	if($("#search").val().length == 0) { return; }

	window.location = "search.html#q=" + $("#search").val();
	if(window.location.href.indexOf("search.html") > -1) {
		location.reload();
	}
}

// Close the QuickSearch results
Nitdoc.QuickSearch.close = function(target) {
	if(target != $("#search")[0] && target != $("#searchTable")[0]) {
		if(currentTable != null) {
			currentTable.remove();
			currentTable = null;
		}
	}
}

