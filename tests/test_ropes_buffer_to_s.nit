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

# Checks the immutability of the strings returned by `RopeBuffer.to_s`.
module test_ropes_buffer_to_s

import standard

# Note: In this sort of test, never print the string more than once: the string
# itself may cache an flatten representation of itself when `print` calls `to_s`
# on it. For example, the original bug that motivated the writting of the
# present test got unoticed until we tried to edit the buffer **before**
# outputting `s`.

var buffer = new RopeBuffer
var s: String

sys.stdout.write "`clear` and `append`: "
buffer.append "abcd"
s = buffer.to_s
buffer.clear
buffer.append "ef"
print s

sys.stdout.write "`clear` and `add`: "
buffer.clear
buffer.add 'a'
buffer.add 'b'
s = buffer.to_s
buffer.clear
buffer.add 'c'
print s

sys.stdout.write "`add` at `maxlen + 1`: "
buffer.clear
buffer.add 'c'
s = buffer.to_s
buffer.append("*" * (maxlen -1))
buffer.add 'x'
print s

sys.stdout.write "`append` up to `maxlen + 1`: "
buffer.clear
buffer.append "ab"
s = buffer.to_s
buffer.append("*" * (maxlen -1))
print s

sys.stdout.write "`reverse`: "
buffer.clear
buffer.append "xyz"
s = buffer.to_s
buffer.reverse
print s

sys.stdout.write "`upper`: "
buffer.clear
buffer.append "foo"
s = buffer.to_s
buffer.upper
print s

sys.stdout.write "`lower`: "
buffer.clear
buffer.append "BAR"
s = buffer.to_s
buffer.lower
print s
