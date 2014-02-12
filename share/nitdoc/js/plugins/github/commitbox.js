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
 * Nitdoc.GitHub.CommitBox instance
 */
define([
	"jquery",
	"plugins/github/ui",
], function($, UI) {
console.log(UI);
	// Init new commit box instance
	var CommitBox = {
		
		// Open commit box instance
		open: function(infos) {
			$("body").append(
				$(document.createElement("div"))
				.attr("id", "nitdoc-github-commitBox-fade")
				.addClass("nitdoc-github-fade")
			);
			$("body").append(
				$(document.createElement("div"))
				.attr("id", "nitdoc-github-commitBox")
				.addClass("nitdoc-github-modal")
				.append(
					$(document.createElement("a"))
					.addClass("nitdoc-github-close")
					.attr("title", "Close")
					.append("x")
					.click(function() { CommitBox.close() })
				)
				.append("<h3>Commit changes</h3>")
				.append(
					$(document.createElement("div"))
					.append(
						$(document.createElement("label"))
						.attr("for", "nitdoc-github-commit-message")
					)
					.append("<br/>")
					.append(
						$(document.createElement("textarea"))
						.attr("id", "nitdoc-github-commit-message")
						.append("doc: " + (infos.isNew ? "added" : "modified") + " comment for " + infos.namespace)
					)
					.append("<br/>")
					.append(
						$(document.createElement("input"))
						.attr({
							id: "nitdoc-github-commit-signedoff",
							type: "checkbox",
							value: "Signed-off-by: " + infos.user.signedOff
						})
						.change(function(e) {
							if ($(this).is(':checked')) {
								$("#nitdoc-github-commit-button").removeAttr("disabled");
							} else {
								$("#nitdoc-github-commit-button").attr("disabled", "disabled");
							}
						})
					)
					.append(
						$(document.createElement("label"))
						.attr("for", "nitdoc-github-commit-signedoff")
						.text("Signed-off-by: " + infos.user.signedOff)
					)
				).append(
					$(document.createElement("div"))
					.addClass("nitdoc-github-buttons")
					.append(
						$(document.createElement("button"))
						.attr({
							id: "nitdoc-github-commit-button",
							disabled: "disabled"
						})
						.addClass("nitdoc-github-button")
						.append(
							$(document.createElement("img"))
							.attr("src", "resources/icons/github-icon.png")
						)
						.append("Commit")
						.mousedown(function() {
							$(this).text("Commiting...");
						})
						.mouseup(function() {
							infos.message = $("#nitdoc-github-commit-message").val() + "\n\n" + infos.user.signedOff;
							UI.saveChanges(infos);
						})
					)
				)
			);

			$("#nitdoc-github-commitBox")
			.css({
				top: "50%",
				marginTop: -($("#nitdoc-github-commitBox").outerHeight() / 2) + "px",
				left: "50%",
				marginLeft: -($("#nitdoc-github-commitBox").outerWidth() / 2) + "px"
			})
			.find("#nitdoc-github-commit-message").focus();
		},

		// Close commit box instance
		close: function() {
			$("#nitdoc-github-commitBox").remove();
			$("#nitdoc-github-commitBox-fade").remove();
		}
	}

	return CommitBox;
});
