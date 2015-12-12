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
	fun escaped_length: Int do
		var max = length
		var st = 0
		var ln = 0
		while st < max do
			if self[st] == '\\' then
				if self[st + 1] == 'x' then
					st += 2
				end
				st += 1
			end
			st += 1
			ln += 1
		end
		return ln
	end
end

if args.is_empty then
	print "Usage: ./str_diff input.txt"
	exit 1
end

var lines = args[0].to_path.read_lines

var total_diff = 0

for i in lines do
	var ln = i.length
	var escaped = i.substring(1, ln - 2).escaped_length
	total_diff += ln - escaped
end

print total_diff
