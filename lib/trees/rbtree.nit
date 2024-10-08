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

# A red–black tree is a data structure which is a type of self-balancing binary search tree.
#
# Balance is preserved by painting each node of the tree with one of two colors
# (typically called 'red' and 'black') in a way that satisfies certain properties,
# which collectively constrain how unbalanced the tree can become in the worst case.
# When the tree is modified, the new tree is subsequently rearranged and repainted
# to restore the coloring properties.
# The properties are designed in such a way that this rearranging and recoloring
# can be performed efficiently.
#
# The balancing of the tree is not perfect but it is good enough to allow it
# to guarantee searching in O(log n) time, where n is the total number of elements in the tree.
# The insertion and deletion operations, along with the tree rearrangement and recoloring,
# are also performed in O(log n) time.
module rbtree

import bintree

# Red-Black Tree Map
# Properties of a Red-Black tree map:
# * every node is either red or black
# * root is black
# * every leaf (null) is black
# * if a node is red, then both its children are black
# * for each node, all simple path from the node to descendant
#   leaves contain the same number of black nodes
#
# Operations:
# * search average O(lg n) worst O(lg n)
# * insert average O(lg n) worst O(lg n)
# * delete average O(lg n) worst O(lg n)
class RBTreeMap[K: Comparable, E]
	super BinTreeMap[K, E]

	redef type N: RBTreeNode[K, E]

	redef fun []=(key, item) do
		insert_node(new RBTreeNode[K, E](key, item))
	end

	redef fun insert_node(node) do
		super
		insert_fixup_case1(node)
	end

	# Case 1: node is root
	# color node as black
	# it adds a black node on every path so we do nothing else
	private fun insert_fixup_case1(node: N) do
		if node.parent == null then
			node.is_red = false
		else
			insert_fixup_case2(node)
		end
	end

	# Case 2: parent is black
	# it do not add black node so we do nothing else
	private fun insert_fixup_case2(node: N) do
		if node.parent.is_red then insert_fixup_case3(node)
	end

	# Case 3: node, parent and uncle are red
	# this is a LLr or RRr conflict
	# we recolor recursively the tree to the root
	private fun insert_fixup_case3(node: N) do
		if node.uncle != null and node.uncle.is_red then
			node.parent.is_red = false
			node.uncle.is_red = false
			node.grandparent.is_red = true
			insert_fixup_case1(node.grandparent.as(not null))
		else
			insert_fixup_case4(node)
		end
	end

	# Case 4: node and parent are red, uncle is black
	# this is a LRb or RLb conflict
	# we rotate the tree to balance it
	private fun insert_fixup_case4(node: N) do
		if node == node.parent.right and node.parent == node.grandparent.left then
			rotate_left(node.parent.as(not null))
			node = node.left.as(not null)
		else if node == node.parent.left and node.parent == node.grandparent.right then
			rotate_right(node.parent.as(not null))
			node = node.right.as(not null)
		end
		insert_fixup_case5(node)
	end

	# Case 5: node and parent are red, uncle is black
	# this is a LLb or RRb conflict
	# we rotate the tree to balance it
	private fun insert_fixup_case5(node: N) do
		node.parent.is_red = false
		node.grandparent.is_red = true
		if node == node.parent.left then
			rotate_right(node.grandparent.as(not null))
		else
			rotate_left(node.grandparent.as(not null))
		end
	end

	# TODO implement RBTree::delete
	redef fun delete(key) is abstract

	redef fun dot_down(node, f) do
		if node.left != null then dot_down(node.left.as(not null), f)
		f.write node.to_dot
		if node.parent != null then f.write "\"{node.parent.as(not null)}\" -> \"{node}\"[dir=back];\n"
		if node.right != null then dot_down(node.right.as(not null), f)
	end
end

# RedBlackTree node (can be red or black)
class RBTreeNode[K: Comparable, E]
	super BinTreeNode[K, E]

	redef type N: RBTreeNode[K, E]

	# Is the node red?
	private var is_red = true

	redef fun to_dot do
		if is_red then
			return "\"{self}\"[style=filled,fillcolor=red,fontcolor=white];\n"
		else
			return "\"{self}\"[style=filled,fillcolor=black,fontcolor=white];\n"
		end

	end
end
