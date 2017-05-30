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

redef class FlatText
	fun look_and_say: String do
		if is_empty then return ""
		if length == 1 then return "1{self[0]}"
		var b = new FlatBuffer
		var cnt = 1
		var its = items
		for i in [1 .. bytelen[ do
			if its[i] == its[i - 1] then
				cnt += 1
			else
				b.append(cnt.to_s)
				b.add its[i - 1].ascii
				cnt = 1
			end
		end
		b.append(cnt.to_s)
		b.add(chars.last)
		return b.to_s
	end
end

var key = "3113322113"

for i in [0 .. 40[ do key = key.as(FlatString).look_and_say.to_s

print "After 40 iterations {key.length}"

for i in [0 .. 10[ do key = key.as(FlatString).look_and_say.to_s

print "After 50 iterations {key.length}"
