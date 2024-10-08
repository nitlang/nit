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

# Advanced services for serialization engines
module engine_tools

import serialization_core
intrude import core::collection::hash_collection

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
			assert ck != null
			if ck.is_same_serialized(k) then
				break
			end
			c = c._next_in_bucklet
		end
		return c
	end
end

redef interface Object
	# Is `self` the same as `other` in a serialization context?
	#
	# Used to determine if an object has already been serialized.
	fun is_same_serialized(other: nullable Object): Bool do return is_same_instance(other)

	# Hash value use for serialization
	#
	# Used in combination with `is_same_serialized`. If two objects are the same
	# in a serialization context, they must have the same `serialization_hash`.
	fun serialization_hash: Int do return object_id
end

redef class String
	redef fun serialization_hash do return hash
	redef fun is_same_serialized(o) do return self == o
end

redef class Text

	# Strip the `nullable` prefix from the type name `self`
	#
	# ~~~
	# assert "String".strip_nullable == "String"
	# assert "nullable Array[Int]".strip_nullable == "Array[Int]"
	# assert "Map[Set[String], Set[Int]]".strip_nullable == "Map[Set[String], Set[Int]]"
	# ~~~
	fun strip_nullable: Text
	do
		var prefix = "nullable "
		return if has_prefix(prefix) then substring_from(prefix.length) else self
	end

	# Strip the `nullable` prefix and the params from the type name `self`
	#
	# ~~~
	# assert "String".strip_nullable_and_params == "String"
	# assert "nullable Array[Int]".strip_nullable_and_params == "Array"
	# assert "Map[Set[String], Set[Int]]".strip_nullable_and_params == "Map"
	# ~~~
	fun strip_nullable_and_params: Text
	do
		var class_name = strip_nullable

		var bracket_index = class_name.index_of('[')
		if bracket_index == -1 then return class_name
		return class_name.substring(0, bracket_index)
	end
end
