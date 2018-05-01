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

# Manipulation and presentation of ordered trees.
module ordered_tree

# Generic structure to manage and display an ordered tree
#
# Ordered tree are tree where the elements of a same parent are in a specific order
#
# Elements of the trees are added with the `add` method that takes a parent and
# a sub-element.
# If the parent is `null`, then the element is considered a root.
#
# ~~~~
# var t = new OrderedTree[String]
# t.add(null, "root")
# t.add("root", "child1")
# t.add("root", "child2")
# t.add("child1", "grand-child")
# assert t.length == 4
# ~~~~
#
# By default, the elements with a same parent
# are visited in the order they are added.
#
# ~~~
# assert t.to_a == ["root", "child1", "grand-child", "child2"]
# assert t.write_to_string == """
# root
# |--child1
# |  `--grand-child
# `--child2
# """
# ~~~
#
# The `sort_with` method can be used reorder elements
#
# ~~~
# t.add("root", "aaa")
# assert t.to_a == ["root", "child1", "grand-child", "child2", "aaa"]
# t.sort_with(alpha_comparator)
# assert t.to_a == ["root", "aaa", "child1", "grand-child", "child2"]
# ~~~
#
# This class can be used as it to work with generic trees but can also be specialized to provide more specific
# behavior or display. It is why the internal attributes are mutable.
class OrderedTree[E: Object]
	super Writable
	super Collection[E]
	super Cloneable

	# The roots of the tree (in sequence)
	var roots = new Array[E]

	# The branches of the trees.
	# For each element, the ordered array of its direct sub-elements.
	var sub = new HashMap[E, Array[E]]

	# The parent of each element.
	#
	# Roots have `null` as parent.
	private var parents = new HashMap[E, nullable E]

	redef fun length do return parents.length

	redef fun has(e) do return parents.has_key(e)

	# The parent of the element `e`
	#
	# Roots have `null` as parent.
	#
	# ~~~
	# var tree = new OrderedTree[Int]
	# tree.add(1, 2)
	# assert tree.parent(2) == 1
	# assert tree.parent(1) == null
	# ~~~
	fun parent(e: E): nullable E do return parents[e]

	# Add a new element `e` in the tree.
	#
	# `p` is the parent of `e`.
	# If `p` is null, then `e` is a root element.
	#
	# If `e` is already in the tree, it is detached from its old
	# parent and attached to the new parent `p`.
	fun add(p: nullable E, e: E)
	do
		detach(e)
		parents[e] = p
		if p == null then
			roots.add(e)
		else
			if not has(p) then add(null, p)
			if sub.has_key(p) then
				sub[p].add(e)
			else
				sub[p] = [e]
			end
		end
	end

	# Append all nodes `es` as children of `p`.
	fun add_all(p: nullable E, es: Collection[E])
	do
		for e in es do add(p, e)
	end

	# Temporary remove `e`.
	#
	# Children of `e` are left untouched in the tree.
	# This make the tree inconstant until `e` is added back.
	private fun detach(e: E)
	do
		var old_parent = parents.get_or_null(e)
		if old_parent != null then
			var subs = sub[old_parent]
			subs.remove(e)
			if subs.is_empty then
				# remove the sub when all children are detached
				# so that `==` and `hash` are sane
				# Otherwise an empty array will be considered
				# differently than no array.
				sub.keys.remove(old_parent)
			end
		else if roots.has(e) then
			roots.remove(e)
		end
	end

	# print the full tree on `o`
	# Write a ASCII-style tree and use the `display` method to label elements
	redef fun write_to(stream: Writer)
	do
		for r in roots do
			write_line(stream, r, "")
			sub_write_to(stream, r, "")
		end
	end

	private fun sub_write_to(o: Writer, e: E, prefix: String)
	do
		if not sub.has_key(e) then return
		var subs = sub[e]
		if subs.is_empty then return
		var last = subs.last
		for e2 in subs do
			if e2 != last then
				write_line(o, e2, prefix+"|--")
				sub_write_to(o, e2, prefix+"|  ")
			else
				write_line(o, e2, prefix+"`--")
				sub_write_to(o, e2, prefix+"   ")
			end
		end
	end

	# Write the full line for the element `e` in `o`.
	#
	# Basically it does:
	#
	# ~~~nitish
	# o.write "{prefix}{display(e)}\n"
	# ~~~
	#
	# Usually, you should redefine `display` to change the display of an element.
	protected fun write_line(o: Writer, e: E, prefix: String)
	do
		o.write "{prefix}{display(e)}\n"
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
	#     tree.add_all(null, [1, 2])
	#     tree.add_all(1, [11, 12])
	#     tree.add_all(11, [111, 112])
	#     tree.add_all(12, [121, 122])
	#     tree.add_all(2, [21, 22])
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
	#     tree.add_all(null, [1, 2])
	#     tree.add_all(1, [11, 12])
	#     tree.add_all(11, [111, 112])
	#     tree.add_all(12, [121, 122])
	#     tree.add_all(2, [21, 22])
	#     var order = [1, 11, 111, 112, 12, 121, 122, 2, 21, 22]
	#     assert tree.iterator.to_a == order
	redef fun iterator do return new OrderedTreeIterator[E](self)

	# Two trees are equal if they have the same nodes in the same order
	#
	# ~~~
	# var t1 = new OrderedTree[Int]
	# t1.add_all(null, [1, 2])
	# t1.add_all(1, [11, 12])
	#
	# var t2 = new OrderedTree[Int]
	# t2.add_all(null, [1, 2])
	#
	# assert t1 != t2
	#
	# t2.add_all(1, [11, 12])
	#
	# assert t1 == t2
	# ~~~
	redef fun ==(other)
	do
		if not other isa OrderedTree[Object] then return false
		return roots == other.roots and sub == other.sub
	end

	redef fun hash
	do
		return roots.hash + sub.hash
	end

	# Shallow clone of the tree.
	#
	# ~~~
	# var t = new OrderedTree[Int]
	# t.add_all(null, [1, 2])
	# t.add_all(1, [11, 12])
	#
	# assert t.clone == t
	# ~~~
	redef fun clone
	do
		var res = new OrderedTree[E]
		res.add_all(null, roots)
		for p, es in sub do
			res.add_all(p, es)
		end
		return res
	end
end

# An Iterator over an OrderedTree
private class OrderedTreeIterator[E: Object]
	super Iterator[E]

	var tree: OrderedTree[E]

	var iterators = new Array[Iterator[E]]

	init do
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
