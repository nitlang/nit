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

import more_collections

redef class Text
	fun is_valid: Bool do return has_succeeding and not has_forbidden and has_non_overlapping_pairs

	fun has_succeeding: Bool do
		for i in [2 .. length[ do
			var i0 = self[i - 2]
			var i1 = self[i - 1]
			var i2 = self[i]
			if i0.successor(1) == i1 and i1.successor(1) == i2 then return true
		end
		return false
	end

	fun has_forbidden: Bool do
		for i in self do
			if i == 'i' then return true
			if i == 'o' then return true
			if i == 'l' then return true
		end
		return false
	end

	fun has_non_overlapping_pairs: Bool do
		var non_overlap = 0
		for k, v in pairs do
			non_overlap += 1
			for i in [1 .. v.length[ do
				if v[i - 1] - v[i] < 2 then
					non_overlap -= 1
					break
				end
			end
		end
		return non_overlap >= 2
	end

	fun pairs: MultiHashMap[Text, Int] do
		var pairs = new MultiHashMap[Text, Int]
		for i in [1 .. length[ do
			if self[i - 1] == self[i] then
				pairs[substring(i - 1, 2)].add(i - 1)
			end
		end
		return pairs
	end
end

redef class Buffer
	fun increment do
		var pos = length - 1
		loop
			var c = self[pos]
			var nc = c.successor(1)
			if nc > 'z' then
				nc = 'a'
				pos -= 1
				self[pos + 1] = nc
				continue
			end
			self[pos] = nc
			break
		end
	end
end

var b = new FlatBuffer.from("cqjxjnds")
b.increment
while not b.is_valid do b.increment
print b
b.increment
while not b.is_valid do b.increment
print b
