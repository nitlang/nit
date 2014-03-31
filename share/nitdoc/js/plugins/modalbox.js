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

define([
	"jquery",
	"jQueryUI"
], function($) {
	$.widget("nitdoc.modalbox", {
		options: {
			id: "nitdoc-dialog",
			classes: "nitdoc-dialog",
			css: {},
			title: "Title",
			isError: false,
		},

		_create: function() {
			this._addFade();
			this._makeDialog();
		},

		open: function() {
			this._dialog
			.show()
			.css({
				top: "50%",
				marginTop: -(this._dialog.outerHeight() / 2) + "px",
				left: "50%",
				marginLeft: -(this._dialog.outerWidth() / 2) + "px"
			})
			.find(".nitdoc-dialog-buttons button:first").focus();

			this._fade.show();
		},

		close: function() {
			this._fade.hide();
			this._dialog.hide();
		},

		_addFade: function() {
			this._fade = $("<div/>")
			.hide()
			.attr("id", "nitdoc-dialog-fade-" + this.options.id)
			.addClass("nitdoc-dialog-fade");
			$("body").append(this._fade);
		},

		_makeDialog: function() {
			this._dialog = $("<div/>")
			.hide()
			.attr("id", this.options.id)
			.addClass(this.options.classes)
			.css(this.options.css)
			.append(
				$("<div/>")
				.addClass("nitdoc-dialog-header")
				.append(
					$("<h3/>")
				 	.text(this.options.title)
				)
				.append(
					$("<button/>")
					.addClass("nitdoc-dialog-close")
					.append("x")
					.click($.proxy(this.close, this))
				)
			)
			.append(
				$("<div/>")
				.addClass("nitdoc-dialog-content")
				.html(this.element)
			)
			.append(
				$("<div/>")
				.addClass("nitdoc-dialog-buttons")
				.append(
					$("<button/>")
					.append("Ok")
					.click($.proxy(this.close, this))
				)
			);
			if(this.options.isError) {
				this._dialog.addClass("nitdoc-dialog-error");
			}
			$("body").append(this._dialog);
		}
	});
});
