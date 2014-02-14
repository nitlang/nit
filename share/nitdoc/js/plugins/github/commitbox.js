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
*/

/*
 * CommitBox allows user to add a message and sign its commit
 */
define([
	"jquery",
	"jQueryUI"
], function($) {
	$.widget("nitdoc.commitbox", {

		options: {
			title: "Commit changes"
		},

		_create: function() {
			this._fade = this._buildFade();
			$("body").append(this._fade);
			this._commitBox = $("<div/>")
				.hide()
				.attr("id", "nitdoc-github-commitBox")
				.addClass("nitdoc-github-modal")
				.append(
					$("<a/>")
					.addClass("nitdoc-github-close")
					.attr("title", "Close")
					.append("x")
					.click($.proxy(this.close, this))
				)
				.append("<h3>" + this.options.title + "</h3>")
				.append(
					$("<div/>")
					.append(
						$("<label/>")
						.attr("for", "nitdoc-github-commit-message")
					)
					.append($("<br/>"))
					.append(
						$("<textarea/>")
						.attr("id", "nitdoc-github-commit-message")
					)
					.append($("<br/>"))
					.append(
						$("<input/>")
						.attr({
							id: "nitdoc-github-commit-signedoff",
							type: "checkbox"
						})
						.change($.proxy(this._doSignedChange, this))
					)
					.append(
						$("<label/>")
						.attr({
							"id": "nitdoc-github-commit-signedoff-label",
							"for": "nitdoc-github-commit-signedoff"
						})
					)
				).append(
					$("<div/>")
					.addClass("nitdoc-github-buttons")
					.append(
						$("<button/>")
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
						.click($.proxy(this._doCommitClick, this))
					)
				);
			$("body").append(this._commitBox);
		},

		open: function(namespace, user, isNew) {
			var message = "doc: " + (isNew ? "added" : "modified") + " comment for " + namespace;
			this._setMessage(message);
			this._setSignedOff(user.signedOff);
			this._fade.show();
			this._commitBox.show();
			this._commitBox.css({
				top: "50%",
				marginTop: -(this._commitBox.outerHeight() / 2) + "px",
				left: "50%",
				marginLeft: -(this._commitBox.outerWidth() / 2) + "px"
			})
			.find("#nitdoc-github-commit-message").focus();
		},

		close: function() {
			this._commitBox.hide();
			this._fade.hide();
		},

		/* internals */

		_buildFade: function() {
			return $("<div/>")
				.hide()
				.attr("id", "nitdoc-github-commitBox-fade")
				.addClass("nitdoc-github-fade")
		},

		_getMessage: function() {
			return $("#nitdoc-github-commit-message").val();
		},

		_setMessage: function(message) {
			$("#nitdoc-github-commit-message").val(message);
		},

		_getSignedOff: function() {
			return $("#nitdoc-github-commit-message").val();
		},

		_setSignedOff: function(signedoff) {
			$("#nitdoc-github-commit-signedoff").val(signedoff);
			$("#nitdoc-github-commit-signedoff-label").text(signedoff);
		},

		/* events */

		_doSignedChange: function(event) {
			if ($(event.currentTarget).is(':checked')) {
				$("#nitdoc-github-commit-button").removeAttr("disabled");
			} else {
				$("#nitdoc-github-commit-button").attr("disabled", "disabled");
			}
		},

		_doCommitClick: function(event) {
			$(event.target).text("Commiting...");
			$(event.target).attr("disabled", "disabled");
			this._trigger("_commit", event, {
				message: this._getMessage(),
				signedoff: this._getSignedOff()
			});
		},

		_doCancelClick: function(event) {
			this._trigger("_cancel", event);
		}
	});
});
