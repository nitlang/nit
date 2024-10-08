# This file is part of NIT ( https://nitlanguage.org ).
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
	var x: Int #alt1#
	#alt1#var x: Int = 2
	var y: Int = -2 #alt2#
	#alt2#var y: Int
	#alt3#init (xx: Int) do x = xx
	#alt4#init foo(xx: Int) do x = xx
	fun work
	do
		x.output
		y.output
	end
end

var a: A
a = new A
a = new A(1)
a = new A(2, 2)
a = new A(3, 3, 3)
a = new A.foo(5)
a.work


