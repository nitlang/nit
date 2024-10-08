# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

var a = 1
var b = 2

assert a == 2
assert not a < 2 # comment 1
assert a > 2 and b >= 2
assert b != 2 or a <= 2
assert b != null # comment 2

# comment 3
print a + b
print a - b # comment 4
print a * b
print a / b
print a % b

print -a # comment 5