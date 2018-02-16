# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2016 Frédéric Vachon <fredvac@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# GNU readline library wrapper
module readline is ldflags "-lreadline"

import prompt

in "C" `{
	#include <readline/readline.h>
	#include <readline/history.h>
`}

private fun native_readline(prompt: CString): CString `{
	return readline(prompt);
`}

private fun native_add_history(data: CString) `{
	if (data == NULL) return;
	add_history(data);
`}

# Set emacs keybindings mode
fun set_vi_mode `{ rl_editing_mode = 0; `}

# Set emacs keybindings mode
fun set_emacs_mode `{ rl_editing_mode = 1; `}

# Use the GNU Library readline function
# Returns `null` if EOF is read
# If `with_history` is true, it will save all commands in the history except
# empty strings and white characters strings
fun readline(message: String, with_history: nullable Bool): nullable String do
	var line = native_readline(message.to_cstring)
	if line.address_is_null then return null

	var nit_str = line.to_s

	if with_history != null and with_history then
		if nit_str.trim != "" then native_add_history(line)
	end

	return nit_str
end

# Adds the data String to the history no matter what it contains
fun add_history(data: String) do native_add_history data.to_cstring

redef fun prompt(prompt, add_history) do return readline(prompt.to_s, add_history)

redef fun prompt_add_history(line) do native_add_history(line.to_cstring)
