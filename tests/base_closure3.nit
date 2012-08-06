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
	fun foo(i, j: Int)
		!bar(k, l: Int, a: A)
	do
		i.output
		bar(i+1, j-1, self)
		#alt1#bar(i+1, j-1)
		j.output
	end
end

fun maybe: Bool do return true

var a = new A
0.output
a.foo(1,8) !bar x, y, b do #alt2#
#alt2#a.foo(1,8) !bar x, y do
	x.output
	b.foo(x+1, y-1) !bar z, t, c do
		z.output
		if maybe then
		#alt4#break
		#alt5#break 'x'
		#alt6#continue
		#alt7#continue 'x'
		#alt8#return
		#alt9#return 'x'
		end
		t.output
	end
	y.output
end
9.output
