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
# Tables are used to implement objects mecanisms like:
#   * message sending
#	* attribute accessing
#	* typing
#	* resolution (for generic types)
# This module provides various layout for object tables:
#	* coloring
#	* binary matrix
#	* perfect hashing (and & mod operators)
module layout_builders

import abstract_compiler

# Layouts

# A layout is the result of computation by builders
# it contains necessary informations for basic table creation
class Layout[E: Object]
	# Ids or each element
	var ids: Map[E, Int] = new HashMap[E, Int]
	# Fixed positions of each element in all tables
	var pos: Map[E, Int] = new HashMap[E, Int]
end

# A PHLayout is used everywere the builder used perfect hashing
# it adds masks and hashes informations to std layout
class PHLayout[HOLDER: Object, E: Object]
	super Layout[E]
	# Masks used by hash function
	var masks: Map[HOLDER, Int] = new HashMap[HOLDER, Int]
	# Positions of each element for each tables
	var hashes: Map[HOLDER, Map[E, Int]] = new HashMap[HOLDER, Map[E, Int]]
end

# Builders

# TypingLayoutBuilder is used to build a layout for typing tables (by type or by class)
interface TypingLayoutBuilder[E: Object]
	# Build typing table layout
	# elements: the set of elements (classes or types) used in typing tables
	fun build_layout(elements: Set[E]): Layout[E] is abstract
	# Get the poset used for table layout construction
	# REQUIRE: build_layout
	fun poset: nullable POSet[E] is abstract
end

# Layout builder dedicated to vft, attribute & VT tables
interface PropertyLayoutBuilder[E: MProperty]
	# Build table layout for attributes, methods and virtual types
	# elements: the set of classes containing the properties to use in table layout
	fun build_layout(elements: Set[MClass]): Layout[E] is abstract
end

# For resolution tables (generics)
interface ResolutionLayoutBuilder
	# Build resolution table layout
	# elements: association between classes and resolved types
	fun build_layout(elements: Map[MClassType, Set[MType]]): Layout[MType] is abstract
end

# POSet builders

# A POSet builder build a poset for a set of MType or MClass
# the resulting poset is used by the layout builders
private abstract class POSetBuilder[E: Object]
	private var mmodule: MModule
	init(mmodule: MModule) do self.mmodule = mmodule
	# Build the poset from `elements`
	private fun build_poset(elements: Set[E]): POSet[E] is abstract
end

# A TypingLayoutBuilder used for MType based typing
# such as in separate compilers
private class MTypePOSetBuilder
	super POSetBuilder[MType]
	redef fun build_poset(elements) do
		var poset = new POSet[MType]
		for e in elements do
			poset.add_node(e)
			for o in elements do
				if e == o then continue
				if e.is_subtype(mmodule, null, o) then
					poset.add_edge(e, o)
				end
			end
		end
		return poset
	end
end

# A TypingLayoutBuilder used for MClass based typing
# such as in erased compilers or used in property coloring
private class MClassPOSetBuilder
	super POSetBuilder[MClass]
	redef fun build_poset(elements) do return mmodule.flatten_mclass_hierarchy
end

# Matrice computers

# Abstract layout builder for resolution tables using Binary Matrix (BM)
abstract class TypingBMizer[E: Object]
	super TypingLayoutBuilder[E]

	private var mmodule: MModule
	private var poset_builder: POSetBuilder[E]
	private var poset_cache: nullable POSet[E]

	private init(mmodule: MModule, poset_builder: POSetBuilder[E]) do
		self.mmodule = mmodule
		self.poset_builder = poset_builder
	end

	redef fun poset do return poset_cache

	# Compute mtypes ids and position using BM
	redef fun build_layout(elements: Set[E]): Layout[E] do
		var result = new Layout[E]
		var ids = new HashMap[E, Int]
		poset_cache = poset_builder.build_poset(elements)
		var lin = poset.to_a
		poset.sort(lin)
		for element in lin do
			ids[element] = ids.length
		end
		result.ids = ids
		result.pos = ids
		return result
	end
end

# Layout builder for typing tables based on classes using Binary Matrix (BM)
class MTypeBMizer
	super TypingBMizer[MType]
	init(mmodule: MModule) do super(mmodule, new MTypePOSetBuilder(mmodule))
end

# Layout builder for typing tables based on types using Binary Matrix (BM)
class MClassBMizer
	super TypingBMizer[MClass]
	init(mmodule: MModule) do super(mmodule, new MClassPOSetBuilder(mmodule))
end

# Layout builder for resolution tables using Binary Matrix (BM)
class ResolutionBMizer
	super ResolutionLayoutBuilder

	init do end

	redef fun build_layout(elements) do
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

# Abstract Layout builder for mproperties using Binary Matrix (BM)
abstract class MPropertyBMizer[E: MProperty]
	super PropertyLayoutBuilder[E]

	type MPROP: MProperty

	var mmodule: MModule

	init(mmodule: MModule) do self.mmodule = mmodule

	redef fun build_layout(elements) do
		var result = new Layout[E]
		var ids = new HashMap[E, Int]
		var lin = new Array[MClass]
		lin.add_all(elements)
		self.mmodule.linearize_mclasses(lin)
		for mclass in lin do
			for mproperty in properties(mclass) do
				if ids.has_key(mproperty) then continue
				ids[mproperty] = ids.length
			end
		end
		result.pos = ids
		return result
	end

	# extract properties of a mclass
	private fun properties(mclass: MClass): Set[E] do
		var properties = new HashSet[E]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MPROP then properties.add(mprop)
		end
		return properties
	end
end

# Layout builder for vft using Binary Matrix (BM)
class MMethodBMizer
	super MPropertyBMizer[MMethod]
	redef type MPROP: MMethod
	init(mmodule: MModule) do super(mmodule)
end

# Layout builder for attribute tables using Binary Matrix (BM)
class MAttributeBMizer
	super MPropertyBMizer[MAttribute]
	redef type MPROP: MAttribute
	init(mmodule: MModule) do super(mmodule)
end

# BMizing for MVirtualTypeProps
class MVirtualTypePropBMizer
	super MPropertyBMizer[MVirtualTypeProp]
	redef type MPROP: MVirtualTypeProp
	init(mmodule: MModule) do super(mmodule)
end

# Colorers

# Abstract Layout builder for typing table using coloration (CL)
abstract class TypingColorer[E: Object]
	super TypingLayoutBuilder[E]

	private var core: Set[E] = new HashSet[E]
	private var crown: Set[E] = new HashSet[E]
	private var border: Set[E] = new HashSet[E]
	private var coloration_result: Map[E, Int] = new HashMap[E, Int]

	private var mmodule: MModule
	private var poset_builder: POSetBuilder[E]
	private var poset_cache: nullable POSet[E]

	private init(mmodule: MModule, poset_builder: POSetBuilder[E]) do
		self.mmodule = mmodule
		self.poset_builder = poset_builder
	end

	redef fun poset do return poset_cache

	# Compute the layout with coloring
	redef fun build_layout(elements: Set[E]): Layout[E] do
		poset_cache = poset_builder.build_poset(elements)
		var result = new Layout[E]
		result.ids = compute_ids(elements)
		result.pos = colorize(elements)
		return result
	end

	private fun compute_ids(elements: Set[E]): Map[E, Int] do
		var ids = new HashMap[E, Int]
		for element in reverse_linearize(elements) do
			ids[element] = ids.length
		end
		return ids
	end

	private fun colorize(elements: Set[E]): Map[E, Int] do
		tag_elements(elements)
		build_conflicts_graph
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
		for st in self.poset[element].greaters do
			if st == element then continue
			if coloration_result.has_key(st) and coloration_result[st] == color then return false
		end
		return true
	end

	# Tag elements as core, crown or border
	private fun tag_elements(elements: Set[E]) do
		for element in elements do
			# Check if sub elements are all in single inheritance
			var all_subelements_si = true
			for subelem in self.poset[element].smallers do
				if self.poset[subelem].direct_greaters.length > 1 then
					all_subelements_si = false
					break
				end
			end

			# Tag as core, crown or border
			if self.poset[element].direct_greaters.length > 1 then
				core.add_all(self.poset[element].greaters)
				if all_subelements_si then
					border.add(element)
				end
			else if not all_subelements_si then
				core.add_all(self.poset[element].greaters)
			else
				crown.add(element)
			end
		end
	end

	# Conflicts graph of elements hierarchy (two types are in conflict if they have common subelements)
	private fun build_conflicts_graph do
		self.conflicts_graph = new HashMap[E, HashSet[E]]
		var core = reverse_linearize(self.core)
		for t in core do
			for i in self.linear_extension(t) do
				if t == i then continue

				var lin_i = self.linear_extension(i)

				for j in self.linear_extension(t) do
					if i == j or j == t then continue
					var lin_j = self.linear_extension(j)

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
	private fun linear_extension(element: E): Array[E] do
		if not self.linear_extensions_cache.has_key(element) then
			var supers = new HashSet[E]
			supers.add_all(self.poset[element].greaters)
			self.linear_extensions_cache[element] = self.linearize(supers)
		end
		return self.linear_extensions_cache[element]
	end

	private fun reverse_linearize(elements: Set[E]): Array[E] do
		var lin = new Array[E]
		lin.add_all(elements)
		poset.sort(lin)
		return lin
	end
	private fun linearize(elements: Set[E]): Array[E] do return reverse_linearize(elements).reversed
end

# Layout builder for typing tables based on types using coloration (CL)
class MTypeColorer
	super TypingColorer[MType]
	init(mmodule: MModule) do super(mmodule, new MTypePOSetBuilder(mmodule))
end

# Layout builder for typing tables based on classes using coloration (CL)
class MClassColorer
	super TypingColorer[MClass]
	init(mmodule: MModule) do super(mmodule, new MClassPOSetBuilder(mmodule))
end

# Abstract Layout builder for properties tables using coloration (CL)
abstract class MPropertyColorer[E: MProperty]
	super PropertyLayoutBuilder[E]

	type MPROP: MProperty

	private var mmodule: MModule
	private var class_colorer: MClassColorer
	private var coloration_result: Map[E, Int] = new HashMap[E, Int]

	init(mmodule: MModule, class_colorer: MClassColorer) do
		self.mmodule = mmodule
		self.class_colorer = class_colorer
	end

	# Compute mclasses ids and position using BM
	redef fun build_layout(mclasses: Set[MClass]): Layout[E] do
		var result = new Layout[E]
		result.pos = self.colorize(mclasses)
		return result
	end

	private fun colorize(mclasses: Set[MClass]): Map[E, Int] do
		self.colorize_core(self.class_colorer.core)
		self.colorize_crown(self.class_colorer.crown)
		return self.coloration_result
	end

	# Colorize properties of the core hierarchy
	private fun colorize_core(mclasses: Set[MClass]) do
		var min_color = 0
		for mclass in mclasses do
			var color = min_color
			# check last color used by parents
			color = max_color(color, mclass.in_hierarchy(mmodule).direct_greaters)
			# check max color used in conflicts
			if self.class_colorer.conflicts_graph.has_key(mclass) then
				color = max_color(color, self.class_colorer.conflicts_graph[mclass])
			end
			colorize_elements(self.properties(mclass), color)
		end
	end

	# Colorize properties of the crown hierarchy
	private fun colorize_crown(mclasses: Set[MClass]) do
		for mclass in mclasses do
			var parents = new HashSet[MClass]
			if mmodule.flatten_mclass_hierarchy.has(mclass) then
				parents.add_all(mclass.in_hierarchy(mmodule).direct_greaters)
			end
			colorize_elements(self.properties(mclass), max_color(0, parents))
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
			if mprop isa MPROP then properties.add(mprop)
		end
		return properties
	end
end

# Layout builder for vft using coloration (CL)
class MMethodColorer
	super MPropertyColorer[MMethod]

	redef type MPROP: MMethod
	init(mmodule: MModule, class_colorer: MClassColorer) do super(mmodule, class_colorer)
end

# Layout builder for attributes using coloration (CL)
class MAttributeColorer
	super MPropertyColorer[MAttribute]

	redef type MPROP: MAttribute
	init(mmodule: MModule, class_colorer: MClassColorer) do super(mmodule, class_colorer)
end

# Layout builder for virtual types using coloration (CL)
class MVirtualTypePropColorer
	super MPropertyColorer[MVirtualTypeProp]

	redef type MPROP: MVirtualTypeProp
	init(mmodule: MModule, class_colorer: MClassColorer) do super(mmodule, class_colorer)
end

# Layout builder for resolution tables using coloration (CL)
class ResolutionColorer
	super ResolutionLayoutBuilder

	private var coloration_result: Map[MType, Int] = new HashMap[MType, Int]

	init do end

	# Compute resolved types colors
	redef fun build_layout(elements) do
		self.build_conflicts_graph(elements)
		var result = new Layout[MType]
		result.ids = self.compute_ids(elements)
		result.pos = self.colorize_elements(elements)
		return result
	end

	private fun compute_ids(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
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

	# Colorize a collection of elements
	private fun colorize_elements(elements: Map[MClassType, Set[MType]]): Map[MType, Int] do
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
		return self.coloration_result
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

	init do end

	# Compute mask for each holders
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

	# Compute hash for each element in each holder
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
	# hash `id` using `mask`
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

# Layout builder for typing tables using perfect hashing (PH)
class TypingHasher[E: Object]
	super PerfectHasher[E, E]
	super TypingLayoutBuilder[E]

	private var mmodule: MModule
	private var poset_builder: POSetBuilder[E]
	private var poset_cache: nullable POSet[E]

	private init(mmodule: MModule, poset_builder: POSetBuilder[E], operator: PHOperator) do
		self.operator = operator
		self.mmodule = mmodule
		self.poset_builder = poset_builder
	end

	redef fun build_layout(elements: Set[E]): PHLayout[E, E] do
		poset_cache = poset_builder.build_poset(elements)
		var result = new PHLayout[E, E]
		var conflicts = self.build_conflicts(elements)
		result.ids = self.compute_ids
		result.masks = self.compute_masks(conflicts, result.ids)
		result.hashes = self.compute_hashes(conflicts, result.ids, result.masks)
		return result
	end

	# Ids start from 1 instead of 0
	private fun compute_ids: Map[E, Int] do
		var ids = new HashMap[E, Int]
		var lin = poset.to_a
		poset.sort(lin)
		for e in lin do
			ids[e] = ids.length + 1
		end
		return ids
	end

	private fun build_conflicts(elements: Set[E]): Map[E, Set[E]] do
		var conflicts = new HashMap[E, Set[E]]
		for e in elements do
			var supers = new HashSet[E]
			supers.add_all(self.poset[e].greaters)
			supers.add(e)
			conflicts[e] = supers
		end
		return conflicts
	end
end

# Layout builder for typing tables with types using perfect hashing (PH)
class MTypeHasher
	super TypingHasher[MType]
	init(operator: PHOperator, mmodule: MModule) do super(mmodule, new MTypePOSetBuilder(mmodule), operator)
end

# Layout builder for typing tables with classes using perfect hashing (PH)
class MClassHasher
	super TypingHasher[MClass]
	init(operator: PHOperator, mmodule: MModule) do super(mmodule, new MClassPOSetBuilder(mmodule), operator)
end

# Abstract layout builder for properties tables using perfect hashing (PH)
class MPropertyHasher[E: MProperty]
	super PerfectHasher[MClass, E]
	super PropertyLayoutBuilder[E]

	type MPROP: MProperty

	var mmodule: MModule

	init(operator: PHOperator, mmodule: MModule) do
		self.operator = operator
		self.mmodule = mmodule
	end

	fun build_poset(mclasses: Set[MClass]): POSet[MClass] do
		var poset = new POSet[MClass]
		for e in mclasses do
			poset.add_node(e)
			for o in mclasses do
				if e == o or not mmodule.flatten_mclass_hierarchy.has(e) then continue
				if e.in_hierarchy(mmodule) < o then poset.add_edge(e, o)
			end
		end
		return poset
	end

	redef fun build_layout(mclasses) do
		var result = new PHLayout[MClass, E]
		var ids = new HashMap[E, Int]
		var elements = new HashMap[MClass, Set[E]]
		var poset = build_poset(mclasses)
		var lin = poset.to_a
		poset.sort(lin)
		for mclass in lin.reversed do
			var mproperties = properties(mclass)
			for mproperty in mproperties do
				if ids.has_key(mproperty) then continue
				ids[mproperty] = ids.length + 1
			end
			elements[mclass] = mproperties
		end
		result.ids = ids
		result.pos = ids
		result.masks = self.compute_masks(elements, ids)
		result.hashes = self.compute_hashes(elements, ids, result.masks)
		return result
	end

	# extract set of properties from mclass
	private fun properties(mclass: MClass): Set[E] do
		var properties = new HashSet[E]
		for mprop in self.mmodule.properties(mclass) do
			if mprop isa MPROP then properties.add(mprop)
		end
		return properties
	end
end

# Layout builder for vft using perfect hashing (PH)
class MMethodHasher
	super MPropertyHasher[MMethod]
	redef type MPROP: MMethod
	init(operator: PHOperator, mmodule: MModule) do super(operator, mmodule)
end

# Layout builder for attributes tables using perfect hashing (PH)
class MAttributeHasher
	super MPropertyHasher[MAttribute]
	redef type MPROP: MAttribute
	init(operator: PHOperator, mmodule: MModule) do super(operator, mmodule)
end

# Layout builder for virtual types tables using perfect hashing (PH)
class MVirtualTypePropHasher
	super MPropertyHasher[MVirtualTypeProp]
	redef type MPROP: MVirtualTypeProp
	init(operator: PHOperator, mmodule: MModule) do super(operator, mmodule)
end

# Layout builder for resolution tables using perfect hashing (PH)
class ResolutionHasher
	super PerfectHasher[MClassType, MType]
	super ResolutionLayoutBuilder

	init(operator: PHOperator) do self.operator = operator

	# Compute resolved types masks and hashes
	redef fun build_layout(elements) do
		var result = new PHLayout[MClassType, MType]
		var ids = new HashMap[MType, Int]
		var color = 1
		for mclasstype, mclasstypes in elements do
			for element in mclasstypes do
				if ids.has_key(element) then continue
				ids[element] = color
				color += 1
			end
		end
		result.ids = ids
		result.pos = ids
		result.masks = self.compute_masks(elements, ids)
		result.hashes = self.compute_hashes(elements, ids, result.masks)
		return result
	end
end
