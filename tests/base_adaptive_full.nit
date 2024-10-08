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

# A comprehensive test to check most cast of adaptive typing with merge, union and intersections.
#
# alt1 is for necessary static errors
# alt2 is for errors due to the lack of union&intersection types

import core::kernel

# Base diamond hierarchy to have types

class A
end
class B
	super A
end
class C
	super A
end
class D
	super B
	super C
end

class N
end

# Base methods to statically check the adapted types.

fun test_a(x:A) do end
fun test_b(x:B) do end
fun test_nb(x:nullable B) do end
fun test_c(x:C) do end
fun test_nn(x:nullable N) do end
fun test_o(x:Object) do end

## Intersections and substractions

# Intersection B and C (from B)
fun inter1(x: B) do
	if x isa C then
		test_a(x)
		#alt2#test_b(x)
		test_c(x)
	else
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
	end
	test_a(x)
	test_b(x)
	#alt1#test_c(x)
end

# Intersection B and C (from Object)
fun inter2(x: nullable Object) do
	if x isa B and x isa C then
		test_a(x)
		#alt2#test_b(x)
		test_c(x)
	end
end

# Intersection B and then C (from Object)
fun inter3(x: nullable Object) do
	if x isa B then
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
		if x isa C then
			test_a(x)
			#alt2#test_b(x)
			test_c(x)
		else
			test_a(x)
			test_b(x)
			#alt1#test_c(x)
		end
		#alt2#test_a(x)
		# The previous one need an explanation: merge(inter(B,C),sub(B,C)) = merge(C,B) = null (because conflict).
		# Unfortunately the fallback is on Object (instead of B) because the B information in the then branch
		# is lost and for the typer, `x isa C` is indistinguishable with `x=new C`.
		#alt2#test_b(x)
		#alt1#test_c(x)
		test_o(x)
	else
		#alt1#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
		if x isa C then
			test_a(x)
			#alt1#test_b(x)
			test_c(x)
		else
			#alt1#test_a(x)
			#alt1#test_b(x)
			#alt1#test_c(x)
		end
		#alt1#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
	end
	#alt1#test_a(x)
	#alt1#test_b(x)
	#alt1#test_c(x)
end

# Intersection nB and notnull (from nb)
fun null_inter1n(x: nullable B) do
	if x != null then
		test_b(x)
	else
		test_nn(x)
	end
	test_nb(x)
	#alt1#test_b(x)
	#alt1#test_nn(x)
end

# Intersection nB and notnull (from nObject)
fun null_inter2n(b: nullable B) do
	var x
	x = b
	if x != null then
		test_b(x)
	else
		test_nb(x)
		test_nn(x)
	end
	test_nb(x)
	#alt1#test_b(x)
	#alt1#test_nn(x)
end

# Intersection nB and Object (from nb)
fun null_inter1o(x: nullable B) do
	if x isa A then
		test_b(x)
	else
		test_nb(x)
		test_nn(x)
	end
	test_nb(x)
	#alt1#test_b(x)
	#alt1#test_nn(x)
end

# Intersection nB and Object (from nObject)
fun null_inter2o(b: nullable B) do
	var x
	x = b
	if x isa A then
		test_b(x)
	else
		test_nb(x)
		test_nn(x)
	end
	test_nb(x)
	#alt1#test_b(x)
	#alt1#test_nn(x)
end

# Intersection Object and nB
fun null_inter3(x: A) do
	if x isa nullable B then
		test_b(x)
	else
		test_a(x)
	end
	test_a(x)
end

## Unions

# Union between B and C (with assigment)
fun union1(b:B, c:C, m: Bool) do
	var x
	x = b
	if m then x = c
	#alt2#test_a(x)
	#alt1#test_b(x)
	#alt1#test_c(x)
	test_o(x)
end

# Union between B and C (with isa or isa)
fun union2(x: nullable Object) do
	if x isa B or x isa C then
		#alt2#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
		test_o(x)
	end
end

# Union between B and null (from nullable Object)
fun null_union(b: B) do
	var x
	x = b
	test_nb(x)
	test_b(x)
	if true then x = null
	test_nb(x)
	#alt1#test_b(x)
end

## Loops

# Type adaptation in a loop
fun loop1(b:B, c:C, m: Bool) do
	var x
	x = b
	while m do
		#alt2#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
		test_o(x)
		x = c
		test_a(x)
		#alt1#test_b(x)
		test_c(x)
	end
	#alt2#test_a(x)
	#alt1#test_b(x)
	#alt1#test_c(x)
	test_o(x)
end

# Union in a loop
fun loop_union(b:B, c:C, m: Bool) do
	var x
	x = b
	while m do
		test_o(x)
		#alt2#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
		if m then x = c
		#alt2#test_a(x)
		#alt1#test_b(x)
		#alt1#test_c(x)
		test_o(x)
	end
	#alt2#test_a(x)
	#alt1#test_b(x)
	#alt1#test_c(x)
	test_o(x)
end

# Loop while not null
fun null_loop_1(b: nullable B) do
	var x
	x = b
	while x != null do
		test_b(x)
		test_nb(x)
		if true then x = null
		#alt1#test_b(x)
		test_nb(x)
	end
	#alt1#test_b(x)
	test_nb(x)
end

# Loop while null
fun null_loop_2(b: nullable B) do
	var x
	x = b
	while x == null do
		#alt1#test_b(x)
		test_nb(x)
		if true then x = b
		#alt1#test_b(x)
		test_nb(x)
	end
	test_b(x)
	test_nb(x)
end

# Loop while isa (from B)
fun loop_inter1a(b: B) do
	var x = b
	while x isa C do
		test_a(x)
		#alt2#test_b(x)
		test_c(x)
		x = b
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
	end
	test_a(x)
	test_b(x)
	#alt1#test_c(x)
end

# Loop while not isa (from B)
fun loop_inter2a(b: B) do
	var x = b
	while not x isa C do
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
		x = b
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
	end
	test_a(x)
	#alt2#test_b(x)
	test_c(x)
end

# loop while isa (from Object)
fun loop_inter1b(b: B) do
	var x
	x = b
	while x isa C do
		test_a(x)
		#alt2#test_b(x)
		test_c(x)
		x = b
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
	end
	test_a(x)
	test_b(x)
	#alt1#test_c(x)
end

# loop while not isa (from Object)
fun loop_inter2b(b: B) do
	var x
	x = b
	while not x isa C do
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
		x = b
		test_a(x)
		test_b(x)
		#alt1#test_c(x)
	end
	test_a(x)
	#alt2#test_b(x)
	test_c(x)
end
