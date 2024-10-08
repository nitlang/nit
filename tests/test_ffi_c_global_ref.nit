# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

module test_ffi_c_global_ref

`{
ToBePreserved global_tbps[3] = {NULL,NULL,NULL};
`}

class ToBePreserved
	var id : String

	redef fun output do print id
end

class A
	fun save_as_global( tbp : ToBePreserved, i : Int ) import ToBePreserved.output `{
		if ( global_tbps[i] != NULL )
			ToBePreserved_decr_ref( global_tbps[i] );

		global_tbps[i] = tbp;

		ToBePreserved_incr_ref( tbp );
	`}
	fun recover_unsafe( i : Int ) : ToBePreserved `{
		return global_tbps[i];
	`}
	fun recover( i : Int ) : nullable ToBePreserved import ToBePreserved.as nullable `{
		if ( global_tbps[i] != NULL ) {
			return ToBePreserved_as_nullable( global_tbps[i] );
		} else {
			return null_ToBePreserved();
		}
	`}

	fun launch_gc do sys.force_garbage_collection
end

var x = new ToBePreserved( "x" )
var y = new ToBePreserved( "y" )
var a = new A

a.save_as_global( y, 0 )
sys.force_garbage_collection
var r = a.recover(0)
if r != null then
	r.output
else
	print "null :("
end

a.save_as_global( x, 1 )
a.save_as_global( y, 2 )
sys.force_garbage_collection
a.recover_unsafe(0).output
a.recover_unsafe(1).output
a.recover_unsafe(2).output
