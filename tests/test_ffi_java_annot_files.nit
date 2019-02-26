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

module test_ffi_java_annot_files is
	extra_java_files("test_ffi_java_annot_files_a")
end

import java

fun foo in "Java" `{
	test_ffi_java_annot_files_a zero = new test_ffi_java_annot_files_a(0);
	test_ffi_java_annot_files_a one = new test_ffi_java_annot_files_a(1);
	test_ffi_java_annot_files_a ten = new test_ffi_java_annot_files_a(10);
	test_ffi_java_annot_files_a neg = new test_ffi_java_annot_files_a(-1);

	System.out.println(zero.compareTo(one));
	System.out.println(one.compareTo(zero));
	System.out.println(zero.compareTo(ten));
	System.out.println(zero.compareTo(neg));
`}

foo
