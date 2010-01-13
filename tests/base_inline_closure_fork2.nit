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
	fun foo
		!f
	do
		f
		f
	end
end

class B
	var _b: Int
	redef fun output do _b.output
end

fun maybe: Bool do return true

var a = new Inline__
a.foo !f do
	var x = new B(1)
	var y = 2
	a.foo !f do
		x.output
		y.output
		x = new B(3)
		y = 4
		if maybe then
		#alt1#break label l1
		#alt2#break label l2
		#alt3#continue label l1
		#alt4#continue label l2
		end
	end label l1
	x.output
	y.output
end label l2
5.output
