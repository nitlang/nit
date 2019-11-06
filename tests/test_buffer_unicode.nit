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

var fb = new FlatBuffer

for i in [0 .. 64[ do fb.add 'A'

fb[63] = 'あ'

fb[32] = 'き'

fb[0] = '𐏓'

fb[32] = 'Z'

var l = 0

for i in fb.chars do
	print "Char {l} = {i}"
	l += 1
end

l = 0

for i in fb.bytes do
	print "Byte {l} = 0x{i.to_hex}"
	l += 1
end

l = fb.length - 1

for i in fb.chars.reverse_iterator do
	print "Char {l} = {i}"
	l -= 1
end

l = fb.byte_length - 1

for i in fb.bytes.reverse_iterator do
	print "Byte {l} = 0x{i.to_hex}"
	l -= 1
end
