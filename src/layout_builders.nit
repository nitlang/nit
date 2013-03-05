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

# Table layout builders
module layout_builders

import abstract_compiler

# Layouts

class Layout[E: Object]
	# Ids or each element
	var ids: Map[E, Int] = new HashMap[E, Int]
	# Fixed positions of each element in all tables
	var pos: Map[E, Int] = new HashMap[E, Int]
end

class PHLayout[HOLDER: Object, E: Object]
	super Layout[E]
	# Masks used by hash function
	var masks: Map[HOLDER, Int] = new HashMap[HOLDER, Int]
	# Positions of each element for each tables
	var hashes: Map[HOLDER, Map[E, Int]] = new HashMap[HOLDER, Map[E, Int]]
end

class PropertyLayout[E: Object]
	# Fixed positions of each element in all tables
	var pos: Map[E, Int] = new HashMap[E, Int]
end

# Builders

interface TypingLayoutBuilder[E: Object]
	# Build typing table layout
	fun build_layout(elements: Set[E]): Layout[E] is abstract
end

abstract class PropertyLayoutBuilder[E: MProperty]

	type LAYOUT: PropertyLayout[E]

	# Compute properties ids and position
	fun build_layout(mclasses: Set[MClass]): LAYOUT is abstract
end

# Layout builder for MProperty using Coloring (CL)
class CLPropertyLayoutBuilder[E: MProperty]
	super PropertyLayoutBuilder[E]

	private var colorer: MPropertyColorer[E]

	init(colorer: MPropertyColorer[E]) do
		self.colorer = colorer
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
	type LAYOUT: Layout[MType]
	init do end
	fun build_layout(elements: Map[MClassType, Set[MType]]): LAYOUT is abstract
end

# Layout builder for MClass using Binary Matrix (BM)
class BMResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	init do super

	# Compute resolved types position using BM
	redef fun build_layout(elements) do
		var bmizer = new ResolutionBMizer
		return bmizer.build_layout(elements)
	end
end

# Layout builder for resolution tables using Coloring (CL)
class CLResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	private var colorer: ResolutionColorer = new ResolutionColorer

	init do super

	# Compute resolved types colors
	redef fun build_layout(elements) do
		var result = new Layout[MType]
		result.ids = self.compute_ids(elements)
		result.pos = self.colorer.colorize(elements)
		return result
	end

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

# Layout builder for resolution table using Perfect Hashing (PH)
class PHResolutionLayoutBuilder
	super ResolutionLayoutBuilder

	redef type LAYOUT: PHLayout[MClassType, MType]

	private var hasher: PerfectHasher[MClassType, MType]

	init(operator: PHOperator) do self.hasher = new PerfectHasher[MClassType, MType](operator)

	# Compute resolved types masks and hashes
	redef fun build_layout(elements) do
		var result = new PHLayout[MClassType, MType]
		result.ids = self.compute_ids(elements)
		result.pos = result.ids
		result.masks = self.hasher.compute_masks(elements, result.ids)
		result.hashes = self.hasher.compute_hashes(elements, result.ids, result.masks)
		return result
	end

	fun compute_ids(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
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

# Matrice computers

abstract class TypingBMizer[E: Object]
	super TypingLayoutBuilder[E]

	var mmodule: MModule

	init(mmodule: MModule) do
		self.mmodule = mmodule
	end

	# Compute mtypes ids and position using BM
	redef fun build_layout(elements: Set[E]): Layout[E] do
		var result = new Layout[E]
		var ids = new HashMap[E, Int]
		var lin = self.reverse_linearize(elements)
		for element in lin do
			ids[element] = ids.length
		end
		result.ids = ids
		result.pos = ids
		return result
	end

	private fun reverse_linearize(elements: Set[E]): Array[E] is abstract
end

class MTypeBMizer
	super TypingBMizer[MType]

	init(mmodule: MModule) do super(mmodule)

	redef fun reverse_linearize(elements) do
		return self.mmodule.reverse_linearize_mtypes(elements)
	end
end

class MClassBMizer
	super TypingBMizer[MClass]

	init(mmodule: MModule) do super(mmodule)

	redef fun reverse_linearize(elements) do
		return self.mmodule.reverse_linearize_mclasses(elements)
	end
end

# Layout builder for resolution tables using Binary Matrix (BM)
class ResolutionBMizer
	init do end

	fun build_layout(elements: Map[MClassType, Set[MType]]): Layout[MType] do
		var result = new Layout[MType]
		var ids = new HashMap[MType, Int]
		var color = 0
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				if ids.has_key(element) then continue
				ids[element] = color
				color += 1
			end
		end
		result.ids = ids
		result.pos = ids
		return result
	end
end

# Colorers

abstract class TypingColorer[E: Object]
	super TypingLayoutBuilder[E]

	private var core: Set[E] = new HashSet[E]
	private var crown: Set[E] = new HashSet[E]
	private var border: Set[E] = new HashSet[E]

	private var coloration_result: Map[E, Int] = new HashMap[E, Int]

	init do end

	# Compute the layout with coloring
	redef fun build_layout(elements: Set[E]): Layout[E] do
		var result = new Layout[E]
		result.ids = compute_ids(elements)
		result.pos = colorize(elements)
		return result
	end

	private fun compute_ids(elements: Set[E]): Map[E, Int] do
		var ids = new HashMap[E, Int]
		var lin = reverse_linearize(elements)
		for element in lin do
			ids[element] = ids.length
		end
		return ids
	end

	private fun colorize(elements: Set[E]): Map[E, Int] do
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
class MTypeColorer
	super TypingColorer[MType]

	var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun super_elements(element, elements) do return self.mmodule.super_mtypes(element, elements)
	redef fun is_element_mi(element, elements) do return self.super_elements(element, elements).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mtypes(element, elements)
	redef fun linearize(elements) do return self.mmodule.linearize_mtypes(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

# MClass coloring
class MClassColorer
	super TypingColorer[MClass]

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
abstract class MPropertyColorer[E: MProperty]

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
	private fun properties(mclass: MClass): Set[E] is abstract
end

# Coloring for MMethods
class MMethodColorer
	super MPropertyColorer[MMethod]

	init(mmodule: MModule) do super

	redef fun properties(mclass) do
		var properties = new HashSet[MMethod]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MMethod then properties.add(mprop)
		end
		return properties
	end
end

# Coloring for MMAttributes
class MAttributeColorer
	super MPropertyColorer[MAttribute]

	init(mmodule: MModule) do super

	redef fun properties(mclass) do
		var properties = new HashSet[MAttribute]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MAttribute then properties.add(mprop)
		end
		return properties
	end
end

# Coloring for MVirtualTypeProps
class MVirtualTypePropColorer
	super MPropertyColorer[MVirtualTypeProp]

	init(mmodule: MModule) do super

	redef fun properties(mclass) do
		var properties = new HashSet[MVirtualTypeProp]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MVirtualTypeProp then properties.add(mprop)
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

# Perfect Hashing (PH)
# T = type of holder
# U = type of elements to hash
private class PerfectHasher[T: Object, U: Object]

	var operator: PHOperator

	init(operator: PHOperator) do self.operator = operator

	fun compute_masks(conflicts: Map[T, Set[U]], ids: Map[U, Int]): Map[T, Int] do
		var masks = new HashMap[T, Int]
		for mclasstype, mtypes in conflicts do
			masks[mclasstype] = compute_mask(mtypes, ids)
		end
		return masks
	end

	private fun compute_mask(mtypes: Set[U], ids: Map[U, Int]): Int do
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

	fun compute_hashes(elements: Map[T, Set[U]], ids: Map[U, Int], masks: Map[T, Int]): Map[T, Map[U, Int]] do
		var hashes = new HashMap[T, Map[U, Int]]
		for mclasstype, mtypes in elements do
			var mask = masks[mclasstype]
			var inhashes = new HashMap[U, Int]
			for mtype in mtypes do
				inhashes[mtype] = operator.op(mask, ids[mtype])
			end
			hashes[mclasstype] = inhashes
		end
		return hashes
	end
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

class TypingHasher[E: Object]
	super PerfectHasher[E, E]
	super TypingLayoutBuilder[E]

	var mmodule: MModule

	init(operator: PHOperator, mmodule: MModule) do
		super(operator)
		self.mmodule = mmodule
	end

	redef fun build_layout(elements: Set[E]): PHLayout[E, E] do
		var result = new PHLayout[E, E]
		var conflicts = self.build_conflicts(elements)
		result.ids = self.compute_ids(elements)
		result.masks = self.compute_masks(conflicts, result.ids)
		result.hashes = self.compute_hashes(conflicts, result.ids, result.masks)
		return result
	end

	# Ids start from 1 instead of 0
	private fun compute_ids(elements: Set[E]): Map[E, Int] do
		var ids = new HashMap[E, Int]
		var lin = self.reverse_linearize(elements)
		for e in lin do
			ids[e] = ids.length + 1
		end
		return ids
	end

	private fun build_conflicts(elements: Set[E]): Map[E, Set[E]] do
		var conflicts = new HashMap[E, Set[E]]
		for e in elements do
			var supers = self.super_elements(e, elements)
			supers.add(e)
			conflicts[e] = supers
		end
		return conflicts
	end

	private fun super_elements(element: E, elements: Set[E]): Set[E] is abstract
	private fun reverse_linearize(elements: Set[E]): Array[E] is abstract
end

class MTypeHasher
	super TypingHasher[MType]

	init(operator: PHOperator, mmodule: MModule) do super(operator, mmodule)

	redef fun super_elements(element, elements) do
		return self.mmodule.super_mtypes(element, elements)
	end

	redef fun reverse_linearize(elements) do
		return self.mmodule.reverse_linearize_mtypes(elements)
	end
end

class MClassHasher
	super TypingHasher[MClass]

	init(operator: PHOperator, mmodule: MModule) do super(operator, mmodule)

	redef fun super_elements(element, elements) do
		return self.mmodule.super_mclasses(element)
	end

	redef fun reverse_linearize(elements) do
		return self.mmodule.reverse_linearize_mclasses(elements)
	end
end
