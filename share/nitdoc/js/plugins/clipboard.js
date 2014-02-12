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
 * Nitdoc Clipboard
 *
 * Allow user to copy signatures to clipboard with ZeroClipboard flahs plugin
 * See: https://github.com/zeroclipboard/ZeroClipboard
 */
define([
	"jquery",
	"jQueryUI",
	"ZeroClipboard"
], function($, ui, ZeroClipboard) {
	//FIXME mouseover makes button disappear
	$.widget("nitdoc.clipboard", {
		options: {
			btnClass: "nitdoc-ui-copy",
			btnImage: "./resources/icons/copy.png",
			dataKey: "data-untyped-signature",
			zeroConfig: {
				moviePath: "./ZeroClipboard.swf"
			}
		},

		_create: function() {
			this.btn = $("<button/>")
				.addClass(this.options.btnClass)
				.attr("data-clipboard-text", this.element.attr(this.options.dataKey))
				.append(
					$("<img/>").attr("src", this.options.btnImage)
				);
			this.element.append(this.btn);
			new ZeroClipboard(this.btn, this.options.zeroConfig);
		}
	});

	$(".signature").clipboard();
});
