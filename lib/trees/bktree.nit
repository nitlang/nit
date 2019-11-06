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

# Implementation of BKTree
#
# As proposed by W. A. Burkhard and R. M. Keller in
# "Some approaches to best-match file searching" the BKTree data structure
# is usefull to speed-up spell checking based on the Levenshtein distance between
# words.
#
# With a BKTree, the complexity to find mispelled words in a dictionnary is *O(log n)*
# instead of *O(n)* with a dummy list.
#
# Example:
#
# ~~~
# # Create a new BKTree
# var tree = new BKTree
#
# # Index some words in the dictionnary for spell checking
# tree.add("book")
# tree.add("books")
# tree.add("cake")
# tree.add("boo")
# tree.add("cape")
# tree.add("boon")
# tree.add("cook")
# tree.add("cart")
#
# # Search suggestions in the BKTree
# assert tree.search("caqe").join(", ") == "\{1: cake\}, \{1: cape\}"
# ~~~
#
# See <https://dl.acm.org/citation.cfm?id=362003.362025>.
module bktree

import abstract_tree

# A BKTree implementation
#
# See `add` to insert a new word.
# See `search` to find matches from a `key`.
class BKTree

	# Default tolerance used to find matches
	#
	# Default is `2`.
	var default_tolerance = 2 is writable

	# Tree root
	private var root: nullable BKNode = null

	# Add a `key` in the tree
	fun add(key: String) do
		var root = self.root
		if root == null then
			self.root = new BKNode(key)
			return
		end

		var node = root
		var dist = node.key.levenshtein_distance(key)

		while node.has_key(dist) do
			if dist == 0 then return
			node = node[dist]
			dist = node.key.levenshtein_distance(key)
		end
		node[dist] = new BKNode(key)
	end

	# Search `key` with a distance of `tolerance` in `self`.
	#
	# If `tolerance` is null, the use `default_tolerance` instead.
	fun search(key: String, tolerance: nullable Int): Array[BKMatch] do
		var res = new Array[BKMatch]
		var root = self.root
		if root != null then
			if tolerance == null then tolerance = self.default_tolerance
			search_recursive(root, res, key, tolerance)
		end
		default_comparator.sort(res)
		return res
	end

	private fun search_recursive(node: BKNode, res: Array[BKMatch], key: String, tolerance: Int) do
		var dist = node.key.levenshtein_distance(key)
		var min = dist - tolerance
		var max = dist + tolerance

		if dist < tolerance then
			res.add new BKMatch(dist, node.key)
		end

		for odist, child in node do
			if odist < min or odist > max then continue
			search_recursive(child, res, key, tolerance)
		end
	end
end

# A node that goes in a BKTree
#
# Each child is mapped from `self` by its distance as an Int.
private class BKNode
	super HashMap[Int, BKNode]

	# Key stored in `self`
	var key: String

	redef fun to_s do return "\{{key}\}"
end

# A match in a BKTree
#
# Used to order results returned by `BKTree::search`.
class BKMatch
	super Comparable

	redef type OTHER: BKMatch

	# Distance of `key` from the search query
	var distance: Int

	# Matched `key`
	var key: String

	redef fun ==(o) do return o isa BKMatch and distance == o.distance and key == o.key

	redef fun <=>(o) do
		if distance == o.distance then
			return key <=> o.key
		end
		return distance <=> o.distance
	end

	redef fun to_s do return "\{{distance}: {key}\}"
end
