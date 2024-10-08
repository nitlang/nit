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

# Introduce tree structures abstraction
# Trees are a widely used abstract data type (ADT) or data structure
# implementing this ADT that simulates a hierarchical tree structure,
# with a root value and subtrees of children, represented as a set of linked nodes.
module abstract_tree

# Abstract tree map structure
# * `K`: tree node key
# * `E`: tree node value
abstract class TreeMap[K: Comparable, E]
	super Map[K, E]

	# Type of nodes used in this tree implementation
	protected type N: TreeNode[K, E]

	# The `root` node of the tree (null if tree is empty)
	protected var root: nullable N = null is protected writable

	# Display the tree in a gaphical windows
	# Graphviz with a working -Txlib is expected
	# Used for debugging
	fun show_dot is abstract
end

# Abstract node structure used in `Tree` implementation
#
# Nodes are defined recursively each node (except the root one) pointing to a parent.
# Nodes can be used to store data with the `TreeNode::value` attribute.
#
# Formal parameters:
# * `K`: key type (a `Comparable` one so nodes can be sorted by their keys)
# * `E`: value type (to store your data)
abstract class TreeNode[K: Comparable, E]
	super Comparable

	# TreeNode type
	type N: TreeNode[K, E]

	# `key` for this node
	var key: K

	# `value` stored in the node
	var value: E

	# Direct parent of this node (`null` if the node is root)
	#
	# See `Tree::root`.
	var parent: nullable N = null is writable

	# Depth in tree (length of the path from `self` to `root`)
	fun depth: Int do
		var node = parent
		var i = 0
		while node != null do
			node = node.parent
			i += 1
		end
		return i
	end

	redef fun to_s do return "\{{value or else ""}\}"

	# Return dot representation of this node
	#
	# See `Tree::show_dot`.
	fun to_dot: String do
		var res = new FlatBuffer
		res.append "\"{self}\";\n"
		if parent != null then res.append "\"{parent.as(not null)}\" -> \"{self}\"[dir=back];\n"
		return res.to_s
	end

	redef type OTHER: N

	# Nodes equality is done on `value` equality
	#
	# Redefine this method to change the default behavior.
	redef fun ==(o) do
		if not o isa N then return false
		return self.value == o.value
	end

	# Nodes ordering is based on the `key`
	redef fun <(o) do return self.key < o.key
end
