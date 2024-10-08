# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# Count characters, words and lines of the standard input

var c = 0
var w = 0
var l = 0

var inw = false
while not stdin.eof do
	var i = stdin.read_char
	if i != null then
		c = c + 1
		if i > ' ' then
			if not inw then
				inw = true
				w = w + 1
			end
		else
			inw = false
			if i == '\n' then
				l = l + 1
			end
		end
	end
end

print("{l} {w} {c}")
