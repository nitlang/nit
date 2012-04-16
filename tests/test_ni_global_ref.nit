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
	fun save_as_global( tbp : ToBePreserved ) is extern import ToBePreserved::output
	fun recover_unsafe : ToBePreserved is extern
	fun recover : nullable ToBePreserved is extern import ToBePreserved as nullable

	fun launch_gc do sys.force_garbage_collection
end

var x = new ToBePreserved( "x" )
var y = new ToBePreserved( "y" )
var a = new A

a.save_as_global( y )
sys.force_garbage_collection
var r = a.recover
if r != null then
	r.output
else
	print "null :("
end

a.save_as_global( x )
sys.force_garbage_collection
a.recover_unsafe.output
