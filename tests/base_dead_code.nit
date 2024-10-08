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

0.output
var x = null
for i in [0..2[ do
	if x != null then
		# This is dead code
		x.output
		x.first.output
		x.as(String).output
		x.as not null.output
		true.output
		false.output
		1.output
		1u8.output
		'1'.output
		"1".output
		[1].output
		[0..1].output
		for j in x do j.output
		x = x.as(String)
		assert x isa String
	end
	#alt1#x = [1]
	#alt2#x = 1
end
1.output
