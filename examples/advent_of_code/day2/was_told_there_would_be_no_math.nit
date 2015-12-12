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

fun min(ints: Int...): Int do
	var ln = ints.length
	if ln == 0 then return 0
	if ln == 1 then return ints.first
	var min = ints.first
	for j in [1 .. ints.length[ do
		var curr = ints[j]
		if curr < min then min = curr
	end
	return min
end

if args.is_empty then
	print "Usage: ./was_told_there_would_be_no_math input.txt"
	exit 1
end

var lns = args[0].to_path.read_lines

var full_area = 0

for line in lns do
	var parts = line.split('x')
	var l = parts[0].to_i
	var w = parts[1].to_i
	var h = parts[2].to_i
	var area_lw = l * w
	var area_wh = w * h
	var area_hl = h * l
	var slack = min(area_lw, area_wh, area_hl)
	full_area += 2 * area_lw + 2 * area_wh + 2 * area_hl + slack
end

print full_area
