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
	fun is_int_null( ni : nullable Int ) : Bool is extern import Int as not nullable
	fun is_a_null( na : nullable A ) : Bool is extern import A as not nullable

	fun get_nullable_string( get_nulled : Bool ) : nullable String is extern import String::from_cstring, String as nullable
end

var a = new A

print "true -? {a.is_int_null( null )}"
print "false -? {a.is_int_null( 0 )}"
print "false -? {a.is_int_null( 1234 )}"

print "true -? {a.is_a_null( null )}"
print "false -? {a.is_a_null( a )}"

var nstr = a.get_nullable_string( true )
if nstr == null then print "is null, ok" else print nstr # expects "is null"

nstr = a.get_nullable_string( false )
if nstr == null then print "is null, error" else print nstr # expects "something"
