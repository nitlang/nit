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
	fun foo: Int
		break !bar do
			if maybe then
			#alt1# return
			#alt2# return 1
			#alt3# abort
			#alt4# continue
			#alt5# continue 20
			#alt6# break
			#alt7# break 1
			#alt8# break 'x'
			end
			break 20#alt9#
		end
	do
		1.output
		if maybe then bar
		3.output
		return 3
	end
end

fun maybe: Bool do return true

var a = new A
0.output
var x = a.foo !bar do break 2
x.output
0.output
x = a.foo
x.output
0.output
