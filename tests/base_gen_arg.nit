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

import standard::kernel

class A[E]
end

class B[F,G]
	super A[F]
end

class C[I: Discrete]
	super A[I]
end

class D[J: Discrete, K: Comparable]
	super A[K]
end

fun test_isa(o: Object)
do
	(o isa A).output
	(o isa A[Object]).output
	(o isa A[Comparable]).output
	(o isa A[Int]).output
	'\n'.output
end

test_isa(new A)
test_isa(new A[Object])
test_isa(new A[Int])
#alt1#test_isa(new A[Object, Object])
#alt1#test_isa(new A[Object, Int])
#alt1#test_isa(new A[Int, Int])

'\n'.output

test_isa(new B)
test_isa(new B[Object])
test_isa(new B[Int])
test_isa(new B[Object, Object])
test_isa(new B[Object, Int])
test_isa(new B[Int, Int])

'\n'.output

test_isa(new C)
#alt1#test_isa(new C[Object])
test_isa(new C[Int])
#alt1#test_isa(new C[Object, Object])
#alt1#test_isa(new C[Object, Int])
#alt1#test_isa(new C[Int, Int])

'\n'.output

test_isa(new D)
#alt1#test_isa(new D[Object])
test_isa(new D[Int])
#alt1#test_isa(new D[Object, Object])
#alt1#test_isa(new D[Object, Int])
test_isa(new D[Int, Int])
