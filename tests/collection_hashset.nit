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
import collection_collectioniterator

var test = new HashSet[Int]()

print "--Tests on Iterable[Int]"
test_add(test)
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

print "--Tests on ReadOnlyCollection[Int]"
var proxy = test.to_read_only
test_length(proxy)
test_is_empty(proxy)
test_get(proxy)
test_has(proxy)
test_has_all(proxy)
test_has_only(proxy)
test_count(proxy)

print "--Tests on Collection[Int]"
test_clear(test)
test_add(test)
test_clear(test)
test_add_all(test)
test_pick(test)
test_remove(test)
test_clear(test)
test_add(test)
test_remove_all(test)

print "--Tests on CollectionIterator[Int]"
test_clear(test)
test_add(test)
test_collection_iterator(test)
test_iterator_replace(test)
test_iterator_delete(test)
