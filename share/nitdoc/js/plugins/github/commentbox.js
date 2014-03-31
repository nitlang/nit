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
 * CommentBox allows user to edit comments then preview, commit or cancel the changes
 */
define([
	"jquery",
	"jQueryUI"
], function($) {
	var Location = function(location) {
		var parts = location.split(":");
		this.origin = location;
		this.path = parts[0];
		this.lstart = parseInt(parts[1].split("--")[0].split(",")[0]);
		this.tabpos = parseInt(parts[1].split("--")[0].split(",")[1]);
		this.lend = parseInt(parts[1].split("--")[1].split(",")[0]);
		this.toString = function() {
			return this.path + ":" + this.lstart + "," + this.tabpos + "--" + this.lend + ",0";
		}
	}

	$.widget("nitdoc.commentbox", {

		options: {
			previewTxt: "preview",
			commitTxt: "Commit",
			cancelTxt: "Cancel",
			commentboxTitle: "Edit comment",
			messageTxt: "Commit message"
		},

		_create: function() {
			this._id = $(".nitdoc-github-commentbox").length
			this._oldComment = this.element.val();
			this._namespace = this.element.data("comment-namespace");
			this._location = new Location(this.element.data("comment-location"));
			this.commentBox = $("<div/>")
			.hide()
			.addClass("nitdoc-github-commentbox")
			.append(
				$("<h3/>")
				.text(this.options.commentboxTitle)
			)
			.append(
				$("<dl/>")
				.addClass("nitdoc-github-commentbox-fields")
				.append(
					$("<dd/>")
					.append(
						$("<textarea/>")
						.attr("id", "nitdoc-github-commentbox-comment" + this._id)
						.addClass("nitdoc-github-commentarea")
						.keyup($.proxy(this._doKeyUp, this))
						.keydown($.proxy(this._doKeyDown, this))
					)
				)
				.append(
					$("<dt/>")
					.append(
						$("<label/>")
						.attr("for", "nitdoc-github-commentbox-message" + this._id)
						.text(this.options.messageTxt + ":")
					)
				)
				.append(
					$("<dd/>")
					.append(
						$("<textarea/>")
						.attr("id", "nitdoc-github-commentbox-message" + this._id)
						.keyup($.proxy(this._doKeyUp, this))
						.keydown($.proxy(this._doKeyDown, this))
					)
				)
				.append(
					$("<dt/>")
					.append(
						$("<input/>")
						.attr({
							id: "nitdoc-github-commentbox-signedoff" + this._id,
							type: "checkbox"
						})
						.change($.proxy(this._doSignedChange, this))
					)
					.append(
						$("<label/>")
						.attr({
							"id": "nitdoc-github-commentbox-signedoff-label" + this._id,
							"for": "nitdoc-github-commentbox-signedoff" + this._id
						})
					)
				)
			)
			this._buildButtonBar();
			this.element.after(this.commentBox);
		},

		_buildButtonBar: function() {
			this.commentBox.append(
				$("<div/>")
				.addClass("nitdoc-github-commentbox-buttons")
				.append(
					$("<a/>")
					.addClass("nitdoc-github-preview")
					.html(this.options.previewTxt)
					.click($.proxy(this._doPreviewClick, this))
				)
				.append(
					$("<button/>")
					.addClass("nitdoc-github-button")
					.addClass("nitdoc-github-commit")
					.attr("disabled", "disabled")
					.html(this.options.commitTxt)
					.click($.proxy(this._doCommitClick, this))
				)
				.append(
					$("<button/>")
					.addClass("nitdoc-github-button")
					.addClass("nitdoc-github-cancel")
					.html(this.options.cancelTxt)
					.click($.proxy(this._doCancelClick, this))
				)
			);
		},

		/* public actions */

		open: function(user, requestID) {
			this._requestID = requestID;
			var value = this.element.val();
			var isNew = !value;
			var message = "doc: " + (isNew ? "added" : "modified") + " comment for " + this._namespace;
			this._setMessage(message);
			this._setSignedOff("Signed-off-by: " + user.signedOff);
			this._setComment(value);
			this.commentBox.show();
			this.commentBox.find("textarea").width(this.commentBox.innerWidth() - 45)
			$("#nitdoc-github-commentbox-comment" + this._id).focus();
			$("#nitdoc-github-commentbox-comment" + this._id).trigger("keyup");
			$("#nitdoc-github-commentbox-message" + this._id).trigger("keyup");
			this._trigger("_open", null, {commentBox: this});
		},

		close: function() {
			this.commentBox.hide();
			this._trigger("_close", null, {commentBox: this});
		},

		/* internals */

		_setComment: function(value) {
			$("#nitdoc-github-commentbox-comment" + this._id).val(value);
		},

		_getComment: function() {
			return $("#nitdoc-github-commentbox-comment" + this._id).val();
		},

		_getMessage: function() {
			return $("#nitdoc-github-commentbox-message" + this._id).val();
		},

		_setMessage: function(message) {
			$("#nitdoc-github-commentbox-message" + this._id).val(message);
		},

		_getSignedOff: function() {
			return $("#nitdoc-github-commentbox-signedoff" + this._id).val();
		},

		_setSignedOff: function(signedoff) {
			$("#nitdoc-github-commentbox-signedoff" + this._id).val(signedoff);
			$("#nitdoc-github-commentbox-signedoff-label" + this._id).text(signedoff);
		},

		/* events */

		_doKeyUp: function(event) {
			$(event.target).height($(event.target).val().split(/\r|\n/).length * 16);
		},

		_doKeyDown: function(event) {
			if(event.keyCode == 13){
				$(event.target).css("height", ($(event.target).outerHeight() + 6) + "px");
			}
		},

		_doSignedChange: function(event) {
			if ($(event.currentTarget).is(':checked')) {
				this.commentBox.find("button.nitdoc-github-commit").removeAttr("disabled");
			} else {
				this.commentBox.find("button.nitdoc-github-commit").attr("disabled", "disabled");
			}
		},

		_doPreviewClick: function(event) {
			this._trigger("_preview", event, {
				value: this._getComment(),
				message: this._getMessage() + "\n\n" + this._getSignedOff()
			});
		},

		_doCommitClick: function() {
			this._trigger("_commit", event, {
				requestID: this._requestID,
				location: this._location,
				namespace: this._namespace,
				oldComment: this._oldComment,
				newComment: this._getComment(),
				title: this._getMessage(),
				message: this._getMessage() + "\n\n" + this._getSignedOff()
			});
		},

		_doCancelClick: function() {
			this.close();
		}
	});
});
