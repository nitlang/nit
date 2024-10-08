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

import java_api is example

# Get a Java string
var str = java_lang_integer_to_string_int(5678)

# Do some Java side printing
java_lang_system_out.println_int 1234
java_lang_system_out.println_String str

# Test a generic list
var list = new Java_util_ArrayList

print "List is empty? {list.is_empty}"
print "List size {list.size}"

list.add str
print "List is empty? {list.is_empty}"
print "List size {list.size}"

var str_back = list.get(0)
java_lang_system_out.println_String str_back.to_string

list.clear
print "List is empty? {list.is_empty}"
print "List size {list.size}"
