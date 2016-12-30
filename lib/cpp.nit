# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Services for compatibility with C++ code and libraries
module cpp is
	new_annotation cppflags
end

# A pointer to a C++ std::string instance
extern class CppString in "C++" `{ std::string* `}
end

redef class Text
	# Get `self` as a `CppString`
	fun to_cpp_string: CppString do return to_cstring.to_cpp_string(length)
end

redef class CString
	# Get `self` as a `CppString`
	fun to_cpp_string(length: Int): CppString in "C++" `{
		return new std::string(self, length);
	`}
end
