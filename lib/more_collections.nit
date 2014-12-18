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

# Highly specific, but useful, collections-related classes.
module more_collections

# Simple way to store an `HashMap[K, Array[V]]`
#
# Unlike standard HashMap, MultiHashMap provides a new
# empty array on the first access on a unknown key.
#
#     var m = new MultiHashMap[String, Char]
#     assert not m.has_key("four")
#     m["four"].add('i')
#     m["four"].add('i')
#     m["four"].add('i')
#     m["four"].add('i')
#     assert m.has_key("four")
#     assert m["four"] == ['i', 'i', 'i', 'i']
#     assert m["zzz"] == new Array[Char]
class MultiHashMap[K, V]
	super HashMap[K, Array[V]]

	# Add `v` to the array associated with `k`.
	# If there is no array associated, then create it.
	fun add_one(k: K, v: V)
	do
		if self.has_key(k) then
			self[k].add(v)
		else
			self[k] = [v]
		end
	end

	redef fun provide_default_value(key) do
		var res = new Array[V]
		self[key] = res
		return res
	end
end

# Simple way to store an `HashMap[K1, HashMap[K2, V]]`
#
# ~~~~
# var hm2 = new HashMap2[Int, String, Float]
# hm2[1, "one"] = 1.0
# hm2[2, "two"] = 2.0
# assert hm2[1, "one"] == 1.0
# assert hm2[2, "not-two"] == null
# ~~~~
class HashMap2[K1, K2, V]
	private var level1 = new HashMap[K1, HashMap[K2, V]]

	# Return the value associated to the keys `k1` and `k2`.
	# Return `null` if no such a value.
	fun [](k1: K1, k2: K2): nullable V
	do
		var level1 = self.level1
		if not level1.has_key(k1) then return null
		var level2 = level1[k1]
		if not level2.has_key(k2) then return null
		return level2[k2]
	end

	# Set `v` the value associated to the keys `k1` and `k2`.
	fun []=(k1: K1, k2: K2, v: V)
	do
		var level1 = self.level1
		var level2: HashMap[K2, V]
		if not level1.has_key(k1) then
			level2 = new HashMap[K2, V]
			level1[k1] = level2
		else
			level2 = level1[k1]
		end
		level2[k2] = v
	end
end

# Simple way to store an `HashMap[K1, HashMap[K2, HashMap[K3, V]]]`
#
# ~~~~
# var hm3 = new HashMap3[Int, String, Int, Float]
# hm3[1, "one", 11] = 1.0
# hm3[2, "two", 22] = 2.0
# assert hm3[1, "one", 11] == 1.0
# assert hm3[2, "not-two", 22] == null
# ~~~~
class HashMap3[K1, K2, K3, V]
	private var level1 = new HashMap[K1, HashMap2[K2, K3, V]]

	# Return the value associated to the keys `k1`, `k2`, and `k3`.
	# Return `null` if no such a value.
	fun [](k1: K1, k2: K2, k3: K3): nullable V
	do
		var level1 = self.level1
		if not level1.has_key(k1) then return null
		var level2 = level1[k1]
		return level2[k2, k3]
	end

	# Set `v` the value associated to the keys `k1`, `k2`, and `k3`.
	fun []=(k1: K1, k2: K2, k3: K3, v: V)
	do
		var level1 = self.level1
		var level2: HashMap2[K2, K3, V]
		if not level1.has_key(k1) then
			level2 = new HashMap2[K2, K3, V]
			level1[k1] = level2
		else
			level2 = level1[k1]
		end
		level2[k2, k3] = v
	end
end

# A map with a default value.
#
# ~~~~
# var dm = new DefaultMap[String, Int](10)
# assert dm["a"] == 10
# ~~~~
#
# The default value is used when the key is not present.
# And getting a default value does not register the key.
#
# ~~~~
# assert dm["a"] == 10
# assert dm.length == 0
# assert dm.has_key("a") == false
# ~~~~
#
# It also means that removed key retrieve the default value.
#
# ~~~~
# dm["a"] = 2
# assert dm["a"] == 2
# dm.keys.remove("a")
# assert dm["a"] == 10
# ~~~~
#
# Warning: the default value is used as is, so using mutable object might
# cause side-effects.
#
# ~~~~
# var dma = new DefaultMap[String, Array[Int]](new Array[Int])
#
# dma["a"].add(65)
# assert dma["a"] == [65]
# assert dma.default == [65]
# assert dma["c"] == [65]
#
# dma["b"] += [66]
# assert dma["b"] == [65, 66]
# assert dma.default == [65]
# ~~~~
class DefaultMap[K, V]
	super HashMap[K, V]

	# The default value.
	var default: V

	redef fun provide_default_value(key) do return default
end
