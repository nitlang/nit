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

/* base64 */

String.prototype._keyStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";

// public method for encoding
String.prototype.base64Encode = function () {
	var output = "";
	var chr1, chr2, chr3, enc1, enc2, enc3, enc4;
	var i = 0;

	input = this._utf8_encode();

	while (i < input.length) {

		chr1 = input.charCodeAt(i++);
		chr2 = input.charCodeAt(i++);
		chr3 = input.charCodeAt(i++);

		enc1 = chr1 >> 2;
		enc2 = ((chr1 & 3) << 4) | (chr2 >> 4);
		enc3 = ((chr2 & 15) << 2) | (chr3 >> 6);
		enc4 = chr3 & 63;

		if (isNaN(chr2)) {
			enc3 = enc4 = 64;
		} else if (isNaN(chr3)) {
			enc4 = 64;
		}

		output = output +
		this._keyStr.charAt(enc1) + this._keyStr.charAt(enc2) +
		this._keyStr.charAt(enc3) + this._keyStr.charAt(enc4);

	}
	return output;
};

// public method for decoding
String.prototype.base64Decode = function () {
	var output = "";
	var chr1, chr2, chr3;
	var enc1, enc2, enc3, enc4;
	var i = 0;

	input = this.replace(/[^A-Za-z0-9\+\/\=]/g, "");

	while (i < input.length) {

		enc1 = this._keyStr.indexOf(input.charAt(i++));
		enc2 = this._keyStr.indexOf(input.charAt(i++));
		enc3 = this._keyStr.indexOf(input.charAt(i++));
		enc4 = this._keyStr.indexOf(input.charAt(i++));

		chr1 = (enc1 << 2) | (enc2 >> 4);
		chr2 = ((enc2 & 15) << 4) | (enc3 >> 2);
		chr3 = ((enc3 & 3) << 6) | enc4;

		output = output + String.fromCharCode(chr1);

		if (enc3 != 64) {
			output = output + String.fromCharCode(chr2);
		}
		if (enc4 != 64) {
			output = output + String.fromCharCode(chr3);
		}

	}
	return output._utf8_decode();;
};

// private method for UTF-8 encoding
String.prototype._utf8_encode = function () {
	string = this.replace(/\r\n/g,"\n");
	var utftext = "";

	for (var n = 0; n < string.length; n++) {

		var c = string.charCodeAt(n);

		if (c < 128) {
			utftext += String.fromCharCode(c);
		}
		else if((c > 127) && (c < 2048)) {
			utftext += String.fromCharCode((c >> 6) | 192);
			utftext += String.fromCharCode((c & 63) | 128);
		}
		else {
			utftext += String.fromCharCode((c >> 12) | 224);
			utftext += String.fromCharCode(((c >> 6) & 63) | 128);
			utftext += String.fromCharCode((c & 63) | 128);
		}

	}
	return utftext;
};

// private method for UTF-8 decoding
String.prototype._utf8_decode = function () {
	var string = "";
	var i = 0;
	var c = c1 = c2 = 0;

	while ( i < this.length ) {

		c = this.charCodeAt(i);

		if (c < 128) {
			string += String.fromCharCode(c);
			i++;
		}
		else if((c > 191) && (c < 224)) {
			c2 = this.charCodeAt(i+1);
			string += String.fromCharCode(((c & 31) << 6) | (c2 & 63));
			i += 2;
		}
		else {
			c2 = this.charCodeAt(i+1);
			c3 = this.charCodeAt(i+2);
			string += String.fromCharCode(((c & 15) << 12) | ((c2 & 63) << 6) | (c3 & 63));
			i += 3;
		}

	}
	return string;
};

// JQuery Case Insensitive :icontains selector
$.expr[':'].icontains = function(obj, index, meta, stack){
	return (obj.textContent.replace(/\[[0-9]+\]/g, "") || obj.innerText.replace(/\[[0-9]+\]/g, "") || jQuery(obj).text().replace(/\[[0-9]+\]/g, "") || '').toLowerCase().indexOf(meta[3].toLowerCase()) >= 0;
};

var Utils = {
	// Extract anchor part (after #) from URL string
	extractAnchor: function(url) {
		var index = url.indexOf("#");
		if (index >= 0) {
			return url.substring(index + 1);
		}
		return null;
	},

	delayEvent: function(handler, event) {
		if(this.delayEvent.timeout) {
			clearTimeout(this.delayEvent.timeout);
		}
		this.delayEvent.timeout = setTimeout(function() {
		    handler.call(event);
		}, 50);
	}
};
