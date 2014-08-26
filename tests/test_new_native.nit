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

var s = new NativeString(4)
s[0] = 'N'
s[2] = 't'
s[1] = 'i'
s[3] = '\0'
print s.class_name
print s[0]
print s.to_s

var a: NativeArray[Object] = new NativeArray[Int](3)
a[0] = 1
a[1] = 10
a[2] = 100
#alt1#a[1] = true
print a.class_name
print a.length
print a[0]
print a.to_a.join(",")

