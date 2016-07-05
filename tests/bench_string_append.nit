# This file is part of NIT ( http://www.nitlanguage.org ).
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

var n = 4
if not args.is_empty then
	n = args.first.to_i
end

var s = "*"
var i = 0
while i < n do
	var s2: Buffer = new FlatBuffer.from("Je dis «")
	s2.append(s)
	s2.append("» et redis «")
	s2.append(s)
	s2.append("» et deux fois de plus : «")
	s2.append(s)
	s2.append(s)
	s2.append("».\n")
	s = s2.to_s
	i = i + 1
end
print(s.search_all("Je dis «Je dis").length)

i = 0
var j = 0
while j >= 0 do
	var r = s.search_from("Je dis «Je dis", j)
	if r == null then break
	i = i + 1
	j = r.from + 1
end
print(i)

i = 0
for k in [0..s.length[ do
	var c = s.chars[k]
	if c >= 'a' and c <= 'z' then
		i = i + 1
	end
end
print(i)
