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
 * Utils module
 */
define([
	"jquery",
], function($) {

	String.prototype.startsWith = function(prefix, caseSensitive) {
		if(caseSensitive) {
			return this.toUpperCase().indexOf(prefix.toUpperCase()) === 0;
		}
		return this.indexOf(prefix) === 0;
	}

	// Compare two strings using Sorensen-Dice Coefficient
	// see: http://en.wikipedia.org/wiki/S%C3%B8rensen%E2%80%93Dice_coefficient
	String.prototype.dice = function(other) {
		var length1 = this.length - 1;
		var length2 = other.length - 1;
		if(length1 < 1 || length2 < 1) return 0;

		var bigrams2 = [];
		for(var i = 0; i < length2; i++) {
			bigrams2.push(other.substr(i, 2));
		}

		var intersection = 0;
		for(var i = 0; i < length1; i++) {
			var bigram1 = this.substr(i, 2);
			for(var j = 0; j < length2; j++) {
				if(bigram1 == bigrams2[j]) {
					intersection++;
					bigrams2[j] = null;
					break;
				}
			}
		}
		return (2.0 * intersection) / (length1 + length2);
	}

	// JQuery Case Insensitive :icontains selector
	$.expr[':'].icontains = function(obj, index, meta, stack){
		return (obj.textContent.replace(/\[[0-9]+\]/g, "") || obj.innerText.replace(/\[[0-9]+\]/g, "") || jQuery(obj).text().replace(/\[[0-9]+\]/g, "") || '').toLowerCase().indexOf(meta[3].toLowerCase()) >= 0;
	};

	return {
		// Extract anchor part (after #) from URL string
		extractAnchor: function(url) {
			var index = url.indexOf("#");
			if (index >= 0) {
				return url.substring(index + 1);
			}
			return null;
		}
	};
});
