# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

redef class Object
	fun foo do print "obj"
end

class A
	redef fun foo do print "a"
end

class B
	super A

	redef fun foo do print "b"
end

redef class Int
	redef fun foo do print self
end

fun callbacks_with_as_casts(a: A, b: B) import B.foo, A.foo, B.as(A), A.as(B) `{
	A_foo(a);
	B_foo(b);

	A aa = B_as_A(b);
	A_foo(aa);

	if (!A_is_a_B(a)) {
		printf("Instance of A is not a B.\n");
		return;
	}
	B bb = A_as_B(a);
	B_foo(bb);
`}

fun callbacks_with_nullable_casts(a: A, b: nullable B) import B.as not nullable, A.as nullable, A.as(nullable B), B.foo `{
	if (!nullable_B_is_a_B(b)) {
		printf("Instance b is not a B (it is null)\n");
	} else {
		B bb = nullable_B_as_B(b);
		B_foo(bb);
	}

	if (!A_is_a_nullable_A(a)) {
		printf("Instance a is not a nullable A\n");
	}
	if (!A_is_a_nullable_B(a)) {
		printf("Instance a is not a nullable B\n");
	}
`}

fun callbacks_with_failed_checks(a: A, b: nullable B) import B.as not nullable, B.as nullable, A.as(B), B.as(A) `{
	if (!A_is_a_B(a)) {
		printf("Instance of A is not a B.\n");
	}
	if (!nullable_B_is_a_B(b)) {
		printf("Instance of B is null\n");
	}
`}

fun callbacks_with_primitives(o: Object, i: Int, ni: nullable Int) import Object.as(Int), Int.as(Object), nullable Int.as(Int), Int.foo, Object.foo `{
	Object_foo(o);
	Int_foo(i);

	if (!Object_is_a_Int(o))
		printf("Instance o is not a Int\n");
	else {
		int oo = Object_as_Int(o);
		Int_foo(oo);
	}

	Object ii = Int_as_Object(i);
	Object_foo(ii);

	if (!nullable_Int_is_a_Int(ni))
		printf("Instance ni is not a Int\n");
	else {
		int nni = nullable_Int_as_Int(ni);
		Int_foo(nni);
	}
`}

print "1"
callbacks_with_as_casts(new B, new B)
print "2"
callbacks_with_as_casts(new A, new B)
print "3"
callbacks_with_nullable_casts(new B, new B)
print "4"
callbacks_with_nullable_casts(new A, null)
print "5"
callbacks_with_failed_checks(new A, null)
print "6"
callbacks_with_primitives(1111, 2222, 3333)
print "7"
callbacks_with_primitives(new A, 5555, null)
print "8"
