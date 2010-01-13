# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

class Inline__
	fun foo1: Int
		!f: Int
	do
		f.output
		return 5
	end

	fun foo2: Int
		!f: Int
	do
		f.output
		return	2
	end
end

fun maybe: Bool do return true

var a = new Inline__
var x = a.foo1 !f do
	do
		var y = a.foo2 !f do
			if maybe then
			#alt1#break label l1 20
			#alt2#break label l2 50
			#alt3#break label l3
			#alt4#continue label l1 10
			#alt5#continue label l2 40
			end
			continue 1
		end label l1
		y.output
		3.output
	end label l3
	continue 4
end label l2
x.output
6.output
