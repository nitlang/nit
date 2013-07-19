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

fun print_cstring(cstr: NativeString) `{
	printf("cstr-> %s\n", cstr);
`}

fun get_cstring: NativeString `{
	return "char* from C";
`}

fun print_string(str: String) import String::to_cstring `{
	printf("str-> %s\n", String_to_cstring(str) );
`}

fun get_string: String import String::from_cstring, String::output `{
	String str = new_String_from_cstring("Nit string from C");
	String_output(str);
	printf("\n");
	return str;
`}

print_cstring( "char* to C".to_cstring )

var cstr = get_cstring
print cstr.cstring_length
print_cstring cstr

print_string( "Nit string to C" )

var str = get_string
print str.length
print str
