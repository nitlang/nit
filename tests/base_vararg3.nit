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

import array

class A
	fun foo(a: Int...) do a.first.output
end

class B
	super A
	redef fun foo(a)
	do
		'a'.output
		super
		'b'.output
		super(a...)
		'c'.output
		super(4,5,6)
		'd'.output
		super([5,6,7]...)
		#alt3#super(a)
		#alt4#super(1...)
	end
end

var a = new A
a.foo(1,2,3)
a.foo([2,3,4]...)
#alt1#a.foo([1,2,3])
#alt2#a.foo(1...)

var b = new B
b.foo(3,4,5)
