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

fun test(s: String)
do
	print s.length
	print s.chars.first
	print s.chars.last
	print s.chars[2]
	print s.substring(1, 2)
	print s.substring(-1, 2)
	print s.substring(1, 0)
	print s.substring(2, 5)

	print s.substring_from(1)
	print s.substring_from(-1)
	print s.substring_from(2)

	print s.has_substring("bc",1)
	print not s.has_substring("bc",2)

	print s.has_prefix("ab")
	print not s.has_prefix("bc")

	print s.has_suffix("de")
	print not s.has_suffix("cd")

	print s.to_upper
	print s.to_lower

	print s == "abcde"
	print s < "abcdf"
	print s > "abcdd"
	print s > "abcd"
	print s < "abcdef"
	print "z" + s + "z" == "zabcdez"
end

test("abcde")
test("ab"+"cde")
test("xabcdex".substring(1,5))
