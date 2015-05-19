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

# Maps instances to a value, uses `is_same_instance`
#
# Warning: This class does not implement all the services from `Map`.
class StrictHashMap[K, V]
	super Map[K, V]

	# private
	var map = new HashMap[K, Array[Couple[K, V]]]

	redef var length = 0

	redef fun is_empty do return length == 0

	# private
	fun node_at(key: K): nullable Couple[K, V]
	do
		if not map.keys.has(key) then return null

		var arr = map[key]
		for couple in arr do
			if couple.first.is_same_serialized(key) then
				return couple
			end
		end

		return null
	end

	redef fun [](key)
	do
		var node = node_at(key)
		assert node != null
		return node.second
	end

	redef fun []=(key, value)
	do
		var node = node_at(key)
		if node != null then
			node.second = value
			return
		end

		var arr
		if not map.keys.has(key) then
			arr = new Array[Couple[K, V]]
			map[key] = arr
		else arr = map[key]

		arr.add new Couple[K, V](key, value)
		self.length += 1
	end

	redef fun has_key(key) do return node_at(key) != null
end
