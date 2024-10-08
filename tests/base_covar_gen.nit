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

class G[E]
	var e: E
	fun sete(e: E) do self.e = e
	redef fun output
	do
		'G'.output
		var e = self.e
		if e isa G[Object] then
			e.output
		else if e isa Int then
			0.output
		else
			'\n'.output
		end
	end
end

var a = new G[Object](1)
var x = new G[Int](10) #1alt1# var x = new G[G[Object]](a)
var b: G[Object] = x
#alt1# b.sete 100
#alt2# b.e = 100
#alt3# b.sete a
#alt4# b.e = a
x.output
