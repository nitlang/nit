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

module test_ffi_cpp_header

in "C++" `{
	#include <vector>

	using namespace std;

	vector<long> vec;
`}

class CppVector
	fun push(v: Int) in "C++" `{
		vec.push_back(v);
	`}

	fun pop: Int in "C++" `{
		long val = vec.back();
		vec.pop_back();
		return val;
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
print a.pop
