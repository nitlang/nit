# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@gmail.com>
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

module string_ffi_ref_test

class StringTest

	var copied_str: nullable String

	var referenced_str: nullable String

	init
	do
		copied_str = null
		referenced_str = null
	end

	fun get_c_string import FlatString::items, NativeString::to_s, NativeString::to_s_with_copy, StringTest::ref_test, StringTest::copy_test `{
		char* string = "This is a test string";

		String ref_string = NativeString_to_s(string);
		StringTest_ref_test(recv, ref_string);

		String copy_string = NativeString_to_s_with_copy(string);
		StringTest_copy_test(recv, copy_string);

		int same_refs = FlatString_items((FlatString)copy_string) == FlatString_items((FlatString)ref_string);

		printf("Do the strings have the same NativeString reference ? ");

		if(same_refs){
			printf("True\n");
		}else{
			printf("False\n");
		}
	`}

	private fun ref_test(referenced: String)
	do
		print referenced
		referenced_str = referenced
	end

	private fun copy_test(copied: String)
	do
		print copied
		copied_str = copied
	end

end

var str_test = new StringTest

str_test.get_c_string
