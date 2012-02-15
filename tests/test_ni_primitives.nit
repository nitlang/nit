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

fun opposite( v : Bool ) : Bool is extern
fun plus_10( v : Char ) : Char is extern
fun plus_1000( v : Int ) : Int is extern
fun multiply_by_100( v : Float ) : Float is extern
fun print_ns( s : NativeString ) is extern

print opposite( true )
print opposite( false )

print plus_10( 'a' )

print plus_1000( 1234 )

print multiply_by_100( 123.45 )

print_ns( "hello world".to_cstring )
