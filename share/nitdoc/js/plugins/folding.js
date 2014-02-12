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
 * Nitdoc Folding
 *
 * Allow user to fold sidebar blocks
 */
define([
	'jquery',
	'jQueryUI'
], function($) {
	$.widget("nitdoc.folding", {

		options: {
			foldText: "-",
			unfoldText: "+",
			linkHolder: "h3",
			linkClass: "nitdoc-ui-fold",
			linkCSS: {
				"cursor": "pointer"
			}
		},

		_create: function() {
			this._foldLink = $("<a/>")
				.addClass(this.options.linkClass)
				.text(this.options.foldText);

			this.element.find(this.options.linkHolder)
			.prepend(this._foldLink)
			.css(this.options.linkCSS)
			.toggle(
				$.proxy(this._fold, this),
				$.proxy(this._unfold, this)
			);
		},

		_fold: function(event) {
			this._foldLink.text(this.options.unfoldText);
			this.element.find(this.options.linkHolder).nextAll().toggle();
		},

		_unfold: function() {
			this._foldLink.text(this.options.foldText);
			this.element.find(this.options.linkHolder).nextAll().toggle();
		}
	});

	$(".sidebar nav").folding();
});
