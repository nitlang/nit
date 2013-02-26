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

# Graph coloring tools
module coloring

import abstract_compiler

# Layouts

class TypingLayout[E]
	# Unic ids or each element
	var ids: Map[E, Int] = new HashMap[E, Int]
	# Fixed positions of each element in all tables
	var pos: Map[E, Int] = new HashMap[E, Int]
end

class PHTypingLayout[E]
	super TypingLayout[E]
	# Masks used by hash function
	var masks: Map[E, Int] = new HashMap[E, Int]
	# Positions of each element for each tables
	var hashes: Map[E, Map[E, Int]] = new HashMap[E, Map[E, Int]]
end

class PropertyLayout[E]
	# Fixed positions of each element in all tables
	var pos: Map[E, Int] = new HashMap[E, Int]
end

# Layout for resolution tables
class ResolutionLayout
	# Unic ids for each resolved type
	var ids: Map[MType, Int] = new HashMap[MType, Int]
	# Fixed positions of resolved type
	var pos: Map[MType, Int] = new HashMap[MType, Int]
end

class PHResolutionLayout
	super ResolutionLayout
	# Masks associated to each owner of a resolution table
	var masks: Map[MClassType, Int] = new HashMap[MClassType, Int]
	# Positions of each resolvec type for resolution tables
	var hashes: Map[MClassType, Map[MType, Int]] = new HashMap[MClassType, Map[MType, Int]]
end

# Builders

abstract class TypingLayoutBuilder[E]

	type LAYOUT: TypingLayout[E]

	private var mmodule: MModule
	init(mmodule: MModule) do self.mmodule = mmodule

	# Compute elements ids and position
	fun build_layout(elements: Set[E]): LAYOUT is abstract

	# Give each MType a unic id using a descending linearization of the `mtypes` set
	private fun compute_ids(elements: Set[E]): Map[E, Int] do
		var ids = new HashMap[E, Int]
		var lin = self.reverse_linearize(elements)
		for element in lin do
			ids[element] = ids.length
		end
		return ids
	end

	private fun reverse_linearize(elements: Set[E]): Array[E] is abstract
end

# Layout builder for MType using Binary Matrix (BM)
class BMTypeLayoutBuilder
	super TypingLayoutBuilder[MType]

	init(mmodule: MModule) do super

	# Compute mtypes ids and position using BM
	redef fun build_layout(mtypes) do
		var result = new TypingLayout[MType]
		result.ids = self.compute_ids(mtypes)
		result.pos = result.ids
		return result
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

# Layout builder for MType using Coloring (CL)
class CLTypeLayoutBuilder
	super TypingLayoutBuilder[MType]

	private var colorer: MTypeColorer

	init(mmodule: MModule) do
		super
		self.colorer = new MTypeColorer(mmodule)
	end

	# Compute mtypes ids and position using BM
	redef fun build_layout(mtypes) do
		var result = new TypingLayout[MType]
		result.ids = self.compute_ids(mtypes)
		result.pos = self.colorer.colorize(mtypes)
		return result
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

# Layout builder for MType using Perfect Hashing (PH)
class PHTypeLayoutBuilder
	super TypingLayoutBuilder[MType]

	redef type LAYOUT: PHTypingLayout[MType]

	private var hasher: MTypeHasher

	init(mmodule: MModule, operator: PHOperator) do
		super
		self.hasher = new MTypeHasher(mmodule, operator)
	end

	# Compute mtypes ids and position using BM
	redef fun build_layout(mtypes) do
		var result = new PHTypingLayout[MType]
		result.ids = self.compute_ids(mtypes)
		result.masks = self.hasher.compute_masks(mtypes, result.ids)
		result.hashes = self.hasher.compute_hashes(mtypes, result.ids, result.masks)
		return result
	end

	# Ids start from 1 instead of 0
	redef fun compute_ids(mtypes) do
		var ids = new HashMap[MType, Int]
		var lin = self.mmodule.reverse_linearize_mtypes(mtypes)
		for mtype in lin do
			ids[mtype] = ids.length + 1
		end
		return ids
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

# Layout builder for MClass using Binary Matrix (BM)
class BMClassLayoutBuilder
	super TypingLayoutBuilder[MClass]

	init(mmodule: MModule) do super

	# Compute mclasses ids and position using BM
	redef fun build_layout(mclasses) do
		var result = new TypingLayout[MClass]
		result.ids = self.compute_ids(mclasses)
		result.pos = result.ids
		return result
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mclasses(elements)
end

# Layout builder for MClass using Coloring (CL)
class CLClassLayoutBuilder
	super TypingLayoutBuilder[MClass]

	private var colorer: MClassColorer

	init(mmodule: MModule) do
		super
		self.colorer = new MClassColorer(mmodule)
	end

	# Compute mclasses ids and position using BM
	redef fun build_layout(mclasses) do
		var result = new TypingLayout[MClass]
		result.ids = self.compute_ids(mclasses)
		result.pos = self.colorer.colorize(mclasses)
		return result
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mclasses(elements)
end

# Layout builder for MClass using Perfect Hashing (PH)
class PHClassLayoutBuilder
	super TypingLayoutBuilder[MClass]

	redef type LAYOUT: PHTypingLayout[MClass]

	private var hasher: MClassHasher

	init(mmodule: MModule, operator: PHOperator) do
		super
		self.hasher = new MClassHasher(mmodule, operator)
	end

	# Compute mclasses ids and position using BM
	redef fun build_layout(mclasses) do
		var result = new PHTypingLayout[MClass]
		result.ids = self.compute_ids(mclasses)
		result.masks = self.hasher.compute_masks(mclasses, result.ids)
		result.hashes = self.hasher.compute_hashes(mclasses, result.ids, result.masks)
		return result
	end

	# Ids start from 1 instead of 0
	redef fun compute_ids(mclasses) do
		var ids = new HashMap[MClass, Int]
		var lin = self.mmodule.reverse_linearize_mclasses(mclasses)
		for mclass in lin do
			ids[mclass] = ids.length + 1
		end
		return ids
	end

	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mclasses(elements)
end

abstract class PropertyLayoutBuilder[E: MProperty]

	type LAYOUT: PropertyLayout[E]

	private var mmodule: MModule
	init(mmodule: MModule) do self.mmodule = mmodule

	# Compute properties ids and position
	fun build_layout(mclasses: Set[MClass]): LAYOUT is abstract
end

# Layout builder for MProperty using Coloring (CL)
class CLPropertyLayoutBuilder[E: MProperty]
	super PropertyLayoutBuilder[E]

	private var colorer: MPropertyColorer[E]

	init(mmodule: MModule) do
		super
		self.colorer = new MPropertyColorer[E](mmodule)
	end

	# Compute mclasses ids and position using BM
	redef fun build_layout(mclasses) do
		var result = new PropertyLayout[E]
		result.pos = self.colorer.colorize(mclasses)
		return result
	end
end

# Layout builder for MProperty using Perfect Hashing (PH)
# TODO implement this class without sublcassing CL builder
class PHPropertyLayoutBuilder[E: MProperty]
	super CLPropertyLayoutBuilder[E]
end

abstract class ResolutionLayoutBuilder

	type LAYOUT: ResolutionLayout

	init do end

	fun build_layout(elements: Map[MClassType, Set[MType]]): LAYOUT is abstract

	fun compute_ids(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
		var ids = new HashMap[MType, Int]
		var color = 0
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				if ids.has_key(element) then continue
				ids[element] = color
				color += 1
			end
		end
		return ids
	end
end

# Layout builder for MClass using Binary Matrix (BM)
class BMResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	init do super

	# Compute resolved types position using BM
	redef fun build_layout(elements) do
		var result = new ResolutionLayout
		result.ids = self.compute_ids(elements)
		result.pos = result.ids
		return result
	end
end

# Layout builder for resolution tables using Coloring (CL)
class CLResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	private var colorer: ResolutionColorer = new ResolutionColorer

	init do super

	# Compute resolved types colors
	redef fun build_layout(elements) do
		var result = new ResolutionLayout
		result.ids = self.compute_ids(elements)
		result.pos = self.colorer.colorize(elements)
		return result
	end
end

# Layout builder for resolution table using Perfect Hashing (PH)
class PHResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	redef type LAYOUT: PHResolutionLayout

	private var hasher: ResolutionHasher

	init(operator: PHOperator) do self.hasher = new ResolutionHasher(operator)

	# Compute resolved types masks and hashes
	redef fun build_layout(elements) do
		var result = new PHResolutionLayout
		result.ids = self.compute_ids(elements)
		result.pos = result.ids
		result.masks = self.hasher.compute_masks(elements, result.ids)
		result.hashes = self.hasher.compute_hashes(elements, result.ids, result.masks)
		return result
	end

	redef fun compute_ids(elements) do
		var ids = new HashMap[MType, Int]
		var color = 1
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				if ids.has_key(element) then continue
				ids[element] = color
				color += 1
			end
		end
		return ids
	end
end

# Colorers

abstract class AbstractColorer[E: Object]

	private var core: Set[E] = new HashSet[E]
	private var crown: Set[E] = new HashSet[E]
	private var border: Set[E] = new HashSet[E]

	private var coloration_result: Map[E, Int] = new HashMap[E, Int]

	init do end

	fun colorize(elements: Set[E]): Map[E, Int] do
		tag_elements(elements)
		build_conflicts_graph(elements)
		colorize_elements(core)
		colorize_elements(border)
		colorize_elements(crown)
		return coloration_result
	end

	# Colorize a collection of elements
	private fun colorize_elements(elements: Set[E]) do
		var min_color = 0

		var lin = reverse_linearize(elements)
		for element in lin do
			var color = min_color
			while not self.is_color_free(element, elements, color) do
				color += 1
			end
			coloration_result[element] = color
			color = min_color
		end
	end

	# Check if a related element to the element already use the color
	private fun is_color_free(element: E, elements: Set[E], color: Int): Bool do
		if conflicts_graph.has_key(element) then
			for st in conflicts_graph[element] do
				if coloration_result.has_key(st) and coloration_result[st] == color then return false
			end
		end
		for st in self.super_elements(element, elements) do
			if coloration_result.has_key(st) and coloration_result[st] == color then return false
		end
		return true
	end

	# Tag elements as core, crown or border
	private fun tag_elements(elements: Set[E]) do
		for element in elements do
			# Check if sub elements are all in single inheritance
			var all_subelements_si = true
			for subelem in self.sub_elements(element, elements) do
				if self.is_element_mi(subelem, elements) then
					all_subelements_si = false
					break
				end
			end

			# Tag as core, crown or border
			if self.is_element_mi(element, elements) then
				core.add_all(self.super_elements(element, elements))
				core.add(element)
				if all_subelements_si then
					border.add(element)
				end
			else if not all_subelements_si then
				core.add_all(self.super_elements(element, elements))
				core.add(element)
			else
				crown.add(element)
			end
		end
	end

	# Conflicts graph of elements hierarchy (two types are in conflict if they have common subelements)
	private fun build_conflicts_graph(elements: Set[E]) do
		self.conflicts_graph = new HashMap[E, HashSet[E]]
		var core = reverse_linearize(self.core)
		for t in core do
			for i in self.linear_extension(t, elements) do
				if t == i then continue

				var lin_i = self.linear_extension(i, elements)

				for j in self.linear_extension(t, elements) do
					if i == j or j == t then continue
					var lin_j = self.linear_extension(j, elements)

					var d_ij = lin_i - lin_j
					var d_ji = lin_j - lin_i

					for ed1 in d_ij do
						if not conflicts_graph.has_key(ed1) then conflicts_graph[ed1] = new HashSet[E]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflicts_graph[ed1].add(ed2)
					end
					for ed1 in d_ij do
						if not conflicts_graph.has_key(ed1) then conflicts_graph[ed1] = new HashSet[E]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflicts_graph[ed1].add(ed2)
					end
				end
			end
		end
	end

	private var conflicts_graph: nullable HashMap[E, Set[E]]

	# cache for linear_extensions
	private var linear_extensions_cache: Map[E, Array[E]] = new HashMap[E, Array[E]]

	# Return a linear_extension of super_elements of the element
	private fun linear_extension(element: E, elements: Set[E]): Array[E] do
		if not self.linear_extensions_cache.has_key(element) then
			var supers = new HashSet[E]
			supers.add(element)
			supers.add_all(self.super_elements(element, elements))
			self.linear_extensions_cache[element] = self.linearize(supers)
		end
		return self.linear_extensions_cache[element]
	end

	private fun super_elements(element: E, elements: Set[E]): Set[E] is abstract
	private fun sub_elements(element: E, elements: Set[E]): Set[E] is abstract
	private fun is_element_mi(element: E, elements: Set[E]): Bool is abstract
	private fun linearize(elements: Set[E]): Array[E] is abstract
	private fun reverse_linearize(elements: Set[E]): Array[E] is abstract
end

# MType coloring
private class MTypeColorer
	super AbstractColorer[MType]

	var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun super_elements(element, elements) do return self.mmodule.super_mtypes(element, elements)
	redef fun is_element_mi(element, elements) do return self.super_elements(element, elements).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mtypes(element, elements)
	redef fun linearize(elements) do return self.mmodule.linearize_mtypes(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

# MClass coloring
private class MClassColorer
	super AbstractColorer[MClass]

	private var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun super_elements(element, elements) do return self.mmodule.super_mclasses(element)
	fun parent_elements(element: MClass): Set[MClass] do return self.mmodule.parent_mclasses(element)
	redef fun is_element_mi(element, elements) do return self.parent_elements(element).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mclasses(element)
	redef fun linearize(elements) do return self.mmodule.linearize_mclasses(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mclasses(elements)
end

# MProperty coloring
private class MPropertyColorer[E: MProperty]

	private var mmodule: MModule
	private var class_colorer: MClassColorer
	private var coloration_result: Map[E, Int] = new HashMap[E, Int]

	init(mmodule: MModule) do
		self.mmodule = mmodule
		self.class_colorer = new MClassColorer(mmodule)
	end

	fun colorize(mclasses: Set[MClass]): Map[E, Int] do
		self.class_colorer.tag_elements(mclasses)
		self.class_colorer.build_conflicts_graph(mclasses)
		self.colorize_core(self.class_colorer.core)
		self.colorize_crown(self.class_colorer.crown)
		return self.coloration_result
	end

	# Colorize properties of the core hierarchy
	private fun colorize_core(mclasses: Set[MClass]) do
		var min_color = 0
		for mclass in mclasses do
			var color = min_color

			# if the class is root, get the minimal color
			if self.mmodule.parent_mclasses(mclass).length == 0 then
				colorize_elements(self.properties(mclass), color)
			else
				# check last color used by parents
				color = max_color(color, self.mmodule.parent_mclasses(mclass))
				# check max color used in conflicts
				if self.class_colorer.conflicts_graph.has_key(mclass) then
					color = max_color(color, self.class_colorer.conflicts_graph[mclass])
				end
				colorize_elements(self.properties(mclass), color)
			end
		end
	end

	# Colorize properties of the crown hierarchy
	private fun colorize_crown(mclasses: Set[MClass]) do
		for mclass in mclasses do
			colorize_elements(self.properties(mclass), max_color(0, self.mmodule.parent_mclasses(mclass)))
		end
	end

	# Colorize a collection of mproperties given a starting color
	private fun colorize_elements(elements: Collection[E], start_color: Int) do
		for element in elements do
			if self.coloration_result.has_key(element) then continue
			self.coloration_result[element] = start_color
			start_color += 1
		end
	end

	private fun max_color(min_color: Int, mclasses: Collection[MClass]): Int do
		var max_color = min_color

		for mclass in mclasses do
			for mproperty in self.properties(mclass) do
				var color = min_color
				if self.coloration_result.has_key(mproperty) then
					color = self.coloration_result[mproperty]
					if color >= max_color then max_color = color + 1
				end
			end
		end
		return max_color
	end

	# Filter properties
	private fun properties(mclass: MClass): Set[E] do
		var properties = new HashSet[E]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa E then properties.add(mprop)
		end
		return properties
	end
end

# Colorer for type resolution table
class ResolutionColorer

	private var coloration_result: Map[MType, Int] = new HashMap[MType, Int]

	init do end

	fun colorize(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
		self.build_conflicts_graph(elements)
		self.colorize_elements(elements)
		return coloration_result
	end

	# Colorize a collection of elements
	fun colorize_elements(elements: Map[MClassType, Set[MType]]) do
		var min_color = 0
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				if self.coloration_result.has_key(element) then continue
				var color = min_color
				while not self.is_color_free(element, color) do
					color += 1
				end
				coloration_result[element] = color
				color = min_color
			end
		end
	end

	# Check if a related element to the element already use the color
	private fun is_color_free(element: MType, color: Int): Bool do
		if conflicts_graph.has_key(element) then
			for st in conflicts_graph[element] do
				if coloration_result.has_key(st) and coloration_result[st] == color then return false
			end
		end
		return true
	end

	# look for unanchored types generated by the same type
	private fun build_conflicts_graph(elements: Map[MClassType, Set[MType]]) do
		for mclasstype, mtypes in elements do
			for mtype in mtypes do
				for otype in mtypes do
					if otype == mtype then continue
					self.add_conflict(mtype, otype)
				end
			end
		end
	end

	private var conflicts_graph: Map[MType, Set[MType]] = new HashMap[MType, Set[MType]]

	private fun add_conflict(mtype: MType, otype: MType) do
		if mtype == otype then return
		if not self.conflicts_graph.has_key(mtype) then  self.conflicts_graph[mtype] = new HashSet[MType]
		self.conflicts_graph[mtype].add(otype)
		if not self.conflicts_graph.has_key(otype) then  self.conflicts_graph[otype] = new HashSet[MType]
		self.conflicts_graph[otype].add(mtype)
	end
end

# Perfect hashers

# Abstract Perfect Hashing
private abstract class AbstractHasher[E: Object]

	var operator: PHOperator

	init(operator: PHOperator) do self.operator = operator

	fun compute_masks(elements: Set[E], ids: Map[E, Int]): Map[E, Int] do
		var masks = new HashMap[E, Int]
		for element in elements do
			var supers = new HashSet[E]
			supers.add_all(self.super_elements(element, elements))
			supers.add(element)
			masks[element] = compute_mask(supers, ids)
		end
		return masks
	end

	fun compute_mask(supers: Set[E], ids: Map[E, Int]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for sup in supers do
				var res = operator.op(mask, ids[sup])
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == supers.length then break
			mask += 1
		end
		return mask
	end

	fun compute_hashes(elements: Set[E], ids: Map[E, Int], masks: Map[E, Int]): Map[E, Map[E, Int]] do
		var hashes = new HashMap[E, Map[E, Int]]
		for element in elements do
			var supers = new HashSet[E]
			supers.add_all(self.super_elements(element, elements))
			supers.add(element)
			var inhashes = new HashMap[E, Int]
			var mask = masks[element]
			for sup in supers do
				inhashes[sup] = operator.op(mask, ids[sup])
			end
			hashes[element] = inhashes
		end
		return hashes
	end

	fun super_elements(element: E, elements: Set[E]): Set[E] is abstract
end

# Abstract operator used for perfect hashing
abstract class PHOperator
	fun op(mask: Int, id:Int): Int is abstract
end

# Hashing using modulo (MOD) operator
# slower but compact
class PHModOperator
	super PHOperator
	init do end
	redef fun op(mask, id) do return mask % id
end

# Hashing using binary and (AND) operator
# faster but sparse
class PHAndOperator
	super PHOperator
	init do end
	redef fun op(mask, id) do return mask.bin_and(id)
end

# MType Perfect Hashing
private class MTypeHasher
	super AbstractHasher[MType]

	var mmodule: MModule

	init(mmodule: MModule, operator: PHOperator) do
		super(operator)
		self.mmodule = mmodule
	end

	redef fun super_elements(element, elements) do return self.mmodule.super_mtypes(element, elements)
end

# MClass Perfect Hashing
private class MClassHasher
	super AbstractHasher[MClass]

	private var mmodule: MModule

	init(mmodule: MModule, operator: PHOperator) do
		super(operator)
		self.mmodule = mmodule
	end

	redef fun super_elements(element, elements) do return self.mmodule.super_mclasses(element)
end

# Resolution tables Perfect Hashing (PH)
private class ResolutionHasher

	var operator: PHOperator

	init(operator: PHOperator) do self.operator = operator

	fun compute_masks(elements: Map[MClassType, Set[MType]], ids: Map[MType, Int]): Map[MClassType, Int] do
		var masks = new HashMap[MClassType, Int]
		for mclasstype, mtypes in elements do
			masks[mclasstype] = compute_mask(mtypes, ids)
		end
		return masks
	end

	private fun compute_mask(mtypes: Set[MType], ids: Map[MType, Int]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for mtype in mtypes do
				var res = operator.op(mask, ids[mtype])
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == mtypes.length then break
			mask += 1
		end
		return mask
	end

	fun compute_hashes(elements: Map[MClassType, Set[MType]], ids: Map[MType, Int], masks: Map[MClassType, Int]): Map[MClassType, Map[MType, Int]] do
		var hashes = new HashMap[MClassType, Map[MType, Int]]
		for mclasstype, mtypes in elements do
			var mask = masks[mclasstype]
			var inhashes = new HashMap[MType, Int]
			for mtype in mtypes do
				inhashes[mtype] = operator.op(mask, ids[mtype])
			end
			hashes[mclasstype] = inhashes
		end
		return hashes
	end
end
