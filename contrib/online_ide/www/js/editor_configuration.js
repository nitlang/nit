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

// Sets up the editor.

ace.require("ace/ext/language_tools");
var editor = ace.edit("editor");
editor.setTheme("ace/theme/chrome");
editor.getSession().setMode("ace/mode/nit");
editor.setOptions({
	enableBasicAutocompletion: true
});
// Custom commands

// We launch the interpreter on CTRL+E shortcut.
editor.commands.addCommand({
	name: 'interpret',
	bindKey: {win: 'Ctrl-E', mac: 'Command-E'},
	exec: function(editor) {
		interpret();
	},
	readOnly: true // false if this command should not apply in readOnly mode
});

// We download the current file in editor on CTRL+S shortcut.
editor.commands.addCommand({
	name: 'save',
	bindKey: {win: 'Ctrl-S', mac: 'Command-S'},
	exec: function(editor) {
		save();
	},
	readOnly: true // false if this command should not apply in readOnly mode
});
