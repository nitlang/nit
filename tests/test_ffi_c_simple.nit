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

module test_ffi_c_simple

in "C header" `{
	#include <stdio.h>
`}

in "C body" `{
	int f( void ) {
		printf( "in C!\n" );
		return 42;
	}
`}

class A
	fun foo : Int in "C" `{
		printf( "C implementation!\n" );
		return f();
	`}
end

fun bar : Float is extern `{
	return 5.12345;
`}

print bar

var a = new A
print a.foo

