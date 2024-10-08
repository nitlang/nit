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

class Foo
	fun start do end
	fun finish do end
	redef fun output do 0.output
end
var foo = new Foo
var maybe: Bool = true

#alt1#var a = 0
#alt1#var b = 0
#alt1#var c = 0

if maybe then
	if maybe then var a = 1 else var a = 2
	while maybe do
		while false do var a = 3
		loop
			do
				do var a = 4
				with a = foo do
					a.output
					with b = foo do var c = 5
					var b = 6
					b.output
					var c = 7
					c.output
				end

				for a in [8] do
					a.output
					for b in [9] do var c = 10
					var b = 11
					b.output
					var c = 12
					c.output
				end
				assert maybe else
					assert maybe else var a = 13
					var a = 14
					a.output
				end
				var a = 15
				a.output
			end
			var a = 16
			a.output
			if maybe then break
		end
		var a = 17
		a.output
		if maybe then break
	end
	var a = 18
	a.output
else if maybe then
	var a = 19
	a.output
else
	var a = 20
	a.output
end
var a = 21
a.output
