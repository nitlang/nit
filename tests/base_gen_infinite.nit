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

import kernel

class G[E: Object]
	var sub: E

	fun explode(i: Int): G[Object]
	do
		if i<=0 then return self
		var gge = new G[G[E]](self)
		return gge.explode(i-1)
	end

	fun count: Int
	do
		var e: Object = self.sub
		if e isa G[Object] then return e.count + 1 else return 1
	end
end

var g1 = new G[Int](1)
g1.count.output
var g2 = new G[G[Int]](g1)
g2.count.output
var g3 = g1.explode(2)
g3.count.output
var g30 = g1.explode(29)
g30.count.output
