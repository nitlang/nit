# This file is part of NIT (http://www.nitlanguage.org).
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
# The QuadTree data structure partition a 2D space by recursively
# subdividing it into 4 regions when it's capacity is reached
# This module introduce 2 principal implementation of the structure,
# the static and the dynamic QuadTree
module quadtree

import boxes
import pipeline

# Abstract QuadTree implementing most of the basic functions
# and introducing specific QuadTree data
abstract class QuadTree[E: Boxed[Numeric]]
	super BoxedCollection[E]

	protected var center: nullable Point[Numeric] = null
	var data: Array[E] = new Array[E]

	#  ________________
	#  |       |       |
	#  |   1   |   2   |
	#  |-------|-------|
	#  |   0   |   3   |
	#  |_______|_______|

	protected var child0: nullable QuadTree[E] = null
	protected var child1: nullable QuadTree[E] = null
	protected var child2: nullable QuadTree[E] = null
	protected var child3: nullable QuadTree[E] = null

	# represent the threshold before subdividing the node
	protected var item_limit: Int
	protected var parent_node: nullable QuadTree[E] = null

	# create a node, giving him self as a parent. Used to create children nodes
	init with_parent(limit: Int, parent: QuadTree[E])
	do
		init(limit)
		self.parent_node = parent
	end

	redef fun items_overlapping(region :Boxed[Numeric]): SimpleCollection[E] do
		var res = new Array[E]
		items_overlapping_in(region,res)
		return res
	end

	# add the item to the tree, create children if the limit is reached
	redef fun add(item: E) do if self.is_leaf then self.data.add(item) else add_to_children(item)

	private fun add_to_children(item: Boxed[Numeric])
	do
		if self.child0 != null then
			if self.center.x > item.right then
				if self.center.y > item.top then
					child0.add(item)
				else if self.center.y < item.bottom then
					child1.add(item)
				else
					self.data.add(item)
				end
			else if self.center.x < item.left then
				if self.center.y > item.top then
					child3.add(item)
				else if self.center.y < item.bottom then
					child2.add(item)
				else
					self.data.add(item)
				end
			else if self.center.y > item.top then
				self.data.add(item)
			else if self.center.y < item.bottom then
				self.data.add(item)
			else
				self.data.add(item)
			end
		end
	end

	redef fun is_empty: Bool do return data.is_empty and (self.is_leaf or (child0.is_empty and child1.is_empty and child2.is_empty and child3.is_empty))

	# Return whether or not the Node is a leaf of the tree
	fun is_leaf: Bool do return child0 == null

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
	fun items_overlapping_in(region: Boxed[Numeric], mdata: SimpleCollection[E])
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
		if self.child0 != null then
			if self.center.x > region.right then
				if self.center.y > region.top then
					child0.items_overlapping_in(region, mdata)
				else if self.center.y < region.bottom then
					child1.items_overlapping_in(region, mdata)
				else
					child0.items_overlapping_in(region,mdata)
					child1.items_overlapping_in(region, mdata)
				end
			else if self.center.x < region.left then
				if self.center.y > region.top then
					child3.items_overlapping_in(region, mdata)
				else if self.center.y < region.bottom then
					child2.items_overlapping_in(region, mdata)
				else
					child3.items_overlapping_in(region, mdata)
					child2.items_overlapping_in(region, mdata)
				end
			else if self.center.y > region.top then
				child0.items_overlapping_in(region, mdata)
				child3.items_overlapping_in(region, mdata)
			else if self.center.y < region.bottom then
				child1.items_overlapping_in(region, mdata)
				child2.items_overlapping_in(region, mdata)
			else
				child0.items_overlapping_in(region, mdata)
				child1.items_overlapping_in(region, mdata)
				child2.items_overlapping_in(region, mdata)
				child3.items_overlapping_in(region, mdata)
			end
		end
	end

	# this function is responsible of the creation of the children,
	# depending on your needs
	protected fun subdivide is abstract

	redef fun iterator do if self.is_leaf then return data.iterator else return data.iterator + child0.iterator + child1.iterator + child2.iterator + child3.iterator
end

# A dynamic implementation of the quadtree data structure
# the center of the parent node is determined by the average
# values of the data it contains when the item limit is reached
class DQuadTree[E: Boxed[Numeric]]
	super QuadTree[E]

	redef fun subdivide
	do
		self.center = new Point[Numeric](average_x, average_y)
		child0 = new DQuadTree[E].with_parent(self.item_limit, self)
		child1 = new DQuadTree[E].with_parent(self.item_limit, self)
		child2 = new DQuadTree[E].with_parent(self.item_limit, self)
		child3 = new DQuadTree[E].with_parent(self.item_limit, self)
	end

	# average x of data in this node
	fun average_x: Numeric
	do
		var x_total = data.first.left.zero
		for data in self.data do
			x_total += (data.left + data.right)/x_total.value_of(2)
		end
		return x_total/x_total.value_of(self.data.length)
	end

	# average y of data in this node
	fun average_y: Numeric
	do
		var y_total = data.first.left.zero
		for data in self.data do
			y_total += (data.left + data.right)/y_total.value_of(2)
		end
		return y_total/y_total.value_of(self.data.length)
	end
end

# Static implementation of the quadtree structure.
# You need to specify a zone when creating the quadtree,
# which will be the zone corresponding to the root node.
# each subdivision cut the space in 4 equal regions from
# the center of the parent node
class SQuadTree[E: Boxed[Numeric]]
	super QuadTree[E]

	# the width of the current node of the QuadTree
	var width: Numeric
	# the height of the current node of the QuadTree
	var height: Numeric

	init with_parent(l: Int, c: Point[Numeric], w: Numeric, h: Numeric, p: QuadTree[E])
	do
		init(l, w, h)
		center = c
		self.parent_node = p
	end

	redef fun subdivide
	do
		var two = self.center.x.value_of(2)
		var tree = self.center.x.value_of(3)
		child0 = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric](self.center.x/two, self.center.y/two), self.width/two, self.height/two, self)
		child1 = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric](self.center.x/two, (self.center.y*tree)/two), self.width/two, self.height/two, self)
		child2 = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric]((self.center.x*tree)/two, (self.center.y*tree)/two), self.width/two, self.height/two, self)
		child3 = new SQuadTree[E].with_parent(self.item_limit, new Point[Numeric]((self.center.x*tree)/two, self.center.y/two), self.width/two, self.height/two, self)
	end
end
