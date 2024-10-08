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

import kernel

class A[E]
end

class B
	# B < A[B] < A[A[B]] < ... < Object
	super A[B]
end

class C
	# C < A[A[B]] < A[A[B]] < ... < Object
	super A[A[B]]
end

class Z
end

fun test(o: Object)
do
(o isa B).output
(o isa A[B]).output
(o isa A[A[B]]).output
(o isa A[A[A[B]]]).output
(o isa A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[B]]]]]]]]]]]]]]]).output
(o isa A[Object]).output
'\n'.output
end

test(new B)
test(new A[B])
test(new C)
test(new A[C])
test(new A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[B]]]]]]]]]]]]]]])
test(new A[Z])
test(new Z)
