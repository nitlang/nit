# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# management and display of ordered trees
module ordered_tree

# Generic structure to manage and display an ordered tree
#
# Ordered tree are tree where the elements of a same parent are in a specific order
#
# The class can be used as it to work with generic tree.
# The class can also be specialized to provide more specific behavior.
class OrderedTree[E: Object]
	super Streamable
	super Collection[E]

	# Sequence
	var roots = new Array[E]
	var sub = new HashMap[E, Array[E]]

	# Add a new element `e` in the tree
	# `p` is the parent of `e`.
	# if `p` is null, then `e` is a root element.
	#
	# By defauld, the elements with a same parent 
	# are displayed in the order they are added.
	#
	# The `sort_with` method can be used reorder elements
	fun add(p: nullable E, e: E)
	do
		if p == null then
			roots.add(e)
		else if sub.has_key(p) then
			sub[p].add(e)
		else
			sub[p] = [e]
		end
	end

	# print the full tree on `o`
	# Write a ASCII-style tree and use the `display` method to label elements
	redef fun write_to(stream: OStream)
	do
		var last = roots.last
		for r in roots do
			stream.write display(r)
			stream.write "\n"
			sub_write_to(stream, r, "")
		end
	end

	private fun sub_write_to(o: OStream, e: E, prefix: String)
	do
		if not sub.has_key(e) then return
		var subs = sub[e]
		var last = subs.last
		for e2 in subs do
			if e2 != last then
				o.write "{prefix}|--{display(e2)}\n"
				sub_write_to(o, e2, prefix+"|  ")
			else
				o.write "{prefix}`--{display(e2)}\n"
				sub_write_to(o, e2, prefix+"   ")
			end
		end
	end

	# Sort roots and other elements using a comparator method
	# This method basically sorts roots then each group of children
	fun sort_with(comparator: Comparator)
	do
		comparator.sort(roots)
		for a in sub.values do
			comparator.sort(a)
		end
	end

	# How to display a specific element of the tree
	# By defaut, uses `to_s`
	#
	# Subclasses should redefine this method to provide a specific output
	fun display(e: E): String do return e.to_s

	# Get an array of the contained elements
	# Order is preserved
	#
	#     var tree = new OrderedTree[Int]
	#     tree.add(null, 1)
	#     tree.add(1, 11)
	#     tree.add(11, 111)
	#     tree.add(11, 112)
	#     tree.add(1, 12)
	#     tree.add(12, 121)
	#     tree.add(12, 122)
	#     tree.add(null, 2)
	#     tree.add(2, 21)
	#     tree.add(2, 22)
	#     assert tree.to_a == [1, 11, 111, 112, 12, 121, 122, 2, 21, 22]
	redef fun to_a: Array[E] do
		var res = new Array[E]
		for r in roots do sub_to_a(r, res)
		return res
	end

	private fun sub_to_a(e: E, res: Array[E]) do
		res.add e
		if sub.has_key(e) then for e2 in sub[e] do sub_to_a(e2, res)
	end

	#     var tree = new OrderedTree[Int]
	#     assert tree.is_empty
	#     tree.add(null, 1)
	#     assert not tree.is_empty
	redef fun is_empty: Bool do return roots.is_empty

	#     var tree = new OrderedTree[Int]
	#     tree.add(null, 1)
	#     tree.add(1, 11)
	#     assert tree.first == 1
	redef fun first do return roots.first

	#     var tree = new OrderedTree[Int]
	#     tree.add(null, 1)
	#     tree.add(1, 11)
	#     tree.add(11, 111)
	#     tree.add(11, 112)
	#     tree.add(1, 12)
	#     tree.add(12, 121)
	#     tree.add(12, 122)
	#     tree.add(null, 2)
	#     tree.add(2, 21)
	#     tree.add(2, 22)
	#     var order = [1, 11, 111, 112, 12, 121, 122, 2, 21, 22]
	#     var res = new Array[Int]
	#     for i in tree do res.add(i)
	#     assert res == order
	redef fun iterator do return new OrderedTreeIterator[E](self)
end

# An Iterator over an OrderedTree
private class OrderedTreeIterator[E: Object]
	super Iterator[E]

	var tree: OrderedTree[E]

	var iterators = new Array[Iterator[E]]

	init(tree: OrderedTree[E]) do
		self.tree = tree

		if not tree.is_empty then
			iterators.add tree.roots.iterator
		end
	end

	redef fun is_ok do return not iterators.is_empty

	redef fun item do
		assert is_ok
		return iterators.last.item
	end

	redef fun next do
		assert is_ok
		if tree.sub.has_key(item) then
			iterators.add tree.sub[item].iterator
		else
			iterators.last.next
			while is_ok and not iterators.last.is_ok do
				iterators.pop
				if is_ok and iterators.last.is_ok then
					iterators.last.next
				end
			end
		end
	end

	redef fun iterator do return new OrderedTreeIterator[E](tree)
end
