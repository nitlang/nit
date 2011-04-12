# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

import collection_iterable
import collection_traversable
import collection_collection
import collection_iterator

var map:Map[Int, Int] = new HashMap[Int, Int]
#alt1#map = new HashMap[Int, Int]
#alt2#map = new ArrayMap[Int, Int]
#alt3#map = new ArrayMap[Int, Int]

for i in [1..10] do
	map[i] = i
end

var test:Traversable[Int] = map.keys
#alt1#test = map.values
#alt2#test = map.keys
#alt3#test = map.values

print "--Tests on Iterable[Int]"
with_forin(test)
with_iterator(test)
with_iterate(test)
test_to_a(test)

print "--Tests on Iterator[Int]"
test_type(test)
test_iterator(test)

print "--Tests on Traversable[Int]"
test_length(test)
test_is_empty(test)
test_get(test)
test_has(test)
test_has_all(test)
test_has_only(test)
test_count(test)
