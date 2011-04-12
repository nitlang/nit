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

var test = new HashMap[Int, Int]()

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
test_length(test.to_read_only)
test_is_empty(test.to_read_only)
test_has_key(test.to_read_only)
test_has_value(test.to_read_only)
test_has_all_keys(test.to_read_only)
test_has_all_values(test.to_read_only)
test_has_only_keys(test.to_read_only)
test_has_only_values(test.to_read_only)
test_count(test.to_read_only)
test_retindex(test.to_read_only)

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
