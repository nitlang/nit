# This file is part of NIT ( https://nitlanguage.org ).
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

var ul = new UnrolledList[Object]
var ll = new List[Object]

for i in 1000.times do
	var val = 100.rand+1

	var act = 3.rand
	#print "+"+act.to_s
	if act == 0 then
		ll.add val
		ul.add val
	else if act == 1 then
		ll.unshift val
		ul.unshift val
	else if act == 2 then
		var index = ll.length.rand
		ll.insert(val, index)
		ul.insert(val, index)
	else abort

	#assert ll == ul
end

for i in 200.times do
	var act = 3.rand
	#print "-"+act.to_s
	if act == 0 then
		var o = ll.pop
		var c = ul.pop
		assert o == c
	else if act == 1 then
		var o = ll.shift
		var c = ul.shift
		assert o == c
	else if act == 2 then
		var index = ll.length.rand
		ll.remove_at(index)
		ul.remove_at(index)
	else abort

	#assert ll == ul
end

while ul.not_empty do
	var c = ul.shift
	var o = ll.shift
	assert c == o else print "{c} vs {o}"
end
assert ll.is_empty
