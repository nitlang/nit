# This file is part of NIT ( http://www.nitlanguage.org ).
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

redef class Text
	fun is_nice: Bool do return vowels >= 3 and has_doubles and not has_any("ab","cd", "pq", "xy")

	fun vowels: Int do
		var cnt = 0
		for i in self do if i.is_vowel then cnt += 1
		return cnt
	end

	fun has_doubles: Bool do
		for i in [1 .. length[ do
			if self[i] == self[i - 1] then return true
		end
		return false
	end

	fun has_any(strs: String...): Bool do
		for i in strs do if self.has(i) then return true
		return false
	end
end

redef class Char
	fun is_vowel: Bool do
		if self == 'a' then return true
		if self == 'e' then return true
		if self == 'i' then return true
		if self == 'o' then return true
		if self == 'u' then return true
		return false
	end
end

if args.is_empty then
	print "Usage: ./intern_elves input.txt"
	exit 1
end

var lines = args[0].to_path.read_lines

var nice = 0
for i in lines do
	if i.is_nice then nice += 1
end

print nice
