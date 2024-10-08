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

fun test_set(s1, s2: Set[Int])
do
	s1.add(1)
	s1.add(2)
	s2.add(2)
	s2.add(1)
	s2.add(2)
	print s1.hash == s2.hash
	print s1 == s2
	s2.add(3)
	print s1 != s2
	print ""
end

test_set(new HashSet[Int], new HashSet[Int])
test_set(new ArraySet[Int], new ArraySet[Int])
test_set(new HashSet[Int], new ArraySet[Int])
test_set(new ArraySet[Int], new HashSet[Int])
