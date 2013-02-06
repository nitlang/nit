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

# core NIT metamodel classes featuring the minimal and simpliest entities
package abstractmetamodel

import partial_order
import location
import symbol

# The main singleton which knows everything
abstract class MMContext

	init do end

	# The module dependence hierarchy
	readable var _module_hierarchy: PartialOrder[MMModule] = new PartialOrder[MMModule]

	# The class refinement and specialization hierarchy
	# It is not the real hierarchy since non concrete classes can only be leaves
	readable var _class_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass]

	# All known global classes
	var _global_classes: Array[MMGlobalClass] = new Array[MMGlobalClass]

	# All known modules
	readable var _modules: Array[MMModule] = new Array[MMModule]

	# Register a new module with the modules it depends on
	fun add_module(mod: MMModule, supers: Array[MMModule])
	do
		_module_hierarchy.add(mod, _module_hierarchy.select_smallests(supers))
		_modules.add(mod)
		mod._mhe = _module_hierarchy[mod]
	end

	# Register a global class
	private fun add_global_class(c: MMGlobalClass) do _global_classes.add(c)

	# Register a local class
	fun add_local_class(c: MMLocalClass, sup: Array[MMLocalClass])
	do
		var csup = new Array[MMLocalClass]
		for s in sup do
			if s isa MMConcreteClass then
				csup.add(s)
			else
				for ss in s.che.direct_greaters do
					if csup.has(ss) then continue
					csup.add(ss)
				end
			end
		end
		var che = _class_hierarchy.add(c, csup)
		c._che = che
	end
end

# Directory of modules
class MMDirectory
	# Full name of the directory
	readable var _name: Symbol

	# Full path
	readable var _path: String

	# Parent directory
	# null if none
	readable var _parent: nullable MMDirectory

	# The module that introduces the directory if any
	readable writable var _owner: nullable MMModule = null

	# Known modules in the directory
	readable var _modules: Map[Symbol, MMModule] = new HashMap[Symbol, MMModule]

	# Register a new module
	fun add_module(mod: MMModule)
	do
		assert not _modules.has_key(mod.name)
		_modules[mod.name] = mod
	end

	init(name: Symbol, path: String, parent: nullable MMDirectory) do
		_name = name
		_path = path
		_parent = parent
	end

	# The fullname of a a potentiel module in the directory
	fun full_name_for(module_name: Symbol): Symbol do
		return "{name}/{module_name}".to_symbol
	end
end

# A module is a Nit file
abstract class MMModule
	# Global context
	readable var _context: MMContext 

	# Short name of the module
	readable var _name: Symbol

	# Full name of the module
	readable var _full_name: Symbol

	# The directory of the module
	readable var _directory: MMDirectory

	# Location of this module
	readable var _location: Location

	# Module dependence hierarchy element
	readable var _mhe: nullable PartialOrderElement[MMModule]

	# All global classes of the module (defined and imported)
	readable var _global_classes: Set[MMGlobalClass] = new HashSet[MMGlobalClass]

	# All local classes of the module (defined and imported)
	readable var _local_classes: Set[MMLocalClass] = new HashSet[MMLocalClass]

	# Class specialization hierarchy of the module.
	readable var _class_specialization_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass]

	# Modules intruded (directly or not)
	var _intrude_modules: Set[MMModule] = new HashSet[MMModule]

	# Module publicly imported (directly or not)
	var _public_modules: Set[MMModule] = new HashSet[MMModule]

	# Module privately imported (directly or not)
	var _private_modules: Set[MMModule] = new HashSet[MMModule]

	# Explicit imported modules
	readable var _explicit_imported_modules: Set[MMModule] = new HashSet[MMModule]

	# Association between local class and global classes
	var _local_class_by_global: Map[MMGlobalClass, MMLocalClass] = new HashMap[MMGlobalClass, MMLocalClass]

	# Dictionary of global classes
	var _global_class_by_name: Map[Symbol, MMGlobalClass] = new HashMap[Symbol, MMGlobalClass]

	# Is a hybrid module partially implemented in extern code
	# It is if it contains a new extern class or an
	# extern class declaration
	var is_extern_hybrid : Bool writable = false

	# Uses foreign function interface
	fun uses_ffi : Bool is abstract

	protected init(name: Symbol, dir: MMDirectory, context: MMContext, loc: Location)
	do
		_name = name
		_directory = dir
		_context = context
		_full_name = dir.full_name_for(name)
		_location = loc
	end

	# Register that a module is imported with a visibility
	# 0 -> intrude
	# 1 -> public
	# 3 -> private
	fun add_super_module(m: MMModule, visibility_level: Int)
	do
		_explicit_imported_modules.add(m)
		if visibility_level == 0 then
			_intrude_modules.add(m)
			_intrude_modules.add_all(m._intrude_modules)
			_public_modules.add_all(m._public_modules)
			_private_modules.add_all(m._private_modules)
		else if visibility_level == 1 then
			_public_modules.add(m)
			_public_modules.add_all(m._intrude_modules)
			_public_modules.add_all(m._public_modules)
		else
			_private_modules.add(m)
			_private_modules.add_all(m._intrude_modules)
			_private_modules.add_all(m._public_modules)
		end

	end

	# Return the visibiliy level of a super-module
	# 3 -> self or intruded => see all
	# 2 -> public => see public and protected
	# 1 -> private => see public and protected
	# 0 -> nothing => see nothing
	fun visibility_for(m: MMModule): Int
	do
		if m == self or _intrude_modules.has(m) then
			return 3
		else if _public_modules.has(m) then
			return 2
		else if _private_modules.has(m) then
			return 1
		else
			return 0
		end
	end


	# Get the local class associated with a global class 
	fun [](c: MMGlobalClass): MMLocalClass
	do
		return _local_class_by_global[c]
	end

	# Get a local class by its name
	fun class_by_name(n: Symbol): MMLocalClass
	do
		return self[_global_class_by_name[n]]
	end

	# Is there a global class with this name
	fun has_global_class_named(n: Symbol): Bool
	do
		return _global_class_by_name.has_key(n)
	end

	# Get a global class by its name.
	# Return null if not class match this name
	fun global_class_named(n: Symbol): MMGlobalClass
	do
		return _global_class_by_name[n]
	end

	redef fun to_s do return name.to_s

	# Assign super_classes for a local class
	fun set_supers_class(c: MMLocalClass, supers: Array[MMLocalClass])
	do
		var tab = _class_specialization_hierarchy.select_smallests(supers)
		c._cshe = _class_specialization_hierarchy.add(c,tab)
		var tab_all = c.crhe.direct_greaters.to_a
		tab_all.add_all(tab)
		context.add_local_class(c,tab_all)
	end

	# Register a local class and its global class in the module
	private fun register_global_class(c: MMLocalClass)
	do
		_local_class_by_global[c.global] = c
	end
end

class MMGlobalClass
	# The introducing local class
	readable var _intro: MMLocalClass 

	# Class refinement hierarchy
	# It is not the real hierarchy since non concrete classes can only be leaves
	readable var _class_refinement_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass] 

	# Create a new global class introduced with a given local class
	init(c: MMLocalClass)
	do
		_intro = c
		c.context.add_global_class(self)
	end

	# The name of the global class
	fun name: Symbol
	do
		return intro.name
	end

	# The module that introduces the global class
	fun mmmodule: MMModule
	do
		return intro.mmmodule
	end

	redef fun to_s
	do
		return intro.to_s
	end

	# register a new Local class to local class hierarchy (set the crhe value)
	private fun register_local_class(c: MMLocalClass)
	do
		var sup = new Array[MMLocalClass]
		for s in class_refinement_hierarchy do
			if c.mmmodule.mhe < s.mmmodule and s isa MMConcreteClass then
				sup.add(s)
			end
		end
		c._crhe = _class_refinement_hierarchy.add(c, sup)
	end

	# Is the global class an interface?
	readable writable var _is_interface: Bool = false

	# Is the global class an abstract class?
	readable writable var _is_abstract: Bool = false

	# Is the global class a enum class?
	readable writable var _is_enum: Bool = false

	# Is the global class an extern class?
	readable writable var _is_extern: Bool = false

	# Visibility of the global class
	# 1 -> public
	# 3 -> private
	readable writable var _visibility_level: Int = 1 # FIXME: why this should be defined ?

	# Is the global class a mixin class?
	# A mixin class inherits all constructors from a superclass
	fun is_mixin: Bool
	do
		return _mixin_of != self
	end

	# Indicate the superclass the class is a mixin of.
	# If mixin_of == self then the class is not a mixin
	# Is two classes have the same mixin_of value, then they both belong to the same mixing group
	readable writable var _mixin_of: MMGlobalClass = self

end

# Local classes are classes defined, refined or imported in a module
abstract class MMLocalClass
	# The name of the local class
	readable var _name: Symbol

	# Arity of the local class (if generic)
	# FIXME: How to move this into the generic module in a sane way?
	readable var _arity : Int 

	# The module of the local class
	readable var _mmmodule: MMModule

	# The global class of the local class
	fun global: MMGlobalClass do return _global.as(not null)
	var _global: nullable MMGlobalClass

	# The local class refinement hierarchy element
	fun crhe: PartialOrderElement[MMLocalClass] do return _crhe.as(not null)
	var _crhe: nullable PartialOrderElement[MMLocalClass]

	# The local class specialization hierarchy element
	fun cshe: PartialOrderElement[MMLocalClass] do return _cshe.as(not null)
	var _cshe: nullable PartialOrderElement[MMLocalClass]

	# The local class full hierarchy element
	fun che: PartialOrderElement[MMLocalClass] do return _che.as(not null)
	var _che: nullable PartialOrderElement[MMLocalClass]

	# Association between local properties and global properties
	var _local_property_by_global: Map[MMGlobalProperty, MMLocalProperty] = new HashMap[MMGlobalProperty, MMLocalProperty]

	# All known global properties
	readable var _global_properties: Set[MMGlobalProperty] = new HashSet[MMGlobalProperty]

	# All locally defined local properties
	readable var _local_local_properties: Set[MMLocalProperty] = new HashSet[MMLocalProperty]

	# Dictionnary of global properties
	var _properties_by_name: Map[Symbol, Array[MMGlobalProperty]] = new HashMap[Symbol, Array[MMGlobalProperty]]

	# Create a new class with a given name and arity
	protected init(mod: MMModule, name: Symbol, arity: Int)
	do
		_mmmodule = mod
		_name = name
		_arity = arity
		mod._local_classes.add(self)
	end

	# The corresponding local class in another module
	fun for_module(m: MMModule): MMLocalClass
	do
		return m[global]
	end
	
	# Introduce a new global class to a new global one and register to hierarchy with no refine
	fun new_global
	do
		var g = new MMGlobalClass(self)
		_mmmodule._global_classes.add(g)
		_mmmodule._global_class_by_name[name] = g
		set_global(g)
	end

	# Associate this local class to a global one and register to hierarchy
	# the global class for this class
	# refined classes for this class
	fun set_global(g: MMGlobalClass)
	do
		_global = g
		_global.register_local_class(self)
		_mmmodule.register_global_class(self)
	end

	# Is there a global propery with a given name
	# TODO: Will disapear when qualified names will be available
	fun has_global_property_by_name(n: Symbol): Bool
	do
		return _properties_by_name.has_key(n) and _properties_by_name[n].length == 1
	end

	# Get a global property by its name
	# TODO: Will disapear when qualified names will be available
	fun get_property_by_name(n: Symbol): MMGlobalProperty
	do
		if not has_global_property_by_name(n) then abort
		var props = _properties_by_name[n]
		return props.first
	end

	# Get a attribute by its name
	# TODO: Will disapear when qualified names will be available
	fun attribute(a: Symbol): MMGlobalProperty
	do
		return get_property_by_name(a)
	end

	# Get a method by its name
	# TODO: Will disapear when qualified names will be available
	fun method(na: Symbol): MMGlobalProperty
	do
		return _properties_by_name[na].first
	end

	# Select a method from its name
	# TODO: Will disapear when qualified names will be available
	fun select_method(name: Symbol): MMMethod
	do
		var gp = method(name)
		var res = self[gp]
		assert res isa MMMethod
		return res
	end
	
	# Select an attribute from its name
	# TODO: Will disapear when qualified names will be available
	fun select_attribute(name: Symbol): MMAttribute
	do
		var gp = attribute(name)
		var res = self[gp]
		assert res isa MMAttribute
		return res
	end
	
	# Look in super-classes (by specialization) and return properties with name
	# Beware, global property of results is not intended to be the same
	fun super_methods_named(n: Symbol): Array[MMLocalProperty] 
	do
		var classes = new Array[MMLocalClass]
		for c in cshe.greaters do
			if c.has_global_property_by_name(n) then classes.add(c)
		end
		classes = cshe.order.select_smallests(classes)
		var res = new Array[MMLocalProperty]
		for c in classes do
			var g = c.method(n)
			#print "found {c[g].full_name}"
			res.add(c[g])
		end
		return res
	end

	# Register a local property and associate it with its global property
	fun register_local_property(p: MMLocalProperty)
	do
		_local_property_by_global[p.global] = p
		if p.local_class == self then
			_local_local_properties.add(p)
		end
	end

	# Register a global property and associate it with its name
	fun register_global_property(glob: MMGlobalProperty)
	do
		var prop = glob.intro
		var name = prop.name
		if _properties_by_name.has_key(name) then
			_properties_by_name[name].add(glob)
		else
			_properties_by_name[name] = [glob]
		end
		_global_properties.add(glob)
		register_local_property(prop)
	end

	# Does the global property belong to the class?
	fun has_global_property(glob: MMGlobalProperty): Bool
	do
		return _global_properties.has(glob)
	end

	# Get a local property by its global property
	fun [](glob: MMGlobalProperty): MMLocalProperty
	do
		return _local_property_by_global[glob]
	end

	# The current MMContext
	fun context: MMContext do return mmmodule.context

	redef fun to_s
	do
		return _name.to_s
	end

	# Comparaison in a total order that superset the class refinement and the class specialisation relations
	fun total_order_compare(b: MMLocalClass): Int
	do
		var a = self
		if a == b then
			return 0
		else if a.mmmodule.mhe < b.mmmodule then
			return 1
		else if b.mmmodule.mhe < a.mmmodule then
			return -1
		end
		var ar = a.cshe.rank
		var br = b.cshe.rank
		if ar > br then
			return 1
		else if br > ar then
			return -1
		else
			return b.name.to_s <=> a.name.to_s
		end
	end
end

# A global property gather local properties that correspond to a same message
class MMGlobalProperty
	# The local property for each class that has the global property

	# The introducing local property
	readable var _intro: MMLocalProperty

	# The local class that introduces the global property
	fun local_class: MMLocalClass
	do
		return intro.local_class
	end

	# The property redefinition hierarchy
	readable var _property_hierarchy: PartialOrder[MMLocalProperty] = new PartialOrder[MMLocalProperty]

	# Create a new global property introduced by a local one
	protected init(p: MMLocalProperty)
	do
		_intro = p
		add_local_property(p, new Array[MMLocalProperty])
	end

	redef fun to_s do return intro.full_name

	# Register a new local property
	fun add_local_property(i: MMLocalProperty, sup: Array[MMLocalProperty])
	do
		i._prhe = _property_hierarchy.add(i,sup)
	end

	# Is the global property an attribute ?
	fun is_attribute: Bool do return intro isa MMAttribute

	# Is the global property a method (or a constructor)?
	fun is_method: Bool do return intro isa MMMethod

	# Is the global property a constructor (thus also a method)?
	readable writable var _is_init: Bool = false

	# Is the global property a constructor for a given class?
	fun is_init_for(c: MMLocalClass): Bool
	do
		if not is_init then return false
		var sc = intro.local_class
		var res = c.che <= sc and c.global.mixin_of == sc.global.mixin_of
		return res
	end

	# Visibility of the property
	# 1 -> public
	# 2 -> protected
	# 3 -> private
	readable writable var _visibility_level: Int = 1 # FIXME: why this should be defined ?
end

# Local properties are properties defined (explicitely or not) in a local class
abstract class MMLocalProperty
	# The name of the property
	readable var _name: Symbol

	# The local class who own the local property
	readable var _local_class: MMLocalClass

	# The global property where belong the local property
	var _global: nullable MMGlobalProperty

	fun global: MMGlobalProperty do return _global.as(not null)
	fun is_global_set: Bool do return _global != null

	# Redefinition hierarchy of the local property
	var _prhe: nullable PartialOrderElement[MMLocalProperty]

	fun prhe: PartialOrderElement[MMLocalProperty] do return _prhe.as(not null)

	# The module of the local property
	fun mmmodule: MMModule do return _local_class.mmmodule

	# Full expanded name with all qualifications
	fun full_name: String
	do
		if _global == null then
			return "{local_class.mmmodule}::{local_class}::(?::{name})"
		else if global.intro == self then
			return "{local_class.mmmodule}::{local_class}::{name}"
		else
			return "{local_class.mmmodule}::{local_class}::({global.intro.full_name})"
		end
	end

	# set the global property for this property
	fun set_global(g: MMGlobalProperty)
	do
		_global = g
		_local_class.register_local_property(self)
	end

	# Introduce a new global property for this local one
	fun new_global
	do
		assert _global == null
		var global = new MMGlobalProperty(self)
		_global = global
		_local_class.register_global_property(global)
	end

	redef fun to_s do return name.to_s

	# Is the concrete property contain a `super' in the body?
	readable writable var _need_super: Bool = false

	protected init(n: Symbol, bc: MMLocalClass)
 	do
 		_name = n
		_local_class = bc
 	end
end

# Attribute local properties
abstract class MMAttribute
	super MMLocalProperty
end

class MMExplicitImport
	var local_class : MMLocalClass
	var method : MMMethod
end

# Method local properties
abstract class MMMethod
	super MMLocalProperty
	# Is the method defined with intern
	fun is_intern: Bool is abstract

	# Is the method abstract
	fun is_abstract: Bool is abstract

	# Is the method extern
	fun is_extern: Bool is abstract

	# extern name when specified explicitly in nit code
	fun extern_name: nullable String is abstract

	# properties explicitly exported to native code
	fun explicit_imports : Set[ MMExplicitImport ] is abstract
end

# Concrete local classes
abstract class MMConcreteClass
	super MMLocalClass
end

