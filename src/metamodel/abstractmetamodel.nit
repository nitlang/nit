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

# The main singleton which knows everything
class MMContext

	init do end

	# The module dependence hierarchy
	readable attr _module_hierarchy: PartialOrder[MMModule] = new PartialOrder[MMModule]

	# The class refinement and specialization hierarchy
	# It is not the real hierarchy since non concrete classes can only be leaves
	readable attr _class_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass]

	# All known global classes
	attr _global_classes: Array[MMGlobalClass] = new Array[MMGlobalClass]

	# All known modules
	readable attr _modules: Array[MMModule] = new Array[MMModule]

	# Register a new module with the modules it depends on 
	meth add_module(module: MMModule, supers: Array[MMModule])
	do
		assert supers != null
		_module_hierarchy.add(module, _module_hierarchy.select_smallests(supers))
		assert module.name != null
		_modules.add(module)
		module._mhe = _module_hierarchy[module]
	end

	# Register a global class
	private meth add_global_class(c: MMGlobalClass) do _global_classes.add(c)

	# Register a local class
	meth add_local_class(c: MMLocalClass, sup: Array[MMLocalClass])
	do
		assert sup != null
		var csup = new Array[MMLocalClass]
		var csups = new Array[String]
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
	readable attr _name: Symbol

	# Full path
	readable attr _path: String

	# Parent directory
	# null if none
	readable attr _parent: MMDirectory

	# The module that introduces the directory if any
	readable writable attr _owner: MMModule

	# Known modules in the directory
	readable attr _modules: Map[Symbol, MMModule] = new HashMap[Symbol, MMModule]

	# Register a new module
	meth add_module(module: MMModule)
	do
		assert not _modules.has_key(module.name)
		_modules[module.name] = module
	end

	# Directory hierarchy element
	readable attr _dhe: PartialOrderElement[MMDirectory]

	init(name: Symbol, path: String, parent: MMDirectory) do
		_name = name
		_path = path
		_parent = parent
	end

	# The fullname of a a potentiel module in the directory
	meth full_name_for(module_name: Symbol): Symbol do
		return "{name}/{module_name}".to_symbol
	end
end

# A module is a NIT package
class MMModule
	# Global context
	readable attr _context: MMContext 

	# Short name of the module
	readable attr _name: Symbol

	# Full name of the module
	readable attr _full_name: Symbol

	# The directory of the module
	readable attr _directory: MMDirectory

	# Module dependence hierarchy element
	readable attr _mhe: PartialOrderElement[MMModule] 

	# All global classes of the module (defined and imported)
	readable attr _global_classes: Array[MMGlobalClass] = new Array[MMGlobalClass]

	# All local classes of the module (defined and imported)
	readable attr _local_classes: Array[MMLocalClass] = new Array[MMLocalClass]

	# Class specialization hierarchy of the module.
	readable attr _class_specialization_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass]

	# Modules intruded (directly or not)
	attr _intrude_modules: Set[MMModule] = new HashSet[MMModule]

	# Module publicly imported (directly or not)
	attr _public_modules: Set[MMModule] = new HashSet[MMModule]

	# Module privately imported (directly or not)
	attr _private_modules: Set[MMModule] = new HashSet[MMModule]

	# Explicit imported modules
	readable attr _explicit_imported_modules: Set[MMModule] = new HashSet[MMModule]

	# Association between local class and global classes
	attr _local_class_by_global: Map[MMGlobalClass, MMLocalClass] = new HashMap[MMGlobalClass, MMLocalClass]

	# Dictionary of global classes
	attr _global_class_by_name: Map[Symbol, MMGlobalClass] = new HashMap[Symbol, MMGlobalClass]

	protected init(name: Symbol, dir: MMDirectory, context: MMContext)
	do
		_name = name
		_directory = dir
		_context = context

		if dir == null then
			_full_name = name
		else
			_full_name = dir.full_name_for(name)
		end
	end

	# Register that a module is imported with a visibility
	# 0 -> intrude
	# 1 -> public
	# 3 -> private
	meth add_super_module(m: MMModule, visibility_level: Int)
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
	meth visibility_for(m: MMModule): Int
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
	meth [](c: MMGlobalClass): MMLocalClass
	do
		assert _local_class_by_global != null
		assert c != null
		if _local_class_by_global.has_key(c) then
			return _local_class_by_global[c]
		else
			return null
		end
	end

	# Register a local class to the module
	meth add_local_class(c: MMLocalClass)
	do
		c._module = self
		_local_classes.add(c)
	end

	# Get a local class by its name
	meth class_by_name(n: Symbol): MMLocalClass
	do
		return self[_global_class_by_name[n]]
	end

	# Is there a global class with this name
	meth has_global_class_named(n: Symbol): Bool
	do
		return _global_class_by_name.has_key(n)
	end

	# Get a global class by its name.
	# Return null if not class match this name
	meth global_class_named(n: Symbol): MMGlobalClass
	do
		if _global_class_by_name.has_key(n) then
			return _global_class_by_name[n]
		else
			return null
		end
	end

	redef meth to_s do return name.to_s

	# Assign super_classes for a local class
	meth set_supers_class(c: MMLocalClass, supers: Array[MMLocalClass])
	do
		assert supers != null
		var tab = _class_specialization_hierarchy.select_smallests(supers)
		c._cshe = _class_specialization_hierarchy.add(c,tab)
		var tab_all = c.crhe.direct_greaters.to_a
		tab_all.add_all(tab)
		context.add_local_class(c,tab_all)
	end

	# Register a local class and its global class in the module
	private meth register_global_class(c: MMLocalClass)
	do
		assert c.global != null
		_local_class_by_global[c.global] = c
	end
end

class MMGlobalClass
	# The introducing local class
	readable attr _intro: MMLocalClass 

	# Class refinement hierarchy
	# It is not the real hierarchy since non concrete classes can only be leaves
	readable attr _class_refinement_hierarchy: PartialOrder[MMLocalClass] = new PartialOrder[MMLocalClass] 

	# Create a new global class introduced with a given local class
	init(c: MMLocalClass)
	do
		_intro = c
		c.context.add_global_class(self)
	end

	# The name of the global class
	meth name: Symbol
	do
		return intro.name
	end

	# The module that introduces the global class
	meth module: MMModule
	do
		return intro.module
	end

	redef meth to_s
	do
		return intro.to_s
	end

	# register a new Local class to local class hierarchy (set the crhe value)
	private meth register_local_class(c: MMLocalClass)
	do
		assert c.module != null
		assert c.crhe == null
		var sup = new  Array[MMLocalClass]
		for s in class_refinement_hierarchy do
			if c.module.mhe < s.module and s isa MMConcreteClass then
				sup.add(s)
			end
		end
		c._crhe = _class_refinement_hierarchy.add(c, sup)
	end

	# Is the global class an interface?
	readable writable attr _is_interface: Bool = false

	# Is the global class an abstract class?
	readable writable attr _is_abstract: Bool = false

	# Is the global class a universal class?
	readable writable attr _is_universal: Bool = false

	# Visibility of the global class
	# 1 -> public
	# 3 -> private
	readable writable attr _visibility_level: Int = 1 # FIXME: why this should be defined ?

	# Is the global class a mixin class?
	# A mixin class inherits all constructors from a superclass
	meth is_mixin: Bool
	do
		return _mixin_of != self
	end

	# Indicate the superclass the class is a mixin of.
	# If mixin_of == self then the class is not a mixin
	# Is two classes have the same mixin_of value, then they both belong to the same mixing group
	readable writable attr _mixin_of: MMGlobalClass = self

end

# Local classes are classes defined, refined or imported in a module
class MMLocalClass
	# The name of the local class
        readable attr _name: Symbol

	# Arity of the local class (if generic)
	# FIXME: How to move this into the generic module in a sane way?
	readable attr _arity : Int 

	# The module of the local class
	readable attr _module: MMModule

	# Is the class abstract
	readable writable attr _abstract: Bool

	# The global class of the local class
	readable attr _global: MMGlobalClass 

	# The local class refinement hierarchy element
	readable attr _crhe: PartialOrderElement[MMLocalClass] 

	# The local class specialization hierarchy element
	readable attr _cshe: PartialOrderElement[MMLocalClass] 

	# The local class full hierarchy element
	readable attr _che: PartialOrderElement[MMLocalClass]

	# Association between local properties and global properties
	readable attr _local_property_by_global: Map[MMGlobalProperty, MMLocalProperty] 

	# All known global properties
	readable attr _global_properties: Set[MMGlobalProperty] 

	# Dictionnary of global properties
	readable attr _properties_by_name: Map[Symbol, Array[MMGlobalProperty]]

	# Create a new class with a given name and arity
	protected init(name: Symbol, arity: Int)
	do
		_name = name
		_arity = arity
	end

	# The corresponding local class in another module
	meth for_module(m: MMModule): MMLocalClass
	do
		return m[global]
	end
	
	# Introduce a new global class to a new global one and register to hierarchy with no refine
	meth new_global
	do
		var g = new MMGlobalClass(self)
		_module._global_classes.add(g)
		_module._global_class_by_name[name] = g
		set_global(g)
	end

	# Associate this local class to a global one and register to hierarchy
	# the global class for this class
	# refined classes for this class
	meth set_global(g: MMGlobalClass)
	do
		assert g != null
		_global = g
		_global.register_local_class(self)
		_module.register_global_class(self)
	end

	# Is there a global propery with a given name
	# TODO: Will disapear when qualified names will be available
	meth has_global_property_by_name(n: Symbol): Bool
	do
		var props = _properties_by_name[n]
		return props != null
	end

	# Get a global property by its name
	# TODO: Will disapear when qualified names will be available
	meth get_property_by_name(n: Symbol): MMGlobalProperty
	do
		var props = _properties_by_name[n]
		if props == null or props.length > 1 then
			return null
		end
		return props.first
	end

	# Get a attribute by its name
	# TODO: Will disapear when qualified names will be available
	meth attribute(a: Symbol): MMGlobalProperty
	do
		return get_property_by_name(a)
	end

	# Get a method by its name
	# TODO: Will disapear when qualified names will be available
	meth method(na: Symbol): MMGlobalProperty
	do
		assert _properties_by_name != null
		var props = _properties_by_name[na]
		if props != null then
			return props.first
		end

		return null
	end

	# Select a method from its name
	# TODO: Will disapear when qualified names will be available
	meth select_method(name: Symbol): MMMethod
	do
		assert name != null
		var gp = method(name)
		if gp == null then return null
		var res = self[gp]
		assert res isa MMMethod
		return res
	end
	
	# Select an attribute from its name
	# TODO: Will disapear when qualified names will be available
	meth select_attribute(name: Symbol): MMAttribute
	do
		assert name != null
		var gp = attribute(name)
		if gp == null then return null
		var res = self[gp]
		assert res isa MMAttribute
		return res
	end
	
	# Look in super-classes (by specialization) and return properties with name
	# Beware, global property of results is not intended to be the same
	meth super_methods_named(n: Symbol): Array[MMLocalProperty] 
	do
		var classes = new Array[MMLocalClass]
		for c in cshe.greaters do
			var g = c.method(n)
			if g == null then continue
			classes.add(c)
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
	meth register_local_property(p: MMLocalProperty)
	do
		assert p.global != null
		# FIXME: Why a test?
		if not _local_property_by_global.has_key(p.global) then
			_local_property_by_global[p.global] = p
		end
	end

	# Register a global property and associate it with its name
	meth register_global_property(glob: MMGlobalProperty)
	do
		var prop = glob.intro
		var name = prop.name
		var  props = _properties_by_name[name]
		if props == null then
			_properties_by_name[name] = [glob]
		else
			_properties_by_name[name].add(glob)
		end
		_global_properties.add(glob)
		register_local_property(prop)
	end

	# Get a local proprty by its global property
	meth [](glob: MMGlobalProperty): MMLocalProperty
	do
		assert _local_property_by_global != null
		assert glob != null
		if _local_property_by_global.has_key(glob) then
			return _local_property_by_global[glob]
		end
		return null
	end

	# The current MMContext
	meth context: MMContext do return module.context

	redef meth to_s
	do
		return _name.to_s
	end
end

# A global property gather local properties that correspond to a same message
class MMGlobalProperty
	# The local property for each class that has the global property

	# The introducing local property
	readable attr _intro: MMLocalProperty

	# The local class that introduces the global property
 	meth local_class: MMLocalClass
 	do
 		return intro.local_class
 	end

	# The property redefinition hierarchy
	readable attr _property_hierarchy: PartialOrder[MMLocalProperty] = new PartialOrder[MMLocalProperty]

	# Create a new global property introduced by a local one
	protected init(p: MMLocalProperty)
	do
		assert p != null

		_property_hierarchy = new PartialOrder[MMLocalProperty]
	
		_intro = p
		add_local_property(p, new Array[MMLocalProperty])
	end

	redef meth to_s do return intro.full_name

	# Register a new local property
	meth add_local_property(i: MMLocalProperty, sup: Array[MMLocalProperty])
	do
		assert i != null
		assert sup != null
		i._prhe = _property_hierarchy.add(i,sup)
	end

	# Is the global property an attribute ?
	meth is_attribute: Bool do return intro isa MMAttribute

	# Is the global property a method (or a constructor)?
	meth is_method: Bool do return intro isa MMMethod

	# Is the global property a constructor (thus also a method)?
	readable writable attr _is_init: Bool

	# Is the global property a constructor for a given class?
	meth is_init_for(c: MMLocalClass): Bool
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
	readable writable attr _visibility_level: Int = 1 # FIXME: why this should be defined ?
end

# Local properties are properties defined (explicitely or not) in a local class
class MMLocalProperty
	# The name of the property
	readable attr _name: Symbol

	# The local class who own the local property
	readable attr _local_class: MMLocalClass

	# The global property where belong the local property
	readable attr _global: MMGlobalProperty

	# Redefinition hierarchy of the local property
	readable attr _prhe: PartialOrderElement[MMLocalProperty]

	# The module of the local property
	meth module: MMModule do return _local_class.module

	# Full expanded name with all qualifications
	meth full_name: String
	do
		if global == null then
			return "{local_class.module}::{local_class}::(?::{name})"
		else if global.intro == self then
			return "{local_class.module}::{local_class}::{name}"
		else
			return "{local_class.module}::{local_class}::({global.intro.full_name})"
		end
	end

	# set the global property for this property
	meth set_global(g: MMGlobalProperty)
	do
		assert g != null
		_global = g
		_local_class.register_local_property(self)
	end

	# Introduce a new global property for this local one
	meth new_global
	do
		assert _global == null
		_global = new MMGlobalProperty(self)
		_local_class.register_global_property(_global)
	end
	
	redef meth to_s do return name.to_s

	# Is the concrete property contain a `super' in the body?
	readable writable attr _need_super: Bool = false

	protected init(n: Symbol, bc: MMLocalClass)
 	do
 		_name = n
		_local_class = bc
 	end
end

# Attribute local properties
class MMAttribute
special MMLocalProperty
end

# Method local properties
class MMMethod
special MMLocalProperty
end

# Concrete local classes
class MMConcreteClass
special MMLocalClass
end

