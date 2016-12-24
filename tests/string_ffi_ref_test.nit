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

intrude import text::flat
import file

class StringTest

	var copied_str: nullable String = null

	var referenced_str: nullable String = null

	fun get_c_string import FlatString.items, CString.to_s, CString.to_s, StringTest.ref_test, StringTest.copy_test `{
		char* string = "This is a test string";

		FlatString ref_string = CString_to_s(string);
		StringTest_ref_test(self, ref_string);

		FlatString copy_string = CString_to_s(string);
		StringTest_copy_test(self, copy_string);

		int same_refs = FlatString_items(copy_string) == FlatString_items(ref_string);

		printf("Do the strings have the same CString reference ? ");

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
