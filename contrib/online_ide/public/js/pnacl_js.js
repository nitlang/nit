// This file is part of pnacl_nit ( http://www.pnacl_nitlanguage.org )
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

pnacl_nitModule = null;  // Global application object.
var github_acces_token = '9d9412ce7f8223348287aac676b2835baa8f0cfc'; // Github API token.
var lib_files = []; // Stores the Nit lib files in JS.
var lib_files_number = 0;
var sha_filename_map = {}; // Map that stores files with their 'sha' as key and 'name' as value
var lib_files_loaded = false;
var terminal = null; //terminal object.

// Indicate load success.
function moduleDidLoad() {
	pnacl_nitModule = document.getElementById('pnacl_nit');
	if (pnacl_nitModule != null) {
		// When the module is loaded, we load the lib and init the terminal.
		console.log('pnacl_nitModule loaded.');
		load_nit_lib();
		init_terminal();
	}
}

// The 'message' event handler. This handler is fired when the NaCl module
// posts a message to the browser by calling PPB_Messaging.PostMessage()
// (in C) or pp::Instance.PostMessage() (in C++).  This implementation
// displays the result in the JS console, puts the result in the '#rez' input and make it visible.
function handleMessage(message_event) {
	if (message_event.data.hasOwnProperty('exit')){
		// If the code exited, shows the error code and reloads Nit lib after the launch of a new thread.
		console.log('Nit code exited with value: ' + message_event.data.exit + '.');
		console.log(message_event.data.exit_thread);
		load_nit_lib();
	}
	else if (!message_event.data.hasOwnProperty('operation'))
	{
		if(message_event.data == "\n") {
			// Do nothing.
		}
		else {
			terminal.echo(message_event.data);
		}
	}
	else if (message_event.data.operation == 'load_response'){
		// We use this to count how many files were loaded for the lib in PNaCl,
		// if the number matches the number of files loaded from Github,
		// we know we have all the files.
		if (message_event.data.files_number == lib_files_number) {
			console.log('Nit library loaded (' + message_event.data.files_number + ' files), ready to go.');
			lib_files_loaded = true;
		}
	}
}

// Called if the application calls exit(n), abort(), or crashes.
function handleCrash() {
	// We remove the modules and add a new one.
	$( "#pnacl_nit" ).remove();
	$( "#listener" ).append("<embed id='pnacl_nit' width=0 height=0 src='/pnacl/pnacl_nit.nmf' type='application/x-pnacl' />");
}
