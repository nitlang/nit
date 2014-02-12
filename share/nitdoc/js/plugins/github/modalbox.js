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
 * Nitdoc.GitHub.ModalBox class
 */
define([
	"jquery",
], function($) {
	// Init new modal box instance
	//TODO use DJQuery.UI Dialog: https://jqueryui.com/dialog/#modal-message
	var ModalBox = {

		// Open modal box instance
		open: function(title, content, isError) {
			$("body").append(
				$(document.createElement("div"))
				.attr("id", "nitdoc-github-modal-fade")
				.addClass("nitdoc-github-fade")
			)
			.append(
				$(document.createElement("div"))
				.attr("id", "nitdoc-github-modal")
				.addClass("nitdoc-github-modal")
				.append(
					$(document.createElement("a"))
					.addClass("nitdoc-github-close")
					.attr("title", "Close")
					.append("x")
					.click(function() { ModalBox.close() })
				)
				.append("<h3>" + title + "</h3>")
				.append("<div>" + content + "</div>")
				.append(
					$(document.createElement("div"))
					.addClass("nitdoc-github-buttons")
					.append(
						$(document.createElement("button"))
						.addClass("nitdoc-github-button")
						.append("Ok")
						.click(function() { ModalBox.close() })
					)
				)
			);

			if(isError) {
				$("#nitdoc-github-modal").addClass("nitdoc-github-error");
			}

			$("#nitdoc-github-modal")
			.css({
				top: "50%",
				marginTop: -($("#nitdoc-github-modal").outerHeight() / 2) + "px",
				left: "50%",
				marginLeft: -($("#nitdoc-github-modal").outerWidth() / 2) + "px"
			})
			.find("button.nitdoc-github-button").focus();
		},

		// Close modal box instance
		close: function() {
			$("#nitdoc-github-modal").remove();
			$("#nitdoc-github-modal-fade").remove();
		}
	};
	return ModalBox;
});
