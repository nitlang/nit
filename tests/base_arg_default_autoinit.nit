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

import core::kernel

class A
	var mandatory: Int
	var optional: nullable Int

	fun foo
	do
		'-'.output
		'\n'.output
		mandatory.output
		if optional == null then
			' '.output
			'\n'.output
		else
			optional.output
		end
	end
end

class B
	super A
	var optional_b: nullable Int
	var mandatory_b: Int
	redef fun foo
	do
		super
		if optional_b == null then
			' '.output
			'\n'.output
		else
			optional_b.output
		end
		mandatory_b.output
	end
end

class C
	super B
	autoinit optional_b, mandatory_b, mandatory
end

var a

#alt1#a = new A
#alt1#a.foo

a = new A(1)
a.foo

a = new A(1,2)
a.foo

#alt1#a = new A(1,2,3)
#alt1#a.foo

#alt1#a = new B(1)
#alt1#a.foo

#alt1#a = new B(1,4)
#alt1#a.foo

#alt1#a = new B(1,2,4)
#alt1#a.foo

a = new B(1,2,3,4)
a.foo

#alt1#a = new B(1,2,3,4,5)
#alt1#a.foo

#alt1#a = new C(1)
#alt1#a.foo

#alt1#a = new C(4,1)
#alt1#a.foo

a = new C(3,4,1)
a.foo

#alt1#a = new C(1,2,3,4)
#alt1#a.foo
