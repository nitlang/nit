# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

class A
	var r : String = "r"
	var w : String = "w"
	var rw : String = "rw"

	fun print_all import String::to_cstring, r, rw `{
		printf( "%s %s\n",
	        	String_to_cstring( A_r( recv ) ),
	        	String_to_cstring( A_rw( recv ) ) );
	`}
	fun modify import String::from_cstring, w=, rw= `{
		A_w__assign( recv, new_String_from_cstring( "w set from native" ) );
		A_rw__assign( recv, new_String_from_cstring( "rw set from native" ) );
	`}
end

class B
	fun print_and_modify( a : A ) import A::rw, A::rw=, String::to_cstring, String::from_cstring `{
		printf( "%s\n", String_to_cstring( A_rw( a ) ) );
		A_rw__assign( a, new_String_from_cstring( "set from native" ) );
		printf( "%s\n", String_to_cstring( A_rw( a ) ) );
	`}
end

var a = new A
a.print_all
a.modify
a.print_all

var b = new B
b.print_and_modify( a )
