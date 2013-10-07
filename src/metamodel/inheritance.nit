# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
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

# Compute importation of classes and inheritance of properties
module inheritance

intrude import static_type

redef class MMContext
	# Method to redefine to handle the property conflicts
	# FIXME: This is just a bad workaround because of a bad design
	fun handle_property_conflict(lc: MMLocalClass, impls2: Array[MMLocalProperty])
	do
		var glob = impls2.first.global
		stderr.write("Fatal error: inherit_local_property error\n")
		print("------- {lc.mmmodule}::{lc} {glob.intro.full_name}")
		for i in impls2 do
			print("   {i.full_name}")
		end
		print("------- {glob.property_hierarchy.first}")
		print("------- {glob.property_hierarchy.to_dot}")
		exit(1)
	end
end

redef class MMModule
	# The root of the class hierarchy
	fun type_any: MMType
	do
		var c_name = class_by_name(once ("Object".to_symbol))
		return c_name.get_type
	end

	# Root of then extern class hierarchy
	fun type_any_extern : MMType
	do
		var c_name = class_by_name(once ("Pointer".to_symbol))
		return c_name.get_type
	end

	# Import global classes from supermodules
	fun import_global_classes
	do
		var globals = new HashMap[MMGlobalClass,HashSet[MMLocalClass]]
		assert mhe != null
		for mod in mhe.direct_greaters do
			for glob in mod.global_classes do
				if global_classes.has(glob) then continue
				_global_classes.add(glob)
				_global_class_by_name[glob.name] = glob
			end
		end

	end 
	
	# Create implicit local classes for global classes that are not refined
	fun import_local_classes
	do
		for g in _global_classes do
			if _local_class_by_global.has_key(g) then continue
			var impl = new MMImplicitLocalClass(self, g) 
		end
	end
end

redef class MMLocalClass
	# List of all parents
	var _direct_parents: Array[MMAncestor] = new Array[MMAncestor]

	# Is the class computing super.
	# Used to detect specialization loops.
	var _computing_super: Bool = false 

	# Compute super classes of a class
	fun compute_super_classes
	do
		if computed_super_classes then
			# do no recompute if allready done
			return
		else if _computing_super then
			stderr.write("Fatal error: Inheritance loop for class {self}\n")
			exit(1)
		end
		_computing_super = true

		var supers = new Array[MMLocalClass]
		add_explicit_classes(supers)
		add_super_classes(supers)
		add_default_any_class(supers)
		compute_super_parents(supers)
		var set = new HashSet[MMLocalClass]
		set.add_all(supers)
		var u = set.to_a
		mmmodule.set_supers_class(self,u)
		assert _crhe != null
		assert _cshe != null
		_computing_super = false
	end

	# Compute ancestors for a class
	fun compute_ancestors
	do
		assert computed_super_classes
		if computed_ancestors then return

		var ancestors = group_ancestors(build_ancestors)
		_ancestors = new HashMap[MMLocalClass, MMAncestor]

		for set in ancestors.values do
			if set.length == 1 then
				add_ancestor(set.first)
			else
				var ma = merge_ancestors(set)
				add_ancestor(merge_ancestors(set))
			end
		end
	end

	var _are_global_properties_inherited: Bool = false

	# Inherit global properties for a class
	private fun inherit_global_properties
	do
		if _are_global_properties_inherited then return
		_are_global_properties_inherited = true

		var names = _properties_by_name
		var set = _global_properties
		for c in che.direct_greaters do
			for glob in c.global_properties do
				if set.has(glob) then continue

				set.add(glob) # Add the global property

				# Do not inherit constructors trough specialization
				#print "{c.mmmodule}::{c} -> {mmmodule}::{self} for {glob.local_property.local_class.mmmodule}::{glob.local_property.local_class}::{glob.local_property} : {glob.is_init}"
				if glob.is_init and glob.intro.local_class.global != global then
					#print "pass"
					continue
				end

				# Do not inherit new style attributes
				if glob.intro.name.to_s.chars[0] == '@' then continue

				make_visible_an_inherited_global_property(glob)
			end
		end
	end

	redef fun global_properties
	do
		if _are_global_properties_inherited then return _global_properties
		assert computed_super_classes
		inherit_global_properties
		return _global_properties
	end

	redef fun has_global_property(g)
	do
		# has_global_property can be called during the construction of the class
		# hierarchy to check that a type "X" is not a formal type.
		if not computed_super_classes then return false

		var set = _global_properties
		if set.has(g) then return true
		for c in che.direct_greaters do
			if c.has_global_property(g) then
				set.add(g)
				return true
			end
		end
		return false
	end

	redef fun has_global_property_by_name(n)
	do
		# has_global_property can be called during the construction of the class
		# hierarchy to check that a type "X" is not a formal type.
		if not computed_super_classes then return false

		# Ensure that super-classes are constructed
		compute_super_classes

		if _properties_by_name.has_key(n) then
			return _properties_by_name[n].length == 1
		end
		var set = _global_properties
		var nset
		if _properties_by_name.has_key(n) then
			nset = _properties_by_name[n]
		else
			nset = new Array[MMGlobalProperty]
			_properties_by_name[n] = nset
		end
		for c in che.direct_greaters do
			if c.has_global_property_by_name(n) then
				var g = c.get_property_by_name(n)
				if not set.has(g) then set.add(g)
				if g.is_init and g.intro.local_class.global != global then continue
				if g.intro.name.to_s.chars.first == '@' then continue # inherited new style attibutes are invisible
				if nset.has(g) then continue
				nset.add(g)
			end
		end
		return nset.length == 1
	end

	# Make the name of a global property meaningful in the class
	fun make_visible_an_inherited_global_property(glob: MMGlobalProperty)
	do
		var names = _properties_by_name
		var gname = glob.intro.name
		var conf_set: Array[MMGlobalProperty]
		if names.has_key(gname) then
			conf_set = names[gname]
		else
			conf_set = new Array[MMGlobalProperty]
			names[gname] = conf_set
		end
		conf_set.add(glob)
	end

	# Add super stype of this current local class
	fun add_direct_parent(p: MMAncestor)
	do
		_direct_parents.add(p)
	end

	# Are super-class already computed?
	fun computed_super_classes: Bool
	do
		return _crhe != null and _cshe != null
	end
	
	# Are ancestors already computed
	fun computed_ancestors: Bool
	do
		return _ancestors != null
	end

	# Get the ancestor for a given class
	# TODO: is this useful?
	private fun ancestor_for(c: MMLocalClass): MMAncestor
	do	
		assert ancestors != null

		if _ancestors.has_key(c) then
			return _ancestors[c]
		end
		var a = c.for_module(mmmodule)
		assert cshe <= a
		var ra: MMAncestor
		if _ancestors.has_key(a) then
			ra = _ancestors[a]
		else if c.global == _global then
			ra = new MMRefineAncestor(self,c)
		else
			ra = new MMSpecAncestor(get_type,c.get_type)
		end
		_ancestors[c] = ra
		return ra
	end

	redef fun [](glob)
	do
		if _local_property_by_global.has_key(glob) then
			return _local_property_by_global[glob]
		else if has_global_property(glob) then
			return inherit_local_property(glob)
		else if not computed_super_classes then
			compute_super_classes
			computed_ancestors
			inherit_global_properties
			assert has_global_property(glob)
			return inherit_local_property(glob)
		else
			abort
		end
	end

	# Add default super class in direct parent and in super classes if this is not the Object class
	# Default super class is Pointer for extern types
	private fun add_default_any_class(supers: Array[MMLocalClass])
	do
		if name != once ("Object".to_symbol) then
			var has_no_top = false
			if supers.is_empty then
				has_no_top = true
			else if global.is_extern then
				has_no_top = true
				for s in supers do
					if s.global.is_extern then
						has_no_top = false
						break
					end
				end
			end

			if has_no_top then
				var top_type
				if name != once ("Pointer".to_symbol) and global.is_extern then
					top_type = mmmodule.type_any_extern
				else
					top_type = mmmodule.type_any
				end
				supers.add(top_type.local_class)
				var default = new MMDefaultAncestor(self, top_type)
				add_direct_parent(default)
			end
		end
	end
	
	# Adding inherited class from previous refinement of self
	private fun add_super_classes(supers: Array[MMLocalClass])
	do
		assert _crhe != null
		for ref in _crhe.direct_greaters do
			for sup in ref.cshe.direct_greaters do
				var cla = sup.for_module(_mmmodule)
				supers.add(cla)
			end
		end
	end
	
	# Add self parents of this local class
	private fun add_explicit_classes(supers: Array[MMLocalClass])
	do
		for p in _direct_parents do
			supers.add(p.local_class)
		end
	end

	# Ensure all super parents are computed
	private fun compute_super_parents(supers: Array[MMLocalClass])
	do
		for p in supers do
			p.compute_super_classes
		end
	end

	# compute all ancestors for a class (multiple)
	private fun build_ancestors: Array[MMAncestor]
	do
		var all_ancestors = new Array[MMAncestor]
		# Refined classes are ancestors
		assert _crhe != null
		for p in _crhe.direct_greaters do
			assert p != self
			var anc = new MMRefineAncestor(self, p)
			anc.add_in(all_ancestors)
		end
		for anc in _direct_parents do
			assert anc.local_class != self
			anc.add_in(all_ancestors)
		end
		return all_ancestors
	end

	# Build an ancestor map indexed by LocalClass
	private fun group_ancestors(all: Array[MMAncestor]): Map[MMLocalClass, Set[MMAncestor]]
	do
		#print "process {self}"
		var map = new HashMap[MMLocalClass, Set[MMAncestor]]
		for a in all do
			var c = a.local_class
			#print "ancestor is"
			#print "  {c}"
			var set: Set[MMAncestor]
			c.compute_ancestors
			if map.has_key(c) then
				set = map[c]
			else
				set = new HashSet[MMAncestor]
				map[c] = set
			end
			set.add(a)
		end
		return map
	end

	# Remove duplicate ancestors and merge if compatible, in the other case do an error
	private fun merge_ancestors(set: Set[MMAncestor]): MMAncestor
	do
		var marks = new HashSet[MMAncestor]
		var res = new Array[MMAncestor]
		for t in set do
			var it = set.iterator
			var search = true
			while it.is_ok and search do
				
				var a = t == it.item
				a = marks.has(it.item)
				a = it.item.stype < t.stype
				
				if not(t == it.item or marks.has(it.item)) and
					(it.item.stype < t.stype) then
						marks.add(t)
						search = false
				end
				it.next
			end
			if not marks.has(t) then
				res.add(t)
			end
		end

		if res.length > 1 then
			stderr.write("Fatal error: Incompatibles ancestors for {self.name}: {res.join(", ")}\n")
			exit(1)
		end
		return res.first
	end

	# Inherit a local property
	# Is lazily called
	# FIXME: dont crash lazily
	private fun inherit_local_property(glob: MMGlobalProperty): MMLocalProperty
	do
		assert not _local_property_by_global.has_key(glob)

		var impl: MMLocalProperty

		var ghier = glob.property_hierarchy
		var supers = che.direct_greaters
		if ghier.length == 1 then
			# Unredefined property
			impl = glob.intro
		else if supers.length == 1 then
			# Single inheritance
			impl = supers.first[glob]
		else
			# Hard multiple inheritance
			# First compute the set of bottom properties
			var impls = new ArraySet[MMLocalProperty]
			for sc in supers do
				if sc.has_global_property(glob) then impls.add(sc[glob])
			end
			# Second, extract most specific
			var impls2 = ghier.select_smallests(impls)
			# Conflict case (FIXME)
			if impls2.length != 1 then
				self.mmmodule.context.handle_property_conflict(self, impls2)
			end
			impl = impls2.first
		end

		# FIXME: Why these 3 lines ?
		#var ac = ancestor_for(impl.local_class)
		#ac.local_class.inherit_global_properties
		#var a = ac.stype
		#assert a.local_class != self

		# Register the local property
		_local_property_by_global[glob] = impl
		
		return impl
	end
end

redef class MMLocalProperty
	# Attach self to a global property
	fun inherit_global(g: MMGlobalProperty)
	do
		set_global(g)
		var impls = new Array[MMLocalProperty]
		for sc in local_class.che.direct_greaters do
			if not sc.has_global_property(g) then continue
			impls.add(sc[g])
		end
		g.add_local_property(self, impls)
	end
end

redef class MMAncestor
	# Add this ancestor and it's super one in tab
	private fun add_in(tab: Array[MMAncestor])
	do
		tab.add(self)
		stype.local_class.compute_ancestors
		for anc in stype.local_class.ancestors.values do
			var aaa = anc.stype.for_module(stype.mmmodule)
			var a = aaa.adapt_to(stype).for_module(inheriter.mmmodule)
			if a.local_class != inheriter.local_class then
				var it = tab.iterator
				var b = true
				while it.is_ok and b do
					b = not ( it.item.inheriter == inheriter and it.item.stype == a)
					it.next
				end
				if b then
					tab.add(new MMSpecAncestor(inheriter,a))
				end
			end
		end
	end
end

##########################################

# A local class that is a pure importation of an other local class
class MMImplicitLocalClass
	super MMLocalClass
	init(mod: MMModule, g: MMGlobalClass)
	do
		var cla = g.intro
		super(mod, cla.name, cla.arity)
		set_global(g)
	end
end

class MMRefineAncestor
	super MMAncestor
	redef readable var _local_class: MMLocalClass

	init(b: MMLocalClass, a: MMLocalClass)
	do
		_local_class = a
		inheriter = b.get_type
		stype = _local_class.get_type
	end
end


class MMSpecAncestor
	super MMAncestor
	redef fun local_class do return stype.local_class

	init(inheriter: MMType, stype: MMType)
	do
		_inheriter = inheriter
		_stype = stype
	end
end

class MMDefaultAncestor
	super MMAncestor
	redef fun local_class do return stype.local_class

	init(b: MMLocalClass, anc: MMType)
	do
		inheriter = b.get_type
		stype = anc
	end
end
