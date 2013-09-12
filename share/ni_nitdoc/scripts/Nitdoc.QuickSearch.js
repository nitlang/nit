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
		for(var i in entries[entry]) {
			var result = entries[entry][i];
			result.entry = entry;
			result.distance = query.dice(entry);
			results[results.length] = result;
		}
	}
	results.sort(Nitdoc.QuickSearch.resultSorter);
	return results;
}

// Sort an array of results
Nitdoc.QuickSearch.resultSorter = function(a, b){
	if(a.distance < b.distance) {
		return 1;
	} else if(a.distance > b.distance) {
		return -1;
	}
	return 0;
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

/* Utils */

// Calculate levenshtein distance beetween two strings
// see: http://en.wikipedia.org/wiki/Levenshtein_distance
String.prototype.levenshtein = function(other) {
	var matrix = new Array();

	for(var i = 0; i <= this.length; i++) {
		matrix[i] = new Array();
		matrix[i][0] = i;
	}
	for(var j = 0; j <= other.length; j++) {
		matrix[0][j] = j;
	}
	var cost = 0;
	for(var i = 1; i <= this.length; i++) {
		for(var j = 1; j <= other.length; j++) {
			if(this.charAt(i - 1) == other.charAt(j - 1)) {
				cost = 0;
			} else if(this.charAt(i - 1).toLowerCase() == other.charAt(j - 1).toLowerCase()) {
				cost = 0.5;
			} else {
				cost = 1;
			}
			matrix[i][j] = Math.min(
				matrix[i - 1][j] + 1, // deletion
				matrix[i][j - 1] + 1, // insertion
				matrix[i - 1][j - 1] + cost // substitution
			);
		}
	}
	return matrix[this.length][other.length]
}

// Compare two strings using Sorensen-Dice Coefficient
// see: http://en.wikipedia.org/wiki/S%C3%B8rensen%E2%80%93Dice_coefficient
String.prototype.dice = function(other) {
	var length1 = this.length - 1;
	var length2 = other.length - 1;
	if(length1 < 1 || length2 < 1) return 0;

	var bigrams2 = [];
	for(var i = 0; i < length2; i++) {
		bigrams2.push(other.substr(i, 2));
	}

	var intersection = 0;
	for(var i = 0; i < length1; i++) {
		var bigram1 = this.substr(i, 2);
		for(var j = 0; j < length2; j++) {
			if(bigram1 == bigrams2[j]) {
				intersection += 2;
				bigrams2[j] = null;
				break;
			} else if (bigram1 && bigrams2[j] && bigram1.toLowerCase() == bigrams2[j].toLowerCase()) {
				intersection += 1;
				bigrams2[j] = null;
				break;
			}
		}
	}
	return (2.0 * intersection) / (length1 + length2);
}
