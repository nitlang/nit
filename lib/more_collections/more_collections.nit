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

# Highly specific, but useful, collections-related classes.
module more_collections is serialize

import serialization
import poset

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
	#
	# If there is no array associated, then create it.
	#
	# For the inverse operation, see `remove_one`.
	#
	# ```
	# var m = new MultiHashMap[String, Char]
	# m.add_one("four", 'i')
	# m.add_one("four", 'i')
	# m.add_one("four", 'i')
	# m.add_one("four", 'i')
	# assert m.has_key("four")
	# assert m["four"] == ['i', 'i', 'i', 'i']
	# ```
	fun add_one(k: K, v: V)
	do
		var x = self.get_or_null(k)
		if x != null then
			x.add(v)
		else
			self[k] = [v]
		end
	end

	redef fun provide_default_value(key) do
		var res = new Array[V]
		self[key] = res
		return res
	end

	# Remove an occurrence of `v` from the array associated with `k`.
	#
	# If the associated array does not contain `v`, do nothing. If the
	# associated array only contain one element and this element is `v`, remove
	# the key `k`.
	#
	# In a nutshell, does the inverse operation of `add_one`.
	#
	# ```
	# var m = new MultiHashMap[String, Char]
	# m["four"]        =  ['4', 'i', 'i', 'i', 'i']
	# m.remove_one("four", 'i')
	# assert m["four"] == ['4', 'i', 'i', 'i']
	#
	# m = new MultiHashMap[String, Char]
	# m.add_one("one", '1')
	# m.remove_one("one", '?')
	# assert m["one"] == ['1']
	# m.remove_one("one", '1')
	# assert not m.has_key("one")
	# assert m["one"] == new Array[Char]
	#
	# m = new MultiHashMap[String, Char]
	# m.add_one("one", '1')
	# m.remove_one("two", '2')
	# assert not m.has_key("two")
	# assert m["one"] == ['1']
	# assert m["two"] == new Array[Char]
	# ```
	fun remove_one(k: K, v: V)
	do
		var x = get_or_null(k)
		if x != null then
			x.remove(v)
			if x.is_empty then keys.remove(k)
		end
	end

	# Search the values in `pe.greaters` from the most smaller elements that have a value.
	#
	# Elements without values are ignored.
	#
	# Basically, values defined in nearest greater elements of `pe` are inherited.
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_chain(["E", "D", "C", "B", "A"])
	# pos.add_chain(["D", "X", "B"])
	#
	# var map = new MultiHashMap[String, String]
	# map["A"].append(["a", "1"])
	# map["C"].append(["c", "2"])
	# map["X"].append(["x", "2"])
	# map["E"].add "e"
	#
	# assert map.lookup_joined_values(pos["B"]).has_exactly(["a", "1"])
	# assert map.lookup_joined_values(pos["C"]).has_exactly(["c", "2"])
	# assert map.lookup_joined_values(pos["D"]).has_exactly(["c", "x", "2"])
	# ~~~
	fun lookup_joined_values(pe: POSetElement[K]): Set[V]
	do
		var res = new Set[V]
		for k in pe.poset.select_smallest(filter_keys(pe.greaters)) do res.add_all self[k]
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
		var level2 = level1.get_or_null(k1)
		if level2 == null then return null
		return level2.get_or_null(k2)
	end

	# Set `v` the value associated to the keys `k1` and `k2`.
	fun []=(k1: K1, k2: K2, v: V)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then
			level2 = new HashMap[K2, V]
			level1[k1] = level2
		end
		level2[k2] = v
	end

	# Remove the item at `k1` and `k2`
	fun remove_at(k1: K1, k2: K2)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then return
		level2.keys.remove(k2)
	end

	# Is there a value at `k1, k2`?
	fun has(k1: K1, k2: K2): Bool
	do
		if not level1.keys.has(k1) then return false
		return level1[k1].keys.has(k2)
	end

	# Remove all items
	fun clear do level1.clear
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
		var level2 = level1.get_or_null(k1)
		if level2 == null then return null
		return level2[k2, k3]
	end

	# Set `v` the value associated to the keys `k1`, `k2`, and `k3`.
	fun []=(k1: K1, k2: K2, k3: K3, v: V)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then
			level2 = new HashMap2[K2, K3, V]
			level1[k1] = level2
		end
		level2[k2, k3] = v
	end

	# Remove the item at `k1`, `k2` and `k3`
	fun remove_at(k1: K1, k2: K2, k3: K3)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then return
		level2.remove_at(k2, k3)
	end

	# Is there a value at `k1, k2, k3`?
	fun has(k1: K1, k2: K2, k3: K3): Bool
	do
		if not level1.keys.has(k1) then return false
		return level1[k1].has(k2, k3)
	end

	# Remove all items
	fun clear do level1.clear
end

# Simple way to store an `HashMap[K1, HashMap[K2, HashMap[K3, HashMap[K4, V]]]]`
#
# ~~~~
# var hm4 = new HashMap4[Int, String, Int, String, Float]
# hm4[1, "one", 11, "un"] = 1.0
# hm4[2, "two", 22, "deux"] = 2.0
# assert hm4[1, "one", 11, "un"] == 1.0
# assert hm4[2, "not-two", 22, "deux"] == null
# ~~~~
class HashMap4[K1, K2, K3, K4, V]

	private var level1 = new HashMap[K1, HashMap3[K2, K3, K4, V]]

	# Return the value associated to the keys `k1`, `k2`, `k3` and `k4`.
	# Return `null` if no such a value.
	fun [](k1: K1, k2: K2, k3: K3, k4: K4): nullable V
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then return null
		return level2[k2, k3, k4]
	end

	# Set `v` the value associated to the keys `k1`, `k2`, `k3` and `k4`.
	fun []=(k1: K1, k2: K2, k3: K3, k4: K4, v: V)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then
			level2 = new HashMap3[K2, K3, K4, V]
			level1[k1] = level2
		end
		level2[k2, k3, k4] = v
	end

	# Remove the item at `k1`, `k2`, `k3` and `k4`
	fun remove_at(k1: K1, k2: K2, k3: K3, k4: K4)
	do
		var level1 = self.level1
		var level2 = level1.get_or_null(k1)
		if level2 == null then return
		level2.remove_at(k2, k3, k4)
	end

	# Is there a value at `k1, k2, k3, k4`?
	fun has(k1: K1, k2: K2, k3: K3, k4: K4): Bool
	do
		if not level1.keys.has(k1) then return false
		return level1[k1].has(k2, k3, k4)
	end

	# Remove all items
	fun clear do level1.clear
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

# An unrolled linked list
#
# A sequence implemented as a linked list of arrays.
#
# This data structure is similar to the `List` but it can benefit from
# better cache performance, lower data overhead for the nodes metadata and
# it spares the GC to allocate many small nodes.
class UnrolledList[E]
	super Sequence[E]

	# Desired capacity for each nodes
	#
	# By default at `32`, it can be increased for very large lists.
	#
	# It can be modified anytime, but newly created nodes may still be assigned
	# the same capacity of old nodes when created by `insert`.
	var nodes_length = 32 is writable

	private var head_node: UnrolledNode[E] = new UnrolledNode[E](nodes_length)

	private var tail_node: UnrolledNode[E] = head_node

	redef var length = 0

	redef fun clear
	do
		head_node = new UnrolledNode[E](nodes_length)
		tail_node = head_node
		length = 0
	end

	# Out parameter of `node_at`
	private var index_within_node = 0

	private fun node_at(index: Int): UnrolledNode[E]
	do
		assert index >= 0 and index < length

		var node = head_node
		while index >= node.length do
			index -= node.length
			node = node.next.as(not null)
		end

		index_within_node = index
		return node
	end

	private fun insert_node(node: UnrolledNode[E], prev, next: nullable UnrolledNode[E])
	do
		if prev != null then
			prev.next = node
		else head_node = node

		if next != null then
			next.prev = node
		else tail_node = node

		node.next = next
		node.prev = prev
	end

	redef fun [](index)
	do
		var node = node_at(index)
		index = index_within_node + node.head_index
		return node.items[index]
	end

	redef fun []=(index, value)
	do
		var node = node_at(index)
		index = index_within_node + node.head_index
		node.items[index] = value
	end

	redef fun push(item)
	do
		var node = tail_node
		if not node.full then
			if node.tail_index < node.capacity then
				# There's room at the tail
				node.tail_index += 1
			else
				# Move everything over by `d`
				assert node.head_index > 0
				var d = node.head_index / 2 + 1
				node.move_head(node.length, d)
				for i in d.times do node.items[node.tail_index - i] = null
				node.head_index -= d
				node.tail_index += -d+1
			end
			node.items[node.tail_index-1] = item
		else
			# New node!
			node = new UnrolledNode[E](nodes_length)
			insert_node(node, tail_node, null)
			node.tail_index = 1
			node.items[0] = item
		end
		length += 1
	end

	redef fun unshift(item)
	do
		var node = head_node
		if not node.full then
			if node.head_index > 0 then
				# There's room at the head
				node.head_index -= 1
			else
				# Move everything over by `d`
				assert node.tail_index < node.capacity
				var d = (node.capacity-node.tail_index) / 2 + 1
				node.move_tail(0, d)
				for i in d.times do node.items[node.head_index+i] = null
				node.head_index += d-1
				node.tail_index += d
			end
			node.items[node.head_index] = item
		else
			# New node!
			node = new UnrolledNode[E](nodes_length)
			insert_node(node, null, head_node)
			node.head_index = node.capacity-1
			node.tail_index = node.capacity
			node.items[node.capacity-1] = item
		end
		length += 1
	end

	redef fun pop
	do
		assert not_empty

		var node = tail_node
		while node.length == 0 do
			# Delete empty node
			var nullable_node = node.prev
			assert is_not_empty: nullable_node != null
			node = nullable_node
			node.next = null
			self.tail_node = node
		end

		var item = node.items[node.tail_index-1]
		node.tail_index -= 1
		length -= 1
		return item
	end

	redef fun shift
	do
		assert not_empty

		var node = head_node
		while node.length == 0 do
			# Delete empty node
			var nullable_node = node.next
			assert is_not_empty: nullable_node != null
			node = nullable_node
			node.prev = null
			self.head_node = node
		end

		var item = node.items[node.head_index]
		node.head_index += 1
		length -= 1
		return item
	end

	redef fun insert(item, index)
	do
		if index == length then
			push item
			return
		end

		var node = node_at(index)
		index = index_within_node
		if node.full then
			# Move half to a new node
			var new_node = new UnrolledNode[E](nodes_length.max(node.capacity))

			# Plug in the new node
			var next_node = node.next
			insert_node(new_node, node, next_node)

			# Move items at and after `index` to the new node
			var to_displace = node.length-index
			var offset = (new_node.capacity-to_displace)/2
			for i in [0..to_displace[ do
				new_node.items[offset+i] = node.items[index+i]
				node.items[index+i] = null
			end
			new_node.head_index = offset
			new_node.tail_index = offset + to_displace
			node.tail_index -= to_displace

			# Store `item`
			if index > node.capacity / 2 then
				new_node.items[offset-1] = item
				new_node.head_index -= 1
			else
				node.items[node.head_index+index] = item
				node.tail_index += 1
			end
		else
			if node.tail_index < node.capacity then
				# Move items towards the tail
				node.move_tail(index, 1)
				node.tail_index += 1
				node.items[node.head_index + index] = item
			else
				# Move items towards the head
				node.move_head(index, 1)
				node.items[node.head_index + index-1] = item
				node.head_index -= 1
			end
		end
		length += 1
	end

	redef fun remove_at(index)
	do
		var node = node_at(index)
		index = index_within_node + node.head_index

		# Shift left all the elements after `index`
		for i in [index+1 .. node.tail_index[ do
			node.items[i-1] = node.items[i]
		end
		node.tail_index -= 1
		node.items[node.tail_index] = null

		length -= 1

		var next_node = node.next
		var prev_node = node.prev
		if node.is_empty and (next_node != null or prev_node != null) then
			# Empty and non-head or tail node, delete
			if next_node != null then
				next_node.prev = node.prev
			else tail_node = prev_node.as(not null)

			if prev_node != null then
				prev_node.next = node.next
			else head_node = next_node.as(not null)
		end
	end

	redef fun iterator do return new UnrolledIterator[E](self)
end

# Node composing an `UnrolledList`
#
# Stores the elements in the `items` array. The elements in the `items` array
# begin at `head_index` and end right before `tail_index`. The data is contiguous,
# but there can be empty cells at the beginning and the end of the array.
private class UnrolledNode[E]

	var prev: nullable UnrolledNode[E] = null

	var next: nullable UnrolledNode[E] = null

	# Desired length of `items`
	var capacity: Int

	# `Array` of items in this node, filled with `null`
	var items = new Array[nullable E].filled_with(null, capacity) is lazy

	# Index of the first element in `items`
	var head_index = 0

	# Index after the last element in `items`
	var tail_index = 0

	fun length: Int do return tail_index - head_index

	fun full: Bool do return length == capacity

	fun is_empty: Bool do return tail_index == head_index

	# Move towards the head all elements before `index` of `displace` cells
	fun move_tail(index, displace: Int)
	do
		for i in [tail_index-1..head_index+index].step(-1) do
			items[i+displace] = items[i]
		end
	end

	# Move towards the tail all elements at and after `index` of `displace` cells
	fun move_head(index, displace: Int)
	do
		for i in [head_index..head_index+index[ do
			items[i-displace] = items[i]
		end
	end
end

private class UnrolledIterator[E]
	super IndexedIterator[E]

	var list: UnrolledList[E]

	var node: nullable UnrolledNode[E] = list.head_node is lazy

	# Index of the current `item`
	redef var index = 0

	# Index within the current `node`
	var index_in_node: Int = node.head_index is lazy

	redef fun item do return node.items[index_in_node]

	redef fun is_ok do return index < list.length

	redef fun next
	do
		index += 1
		index_in_node += 1

		if index_in_node >= node.tail_index then
			node = node.next
			if node != null then index_in_node = node.head_index
		end
	end
end

# Keep track of the best elements according to a distance value.
#
# ~~~
# var bests = new BestDistance[String](5)
# bests.update(10, "Too big")
# assert bests.best_items.is_empty
# bests.update(5, "Just fine")
# bests.update(5, "Another one")
# assert bests.best_items.has_exactly(["Just fine", "Another one"])
# bests.update(2, "A better one")
# bests.update(4, "Not good enough")
# assert bests.best_distance == 2
# assert bests.best_items.has_exactly(["A better one"])
# ~~~
class BestDistance[E]
	# Current smallest distance
	var best_distance: Int is writable

	# Known elements with the smallest distance
	var best_items = new Set[E] is writable

	# Register a `candidate` with a `distance`
	#
	# * To high, it is ignored.
	# * Equal to the current best, it is added
	# * Better that them, is is the new best element
	#
	# Return `true` if the candidate is kept (alone or with other)
	# returns `false` if the candidate is ignored.
	fun update(distance: Int, candidate: E): Bool
	do
		if distance > best_distance then return false
		if distance < best_distance then
			best_distance = distance
			best_items.clear
		end
		best_items.add candidate
		return true
	end
end
