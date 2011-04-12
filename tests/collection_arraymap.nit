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

import collection_iterablemap
import collection_traversablemap
import collection_map

var test = new ArrayMap[Int, Int]()

print "--Tests on IterableMap[Int,Int]"
test_setindex(test)
with_iterator(test)
with_iterate(test)

print "--Tests on TraversableMap[Int,Int]"
test_length(test)
test_is_empty(test)
test_has_key(test)
test_has_value(test)
test_has_all_keys(test)
test_has_all_values(test)
test_has_only_keys(test)
test_has_only_values(test)
test_count(test)
test_retindex(test)

print "--Tests on ReadOnlyMap[Int,Int]"
var proxy = test.to_read_only
test_length(proxy)
test_is_empty(proxy)
test_has_key(proxy)
test_has_value(proxy)
test_has_all_keys(proxy)
test_has_all_values(proxy)
test_has_only_keys(proxy)
test_has_only_values(proxy)
test_count(proxy)
test_retindex(proxy)

print "--Tests on Map[Int,Int]"
test_setindex(test)
test_clear(test)
test_setindex(test)
test_remove_value(test)
test_remove_first_value(test)
test_remove_at(test)
test_remove_all_keys(test)
test_clear(test)
test_setindex(test)
test_remove_all_values(test)
