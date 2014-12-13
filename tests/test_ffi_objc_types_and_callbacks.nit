# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module test_ffi_objc_types_and_callbacks

fun foo(i: Int, f: Float, s: String)
import bar, String.to_cstring, Int.+ in "ObjC" `{
	char *cstr = String_to_cstring(s);

	long ii = Int__plus(i, i);

	printf("From Objective-C: %ld %f %s\n", ii, f, cstr);

	Object_bar(recv, ii, f, s);
`}

fun bar(i: Int, f: Float, s: String)
do
	print "From Nit: {i} {f} {s}"
end

foo(1234, 12.34, "1234")
