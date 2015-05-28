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

# Advanced services for serialization engines
module engine_tools

import serialization
intrude import standard::collection::hash_collection

# Maps instances to a value, uses `is_same_serialized` and `serialization_hash`.
class StrictHashMap[K, V]
	super HashMap[K, V]

	redef fun index_at(k)
	do
		if k == null then return 0

		var i = k.serialization_hash % _capacity
		if i < 0 then i = - i
		return i
	end

	redef fun node_at_idx(i, k)
	do
		var c = _array[i]
		while c != null do
			var ck = c._key
			if ck.is_same_serialized(k) then
				break
			end
			c = c._next_in_bucklet
		end
		return c
	end
end
