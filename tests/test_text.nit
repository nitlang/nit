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

#alt2 import core

var str = "Woe to you, oh earth and sea for the Devil sends the beast with wrath because he knows the time is short. Let him who hath understanding reckon the number of the beast, for it is a human number, its number is Six Hundred and Sixty-Six."
var spaces = "           "
var numstr = "1001"

var txt: Text
var trimable: Text
var num: Text

txt = str
trimable = spaces + str + spaces
num = numstr

#alt1 txt = new FlatBuffer.from(str)
#alt1 trimable = new FlatBuffer.from(spaces)
#alt1 trimable.append(str)
#alt1 trimable.append(spaces)
#alt1 num = new FlatBuffer.from(numstr)

# Test Text methods on all types of receivers

print txt.substring(0, 105)
print txt.substring_from(106)
print txt.length
assert not txt.is_empty
print txt.index_of('h')
print txt.index_of_from('h', 105)
print txt.index_of('Z')
print txt.last_index_of('L')
print txt.last_index_of_from('D', 105)
print txt.has_substring("Woe", 0)
print txt.has_substring("Let", 106)
assert trimable != txt
assert trimable.trim == txt
assert num.is_numeric
assert txt.has_prefix("Woe")
assert txt.has_suffix("Six.")
assert txt.hash == trimable.trim.hash

# Test Text.chars (SequenceRead[Char]) methods on all receivers

var chars = txt.chars

assert chars != txt.substring_from(106).chars
assert chars[0] == 'W'
assert chars.count('o') == 11
assert chars.first == chars[0]
assert chars.has('L')
assert spaces.chars.has_only(' ')
assert chars.index_of('D') == 37
assert not chars.is_empty
var count = 0
for i in chars do
	assert i != '!'
	printn i
	count += 1
end
printn "\n"
assert count == txt.length
var iter_from = txt.substring_from(105).chars.iterator
var txt_iter_from = chars.iterator_from(105)
while iter_from.is_ok do
	assert iter_from.item == txt_iter_from.item
	iter_from.next
	txt_iter_from.next
end
assert not iter_from.is_ok and not txt_iter_from.is_ok
var txt_reviter = chars.reverse_iterator_from(104)
var sub_reviter = txt.substring(0,105).chars.reverse_iterator
while txt_reviter.is_ok do
	assert txt_reviter.item == sub_reviter.item
	txt_reviter.next
	sub_reviter.next
end
print chars.join(" ")
