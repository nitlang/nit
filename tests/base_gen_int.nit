# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import end

interface Object
	fun i_to_s(i: Int)
	do
		i.output
	end
end

class A
	init do end
end

class Int
	fun output is intern
	fun +(i: Int): Int is intern
	redef fun i_to_s(i: Int)
	do
		(self+i).output
	end
end

class G[E: Object]
	fun i_to_s2(a: E, i: Int)
	do
		a.i_to_s(i)
	end

	init do end
end

var a = new A
var b = 1
var g = new G[Object]
var h = new G[Int]
a.i_to_s(10)
b.i_to_s(20)
g.i_to_s2(a,30)
g.i_to_s2(b,40)
#alt1#h.i_to_s2(a,50)
h.i_to_s2(b,60)
