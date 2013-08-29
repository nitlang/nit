# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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
	fun get_str_from_nstr( nstr : NativeString ) : String is extern import NativeString::to_s
	fun get_str_from_nstr_with_len( nstr : NativeString ) : String is extern import NativeString::to_s_with_length, NativeString::cstring_length

	fun get_nstr_from_str( str : String ) : NativeString is extern import String::to_cstring

	fun get_something : String is extern import NativeString::to_s
end

var a = new A
print a.get_str_from_nstr( "hello world...".to_cstring )
print a.get_str_from_nstr_with_len( "hello world?".to_cstring )
print a.get_nstr_from_str( "hello world!" ).to_s


var something = a.get_something # expects "something"
print something
print something.length
