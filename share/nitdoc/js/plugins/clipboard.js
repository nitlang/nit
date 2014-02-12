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
 * Allow user to copy signatures to clipboard
 */
define([
	"jquery",
	"ZeroClipboard"
], function($, ZeroClipboard) {

	//FIXME mouseover makes button disappear
	var Clipboard = {
		// Allow user to copy signatures to clipboard with ZeroClipboard flahs plugin
		// See: https://github.com/zeroclipboard/ZeroClipboard
		enable: function(copySelector) {
			$(copySelector).each(function() {
				var btn = $(document.createElement("button"))
				.addClass("nitdoc-ui-copy")
				.attr("data-clipboard-text", $(this).attr("data-untyped-signature"))
				.append(
					$(document.createElement("img"))
					.attr("src", './resources/icons/copy.png')
				);
				$(this).append(btn);
			});

			var clip = new ZeroClipboard($("button.nitdoc-ui-copy"), {
				moviePath: "./ZeroClipboard.swf"
			});
		}
	}

	Clipboard.enable(".signature");

	return Clipboard;
});
