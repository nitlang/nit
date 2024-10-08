# This file is part of NIT ( https://nitlanguage.org ).
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

import test_ffi_cpp_duplicated_callback_a

in "C++ header" `{
	#include <stdio.h>
`}

fun print_b(str: String) import String.to_cstring in "C++" `{
	puts(reinterpret_cast<char*>(String_to_cstring(str)));
`}

print_a "Hello from `a`."
print_b "Hello from `b`."
