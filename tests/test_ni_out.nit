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
	init do end

	fun is_not_extern do end

	fun proc is extern
	fun function : Int is extern

	fun one( x : Int ) : Int is extern
	fun two( x : Int, y : Int ) : Int is extern
	fun three( x : Int, y : Int, z : Int ) : Int is extern
end

fun in_object( o : Object ) : Object is extern

var a = new A
print a.function
print a.one( 2 )
print a.two( 1, 2 )
print a.three( 2, 4, 3 )
print in_object( "hello world" )
