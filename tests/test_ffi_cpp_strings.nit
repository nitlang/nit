# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Module wrapping the C++ class vector<int>
module test_ffi_cpp_strings

import cpp # gives us String.to_cpp_string and the CppString class

in "C++ Header" `{
	#include <vector>

	using namespace std;
`}

# Nit class over C++'s vector<int>
extern class CppVector in "C++" `{vector<int>*`}

	# Extern constructor
	new in "C++" `{
		return new vector<int>();
	`}

	# Adds an element to the end of the vector
	fun push(v: Int) in "C++" `{
		self->push_back(v);
	`}

	# Pops an element from the end of the vector
	fun pop: Int in "C++" `{
		long val = self->back();
		self->pop_back();
		return val;
	`}

	# Uses a callback to report when receiver is empty
	fun safe_pop_with_default(default_return: Int): Int import report_error in "C++" `{
		if (self->empty()) {
			CppVector_report_error(self);
			return default_return;
		} else {
			long val = self->back();
			self->pop_back();
			return val;
		}
	`}

	# Callback for `safe_pop_with_default`
	private fun report_error do print "Vector is empty!"

	# Prints the given string when receiver is empty
	fun safe_pop_with_custom_error(default_return: Int, error_msg: String): Int import String.to_cpp_string in "C++" `{
		if (self->empty()) {
			string *cpp_error_msg = String_to_cpp_string(error_msg);
			cout << *cpp_error_msg << "\n";
			return default_return;
		} else {
			long val = self->back();
			self->pop_back();
			return val;
		}
	`}
end

var a = new CppVector
a.push(1)
a.push(2)
a.push(3)
a.push(4)
print a.pop
print a.pop
print a.pop
print a.safe_pop_with_default(1234)
print a.safe_pop_with_default(1234)
print a.safe_pop_with_custom_error(1234, "3rd safe pop")
print a.safe_pop_with_custom_error(1234, "4th safe pop")
