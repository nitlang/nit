// This file is part of NIT ( http://www.nitlanguage.org )
//
// Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Initializes the terminal, set it to send messages to PNaCl.
function init_terminal() {
	terminal = $('#terminal').terminal(function(command, term) {
		pnacl_nitModule.postMessage(command + '\n');
	}, { greetings: false, name: 'terminal' });
}

// Edit current file name.
$('#filename').bind('click', function() {
	$(this).attr('contentEditable', true);
}).blur(
	function() {
		$(this).attr('contentEditable', false);
        });

// To launch the interpret process.
function interpret() {
	var dictionary = {
		operation: 'interpret',
		args: /*"-v -v " + */document.getElementById('filename').innerText + ".nit",
		content: editor.getValue()
	}
	pnacl_nitModule.postMessage(dictionary);
}

// To save the current editor lines in a file.
function save() {
	var blob = new Blob([editor.getValue()], {type: "text/plain;charset=utf-8"});
	saveAs(blob, document.getElementById('filename').innerText + ".nit");
}

// To load nit lib
function load_nit_lib() {
	if (!lib_files_loaded)
	{
		// We get the 'nit' folder content on github.
		$.get("https://api.github.com/repos/privat/nit/contents/?access_token=" + github_acces_token, function(data) {
			for (var i = 0; i < data.length; i++) {
				if (data[i].name == "lib") {
					// We get the list of all files in the 'lib' folder.
					$.get("https://api.github.com/repos/privat/nit/git/trees/" + data[i].sha + "?recursive=1&access_token=" + github_acces_token, function(data) {
						for (var i = 0; i < data.tree.length; i++) {
							if (data.tree[i].type == "blob") {
								lib_files_number++;
								sha_filename_map[data.tree[i].sha] = data.tree[i].path.split("/").pop();
							
								// We get the content of each file and send it to PNaCl.
								$.get(data.tree[i].url + "?access_token=" + github_acces_token, function(data) {
									var dictionary = {
										operation: 'load',
										filename: sha_filename_map[data.sha],
										content: Base64.decode(data.content),
									}
									pnacl_nitModule.postMessage(dictionary);
									lib_files.push(dictionary);
								});
							}
						}		
					});
				}
			}
		});
        }
        else {
        	// If we already have the files stored in JS, we just send them.
        	for (var i = 0; i < lib_files.length; i++) {
        		pnacl_nitModule.postMessage(lib_files[i]);
        	}
        }
}

// To code/decode base64
var Base64 = {
    _keyStr: "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",

    encode: function(input) {
        var output = "";
        var chr1, chr2, chr3, enc1, enc2, enc3, enc4;
        var i = 0;

        input = Base64._utf8_encode(input);
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
            output = output + this._keyStr.charAt(enc1) + this._keyStr.charAt(enc2) + this._keyStr.charAt(enc3) + this._keyStr.charAt(enc4);
        }
        return output;
    },


    decode: function(input) {
        var output = "";
        var chr1, chr2, chr3;
        var enc1, enc2, enc3, enc4;
        var i = 0;
        
        input = input.replace(/[^A-Za-z0-9\+\/\=]/g, "");
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
        output = Base64._utf8_decode(output);
        return output;
    },

    _utf8_encode: function(string) {
        string = string.replace(/\r\n/g, "\n");
        var utftext = "";

        for (var n = 0; n < string.length; n++) {
            var c = string.charCodeAt(n);

            if (c < 128) {
                utftext += String.fromCharCode(c);
            }
            else if ((c > 127) && (c < 2048)) {
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
    },

    _utf8_decode: function(utftext) {
        var string = "";
        var i = 0;
        var c = c1 = c2 = 0;
        
        while (i < utftext.length) {
            c = utftext.charCodeAt(i);
            if (c < 128) {
                string += String.fromCharCode(c);
                i++;
            }
            else if ((c > 191) && (c < 224)) {
                c2 = utftext.charCodeAt(i + 1);
                string += String.fromCharCode(((c & 31) << 6) | (c2 & 63));
                i += 2;
            }
            else {
                c2 = utftext.charCodeAt(i + 1);
                c3 = utftext.charCodeAt(i + 2);
                string += String.fromCharCode(((c & 15) << 12) | ((c2 & 63) << 6) | (c3 & 63));
                i += 3;
            }
        }
        return string;
    }
}
