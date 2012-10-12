# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-concept.com>
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

# Building virtual function tables by coloration in closed world
module global_vft_computation

intrude import global_compiler # TODO better separation of concerns

redef class ModelBuilder
	private var core: OrderedSet[MClass] = new OrderedSet[MClass]
	private var crown: OrderedSet[MClass] = new OrderedSet[MClass]
	private var border: OrderedSet[MClass] = new OrderedSet[MClass]
	 

	fun build_vft(mainmodule: MModule)
	do
		self.toolcontext.info("*** BUILDING VFT ***", 1)
		
		#for mclassdef in model.mclassdef_hierarchy do
		#	print mclassdef
		#	for p in mclassdef.mclass.methods do
		#		print "\t- {p}"
		#	end
		#end
		
		for mclass in model.mclasses do
			# compute linear ext of each class
			mclass.compute_linear_ext(mainmodule)
			# tag each class as core, crown or border
			tag_class(mclass)
		end
		
		# sort by reverse linearization order
		var sorter = new ReverseLinearizationSorter(mainmodule)
		sorter.sort(core)
		sorter.sort(crown)
		sorter.sort(border)
		
		# compute conflicts graph for the whole class hierarchy
		compute_conflicts_graph
		
		# colorize properties
		colorize_core
		colorize_crown
		
		# fill tables
		for mclass in model.mclasses do
			if mclass.is_colorized then
				mclass.fill_vft
				mclass.fill_attrs
			end
		end

		#print "After coloration of core:"
		#for mclass in model.mclasses do
		#	print " - {mclass}"
		#	for i in [0 .. mclass.vft.length[ do
		#		var mpropdef = mclass.vft[i]
		#		if mpropdef == null then
		#			print "\t- {i}: null"
		#		else
		#			print "\t- {i}: {mpropdef.c_name}"
		#		end
		#	end
		#end
		
		self.toolcontext.info("*** END OF VFT BUILDING ***", 1)
	end
	
	# Tag type as core, crown or border
	fun tag_class(mclass: MClass) do
	
		# Check if subclasses are all in single inheritance
		var all_subclasses_si = true
		for subclass in mclass.subclasses do
			for mclassdef in subclass.mclassdefs do
				if mclassdef.supertypes.length > 1 then 
					all_subclasses_si = false
					break label all_subclasses 
				end
			end
		end label all_subclasses
		
		# Tag class as core, crown or border
		if mclass.parents.length > 1 then
			core.add_all(mclass.linear_ext)
			if all_subclasses_si then 
				border.add(mclass)
			end 
		else if mclass.parents.length == 1 then
			if all_subclasses_si then crown.add(mclass)
		else
			if all_subclasses_si then crown.add(mclass)
		end 
	end
	
	# Conflicts graph of hierarchy
	private var conflicts_graph: HashMap[MClass, OrderedSet[MClass]] = new HashMap[MClass, OrderedSet[MClass]]
	
	# Compute related classes (ie. classes that have common subclasses)
	private fun compute_conflicts_graph do
		for c in core do
			for i in c.linear_ext do
				if i == c then continue
				
				var lin_i = i.linear_ext

				for j in c.linear_ext do
					if i == j or j == c then continue
					var lin_j = j.linear_ext

					var d_ij = lin_i - lin_j
					var d_ji = lin_j - lin_i

					for ed1 in d_ij do
						if not conflicts_graph.has_key(ed1) then conflicts_graph[ed1] = new OrderedSet[MClass]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflicts_graph[ed1].add(ed2)
					end
					for ed1 in d_ij do
						if not conflicts_graph.has_key(ed1) then conflicts_graph[ed1] = new OrderedSet[MClass]
						# add ed1 x ed2 to conflicts graph
						for ed2 in d_ji do conflicts_graph[ed1].add(ed2)
					end
				end
			end
		end
	end
	
	# Colorize properties of the core hierarchy
	private fun colorize_core do
		var mclasses = core
		var min_color = 0
		
		for mclass in mclasses do
			if not mclass.is_colorized then
	
				var color = min_color
			
				# If the class is root, get the minimal color
				if mclass.super_classes.length == 0 then
					colorize_elements(mclass.methods, color)	# Colorize methods
					colorize_elements(mclass.attributes, color)	# Colorize attributes

					mclass.is_colorized = true
				else
					# Check last color used by parents
					color = max_color(color, mclass.parents)
				
					# check max color used in conflicts
					if conflicts_graph.has_key(mclass) then
						color = max_color(color, conflicts_graph[mclass])
					end
					
					# Colorize properties
					colorize_elements(mclass.methods, color)	# Colorize methods
					colorize_elements(mclass.attributes, color)	# Colorize attributes
					mclass.is_colorized = true
				end
			end
		end
	end
	
	# Colorize properties of the crown hierarchy
	private fun colorize_crown do
		for mclass in crown do
			colorize_elements(mclass.methods, max_color(0, mclass.parents))
			colorize_elements(mclass.attributes, max_color(0, mclass.parents))
			mclass.is_colorized = true
		end
	end
	
	# Incremantly colorize properties of a class given a start color
	private fun colorize_elements(elements: Collection[MProperty], start_color: Int) do
		for mproperty in elements do
			if mproperty.is_colorized then continue
			mproperty.color = start_color
			start_color += 1
		end
	end
	
	private fun max_color(min_color: Int, mclasses: OrderedSet[MClass]): Int do
		var max_color = min_color
		
		for mclass in mclasses do
			if not mclass.is_colorized then continue
			for mproperty in mclass.methods do
				if mproperty.color >= max_color then max_color = mproperty.color + 1   
			end
		end
		return max_color
	end
end

redef class MClass

	# Is the class already colorized
	private var is_colorized: Bool = false
	
	# The vft table
	private var vft: Array[nullable MMethodDef] = new Array[nullable MMethodDef]

	# The attributes table
	private var attrs: Array[nullable MAttributeDef] = new Array[nullable MAttributeDef]

	# Linear extension of the class
	private var linear_ext: OrderedSet[MClass] = new OrderedSet[MClass]
	
	# Compute linear extension of the class
	private fun compute_linear_ext(mmodule: MModule) do
		linear_ext.add(self)
		for sup_mclass in super_classes do
			linear_ext.add(sup_mclass)
		end
		
		var sorter = new LinearizationSorter(mmodule)
		sorter.sort(linear_ext)
	end

	# Parents of the class (only direct super classes)
	private fun parents: OrderedSet[MClass] do
		if internal_parents == null then
			internal_parents = new OrderedSet[MClass]
			for mclassdef in mclassdefs do
				for sup_mclassdef in mclassdef.in_hierarchy.direct_greaters do
					if mclassdef.mclass != sup_mclassdef.mclass then internal_parents.add(sup_mclassdef.mclass)
				end
			end
		end
		return internal_parents.as(not null)
	end
	private var internal_parents: nullable OrderedSet[MClass]
	
	# Super classes of the class (direct and indirect super classes)
	private fun super_classes: OrderedSet[MClass] do
		if internal_super_classes == null then
			internal_super_classes = new OrderedSet[MClass]
			for mclassdef in mclassdefs do
				for sup_mclassdef in mclassdef.in_hierarchy.greaters do
					if mclassdef.mclass != sup_mclassdef.mclass then internal_super_classes.add(sup_mclassdef.mclass)
				end
			end
		end
		return internal_super_classes.as(not null)
	end
	private var internal_super_classes: nullable OrderedSet[MClass]
	
	# Sub classes (direct and indirect)
	private fun subclasses: OrderedSet[MClass] do
		if internal_subclasses == null then
			internal_subclasses = new OrderedSet[MClass]
			for mclassdef in mclassdefs do
				for sub_mclassdef in mclassdef.in_hierarchy.smallers do
					if mclassdef.mclass != sub_mclassdef.mclass then internal_subclasses.add(sub_mclassdef.mclass)
				end
			end
		end
		return internal_subclasses.as(not null)
	end
	private var internal_subclasses: nullable OrderedSet[MClass]
	
	# All 'mmethod' associated to all 'mclassdefs' of the class
	private fun methods: OrderedSet[MMethod] do
		if internal_methods == null then
			internal_methods = new OrderedSet[MMethod]
			for mclassdef in mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					var mproperty = mpropdef.mproperty
					if mproperty isa MMethod then
						internal_methods.add(mproperty)
					end
				end
			end
		end
		return internal_methods.as(not null)
	end
	private var internal_methods: nullable OrderedSet[MMethod]
	
	# All 'mattribute' associated to all 'mclassdefs' of the class
	private fun attributes: OrderedSet[MAttribute] do
		if internal_attributes == null then
			internal_attributes = new OrderedSet[MAttribute]
			for mclassdef in mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					var mproperty = mpropdef.mproperty
					if mproperty isa MAttribute then
						internal_attributes.add(mproperty)
					end
				end
			end
		end
		return internal_attributes.as(not null)
	end
	private var internal_attributes: nullable OrderedSet[MAttribute]
	
	# Fill the vft 
	# assert is_colorized = true
	private fun fill_vft do
		# first, fill table from parents
		for parent in super_classes do
			assert parent_is_colorized: parent.is_colorized
			for mproperty in parent.methods do
				var color = mproperty.color.as(not null)
				if vft.length <= color then
					for i in [vft.length .. color[ do
						vft[i] = null
					end 
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == parent then
						vft[color] = mpropdef						
					end
				end
			end
		end
	
		# then override with local methods
		assert is_colorized: is_colorized 
		for mproperty in self.methods do
			var color = mproperty.color.as(not null)
			if vft.length <= color then
				for i in [vft.length .. color[ do
					vft[i] = null
				end 
			end
			for mpropdef in mproperty.mpropdefs do
				if mpropdef.mclassdef.mclass == self then
					vft[color] = mpropdef						
				end
			end
		end
	end
	
	# Fill the attrs table
	# assert is_colorized = true
	private fun fill_attrs do
		# first, fill table from parents
		for parent in super_classes do
			assert parent_is_colorized: parent.is_colorized
			for mproperty in parent.attributes do
				var color = mproperty.color.as(not null)
				if attrs.length <= color then
					for i in [attrs.length .. color[ do
						attrs[i] = null
					end 
				end
				for mpropdef in mproperty.mpropdefs do
					if mpropdef.mclassdef.mclass == parent then
						attrs[color] = mpropdef						
					end
				end
			end
		end
	
		# then override with local methods
		assert is_colorized: is_colorized 
		for mproperty in self.attributes do
			var color = mproperty.color.as(not null)
			if attrs.length <= color then
				for i in [attrs.length .. color[ do
					attrs[i] = null
				end 
			end
			for mpropdef in mproperty.mpropdefs do
				if mpropdef.mclassdef.mclass == self then
					attrs[color] = mpropdef						
				end
			end
		end
	end
	
	
end

redef class MProperty 
	var color: nullable Int = null
	fun is_colorized: Bool do return color != null
end



#
# Utils
#

# Un ordered set
private class OrderedSet[E]
	super Array[E]
	
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
end
	

# A sorter for linearize list of classes
private class LinearizationSorter
	super AbstractSorter[MClass]
	
	var mmodule: MModule
	
	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.super_classes.has(b) then
			return -1
		end
		return 1
	end
end

# A sorter for reverse linearization
private class ReverseLinearizationSorter
	super AbstractSorter[MClass]
	
	var mmodule: MModule
	
	redef fun compare(a, b) do
		if a == b then
			return 0
		else if a.super_classes.has(b) then
			return 1
		end
		return -1
	end
end