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
 * Nitdoc.Github comment edition module
 *
 * Allows user to modify source code comments directly from the Nitdoc
 */
define([
	"jquery",
	"base64",
	"Markdown.Converter",
	"plugins/utils",
	"plugins/github/ui",
], function($, Base64, mkdown, utils) {

/*
 * Nitdoc.GitHub.Utils module
 */

	return {
		// Extract infos from string location "lib/standard/collection/array.nit:457,1--458,0"
		parseLocation: function(location) {
			var parts = location.split(":");
			var loc = new Object();
			loc.origin = location;
			loc.path = parts[0];
			loc.lstart = parseInt(parts[1].split("--")[0].split(",")[0]);
			loc.tabpos = parseInt(parts[1].split("--")[0].split(",")[1]);
			loc.lend = parseInt(parts[1].split("--")[1].split(",")[0]);
			return loc;
		},

		// Meld modified comment into file conten
		mergeComment: function(fileContent, comment, location) {
			// replace comment in file content
			var res = new String();
			var lines = fileContent.split("\n");
			// copy lines fron 0 to lstart
			for(var i = 0; i < location.lstart - 1; i++) {
				res += lines[i] + "\n";
			}
			// set comment
			if(comment && comment != "") {
				var commentLines = comment.split("\n");
				for(var i = 0; i < commentLines.length; i++) {
					var line = commentLines[i];
					var tab = location.tabpos > 1 ? "\t" : "";
					res += tab + (line.length > 0 ? "# " : "#") + line + "\n";
				}
			}
			// copy lines fron lend to end
			for(var i = location.lend - 1; i < lines.length; i++) {
				res += lines[i];
				if(i < lines.length - 1) { res += "\n"; }
			}
			return res;
		}
	}
});
