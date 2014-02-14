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
	$.widget("nitdoc.commentbox", {

		options: {
			previewTxt: "preview",
			commitTxt: "Commit...",
			cancelTxt: "Cancel"
		},

		_create: function() {
			this.commentBox = $("<div/>")
			.addClass("nitdoc-github-commentbox")
			.append(
				$("<textarea/>")
				.addClass("nitdoc-github-commentarea")
				.keyup($.proxy(this._doKeyUp, this))
				.keydown($.proxy(this._doKeyDown, this))
			)
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
				.html(this.options.commitTxt)
				.click($.proxy(this._doCommitClick, this))
			)
			.append(
				$("<button/>")
				.addClass("nitdoc-github-button")
				.addClass("nitdoc-github-cancel")
				.html(this.options.cancelTxt)
				.click($.proxy(this._doCancelClick, this))
			);

			this.element.after(this.commentBox);
		},

		/* public actions */

		open: function(value) {
			this._originalValue = value;
			this._setValue(value);
			this._autosize();
			this.commentBox.show();
			var cbw = this.commentBox.innerWidth();
			var taw = this._getArea().outerWidth();
			this._getArea().width(cbw - (taw - cbw));
			this.commentBox.find("textarea").trigger("keyup");
			this.commentBox.find("textarea").focus();
			this._trigger("_open", null, {commentBox: this});
		},

		close: function() {
			this.commentBox.hide();
			this._trigger("_close", null, {commentBox: this});
		},

		/* internals */

		_autosize: function() {
			this._getArea().height(this._getArea().val().split(/\r|\n/).length * 16);
		},

		_getArea: function() {
			return this.commentBox.find("textarea.nitdoc-github-commentarea");
		},

		_setValue: function(value) {
			this._getArea().val(value);
		},

		_getValue: function() {
			return this._getArea().val();
		},

		/* events */

		_doKeyUp: function() {
			if(this._getValue() == this._originalValue) {
				this.commentBox.find("button.nitdoc-github-commit").attr("disabled", "disabled");
			} else {
				this.commentBox.find("button.nitdoc-github-commit").removeAttr("disabled");
			}
			this._autosize();
		},

		_doKeyDown: function(event) {
			if(event.keyCode == 13){
				this._getArea().css("height", (this._getArea().outerHeight() + 6) + "px");
			}
		},

		_doPreviewClick: function(event) {
			this._trigger("_preview", event, {value: this._getValue()});
		},

		_doCommitClick: function() {
			this._trigger("_commit", {value: this._getValue()});
		},

		_doCancelClick: function() {
			this.close();
		}
	});
});
