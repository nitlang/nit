/* This file is part of NIT ( http://www.nitlanguage.org ).

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   Documentation generator for the nit language.
   Generate API documentation in HTML format from nit source code.
*/

/*
 * Nitdoc Filtering
 *
 * Allow user to filter sidebar entries and search page
 */
var Filtering = {

	// Allow user to filter sidebar box entries by name
	enableSidebarTextFilters: function(filterSelector) {
		var div = $(document.createElement("div"))
		.addClass("nitdoc-ui-filter")
		.append(
			$(document.createElement("input"))
			.addClass("nitdoc-ui-filter-field")
			.addClass("nitdoc-ui-filter-field-notused")
			.attr("type", "text")
			.attr("value",	"filter...")
			.keyup(function() {
				var box = $(this).parents("nav.filterable");
				var value = $(this).val();
				box.find("ul li:not(:icontains('" + value + "'))").hide();
				box.find("ul li:icontains('" + value + "')").show();
			})
			.focusout(function() {
				if($(this).val() == "") {
					$(this).addClass("nitdoc-ui-filter-field-notused");
					$(this).val("filter...");
				}
			})
			.focusin(function() {
				if($(this).val() == "filter...") {
					$(this).removeClass("nitdoc-ui-filter-field-notused");
					$(this).val("");
				}
			})
		);
		$(filterSelector).after(div);
		this.preloadSidebarTextFilters();
	},

	// Prealod filters using search query
	preloadSidebarTextFilters: function() {
		var anchor = Utils.extractAnchor(document.location.hash);
		if(!anchor || anchor.indexOf("q=") == -1) return;

		var query = anchor.substring(2);
		if(!query) return;

		$(".nitdoc-ui-filter input:text")
		.val(query)
		.removeClass("nitdoc-ui-notused")
		.trigger("keyup");
	},

	// Allow user to filter side bar box entries by Introduced/Refined/inHerited type
	enableSidebarTypeFilters: function(filterSelector) {
		var box = $(filterSelector);
		var types = {};

		box.find("li").each(function() {
			var span = $(this).find("span:first");
			if(!types[span.html()]) types[span.html()] = {
				title: span.attr("title"),
				class: $(this).attr("class")
			}
		});

		for(var type in types) {
			var a = $(document.createElement("a"))
			.addClass("nitdoc-ui-filter-link")
			.html(type)
			.attr("title", "Hide " + types[type].title)
			.attr("data-filter-class", types[type].class)
			.toggle(
				function() {
					var hclass = $(this).attr("data-filter-class");
					$(this).parents(filterSelector).find("li." + hclass).hide();
					$(this).addClass("nitdoc-ui-filter-hidden")
				},
				function() {
					var hclass = $(this).attr("data-filter-class");
					$(this).parents(filterSelector).find("li." + hclass).show();
					$(this).removeClass("nitdoc-ui-filter-hidden")
				}
			)
			$(filterSelector).find(".nitdoc-ui-filter").append(a);
		}
	},

	// Allow user to filter sidebar box entries by name
	enableSearchPageField: function(filterSelector) {
		var div = $(document.createElement("div"))
		.addClass("nitdoc-ui-searchpage-filter")
		.append(
			$(document.createElement("input"))
			.addClass("nitdoc-ui-searchpage-field")
			.addClass("nitdoc-ui-filter-field-notused")
			.attr("type", "text")
			.attr("value",	"filter...")
			.keyup(function() {
				var box = $(this).parents(".content.fullpage").find("article.filterable");
				var value = $(this).val();
				box.find("ul li:not(:icontains('" + value + "'))").hide();
				box.find("ul li:icontains('" + value + "')").show();
			})
			.focusout(function() {
				if($(this).val() == "") {
					$(this).addClass("nitdoc-ui-filter-field-notused");
					$(this).val("filter...");
				}
			})
			.focusin(function() {
				if($(this).val() == "filter...") {
					$(this).removeClass("nitdoc-ui-filter-field-notused");
					$(this).val("");
				}
			})
		);
		$(filterSelector).after(div);
		this.preloadSearchPageField();
	},

	// Prealod filter using search query
	preloadSearchPageField: function() {
		var anchor = Utils.extractAnchor(document.location.hash);
		if(!anchor || anchor.indexOf("q=") == -1) return;

		var query = anchor.substring(2);
		if(!query) return;

		$(".nitdoc-ui-searchpage-field")
		.val(query)
		.removeClass("nitdoc-ui-notused")
		.trigger("keyup");
	}
};

Filtering.enableSidebarTextFilters("nav.filterable h3");
Filtering.enableSidebarTypeFilters("nav.filterable");
Filtering.enableSearchPageField(".content.fullpage h1:contains('Search')");
