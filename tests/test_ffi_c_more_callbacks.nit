# This file is part of NIT ( http://www.nitlanguage.org ).
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

# FFI test with simple callbacks to Nit (within module)
module test_ffi_c_more_callbacks

`{
#include <stdio.h>
`}

class A
	var a: Int
	init do a = 1234
	init alt(i: Int) do a = i
	fun to_i: Int do return a
end

fun in1(i: Int) do print "Back in Nit: in1 {i}"
fun in2(i: Float) do print "Back in Nit: in2"

fun out(i: Int, f: Float): Int import in1, in2, A, A::alt, A::to_i `{
	printf("From C, beginning out: %ld\n", i);
	Object_in1(recv, i);
	A a = new_A();
	A b = new_A_alt(10);
	printf("From C, a=%ld\n", A_to_i(a));
	printf("From C, b=%ld\n", A_to_i(b));
	printf("From C, end of out: %f\n", f);
	return 567;
`}

print out(12345, 1.23445)
