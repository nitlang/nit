# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# QuadTree API mostly used for 2 dimensional collision detection
#
# The QuadTree data structure partition a 2D space by recursively
# subdividing it into 4 regions when its capacity is reached.
# This module introduces 2 main implementation of the structure,
# a static and a dynamic QuadTree.
module quadtree

import boxes
import pipeline

# Abstract QuadTree implementing the basic functions and data
abstract class QuadTree[E: Boxed[Numeric]]
	super BoxedCollection[E]

	# Center coordinate of the children
	protected var center: nullable Point[Numeric] = null

	# Items in this node
	protected var data = new Array[E]

	# Children nodes, if not `is_leaf`
	#
	# ~~~raw
	# ________________
	# |       |       |
	# |   1   |   2   |
	# |-------|-------|
	# |   0   |   3   |
	# |_______|_______|
	# ~~~
	protected var children = new Array[QuadTree[E]]

	# Maximum number of items in this node before subdividing
	protected var item_limit: Int

	# Parent node in the tree
	protected var parent_node: nullable QuadTree[E] = null

	# Create a child node to `parent`
	init with_parent(limit: Int, parent: QuadTree[E])
	do
		init(limit)
		self.parent_node = parent
	end

	redef fun items_overlapping(region): SimpleCollection[E] do
		var res = new Array[E]
		items_overlapping_in(region,res)
		return res
	end

	# Add `item` to the tree, create children if `item_limit` is reached
	redef fun add(item) do if self.is_leaf then self.data.add(item) else add_to_children(item)

	private fun add_to_children(item: Boxed[Numeric])
	do
		if children.not_empty then
			var center = center
			assert center != null
			if center.x > item.right then
				if center.y > item.top then
					children[0].add(item)
				else if center.y < item.bottom then
					children[1].add(item)
				else
					self.data.add(item)
				end
			else if center.x < item.left then
				if center.y > item.top then
					children[3].add(item)
				else if center.y < item.bottom then
					children[2].add(item)
				else
					self.data.add(item)
				end
			else if center.y > item.top then
				self.data.add(item)
			else if center.y < item.bottom then
				self.data.add(item)
			else
				self.data.add(item)
			end
		end
	end

	redef fun is_empty
	do
		if is_leaf then return data.is_empty

		assert children.length >= 4
		return data.is_empty and children[0].is_empty and children[1].is_empty and children[2].is_empty and children[3].is_empty
	end

	# Return whether or not the Node is a leaf of the tree
	fun is_leaf: Bool do return children.is_empty

	#     var dquadtree = new DQuadTree[Point[Int]](2)
	#     var p1 = new Point[Int](0,0)
	#     var p2 = new Point[Int](0,9)
	#     var p3 = new Point[Int](9,0)
	#     dquadtree.add(p1)
	#     dquadtree.add(p2)
	#     dquadtree.add(p3)
	#     var result = dquadtree.items_overlapping(p3)
	#     assert result.length == 1
	#     result.clear
	#     var p4 = new Point[Int](9,9)
	#     result = dquadtree.items_overlapping(p4)
	#     assert result.length == 0
	#     result = dquadtree.items_overlapping(p4.padded(10))
	#     assert result.length == 3
	private fun items_overlapping_in(region: Boxed[Numeric], mdata: SimpleCollection[E])
	do
		if self.is_leaf and data.length >= item_limit then
			subdivide
			var data_copy = data
			data = new Array[E]
			#add to the right Node
			for d in data_copy do
				add_to_children(d)
			end
		end
		for i in data do if i.intersects(region) then mdata.add(i)

		if children.not_empty then
			var center = center
			assert center != null
			if center.x > region.right then
				if center.y > region.top then
					children[0].items_overlapping_in(region, mdata)
				else if center.y < region.bottom then
					children[1].items_overlapping_in(region, mdata)
				else
					children[0].items_overlapping_in(region,mdata)
					children[1].items_overlapping_in(region, mdata)
				end
			else if center.x < region.left then
				if center.y > region.top then
					children[3].items_overlapping_in(region, mdata)
				else if center.y < region.bottom then
					children[2].items_overlapping_in(region, mdata)
				else
					children[3].items_overlapping_in(region, mdata)
					children[2].items_overlapping_in(region, mdata)
				end
			else if center.y > region.top then
				children[0].items_overlapping_in(region, mdata)
				children[3].items_overlapping_in(region, mdata)
			else if center.y < region.bottom then
				children[1].items_overlapping_in(region, mdata)
				children[2].items_overlapping_in(region, mdata)
			else
				children[0].items_overlapping_in(region, mdata)
				children[1].items_overlapping_in(region, mdata)
				children[2].items_overlapping_in(region, mdata)
				children[3].items_overlapping_in(region, mdata)
			end
		end
	end

	# Create children nodes, depends on the concrete implementation
	protected fun subdivide is abstract

	redef fun iterator
	do
		if is_leaf then return data.iterator

		assert children.length >= 4
		return data.iterator + children[0].iterator + children[1].iterator + children[2].iterator + children[3].iterator
	end
end

# A dynamic implementation of the quadtree data structure
#
# The center of the parent node is determined by the average
# values of the data it contains when `item_limit` is reached.
class DQuadTree[E: Boxed[Numeric]]
	super QuadTree[E]

	redef fun subdivide
	do
		self.center = new Point[Numeric](average_x, average_y)
		children[0] = new DQuadTree[E].with_parent(self.item_limit, self)
		children[1] = new DQuadTree[E].with_parent(self.item_limit, self)
		children[2] = new DQuadTree[E].with_parent(self.item_limit, self)
		children[3] = new DQuadTree[E].with_parent(self.item_limit, self)
	end

	# Average X coordinate of the items in this node
	fun average_x: Numeric
	do
		var x_total = data.first.left.zero
		for data in self.data do
			x_total += (data.left + data.right)/x_total.value_of(2)
		end
		return x_total/x_total.value_of(self.data.length)
	end

	# Average Y coordinate of the items in this node
	fun average_y: Numeric
	do
		var y_total = data.first.left.zero
		for data in self.data do
			y_total += (data.left + data.right)/y_total.value_of(2)
		end
		return y_total/y_total.value_of(self.data.length)
	end
end

# Static implementation of the quadtree structure
#
# You need to specify a zone when creating the quadtree,
# which will be the zone corresponding to the root node.
# Each subdivision cut the space in 4 equal regions from
# the center of the parent node.
class SQuadTree[E: Boxed[Numeric]]
	super QuadTree[E]

	# Width of this node of the QuadTree
	var width: Numeric

	# Height of this node of the QuadTree
	var height: Numeric

	init
	do
		center = new Point[Numeric](width.div(2), height.div(2))
	end

	# Create a child node to `parent`
	init with_parent(l: Int, c: Point[Numeric], w, h: Numeric, parent: QuadTree[E])
	do
		init(l, w, h)
		center = c
		self.parent_node = parent
	end

	redef fun subdivide
	do
		var center = center
		assert center != null

		children[0] = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric](center.x.div(2), center.y.div(2)), self.width.div(2), self.height.div(2), self)
		children[1] = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric](center.x.div(2), (center.y.mul(3)).div(2)), self.width.div(2), self.height.div(2), self)
		children[2] = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric]((center.x.mul(3)).div(2), (center.y.mul(3)).div(2)), self.width.div(2), self.height.div(2), self)
		children[3] = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric]((center.x.mul(3)).div(2), center.y.div(2)), self.width.div(2), self.height.div(2), self)
	end

	redef fun to_s
	do
		var s = "center : {center or else "null"}\n"
		for d in data do s += d.to_s

		if children.not_empty then
			s += "\n   children[0]: {children[0]}\n"
			s += "   children[1]: {children[1]}\n"
			s += "   children[2]: {children[2]}\n"
			s += "   children[3]: {children[3]}\n"
		end
		return s
	end
end
