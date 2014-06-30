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

converterModule = null;  // Global application object.

// Indicate load success.
function moduleDidLoad() {
	converterModule = document.getElementById('converter');
	// Send a message to the Native Client module.
	if (converterModule != null) {
		console.log('converterModule loaded.');
	}
}

// The 'message' event handler. This handler is fired when the NaCl module
// posts a message to the browser by calling PPB_Messaging.PostMessage()
// (in C) or pp::Instance.PostMessage() (in C++).  This implementation
// displays the result in the JS console, puts the result in the '#rez' input and make it visible.
function handleMessage(message_event) {
	if (message_event.data.hasOwnProperty('exit')){
		console.log('Nit code exited with value: ' + message_event.data.exit + '.');
	}
	else {
		console.log(message_event.data.value.valueOf());
		$('#rez').val(message_event.data.value.valueOf().toFixed(2));
		$('#rez').css('visibility', 'visible');
	}
}
