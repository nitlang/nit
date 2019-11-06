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

# A trie (or prefix tree) is a datastructure used to perform prefix searches.
#
# The trie uses an arborescent datastructure to perform searches on a prefix.
# With this version of the trie, you can link data to nodes so the trie can
# be used as a kind of Map by prefix.
#
# ~~~
# # Associate some integers to Map keys
# var trie = new Trie[Int]
# trie["foo"] = 1
# trie["fooo"] = 2
# trie["foooo"] = 3
# trie["bar"] = 4
# trie["baz"] = 5
#
# # Get stored values by key
# print trie.has_key("foo")
# print trie["foo"] == 1
#
# # Get stored values by prefix
# assert trie.has_prefix("fo")
# assert not trie.has_prefix("z")
# assert trie.find_by_prefix("foo") == [1, 2, 3]
# assert trie.find_by_prefix("bar") == [4]
# assert trie.find_by_prefix("z").is_empty
# ~~~
module trie

import trees

# Trie data structure for prefix searches
#
# ~~~
# # Associate some integers to Map keys
# var trie = new Trie[Int]
# trie["foo"] = 1
# trie["fooo"] = 2
# trie["bar"] = 3
#
# # Search by key
# assert trie.has_key("foo")
# assert trie["foo"] == 1
#
# # Search by prefix
# assert trie.find_by_prefix("") == [1, 3, 2]
# assert trie.find_by_prefix("foo") == [1, 2]
# assert trie.find_by_prefix("baz").is_empty
# ~~~
class Trie[E]
	super Map[String, E]

	# Trie root
	#
	# Root children are used to store the first letters.
	private var root = new TrieNode[E]

	redef fun []=(key, value) do
		var children = root.children

		for i in [0..key.length[ do
			var c = key.chars[i]

			var node
			if children.has_key(c) then
				node = children[c]
			else
				node = new TrieNode[E](c)
				children[c] = node
			end
			children = node.children

			if i == key.length - 1 then
				node.is_leaf = true
				node.value = value
			end
		end
	end

	# Cache node used between `has_key` and `[]`
	private var cache: nullable TrieNode[E] = null

	# Cache key used between `has_key` and `[]`
	private var cache_key: nullable String = null

	redef fun [](key) do
		if cache_key == key then return cache.as(not null).value.as(not null)
		var node = search_node(key)
		assert node != null
		return node.value
	end

	redef fun has_key(key) do
		var node = search_node(key)
		if node == null then return false
		var res = node.is_leaf
		if res then
			cache = node
			cache_key = key.as(String)
		end
		return res
	end

	# Find values stored under `prefix`
	#
	# ~~~
	# # Associate some integers to Map keys
	# var trie = new Trie[Int]
	# trie["foo"] = 1
	# trie["fooo"] = 2
	# trie["foooo"] = 3
	# trie["bar"] = 4
	#
	# assert trie.find_by_prefix("") == [1, 4, 2, 3]
	# assert trie.find_by_prefix("foo") == [1, 2, 3]
	# assert trie.find_by_prefix("bar") == [4]
	# assert trie.find_by_prefix("baz").is_empty
	# ~~~
	fun find_by_prefix(prefix: String): Array[E] do
		var node
		if prefix == "" then
			node = root
		else
			node = search_node(prefix)
		end
		if node == null then return new Array[E]
		return node.collect_values
	end

	# Find values stored under `prefix`
	#
	# ~~~
	# # Associate some integers to Map keys
	# var trie = new Trie[Int]
	# trie["foo"] = 1
	# trie["bar"] = 4
	# trie["baz"] = 5
	#
	# assert trie.has_prefix("")
	# assert trie.has_prefix("f")
	# assert not trie.has_prefix("z")
	# ~~~
	fun has_prefix(prefix: String): Bool do
		if prefix == "" then return true
		return search_node(prefix) != null
	end

	# Search a node by a key or prefix
	#
	# Returns `null` if no node matches `string`.
	private fun search_node(string: nullable Object): nullable TrieNode[E] do
		if string == null then return null
		string = string.to_s
		var children = root.children
		var node = null
		for i in [0..string.length[ do
			var c = string.chars[i]
			if children.has_key(c) then
				node = children[c]
				children = node.children
			else
				node = null
				break
			end
		end
		return node
	end
end

# TrieNode used to store the Character key of the value
private class TrieNode[E]
	var c: nullable Char
	var value: nullable E
	var children = new HashMap[Char, TrieNode[E]]
	var is_leaf: Bool = false

	fun collect_values: Array[E] do
		var values = new Array[E]

		var todo = new List[TrieNode[E]]
		todo.add self
		while todo.not_empty do
			var node = todo.shift
			var value = node.value
			if value != null then values.add value
			for child in node.children.values do
				todo.push child
			end
		end
		return values
	end
end
