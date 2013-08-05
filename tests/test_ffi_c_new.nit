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

`{
int dv = 1234;
`}

extern A `{int *`}
	super Pointer

	new import p `{
		return &dv;
	`}
	new with_args( x : Int, a : A ) `{
        int* v = (int*)malloc( sizeof(int) );
        (*v) = (int)x;
	    return v;
	`}

	fun a do print "a"
	fun p `{
	    printf( "allo from %i\n", *recv );
	`}
	fun d : A import d, A `{
        return new_A();
	`}
end

class B
	init do end
end

var a = new A
var b = new A.with_args( 2345, a )
a.a
b.a

a.p # 1234
b.p # 2345
new A.with_args( 3456, b ).p # 3456

a.d.p #
b.d.p #

var c = new B
