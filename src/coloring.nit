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

import rapid_type_analysis # for type coloration

abstract class AbstractColoring[E: Object]

	private var sorter: AbstractSorter[E]
	private var reverse_sorter: AbstractSorter[E]

	private var core: OrderedSet[E] = new OrderedSet[E]
	private var crown: OrderedSet[E] = new OrderedSet[E]
	private var border: OrderedSet[E] = new OrderedSet[E]

	private var coloration_result: Map[E, Int] = new HashMap[E, Int]
	private var conflicts_graph_cache: nullable HashMap[E, Set[E]]

	init(sorter: AbstractSorter[E], reverse_sorter: AbstractSorter[E]) do
		self.sorter = sorter
		self.reverse_sorter = reverse_sorter
	end

	fun colorize(elements: Collection[E]): Map[E, Int] do
		# tag each element as part of group core, crown or border
		for e in elements do
			tag_element(e)
		end

		#print "core: {core.join(", ")}"
		#print "border: {border.join(", ")}"
		#print "crown: {crown.join(", ")}"

		# sort by reverse linearization order
		reverse_sorter.sort(core)
		reverse_sorter.sort(border)
		reverse_sorter.sort(crown)

		#print "conflicts"
		#for k, v in conflicts_graph do
		#	if k isa MType then
		#		print "{k}: {v.join(", ")}"
		#	end
		#end

		# colorize graph
		colorize_elements(core)
		colorize_elements(border)
		colorize_elements(crown)

		return coloration_result
	end

	# Colorize a collection of elements
	private fun colorize_elements(elements: Collection[E]) do
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
	private fun is_color_free(element: E, color: Int): Bool do
		if conflicts_graph.has_key(element) then
			for st in conflicts_graph[element] do
				if coloration_result.has_key(st) and coloration_result[st] == color then return false
			end
		end
		for st in self.super_elements(element) do
			if coloration_result.has_key(st) and coloration_result[st] == color then return false
		end
		return true
	end

	# Tag element as core, crown or border
	private fun tag_element(element: E) do
		# Check if sub elements are all in single inheritance
		var all_subelements_si = true
		for subelem in self.sub_elements(element) do
			if self.is_element_mi(subelem) then
				all_subelements_si = false
				break
			end
		end

		# Tag as core, crown or border
		if self.is_element_mi(element) then
			core.add_all(self.super_elements(element))
			core.add(element)
			if all_subelements_si then
				border.add(element)
			end
		else if not all_subelements_si then
			core.add_all(self.super_elements(element))
		 	core.add(element)
		else
			crown.add(element)
		end
	end

	# Conflicts graph of elements hierarchy (two types are in conflict if they have common subelements)
	private fun conflicts_graph: Map[E, Set[E]] do
		if self.conflicts_graph_cache == null then
			self.conflicts_graph_cache = new HashMap[E, HashSet[E]]
			for t in self.core do
				for i in self.linear_extension(t) do
					if t == i then continue

					var lin_i = self.linear_extension(i)

					for j in self.linear_extension(t) do
						if i == j or j == t then continue
						var lin_j = self.linear_extension(j)

						var d_ij = lin_i - lin_j
						var d_ji = lin_j - lin_i

						for ed1 in d_ij do
							if not conflicts_graph_cache.has_key(ed1) then conflicts_graph_cache[ed1] = new HashSet[E]
							# add ed1 x ed2 to conflicts graph
							for ed2 in d_ji do conflicts_graph_cache[ed1].add(ed2)
						end
						for ed1 in d_ij do
							if not conflicts_graph_cache.has_key(ed1) then conflicts_graph_cache[ed1] = new HashSet[E]
							# add ed1 x ed2 to conflicts graph
							for ed2 in d_ji do conflicts_graph_cache[ed1].add(ed2)
						end
					end
				end
			end
		end
		return conflicts_graph_cache.as(not null)
	end

	# cache for linear_extensions
	private var linear_extensions_cache: Map[E, OrderedSet[E]] = new HashMap[E, OrderedSet[E]]

	# Return a linear_extension of super_elements of the element
	private fun linear_extension(element: E): OrderedSet[E] do
		if not self.linear_extensions_cache.has_key(element) then
			var lin = new OrderedSet[E]
			lin.add(element)
			lin.add_all(self.super_elements(element))
			self.sorter.sort(lin)
			self.linear_extensions_cache[element] = lin
		end
		return self.linear_extensions_cache[element]
	end

	# Return all super elements (directs and indirects) of an element
	private fun super_elements(element: E): Collection[E] is abstract

	# Return all sub elements (directs and indirects) of an element
	private fun sub_elements(element: E): Collection[E] is abstract

	# Is the element in multiple inheritance ?
	private fun is_element_mi(element: E): Bool is abstract
end

# MClassType coloring
class TypeColoring
	super AbstractColoring[MType]

	type T: MType

	private var mmodule: MModule
	private var mtypes: Set[T]

	# caches
	private var super_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]
	private var sub_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]

	init(mainmodule: MModule, mtypes: Set[T]) do
		super(new TypeSorter(mainmodule), new ReverseTypeSorter(mainmodule))
		self.mmodule = mainmodule
		self.mtypes = mtypes
	end

	# Build type tables
	fun build_type_tables(mtypes: Set[T], colors: Map[T, Int]): Map[T, Array[nullable T]] do
		var tables = new HashMap[T, Array[nullable T]]

		for mtype in mtypes do
			var table = new Array[nullable T]
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(mtype))
			supers.add(mtype)
			for sup in supers do
				var color = colors[sup]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = sup
			end
			tables[mtype] = table
		end
		return tables
	end

	redef fun super_elements(element) do
		if not self.super_elements_cache.has_key(element) then
			var supers = new HashSet[T]
			for mtype in self.mtypes do
				if element == mtype then continue
				if element.is_subtype(self.mmodule, null, mtype) then
					supers.add(mtype)
				end
			end
			self.super_elements_cache[element] = supers
		end
		return self.super_elements_cache[element]
	end

	# Return all direct super elements of an element
	redef fun is_element_mi(element) do
		return self.super_elements(element).length > 1
	end

	# Return all sub elements (directs and indirects) of an element
	redef fun sub_elements(element) do
		if not self.sub_elements_cache.has_key(element) then
			var subs = new HashSet[T]
			for mtype in self.mtypes do
				if element == mtype then continue
				if mtype.is_subtype(self.mmodule, null, element) then
					subs.add(mtype)
				end
			end
			self.sub_elements_cache[element] = subs
		end
		return self.sub_elements_cache[element]
	end
end

class NaiveTypeColoring
	super TypeColoring

	init(mainmodule: MModule, mtypes: Set[T]) do
		super(mainmodule, mtypes)
	end

	# naive coloring that use incremental coloring
	redef fun colorize_elements(elements) do
		for e in elements do
			self.coloration_result[e] = self.coloration_result.length
		end
	end
end

abstract class TypePerfectHashing
	super TypeColoring

	init(mainmodule: MModule, mtypes: Set[T]) do
		super(mainmodule, mtypes)
	end

	fun compute_masks(elements: Set[T], ids: Map[T, Int]): Map[T, Int] do
		for e in elements do
			# Create super type list
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(e))
			supers.add(e)
			# Compute the hashing 'mask'
			self.coloration_result[e] = compute_mask(supers, ids)
		end
		return self.coloration_result
	end

	# Build type tables
	fun hash_type_tables(mtypes: Set[T], ids: Map[T, Int], masks: Map[T, Int]): Map[T, Array[nullable T]] do
		var tables = new HashMap[T, Array[nullable T]]

		for mtype in mtypes do
			var table = new Array[nullable T]
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(mtype))
			supers.add(mtype)

			for sup in supers do
				var color = phash(ids[sup], masks[mtype])
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = sup
			end
			tables[mtype] = table
		end
		return tables
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

class TypeModPerfectHashing
	super TypePerfectHashing
	init(mainmodule: MModule, mtypes: Set[T]) do
		super(mainmodule, mtypes)
	end
	redef fun op(mask, id) do return mask % id
end

class TypeAndPerfectHashing
	super TypePerfectHashing
	init(mainmodule: MModule, mtypes: Set[T]) do
		super(mainmodule, mtypes)
	end
	redef fun op(mask, id) do return mask.bin_and(id)
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

# MClass coloring
class ClassColoring
	super AbstractColoring[MClass]

	type T: MClass

	private var mmodule: MModule

	# caches
	private var super_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]
	private var parent_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]
	private var sub_elements_cache: Map[T, Set[T]] = new HashMap[T, Set[T]]

	init(mainmodule: MModule) do
		super(new ClassSorter(mainmodule), new ReverseClassSorter(mainmodule))
		self.mmodule = mainmodule
	end

	# Build type tables
	fun build_type_tables(mclasses: Array[T], colors: Map[T, Int]): Map[T, Array[nullable T]] do
		var tables = new HashMap[T, Array[nullable T]]

		for mclasse in mclasses do
			var table = new Array[nullable T]
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(mclasse))
			supers.add(mclasse)
			for sup in supers do
				var color = colors[sup]
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = sup
			end
			tables[mclasse] = table
		end
		return tables
	end

	redef fun super_elements(element) do
		if not self.super_elements_cache.has_key(element) then
			var supers = new HashSet[T]
			if self.mmodule.flatten_mclass_hierarchy.has(element) then
				for sup in self.mmodule.flatten_mclass_hierarchy[element].greaters do
					if element == sup then continue
					supers.add(sup)
				end
			end
			self.super_elements_cache[element] = supers
		end
		return self.super_elements_cache[element]
	end

	private fun parent_elements(element: T): Set[T] do
		if not self.parent_elements_cache.has_key(element) then
			var parents = new HashSet[T]
			if self.mmodule.flatten_mclass_hierarchy.has(element) then
				for parent in self.mmodule.flatten_mclass_hierarchy[element].direct_greaters do
					if element == parent then continue
					parents.add(parent)
				end
			end
			self.parent_elements_cache[element] = parents
		end
		return self.parent_elements_cache[element]
	end

	# Return all sub elements (directs and indirects) of an element
	redef fun sub_elements(element) do
		if not self.sub_elements_cache.has_key(element) then
			var subs = new HashSet[T]
			if self.mmodule.flatten_mclass_hierarchy.has(element) then
				for sub in self.mmodule.flatten_mclass_hierarchy[element].smallers do
					subs.add(sub)
				end
			end
			self.sub_elements_cache[element] = subs
		end
		return self.sub_elements_cache[element]
	end

	# Return all direct super elements of an element
	redef fun is_element_mi(element) do
		if not self.mmodule.flatten_mclass_hierarchy.has(element) then return false
		return self.mmodule.flatten_mclass_hierarchy[element].direct_greaters.length > 1
	end
end

# incremental coloring (very naive)
class NaiveClassColoring
	super ClassColoring

	init(mainmodule: MModule) do
		super(mainmodule)
	end

	# naive coloring that use incremental coloring
	redef fun colorize_elements(elements: Collection[MClass]) do
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
			supers.add_all(self.super_elements(e))
			supers.add(e)
			# Compute the hashing 'mask'
			self.coloration_result[e] = compute_mask(supers, ids)
		end
		return self.coloration_result
	end

	# Build type tables
	fun hash_type_tables(mtypes: Set[T], ids: Map[T, Int], masks: Map[T, Int]): Map[T, Array[nullable T]] do
		var tables = new HashMap[T, Array[nullable T]]

		for mtype in mtypes do
			var table = new Array[nullable T]
			var supers = new HashSet[T]
			supers.add_all(self.super_elements(mtype))
			supers.add(mtype)

			for sup in supers do
				var color = phash(ids[sup], masks[mtype])
				if table.length <= color then
					for i in [table.length .. color[ do
						table[i] = null
					end
				end
				table[color] = sup
			end
			tables[mtype] = table
		end
		return tables
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

		for mclass in self.class_coloring.coloration_result.keys do
			var table = new Array[nullable MPROPDEF]
			# first, fill table from parents by reverse linearization order
			var parents = new OrderedSet[MClass]
			parents.add_all(self.class_coloring.super_elements(mclass))
			self.class_coloring.reverse_sorter.sort(parents)
			for parent in parents do
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
			var parents = self.class_coloring.super_elements(mclass)
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
			var parents = new OrderedSet[MClass]
			parents.add_all(self.class_coloring.super_elements(mclass))
			self.class_coloring.reverse_sorter.sort(parents)
			for parent in parents do
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
			for parent in self.class_coloring.super_elements(mclass) do
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
			for parent in self.class_coloring.super_elements(mclass) do
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
			for parent in self.class_coloring.super_elements(mclass) do
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

# An ordered set
class OrderedSet[E: Object]
	super Array[E]

	init do end

	init from(elements: Set[E]) do
		self.add_all(elements)
	end

	redef fun add(e) do
		if not self.has(e) then
			super(e)
		end
	end

	# Return a new OrderedSet with the elements only contened in 'self' and not in 'o'
	fun -(o: OrderedSet[E]): OrderedSet[E] do
		var res = new OrderedSet[E]
		for e in self do if not o.has(e) then res.add(e)
		return res
	end

	# Linearize a set of elements
	fun linearize(sorter: AbstractSorter[E]) do
		sorter.sort(self)
	end
end
