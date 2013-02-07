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

import typing

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

# MClass coloring
class ClassColoring
	super AbstractColorer[MClass]

	type T: MClass

	private var mmodule: MModule

	# caches
	private var super_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]
	private var parent_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]
	private var sub_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]

	init(mainmodule: MModule) do self.mmodule = mainmodule

	redef fun super_elements(element, elements) do return self.mmodule.super_mclasses(element)
	fun parent_elements(element: MClass): Set[MClass] do return self.mmodule.parent_mclasses(element)
	redef fun is_element_mi(element, elements) do return self.parent_elements(element).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mclasses(element)
	redef fun linearize(elements) do return self.mmodule.linearize_mclasses(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mclasses(elements)
end

# MProperty coloring
class PropertyColoring

	type MPROP: MProperty
	type MPROPDEF: MPropDef

	private var mmodule: MModule
	private var class_coloring: ClassColoring
	private var coloration_result: Map[MPROP, Int] = new HashMap[MPROP, Int]

	init(mmodule: MModule, class_coloring: ClassColoring) do
		self.mmodule = mmodule
		self.class_coloring = class_coloring
	end

	fun colorize: Map[MPROP, Int] do
		colorize_core_properties
		colorize_crown_properties
		return self.coloration_result
	end

	# Colorize properties of the core hierarchy
	private fun colorize_core_properties do
		var mclasses = self.class_coloring.core
		var min_color = 0

		for mclass in mclasses do
			var color = min_color

			# if the class is root, get the minimal color
			if self.class_coloring.parent_elements(mclass).length == 0 then
				colorize_elements(self.properties(mclass), color)
			else
				# check last color used by parents
				color = max_color(color, self.class_coloring.parent_elements(mclass))
				# check max color used in conflicts
				if self.class_coloring.conflicts_graph.has_key(mclass) then
					color = max_color(color, self.class_coloring.conflicts_graph[mclass])
				end

				# colorize
				colorize_elements(self.properties(mclass), color)
			end
		end
	end

	# Colorize properties of the crown hierarchy
	private fun colorize_crown_properties do
		for mclass in self.class_coloring.crown do
			colorize_elements(self.properties(mclass), max_color(0, self.class_coloring.parent_elements(mclass)))
		end
	end

	# Colorize a collection of properties given a starting color
	private fun colorize_elements(elements: Collection[MPROP], start_color: Int) do
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

	# All 'mproperties' associated to all 'mclassdefs' of the class
	private fun properties(mclass: MClass): Set[MPROP] do
		var properties = new HashSet[MPROP]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MPROP then properties.add(mprop)
		end
		return properties
	end
end

# MMethod coloring
class MethodColoring
	super PropertyColoring

	redef type MPROP: MMethod
	redef type MPROPDEF: MMethodDef
	init(mmodule: MModule, class_coloring: ClassColoring) do super
end

# MAttribute coloring
class AttributeColoring
	super PropertyColoring

	redef type MPROP: MAttribute
	redef type MPROPDEF: MAttributeDef
	init(mmodule: MModule, class_coloring: ClassColoring) do super
end

# MVirtualTypeProp coloring
class VTColoring
	super PropertyColoring

	redef type MPROP: MVirtualTypeProp
	redef type MPROPDEF: MVirtualTypeDef
	init(mmodule: MModule, class_coloring: ClassColoring) do super
end

class NaiveVTColoring
	super VTColoring

	init(mmodule: MModule, class_coloring: ClassColoring) do super

	redef fun colorize: Map[MPROP, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		var min_color = 0

		for mclass in mclasses do
			min_color = max_color(min_color, mclasses)
			colorize_elements(self.properties(mclass), min_color)
		end
		return self.coloration_result
	end
end

abstract class VTPerfectHashing
	super VTColoring

	private var masks: Map[MClass, Int] = new HashMap[MClass, Int]

	init(mmodule: MModule, class_coloring: ClassColoring) do super

	redef fun colorize: Map[MPROP, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		for mclass in mclasses do
			var vts = self.properties(mclass)
			for vt in vts do
				if coloration_result.has_key(vt) then continue
				coloration_result[vt] = coloration_result.length + 1
			end
		end
		return self.coloration_result
	end

	fun compute_masks: Map[MClass, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		for mclass in mclasses do
			self.masks[mclass] = compute_mask(self.properties(mclass))
		end
		return self.masks
	end

	private fun compute_mask(vts: Set[MPROP]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for vt in vts do
				var res = op(mask, self.coloration_result[vt])
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == vts.length then break
			mask += 1
		end
		return mask
	end

	fun build_property_tables: Map[MClass, Array[nullable MPROPDEF]] do
		var tables = new HashMap[MClass, Array[nullable MPROPDEF]]

		for mclass in self.class_coloring.coloration_result.keys do
			var table = new Array[nullable MPROPDEF]
			# first, fill table from parents by reverse linearization order
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			var lin = self.class_coloring.reverse_linearize(parents)
			for parent in lin do
				for mproperty in self.properties(parent) do
					var color = phash(self.coloration_result[mproperty], masks[mclass])
					if table.length <= color then
						for i in [table.length .. color[ do
							table[i] = null
						end
					end
					for mpropdef in mproperty.mpropdefs do
						if mpropdef.mclassdef.mclass == parent then
							table[color] = mpropdef
						end
					end
				end
			end

			# then override with local properties
			for mproperty in self.properties(mclass) do
				var color = phash(self.coloration_result[mproperty], masks[mclass])
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == mclass then
						table[color] = mpropdef
					end
				end
			end
			tables[mclass] = table
		end
		return tables
	end

	private fun op(mask: Int, id:Int): Int is abstract
	private fun phash(id: Int, mask: Int): Int do return op(mask, id)

end

class VTModPerfectHashing
	super VTPerfectHashing
	init(mmodule: MModule, class_coloring: ClassColoring) do super
	redef fun op(mask, id) do return mask % id
end

class VTAndPerfectHashing
	super VTPerfectHashing
	init(mmodule: MModule, class_coloring: ClassColoring) do super
	redef fun op(mask, id) do return mask.bin_and(id)
end

# live unanchored coloring
class UnanchoredTypeColoring

	private var coloration_result: Map[MType, Int] = new HashMap[MType, Int]
	private var conflicts_graph: Map[MType, Set[MType]] = new HashMap[MType, Set[MType]]

	init do end

	fun colorize(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
		build_conflicts_graph(elements)
		colorize_elements(elements)
		return coloration_result
	end

	fun build_tables(elements: Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] do
		var tables = new HashMap[MClassType, Array[nullable MType]]

		for mclasstype, mtypes in elements do
			var table = new Array[nullable MType]
			for mtype in mtypes do
				var color = self.coloration_result[mtype]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = mtype
			end
			tables[mclasstype] = table
		end
		return tables
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

	private fun add_conflict(mtype: MType, otype: MType) do
		if mtype == otype then return
		if not self.conflicts_graph.has_key(mtype) then  self.conflicts_graph[mtype] = new HashSet[MType]
		self.conflicts_graph[mtype].add(otype)
		if not self.conflicts_graph.has_key(otype) then  self.conflicts_graph[otype] = new HashSet[MType]
		self.conflicts_graph[otype].add(mtype)
	end
end

class NaiveUnanchoredTypeColoring
	super UnanchoredTypeColoring

	init do end

	redef fun colorize_elements(elements: Map[MClassType, Set[MType]]) do
		var color = 0
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				coloration_result[element] = color
				color += 1
			end
		end
	end
end

abstract class UnanchoredTypePerfectHashing
	super NaiveUnanchoredTypeColoring

	private var masks: Map[MClassType, Int] = new HashMap[MClassType, Int]

	init do end

	redef fun colorize_elements(elements: Map[MClassType, Set[MType]]) do
		var color = 1
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				coloration_result[element] = color
				color += 1
			end
		end
	end

	fun compute_masks(elements: Map[MClassType, Set[MType]]): Map[MClassType, Int] do
		for mclasstype, mtypes in elements do
			self.masks[mclasstype] = compute_mask(mtypes)
		end
		return self.masks
	end

	private fun compute_mask(mtypes: Set[MType]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for mtype in mtypes do
				var res = op(mask, self.coloration_result[mtype])
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

	redef fun build_tables(elements: Map[MClassType, Set[MType]]): Map[MClassType, Array[nullable MType]] do
		var tables = new HashMap[MClassType, Array[nullable MType]]

		for mclasstype, mtypes in elements do
			var table = new Array[nullable MType]
			for mtype in mtypes do
				var color = phash(self.coloration_result[mtype], masks[mclasstype])
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = mtype
			end
			tables[mclasstype] = table
		end
		return tables
	end

	private fun op(mask: Int, id:Int): Int is abstract
	private fun phash(id: Int, mask: Int): Int do return op(mask, id)
end

class UnanchoredTypeModPerfectHashing
	super UnanchoredTypePerfectHashing
	init do end
	redef fun op(mask, id) do return mask % id
end

class UnanchoredTypeAndPerfectHashing
	super UnanchoredTypePerfectHashing
	init do end
	redef fun op(mask, id) do return mask.bin_and(id)
end


# Utils

redef class HashSet[E]
	init from(elements: Collection[E]) do
		init
		self.add_all(elements)
	end
end

redef class Array[E]
	init from(elements: Collection[E]) do
		init
		self.add_all(elements)
	end

	# Return a new Array with the elements only contened in 'self' and not in 'o'
	fun -(o: Array[E]): Array[E] do
		var res = new Array[E]
		for e in self do if not o.has(e) then res.add(e)
		return res
	end
end

redef class MModule

	# Return a linearization of a set of mtypes
	private fun linearize_mtypes(mtypes: Set[MType]): Array[MType] do
		var lin = new Array[MType].from(mtypes)
		var sorter = new TypeSorter(self)
		sorter.sort(lin)
		return lin
	end

	# Return a reverse linearization of a set of mtypes
	private fun reverse_linearize_mtypes(mtypes: Set[MType]): Array[MType] do
		var lin = new Array[MType].from(mtypes)
		var sorter = new ReverseTypeSorter(self)
		sorter.sort(lin)
		return lin
	end

	# Return super types of a `mtype` in `self`
	private fun super_mtypes(mtype: MType, mtypes: Set[MType]): Set[MType] do
		if not self.super_mtypes_cache.has_key(mtype) then
			var supers = new HashSet[MType]
			for otype in mtypes do
				if otype == mtype then continue
				if mtype.is_subtype(self, null, otype) then
					supers.add(otype)
				end
			end
			self.super_mtypes_cache[mtype] = supers
		end
		return self.super_mtypes_cache[mtype]
	end

	private var super_mtypes_cache: Map[MType, Set[MType]] = new HashMap[MType, Set[MType]]

	# Return all sub mtypes (directs and indirects) of a `mtype` in `self`
	private fun sub_mtypes(mtype: MType, mtypes: Set[MType]): Set[MType] do
		if not self.sub_mtypes_cache.has_key(mtype) then
			var subs = new HashSet[MType]
			for otype in mtypes do
				if otype == mtype then continue
				if otype.is_subtype(self, null, mtype) then
					subs.add(otype)
				end
			end
			self.sub_mtypes_cache[mtype] = subs
		end
		return self.sub_mtypes_cache[mtype]
	end

	private var sub_mtypes_cache: Map[MType, Set[MType]] = new HashMap[MType, Set[MType]]

	# Return a linearization of a set of mclasses
	private fun linearize_mclasses(mclasses: Set[MClass]): Array[MClass] do
		var lin = new Array[MClass].from(mclasses)
		var sorter = new ClassSorter(self)
		sorter.sort(lin)
		return lin
	end

	# Return a reverse linearization of a set of mtypes
	private fun reverse_linearize_mclasses(mclasses: Set[MClass]): Array[MClass] do
		var lin = new Array[MClass].from(mclasses)
		var sorter = new ReverseClassSorter(self)
		sorter.sort(lin)
		return lin
	end

	# Return all super mclasses (directs and indirects) of a `mclass` in `self`
	private fun super_mclasses(mclass: MClass): Set[MClass] do
		if not self.super_mclasses_cache.has_key(mclass) then
			var supers = new HashSet[MClass]
			if self.flatten_mclass_hierarchy.has(mclass) then
				for sup in self.flatten_mclass_hierarchy[mclass].greaters do
					if sup == mclass then continue
					supers.add(sup)
				end
			end
			self.super_mclasses_cache[mclass] = supers
		end
		return self.super_mclasses_cache[mclass]
	end

	private var super_mclasses_cache: Map[MClass, Set[MClass]] = new HashMap[MClass, Set[MClass]]

	# Return all parents of a `mclass` in `self`
	private fun parent_mclasses(mclass: MClass): Set[MClass] do
		if not self.parent_mclasses_cache.has_key(mclass) then
			var parents = new HashSet[MClass]
			if self.flatten_mclass_hierarchy.has(mclass) then
				for sup in self.flatten_mclass_hierarchy[mclass].direct_greaters do
					if sup == mclass then continue
					parents.add(sup)
				end
			end
			self.parent_mclasses_cache[mclass] = parents
		end
		return self.parent_mclasses_cache[mclass]
	end

	private var parent_mclasses_cache: Map[MClass, Set[MClass]] = new HashMap[MClass, Set[MClass]]

	# Return all sub mclasses (directs and indirects) of a `mclass` in `self`
	private fun sub_mclasses(mclass: MClass): Set[MClass] do
		if not self.sub_mclasses_cache.has_key(mclass) then
			var subs = new HashSet[MClass]
			if self.flatten_mclass_hierarchy.has(mclass) then
				for sub in self.flatten_mclass_hierarchy[mclass].smallers do
					if sub == mclass then continue
					subs.add(sub)
				end
			end
			self.sub_mclasses_cache[mclass] = subs
		end
		return self.sub_mclasses_cache[mclass]
	end

	private var sub_mclasses_cache: Map[MClass, Set[MClass]] = new HashMap[MClass, Set[MClass]]

	# All 'mproperties' associated to all 'mclassdefs' of `mclass`
	private fun properties(mclass: MClass): Set[MProperty] do
		if not self.properties_cache.has_key(mclass) then
			var properties = new HashSet[MProperty]
			var parents = self.super_mclasses(mclass)
			for parent in parents do
				properties.add_all(self.properties(parent))
			end

			for mclassdef in mclass.mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					properties.add(mpropdef.mproperty)
				end
			end
			self.properties_cache[mclass] = properties
		end
		return properties_cache[mclass]
	end

	private var properties_cache: Map[MClass, Set[MProperty]] = new HashMap[MClass, Set[MProperty]]
end

# A sorter for linearize list of types
class TypeSorter
	super AbstractSorter[MType]

	private var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.is_subtype(self.mmodule, null, b) then
			return -1
		end
		return 1
	end
end

# A sorter for reverse linearization
class ReverseTypeSorter
	super TypeSorter

	init(mmodule: MModule) do end

	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.is_subtype(self.mmodule, null, b) then
			return 1
		end
		return -1
	end
end

# A sorter for linearize list of classes
private class ClassSorter
	super AbstractSorter[MClass]

	var mmodule: MModule

	redef fun compare(a, b) do
		if a == b then
			return 0
		else if self.mmodule.flatten_mclass_hierarchy.has(a) and self.mmodule.flatten_mclass_hierarchy[a].greaters.has(b) then
			return -1
		end
		return 1
	end
end

# A sorter for reverse linearization
private class ReverseClassSorter
	super AbstractSorter[MClass]

	var mmodule: MModule

	redef fun compare(a, b) do
		if a == b then
			return 0
		else if self.mmodule.flatten_mclass_hierarchy.has(a) and self.mmodule.flatten_mclass_hierarchy[a].greaters.has(b) then
			return 1
		end
		return -1
	end
end
