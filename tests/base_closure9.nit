# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

class A
	fun indent(i: Int, j, c: Char)
	do
		var ii = i
		while ii > 0 do
			' '.output
			ii -= 1
		end
		c.output
		j.output
		','.output
		i.output
	end

	fun foo(i: Int, j: Char)
		!bar
	do
		if i >= 3 then
			indent(i, j, '{')
			bar
			indent(i, j, '}')
			return
		end

		indent(i, j, '[')
		foo(i+1, 'a') !bar do
			foo(i+1, 'b') !bar do
				foo(i+1, 'c') !bar do
					indent(i, j, '<')
					bar
					indent(i, j, '>')
				end
			end
		end
		indent(i, j, ']')
	end
end

fun start
do
	var a = new A
	0.output
	a.foo(0, 'A') !bar do
		a.foo(0, 'B') !bar do
			a.foo(0, 'C') !bar do
				1.output
				#alt1# break
				#alt2# return
			end
		end
	end
	2.output
end

start
3.output
