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

# Very basic FFI tests
# Does not use extern methods from other modules
module test_ffi_c_extra_simple

in "C" `{
	#include <stdio.h>
`}

class A
	fun foo `{
		printf( "foo from C\n" );
	`}

	fun bar( other : A, i : Int ) `{
		printf( "bar from C: %ld\n", i );
	`}

	fun baz( i : Int ) : Int `{
		return i * 2;
	`}

	fun titi( i : Float ) : Float `{
		printf( "titi from C: %f\n", i );
		return i*2.0f; // i * 12;
	`}

	fun bounce( a : A ) : A `{
		return a;
	`}
end

var a = new A
a.foo
a.bar( a, 144 )
print "From Nit: {a.baz( 121 )}"
print "From Nit: calling titi"
a.titi( 2.34 )
print "From Nit: called titi"
print a == a.bounce( a )
