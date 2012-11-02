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
module type_coloring

import rapid_type_analysis
intrude import modelbuilder

redef class ModelBuilder
	private var core: OrderedSet2[MClassType] = new OrderedSet2[MClassType]
	private var crown: OrderedSet2[MClassType] = new OrderedSet2[MClassType]
	private var border: OrderedSet2[MClassType] = new OrderedSet2[MClassType]
	
	# Colorize alive types
	fun colorize_cast_types(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis) do
	
		# compute linear ext of each type and tag each type as core, crown or border
		build_inheritance(mainmodule, runtime_type_analysis.live_types)
		for mtype in runtime_type_analysis.live_types do
			self.tag_type(mainmodule, mtype)
		end
		
		# sort by reverse linearization order
		var sorter = new ReverseLinearizationSorter
		sorter.sort(core)
		sorter.sort(crown)
		sorter.sort(border)
		
		# colorize graph
		colorize_types(core)
		colorize_types(border)
		colorize_types(crown)
		
		fill_type_tables(runtime_type_analysis.live_types)
		
		print "After coloration :"
		for mtype in runtime_type_analysis.live_types do
			print " {mtype}({mtype.color.as(not null)}): {mtype.type_table.join(", ")}"
		end
	end
	
	# Tag type as core, crown or border
	fun tag_type(mmodule: MModule, mtype: MClassType) do
	
		# Check if subtypes are all in single inheritance
		var all_subtypes_si = true
		for subtype in mtype.subtypes do
			for mclassdef in subtype.mclass.mclassdefs do
				if mclassdef.in_hierarchy.direct_greaters.length > 1 then 
					all_subtypes_si = false
					break label all_subtypes
				end
			end
		end label all_subtypes
		
		# Tag type as core, crown or border
		if mmodule.flatten_mclass_hierarchy[mtype.mclass].direct_greaters.length > 1 then
			core.add_all(mtype.linear_extension)
			if all_subtypes_si then 
				border.add(mtype)
			end 
		else if mmodule.flatten_mclass_hierarchy[mtype.mclass].direct_greaters == 1 then
			if all_subtypes_si then crown.add(mtype)
		else
			if all_subtypes_si then crown.add(mtype)
		end 
	end
	
	# Build mtype supertypes and subtypes list
	fun build_inheritance(mmodule: MModule, mtypes: HashSet[MClassType]) do
		for mtype in mtypes do
			for otype in mtypes do
				if otype == mtype then continue
				if mtype.is_subtype(mmodule, null, otype) then
					mtype.supertypes.add(otype)
					otype.subtypes.add(mtype)
				end
			end
		end
	end
	
	private var conflicts_graph_cache: nullable HashMap[MClassType, OrderedSet2[MClassType]]
	
	# Conflicts graph of hierarchy (two types are in conflict if they have common ancestors)
	private fun conflicts_graph: HashMap[MClassType, OrderedSet2[MClassType]] do
		if self.conflicts_graph_cache == null then
			self.conflicts_graph_cache = new HashMap[MClassType, OrderedSet2[MClassType]]
			for t in self.core do
				for i in t.linear_extension do
					if t == i then continue
					
					var lin_i = i.linear_extension
	
					for j in t.linear_extension do
						if i == j or j == t then continue
						var lin_j = j.linear_extension
	
						var d_ij = lin_i - lin_j
						var d_ji = lin_j - lin_i
	
						for ed1 in d_ij do
							if not conflicts_graph_cache.has_key(ed1) then conflicts_graph_cache[ed1] = new OrderedSet2[MClassType]
							# add ed1 x ed2 to conflicts graph
							for ed2 in d_ji do conflicts_graph_cache[ed1].add(ed2)
						end
						for ed1 in d_ij do
							if not conflicts_graph_cache.has_key(ed1) then conflicts_graph_cache[ed1] = new OrderedSet2[MClassType]
							# add ed1 x ed2 to conflicts graph
							for ed2 in d_ji do conflicts_graph_cache[ed1].add(ed2)
						end
					end
				end
			end
		end
		return conflicts_graph_cache.as(not null)
	end
	
	# Colorize a collection of types
	fun colorize_types(elements: Collection[MClassType]) do
		var min_color = 0
		var max_color = min_color

		for element in elements do
			var color = min_color
			while not color_free(element, color) do
				color += 1
			end
			element.color = color
			if color > max_color then 
				max_color = color
			end
			color = min_color
		end
	end
	
	# Check if a related element to the element already use the color
	fun color_free(element: MClassType, color: Int): Bool do
		if conflicts_graph.has_key(element) then
			for st in conflicts_graph[element] do if st.color == color then return false
		end
		for st in element.linear_extension do
			if st == element then continue
			if st.color == color then return false
		end
		return true
	end
	
	# Fill MClassTypes type table 
	private fun fill_type_tables(mtypes: Set[MClassType]) do
		for mtype in mtypes do
			for parent in mtype.supertypes do
				var color = parent.color.as(not null)
				if mtype.type_table.length <= color then
					for i in [mtype.type_table.length .. color[ do
						mtype.type_table[i] = null
					end 
				end
				mtype.type_table[color] = parent
			end
			var color = mtype.color.as(not null)
			if mtype.type_table.length <= color then
				for i in [mtype.type_table.length .. color[ do
					mtype.type_table[i] = null
				end 
			end
		end
	end
end

redef class MClassType

	# The class color
	var color: nullable Int = null
	
	# The typing table
	var type_table: Array[nullable MClassType] = new Array[MClassType]

	private var linear_extension_cache: nullable OrderedSet2[MClassType]
	
	# Linear extension of the types
	private fun linear_extension: OrderedSet2[MClassType] do
		if self.linear_extension_cache == null then
			self.linear_extension_cache = new OrderedSet2[MClassType]
			self.linear_extension_cache.add(self)
			
			for stype in self.supertypes do
				self.linear_extension_cache.add(stype)
			end
			
			var sorter = new LinearizationSorter
			sorter.sort(linear_extension_cache.as(not null))
		end
		return self.linear_extension_cache.as(not null)
	end
	
	private var subtypes: HashSet[MClassType] = new HashSet[MClassType]
	private var supertypes: HashSet[MClassType] = new HashSet[MClassType]
end

#
# Utils
#

# Un ordered set
private class OrderedSet2[E]
	super Array[E]
	
	redef fun add(e) do
		if not self.has(e) then 
			super(e)
		end
	end
	
	# Return a new OrderedSet2 with the elements only contened in 'self' and not in 'o'
	fun -(o: OrderedSet2[E]): OrderedSet2[E] do
		var res = new OrderedSet2[E]
		for e in self do if not o.has(e) then res.add(e)
		return res
	end
end

# A sorter for linearize list of types
private class LinearizationSorter
	super AbstractSorter[MClassType]
	
	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.supertypes.has(b) then
			return -1
		end
		return 1
	end
end

# A sorter for reverse linearization
private class ReverseLinearizationSorter
	super AbstractSorter[MClassType]
	
	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.supertypes.has(b) then
			return 1
		end
		return -1
	end
end