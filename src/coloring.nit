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

abstract class TypeLayoutBuilder
	private var mmodule: MModule
	init(mmodule: MModule) do self.mmodule = mmodule

	# Compute mtypes ids and position
	fun build_layout(mtypes: Set[MType]): TypeLayout is abstract

	# Give each MType a unic id using a descending linearization of the `mtypes` set
	private fun compute_ids(mtypes: Set[MType]): Map[MType, Int] do
		var ids = new HashMap[MType, Int]
		var lin = self.mmodule.reverse_linearize_mtypes(mtypes)
		for mtype in lin do
			ids[mtype] = ids.length
		end
		return ids
	end
end

class TypeLayout
	# Unic ids or each Mtype
	var ids: Map[MType, Int] = new HashMap[MType, Int]
	# Fixed positions of each MType in all tables
	var pos: Map[MType, Int] = new HashMap[MType, Int]
end

# Layout builder for MType using Binary Matrix (BM)
class BMTypeLayoutBuilder
	super TypeLayoutBuilder

	init(mmodule: MModule) do super

	# Compute mtypes ids and position using BM
	redef fun build_layout(mtypes: Set[MType]): TypeLayout do
		var result = new TypeLayout
		result.ids = self.compute_ids(mtypes)
		result.pos = result.ids
		return result
	end
end

# Layout builder for MType using Coloring (CL)
class CLTypeLayoutBuilder
	super TypeLayoutBuilder

	private var colorer: MTypeColorer

	init(mmodule: MModule) do
		super
		self.colorer = new MTypeColorer(mmodule)
	end

	# Compute mtypes ids and position using BM
	redef fun build_layout(mtypes: Set[MType]): TypeLayout do
		var result = new TypeLayout
		result.ids = self.compute_ids(mtypes)
		result.pos = self.colorer.colorize(mtypes)
		return result
	end
end

abstract class AbstractColoring[E: Object]

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
	super AbstractColoring[MType]

	type T: MType

	var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun super_elements(element, elements) do return self.mmodule.super_mtypes(element, elements)
	redef fun is_element_mi(element, elements) do return self.super_elements(element, elements).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mtypes(element, elements)
	redef fun linearize(elements) do return self.mmodule.linearize_mtypes(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

abstract class TypePerfectHashing
	super TypeLayoutBuilder
	super AbstractColoring[MType]

	type T: MType

	init(mmodule: MModule) do self.mmodule = mmodule

	fun compute_masks(elements: Set[T], ids: Map[T, Int]): Map[T, Int] do
		for e in elements do
			# Create super type list
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(e, elements))
			supers.add(e)
			# Compute the hashing 'mask'
			self.coloration_result[e] = compute_mask(supers, ids)
		end
		return self.coloration_result
	end

	private fun compute_mask(mtypes: Set[T], ids: Map[T, Int]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for sup in mtypes do
				var res = op(mask, ids[sup])
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

	private fun op(mask: Int, id:Int): Int is abstract
	private fun phash(id: Int, mask: Int): Int do return op(mask, id)

	redef fun super_elements(element, elements) do return self.mmodule.super_mtypes(element, elements)
	redef fun is_element_mi(element, elements) do return self.super_elements(element, elements).length > 1
	redef fun sub_elements(element, elements) do do return self.mmodule.sub_mtypes(element, elements)
	redef fun linearize(elements) do return self.mmodule.linearize_mtypes(elements)
	redef fun reverse_linearize(elements) do return self.mmodule.reverse_linearize_mtypes(elements)
end

class TypeModPerfectHashing
	super TypePerfectHashing
	init(mainmodule: MModule) do super
	redef fun op(mask, id) do return mask % id
end

class TypeAndPerfectHashing
	super TypePerfectHashing
	init(mainmodule: MModule) do super
	redef fun op(mask, id) do return mask.bin_and(id)
end

# MClass coloring
class ClassColoring
	super AbstractColoring[MClass]

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

# incremental coloring (very naive)
class NaiveClassColoring
	super ClassColoring

	init(mainmodule: MModule) do
		super(mainmodule)
	end

	# naive coloring that use incremental coloring
	redef fun colorize_elements(elements) do
		for e in elements do
			self.coloration_result[e] = self.coloration_result.length
		end
	end
end

abstract class ClassPerfectHashing
	super ClassColoring

	init(mainmodule: MModule) do
		super(mainmodule)
	end

	fun compute_masks(elements: Set[T], ids: Map[T, Int]): Map[T, Int] do
		for e in elements do
			# Create super type list
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(e, elements))
			supers.add(e)
			# Compute the hashing 'mask'
			self.coloration_result[e] = compute_mask(supers, ids)
		end
		return self.coloration_result
	end

	private fun compute_mask(mtypes: Set[T], ids: Map[T, Int]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for sup in mtypes do
				var res = op(mask, ids[sup])
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

	private fun op(mask: Int, id:Int): Int is abstract
	private fun phash(id: Int, mask: Int): Int do return op(mask, id)
end

class ClassModPerfectHashing
	super ClassPerfectHashing
	init(mainmodule: MModule) do
		super(mainmodule)
	end
	redef fun op(mask, id) do return mask % id
end

class ClassAndPerfectHashing
	super ClassPerfectHashing
	init(mainmodule: MModule) do
		super(mainmodule)
	end
	redef fun op(mask, id) do return mask.bin_and(id)
end

# MProperty coloring
class PropertyColoring

	type MPROP: MProperty
	type MPROPDEF: MPropDef

	private var class_coloring: ClassColoring
	private var coloration_result: Map[MPROP, Int] = new HashMap[MPROP, Int]

	init(class_coloring: ClassColoring) do
		self.class_coloring = class_coloring
	end

	fun colorize: Map[MPROP, Int] do
		colorize_core_properties
		colorize_crown_properties
		return self.coloration_result
	end

	fun build_property_tables: Map[MClass, Array[nullable MPROPDEF]] do
		var tables = new HashMap[MClass, Array[nullable MPROPDEF]]
		var mclasses = self.class_coloring.coloration_result.keys
		for mclass in mclasses do
			var table = new Array[nullable MPROPDEF]
			# first, fill table from parents by reverse linearization order
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			var lin = self.class_coloring.reverse_linearize(parents)
			for parent in lin do
				for mproperty in self.properties(parent) do
					var color = self.coloration_result[mproperty]
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
				var color = self.coloration_result[mproperty]
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

	# properties cache
	private var properties_cache: Map[MClass, Set[MPROP]] = new HashMap[MClass, Set[MPROP]]

	# All 'mproperties' associated to all 'mclassdefs' of the class
	private fun properties(mclass: MClass): Set[MPROP] do
		if not self.properties_cache.has_key(mclass) then
			var properties = new HashSet[MPROP]
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			for parent in parents do
				properties.add_all(self.properties(parent))
			end

			for mclassdef in mclass.mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					var mproperty = mpropdef.mproperty
					if mproperty isa MPROP then
						properties.add(mproperty)
					end
				end
			end
			self.properties_cache[mclass] = properties
		end
		return properties_cache[mclass]
	end
end

# MMethod coloring
class MethodColoring
	super PropertyColoring

	redef type MPROP: MMethod
	redef type MPROPDEF: MMethodDef
	init(class_coloring: ClassColoring) do end
end

# MAttribute coloring
class AttributeColoring
	super PropertyColoring

	redef type MPROP: MAttribute
	redef type MPROPDEF: MAttributeDef
	init(class_coloring: ClassColoring) do end
end

# MVirtualTypeProp coloring
class VTColoring
	super PropertyColoring

	redef type MPROP: MVirtualTypeProp
	redef type MPROPDEF: MVirtualTypeDef
	init(class_coloring: ClassColoring) do end
end

class NaiveVTColoring
	super VTColoring

	init(class_coloring: ClassColoring) do end

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

	init(class_coloring: ClassColoring) do end

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

	redef fun build_property_tables do
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
	init(class_coloring: ClassColoring) do end
	redef fun op(mask, id) do return mask % id
end

class VTAndPerfectHashing
	super VTPerfectHashing
	init(class_coloring: ClassColoring) do end
	redef fun op(mask, id) do return mask.bin_and(id)
end

# MParameterType coloring
class FTColoring
	private var class_coloring: ClassColoring
	private var coloration_result: Map[MParameterType, Int] = new HashMap[MParameterType, Int]

	init(class_coloring: ClassColoring) do
		self.class_coloring = class_coloring
	end

	fun colorize: Map[MParameterType, Int] do
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
				colorize_elements(self.fts(mclass), color)
			else
				# check last color used by parents
				color = max_color(color, self.class_coloring.parent_elements(mclass))
				# check max color used in conflicts
				if self.class_coloring.conflicts_graph.has_key(mclass) then
					color = max_color(color, self.class_coloring.conflicts_graph[mclass])
				end
				# colorize
				colorize_elements(self.fts(mclass), color)
			end
		end
	end

	# Colorize properties of the crown hierarchy
	private fun colorize_crown_properties do
		for mclass in self.class_coloring.crown do
			colorize_elements(self.fts(mclass), max_color(0, self.class_coloring.parent_elements(mclass)))
		end
	end

	# Colorize a collection of properties given a starting color
	private fun colorize_elements(elements: Collection[MParameterType], start_color: Int) do
		for element in elements do
			if self.coloration_result.has_key(element) then continue
			self.coloration_result[element] = start_color
			start_color += 1
		end
	end

	private fun max_color(min_color: Int, mclasses: Collection[MClass]): Int do
		var max_color = min_color

		for mclass in mclasses do
			for ft in self.fts(mclass) do
				var color = min_color
				if self.coloration_result.has_key(ft) then
					color = self.coloration_result[ft]
					if color >= max_color then max_color = color + 1
				end
			end
		end
		return max_color
	end

	# fts cache
	private var fts_cache: Map[MClass, Set[MParameterType]] = new HashMap[MClass, Set[MParameterType]]

	private fun fts(mclass: MClass): Set[MParameterType] do
		if not self.fts_cache.has_key(mclass) then
			var fts = new HashSet[MParameterType]
			var mclass_type = mclass.mclass_type
			if mclass_type isa MGenericType then
				for ft in mclass_type.arguments do
					fts.add(ft.as(MParameterType))
				end
			end
			self.fts_cache[mclass] = fts
		end
		return fts_cache[mclass]
	end

	fun build_ft_tables: Map[MClass, Array[nullable MParameterType]] do
		var tables = new HashMap[MClass, Array[nullable MParameterType]]

		for mclass in self.class_coloring.coloration_result.keys do
			var table = new Array[nullable MParameterType]

			# first, fill table from parents
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			for parent in parents do
				for ft in self.fts(parent) do
					var color = self.coloration_result[ft]
					if table.length <= color then
						for i in [table.length .. color[ do
							table[i] = null
						end
					end
					table[color] = ft
				end
			end

			# then override with local properties
			for ft in self.fts(mclass) do
				var color = self.coloration_result[ft]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = ft
			end
			tables[mclass] = table
		end
		return tables
	end
end

class NaiveFTColoring
	super FTColoring

	init(class_coloring: ClassColoring) do end

	redef fun colorize: Map[MParameterType, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		var min_color = 0

		for mclass in mclasses do
			min_color = max_color(min_color, mclasses)
			colorize_elements(self.fts(mclass), min_color)
		end
		return self.coloration_result
	end
end

abstract class FTPerfectHashing
	super FTColoring

	private var masks: Map[MClass, Int] = new HashMap[MClass, Int]

	init(class_coloring: ClassColoring) do end

	redef fun colorize: Map[MParameterType, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		for mclass in mclasses do
			for ft in self.fts(mclass) do
				if coloration_result.has_key(ft) then continue
				coloration_result[ft] = coloration_result.length + 1
			end
		end
		return self.coloration_result
	end

	fun compute_masks: Map[MClass, Int] do
		var mclasses = new HashSet[MClass]
		mclasses.add_all(self.class_coloring.core)
		mclasses.add_all(self.class_coloring.crown)
		for mclass in mclasses do
			var fts = new HashSet[MParameterType]
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			for parent in parents do
				fts.add_all(self.fts(parent))
			end
			fts.add_all(self.fts(mclass))
			self.masks[mclass] = compute_mask(fts)
		end
		return self.masks
	end

	private fun compute_mask(fts: Set[MParameterType]): Int do
		var mask = 0
		loop
			var used = new List[Int]
			for ft in fts do
				var res = op(mask, self.coloration_result[ft])
				if used.has(res) then
					break
				else
					used.add(res)
				end
			end
			if used.length == fts.length then break
			mask += 1
		end
		return mask
	end

	redef fun build_ft_tables do
		var tables = new HashMap[MClass, Array[nullable MParameterType]]

		for mclass in self.class_coloring.coloration_result.keys do
			var table = new Array[nullable MParameterType]

			# first, fill table from parents
			var parents = self.class_coloring.mmodule.super_mclasses(mclass)
			for parent in parents do
				for ft in self.fts(parent) do
					var color = phash(self.coloration_result[ft], masks[mclass])
					if table.length <= color then
						for i in [table.length .. color[ do
							table[i] = null
						end
					end
					table[color] = ft
				end
			end

			# then override with local properties
			for ft in self.fts(mclass) do
				var color = phash(self.coloration_result[ft], masks[mclass])
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = ft
			end
			tables[mclass] = table
		end
		return tables
	end

	private fun op(mask: Int, id:Int): Int is abstract
	private fun phash(id: Int, mask: Int): Int do return op(mask, id)
end

class FTModPerfectHashing
	super FTPerfectHashing
	init(class_coloring: ClassColoring) do end
	redef fun op(mask, id) do return mask % id
end

class FTAndPerfectHashing
	super FTPerfectHashing
	init(class_coloring: ClassColoring) do end
	redef fun op(mask, id) do return mask.bin_and(id)
end

# Live Entries coloring
class LiveEntryColoring

	private var coloration_result: Map[MType, Int] = new HashMap[MType, Int]
	private var conflicts_graph_cache: nullable HashMap[MType, Set[MType]]
	var livetypes_tables_sizes: nullable Map[MClass, Array[Int]]

	init do end

	fun colorize(elements: Collection[MType]): Map[MType, Int] do
		# compute conflicts
		build_conflicts_graph(elements)

		# colorize graph
		colorize_elements(elements)

		return coloration_result
	end

	# Build type tables
	fun build_livetype_tables(mtypes: Set[MType]): Map[MClass, Array[nullable Object]] do
		var livetypes_tables = new HashMap[MClass, Array[nullable Object]]
		self.livetypes_tables_sizes = new HashMap[MClass, Array[Int]]

		for mtype in mtypes do
			if mtype isa MGenericType then
				var table: Array[nullable Object]
				var sizes: Array[Int]
				if livetypes_tables.has_key(mtype.mclass) then
					table = livetypes_tables[mtype.mclass]
				else
					table = new Array[nullable Object]
					livetypes_tables[mtype.mclass] = table
				end
				if livetypes_tables_sizes.has_key(mtype.mclass) then
					sizes = livetypes_tables_sizes[mtype.mclass]
				else
					sizes = new Array[Int]
					livetypes_tables_sizes[mtype.mclass] = sizes
				end
				build_livetype_table(mtype, 0, table, sizes)
			end
		end

		return livetypes_tables
	end

	# Build live gentype table recursively
	private fun build_livetype_table(mtype: MGenericType, current_rank: Int, table: Array[nullable Object], sizes: Array[Int]) do
		var ft = mtype.arguments[current_rank]
		if not self.coloration_result.has_key(ft) then return
		var color = self.coloration_result[ft]

		if current_rank >= sizes.length then
			sizes[current_rank] = color + 1
		else if color >= sizes[current_rank] then
			sizes[current_rank] = color + 1
		end

		if color > table.length then
			for i in [table.length .. color[ do table[i] = null
		end

		if current_rank == mtype.arguments.length - 1 then
			table[color] = mtype
		else
			var ft_table: Array[nullable Object]
			if color < table.length and table[color] != null then
				ft_table = table[color].as(Array[nullable Object])
			else
				ft_table = new Array[nullable Object]
			end
			table[color] = ft_table
			build_livetype_table(mtype, current_rank + 1, ft_table, sizes)
		end
	end

	# Colorize a collection of elements
	fun colorize_elements(elements: Collection[MType]) do
		var min_color = 0

		for element in elements do
			var color = min_color
			while not self.is_color_free(element, color) do
				color += 1
			end
			coloration_result[element] = color
			color = min_color
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

	# look for types in the same generic signatures
	private fun build_conflicts_graph(elements: Collection[MType]) do
		# regroup types by classes
		var genclasses = new HashMap[MClass, Set[MType]]
		for e in elements do
			if e isa MGenericType then
				if not genclasses.has_key(e.mclass) then
					genclasses[e.mclass] = new HashSet[MType]
				end
				genclasses[e.mclass].add(e)
			end
		end

		# for each class
		self.conflicts_graph_cache = new HashMap[MType, Set[MType]]
		for mclass, mtypes in genclasses do
			# for each rank
			for rank in [0..mclass.arity[ do
				# for each live type
				for mtype in mtypes do
					var mclasstype: MClassType
					if mtype isa MNullableType then
						mclasstype = mtype.mtype.as(MClassType)
					else
						mclasstype = mtype.as(MClassType)
					end
					var ft = mclasstype.arguments[rank]
					for otype in mtypes do
						if mtype == otype then continue
						var oclasstype: MClassType
						if otype isa MNullableType then
							oclasstype = otype.mtype.as(MClassType)
						else
							oclasstype = otype.as(MClassType)
						end
						var oft = oclasstype.arguments[rank]
						self.add_conflict(ft, oft)
					end
				end
			end
		end
	end

	private fun add_conflict(mtype: MType, otype: MType) do
		if mtype == otype then return
		if not self.conflicts_graph_cache.has_key(mtype) then  self.conflicts_graph_cache[mtype] = new HashSet[MType]
		self.conflicts_graph_cache[mtype].add(otype)
		if not self.conflicts_graph_cache.has_key(otype) then  self.conflicts_graph_cache[otype] = new HashSet[MType]
		self.conflicts_graph_cache[otype].add(mtype)
	end
	private fun conflicts_graph: Map[MType, Set[MType]] do return conflicts_graph_cache.as(not null)
end

class NaiveLiveEntryColoring
	super LiveEntryColoring

	init do end

	redef fun colorize_elements(elements: Collection[MType]) do
		var color = 0
		for element in elements do
			coloration_result[element] = color
			color += 1
		end
	end
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
