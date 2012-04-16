# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

class ToBePreserved
	var id : String

	redef fun output do print id
end

class A
	fun run( a, b, c, d : ToBePreserved ) is extern import ToBePreserved::output, launch_gc
	fun run2( a, b, c, d : ToBePreserved ) is extern import ToBePreserved::output, launch_gc, run

	fun launch_gc do sys.force_garbage_collection
end

var x = new ToBePreserved( "x" )
var y = new ToBePreserved( "y" )

var a = new A
a.run( x, y, y, y )
a.run2( x, y, y, y )

