# This file is part of NIT ( http://www.nitlanguage.org ).
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
	var v: Int
	fun iterate #alt1#
	#alt1# fun foo
		!each(i: Int) #alt2# #alt5#
	        #alt5#!each(i: Int): Int
	do
		each(v)
	end
end

class B
	var v: Int
	fun iterate
		!each(i: Int, j: Bool)
	do
		each(v, v != 0)
	end
end

var a = new A(5)
for i in a do #alt3#
#alt3#for i, j in a do
	i.output
end

var b = new B(5)
for i, j in b do #alt4#
#alt4#for i in b do
	i.output
	j.output #alt4#
end
