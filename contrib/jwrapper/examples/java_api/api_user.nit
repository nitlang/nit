# This file is part of NIT ( http://www.nitlanguage.org ).
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

import java_api

# Get a Java string
var str = java_lang_integer_to_string_int(5678)

# Do some Java side printing
var stdout = java_lang_system_out
stdout.println_int 1234
stdout.println_String str

# Test a generic list
var list = new Java_util_ArrayList

print list.is_empty
assert list.is_empty

print list.size
assert list.size == 0

list.clear
