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
	fun pretty(o: OStream)
	do
		var last = roots.last
		for r in roots do
			o.write display(r)
			o.write "\n"
			sub_pretty(o, r, "")
		end
	end

	private fun sub_pretty(o: OStream, e: E, prefix: String)
	do
		if not sub.has_key(e) then return
		var subs = sub[e]
		var last = subs.last
		for e2 in subs do
			if e2 != last then
				o.write "{prefix}|--{display(e2)}\n"
				sub_pretty(o, e2, prefix+"|  ")
			else
				o.write "{prefix}`--{display(e2)}\n"
				sub_pretty(o, e2, prefix+"   ")
			end
		end
	end

	# Sort roots and other elements using a comparator method
	# This method basically sorts roots then each group of children
	fun sort_with(comparator: AbstractSorter[E])
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
end
