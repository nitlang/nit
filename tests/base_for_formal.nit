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

import array

class G[E:Collection[Object]]
	type V: Collection[E]

	fun foo(e: E, v: V)
	do
		for i in e do i.output

		for i in v do
			'\n'.output
			for j in i do
				j.output
			end
		end
	end
end

var g = new G[Sequence[Int]]
g.foo([1,2,3],[[11,12],[21],[31,32,33]])
