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
	fun is_nice: Bool do return has_non_overlap_pair and has_spaced_repetition

	fun has_non_overlap_pair: Bool do
		for i in [0 .. length - 2] do
			var pair = substring(i, 2)
			if substring_from(i + 2).has(pair) then return true
		end
		return false
	end

	fun has_spaced_repetition: Bool do
		for i in [0 .. length - 3] do
			if self[i] == self[i + 2] then return true
		end
		return false
	end
end

if args.is_empty then
	print "Usage: ./intern_elves_2 input.txt"
	exit 1
end

var lines = args[0].to_path.read_lines

var nice = 0

for i in lines do
	if i.is_nice then nice += 1
end

print nice
