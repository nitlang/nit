# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Build MM entity from NIT AST and check conformance of these entities.
# This module introduce specific MM class (MMSrcXXX) that specialize the abstract one from metamodel
#
package mmbuilder

import syntax_base

# Class specialization hierarchy sorter
private class CSHSorter
special AbstractSorter[MMLocalClass]
	redef meth compare(a, b)
	do
		return a.cshe.rank <=> b.cshe.rank
	end

	init do end
end

redef class MMSrcModule
	# Syntax analysis and MM construction for the module
	# Require that supermodules are processed
	meth do_mmbuilder(tc: ToolContext)
	do
		# Import global classes
		import_global_classes

		# Create local classes and attach them to global classes
		var mmbv = new ClassBuilderVisitor(tc, self)
		mmbv.visit(node)
		if tc.error_count > 0 then exit(1)

		# Import unrefined local classes and attach them to global classes
		import_local_classes

		# Resolve classes in super clauses
		var mmbv1 = new ClassSpecializationBuilderVisitor(tc, self)
		mmbv1.visit(node)
		if tc.error_count > 0 then exit(1)

		# Compute specialization relation
		for c in local_classes do
			if visibility_for(c.global.intro.module) < c.global.visibility_level then
				continue
			end
			c.compute_super_classes
		end

		# Class that we will process now are those in the hierarchy
		# Its mean all the visible classes and their super-classes
		# Note that leaves invisible classes are not in the 'classes' set
		var classes = class_specialization_hierarchy.to_a

		# Prepare class list to process the following in a right order
		var sorter = once new CSHSorter
		sorter.sort(classes)

		# Compute class ancestors types
		var mmbv1b = new ClassAncestorBuilder(tc, self)
		for c in classes do
			c.accept_class_visitor(mmbv1b)
			c.compute_ancestors
		end
		if tc.error_count > 0 then exit(1)

		# Check class conformity
		var mmbv1b = new ClassVerifierVisitor(tc, self)
		for c in classes do
			c.accept_class_visitor(mmbv1b)
		end
		if tc.error_count > 0 then exit(1)

		# Property inhritance and introduction
		var mmbv2 = new PropertyBuilderVisitor(tc, self)
		for c in classes do
			# Inherit global properties
			c.inherit_global_properties

			# Global property introduction and redefinition 
			c.accept_class_visitor(mmbv2)
			if c isa MMSrcLocalClass then
			end

			# Note that inherited unredefined property are processed on demand latter
		end
		if tc.error_count > 0 then exit(1)

		# Property signature analysis and inheritance conformance
		var mmbv3 = new PropertyVerifierVisitor(tc, self)
		for c in classes do
			c.accept_properties_visitor(mmbv3)
		end

		# Check inherited local properties
		for c in classes do
			for g in c.global_properties do
				if visibility_for(g.intro.module) < g.visibility_level then continue
				var p = c[g]
			end
		end

		if tc.error_count > 0 then exit(1)
	end
end

redef class MMLocalClass
	# Accept a class visitor (on class nodes)
	private meth accept_class_visitor(v: AbsSyntaxVisitor)
	do
	end

	# Accept a class visitor (on class properties)
	private meth accept_properties_visitor(v: AbsSyntaxVisitor)
	do
	end
end

redef class MMSrcLocalClass
	redef meth accept_class_visitor(v)
	do
		for n in nodes do
			v.visit(n)
		end
	end

	# Accept a class visitor (on class properties)
	redef meth accept_properties_visitor(v)
	do
		for n in nodes do
			v.visit(n)
		end

		for p in src_local_properties do
			p.accept_property_visitor(v)
		end
	end
	# Add a source property
	# Register it to the class and attach it to global property
	private meth add_src_local_property(v: PropertyBuilderVisitor, prop: MMLocalProperty)
	do
		var pname = prop.name
		# Check double definition in the same class
		if src_local_properties.has_key(pname) then
			v.error(prop.node, "Error: A property {pname} is already defined in class {name}.")
			return
		end
		src_local_properties[pname] = prop

		# Intro or redefinition ?
		if has_global_property_by_name(pname) then
			var globs = properties_by_name[pname]
			if globs.length > 1 then
				v.error(prop.node, "Name error: {self} inherits {globs.length} global properties named {pname}.")
			end
			var g = globs.first
			prop.inherit_global(g)
		end

		if prop.global == null then
			#print "{prop.full_name} is an introduction"
			prop.new_global
			prop.global.is_init = prop.node isa AConcreteInitPropdef
		end
	end
end

redef class MMLocalProperty
	private meth accept_property_visitor(v: AbsSyntaxVisitor)
	do
	end
end
# Concrete NIT class specialization relation
class MMSrcAncestor
special MMAncestor
	# The related AST node
	readable attr _node: ASuperclass
	redef readable attr _local_class: MMLocalClass

	init(n: ASuperclass, c: MMLocalClass)
	do
		_node = n
		_local_class = c
	end
end

###############################################################################

# A pass visitor for syntax analysis.
# * Build the classes and attach them to global classes
# * Collect generic formal parameters.
private class ClassBuilderVisitor
special AbsSyntaxVisitor
	# Current class arity
	readable writable attr _local_class_arity: Int 

	# Current class formal parameters
	readable writable attr _formals: Map[Symbol, MMTypeFormalParameter] 

	redef meth visit(n) do n.accept_class_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Build ancertors (with only class informations not the type one)
private class ClassSpecializationBuilderVisitor
special AbsSyntaxVisitor
	redef meth visit(n) do n.accept_class_specialization_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Compute types in ancestors
private class ClassAncestorBuilder
special AbsSyntaxVisitor
	redef meth visit(n) do n.accept_class_ancestor_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Checks classes in regard to superclasses
private class ClassVerifierVisitor
special AbsSyntaxVisitor
	redef meth visit(n) do n.accept_class_verifier(self)
	init(tc, m) do super
end


# Another pass visitor for syntax analysis.
# * Build propertie names
# * Build local properties and attache them to global properties
# * Attach bound to formal types
private class PropertyBuilderVisitor
special AbsSyntaxVisitor
	redef meth visit(n) do n.accept_property_builder(self)
	init(tc, m) do super
end

# Another pass pass visitor for syntax analysis.
# * Check property conformance
private class PropertyVerifierVisitor
special AbsSyntaxVisitor
	# Current visited parameter types
	readable writable attr _params: Array[PParam] 
	
	# Visited parameters without type information added
	readable writable attr _untyped_params: Array[PParam]

	# Position of the current star parameter
	readable writable attr _vararg_rank: Int

	# Current signature
	readable writable attr _signature: MMSignature 

	redef meth visit(n) do n.accept_property_verifier(self)

	init(tc, m) do super
end

###############################################################################

redef class PNode
	private meth accept_class_builder(v: ClassBuilderVisitor) do accept_abs_syntax_visitor(v)
	private meth accept_class_specialization_builder(v: ClassSpecializationBuilderVisitor) do accept_abs_syntax_visitor(v)
	private meth accept_class_ancestor_builder(v: ClassAncestorBuilder) do accept_abs_syntax_visitor(v)
	private meth accept_class_verifier(v: ClassVerifierVisitor) do accept_abs_syntax_visitor(v)
	private meth accept_property_builder(v: PropertyBuilderVisitor) do accept_abs_syntax_visitor(v)
	private meth accept_property_verifier(v: PropertyVerifierVisitor) do accept_abs_syntax_visitor(v)
end

redef class AModule
	# Import supermodules and compute visibility
	meth import_super_modules(tc: ToolContext, mod: MMSrcModule)
	do
		# Import super-modules
		var module_names_to_import = new Array[Symbol]
		var module_visibility = new HashMap[Symbol, Int]
		var no_import: PImport = null
		for i in n_imports do
			var n = i.module_name
			if n != null then
				module_names_to_import.add(n)
				module_visibility[n] = i.visibility_level
			else
				no_import = i
			end
		end
		if no_import != null then
			if not module_names_to_import.is_empty then
				tc.error("{no_import.locate}: Error: Top modules cannot import other modules.")
			end
		else if module_names_to_import.is_empty then
			var stdname = once "standard".to_symbol
			module_names_to_import.add(stdname)
			module_visibility[stdname] = 1
		end

		mod.import_supers_modules(module_names_to_import)

		for mname in module_names_to_import do
			var level = module_visibility[mname]
			var m = tc.get_module(mname, mod)
			mod.add_super_module(m, level)
		end
	end
end

redef class APackagedecl
	redef meth accept_class_builder(v)
	do
		if n_id.to_symbol != v.module.name then
			v.error(n_id, "Error: Package name missmatch between {v.module.name} and {n_id.to_symbol}")
		end
	end
end

redef class PImport
	# Imported module name (or null)
	meth module_name: Symbol is abstract

	# Visibility level (intrude/public/private)
	meth visibility_level: Int is abstract
end
redef class AImport
	redef meth module_name
	do
		return n_id.to_symbol
	end
	redef meth visibility_level
	do
		return n_visibility.level
	end
end
redef class ANoImport
	redef meth module_name
	do
		return null
	end
end

redef class PVisibility
	# Visibility level
	meth level: Int is abstract
end
redef class APublicVisibility
	redef meth level do return 1
end
redef class AProtectedVisibility
	redef meth level do return 2
end
redef class APrivateVisibility
	redef meth level do return 3
end
redef class AIntrudeVisibility
	redef meth level do return 0
end


redef class PClassdef
	redef readable attr _local_class: MMSrcLocalClass

	# Name of the class
	meth name: Symbol is abstract

	# Number of formal parameters
	meth arity: Int do return 0

	# Visibility of the class
	meth visibility_level: Int do return 1

	redef meth accept_class_builder(v)
	do
		var local_class: MMSrcLocalClass
		var mod = v.module
		var local_classes = mod.src_local_classes
		if (local_classes.has_key(name)) then
			local_class = local_classes[name]
			if self isa AClassdef then
				# If we are not a special implicit class then rant
				v.error(self, "Error: A class {name} is already defined at line {local_class.nodes.first.first_token.line}.")
				return
			end
			local_class.nodes.add(self)
		else
			local_class = new MMSrcLocalClass(name, self, arity)
			mod.add_local_class(local_class)
			local_classes[name] = local_class
			var g = mod.global_class_named(name)
			if g == null then
				# Intro
				local_class.new_global
				g = local_class.global
			else
				local_class.set_global(g)
			end

		end
		_local_class = local_class
		v.local_class_arity = 0
		v.formals = new HashMap[Symbol, MMTypeFormalParameter]

		#####
		super
		#####

		_local_class.formal_dict = v.formals
		v.formals = null
	end

	redef meth accept_abs_syntax_visitor(v)
	do
		v.local_class = _local_class
		super
		v.local_class = null
	end
end

redef class PClasskind
	meth is_interface: Bool do return false
	meth is_universal: Bool do return false
	meth is_abstract: Bool do return false
end

redef class AInterfaceClasskind
	redef meth is_interface do return true
end
redef class AUniversalClasskind
	redef meth is_universal do return true
end
redef class AAbstractClasskind
	redef meth is_abstract do return true
end

redef class AClassdef
	redef meth name
	do
		return n_id.to_symbol
	end
	redef meth arity
	do
		return n_formaldefs.length
	end
	redef meth accept_class_verifier(v)
	do
		super
		var glob = _local_class.global
		if glob.intro == _local_class then
			# Intro
			glob.visibility_level = visibility_level
			glob.is_interface = n_classkind.is_interface
			glob.is_abstract = n_classkind.is_abstract
			glob.is_universal = n_classkind.is_universal
			if n_kwredef != null then
				v.error(self, "Redef error: No class {name} is imported. Remove the redef keyword to define a new class.")
			end

			for c in _local_class.cshe.direct_greaters do
				var cg = c.global
				if glob.is_interface then
					if cg.is_universal then
						v.error(self, "Special error: Interface {name} try to specialise universal class {c.name}.")
					else if not cg.is_interface then
						v.error(self, "Special error: Interface {name} try to specialise class {c.name}.")
					end
				else if glob.is_universal then
					if not cg.is_interface and not cg.is_universal then
						v.error(self, "Special error: Universal class {name} try to specialise class {c.name}.")
					end
				else
					if cg.is_universal then
						v.error(self, "Special error: Class {name} try to specialise universal class {c.name}.")
					end
				end

			end
			return
		end

		# Redef

		glob.check_visibility(v, self, v.module)
		if n_kwredef == null then
			v.error(self, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		end

		if glob.intro.arity != _local_class.arity then
			v.error(self, "Redef error: Formal parameter arity missmatch; got {_local_class.arity}, expected {glob.intro.arity}.")
		end

		if 
			not glob.is_interface and n_classkind.is_interface or
			not glob.is_abstract and n_classkind.is_abstract or
			not glob.is_universal and n_classkind.is_universal
		then
			v.error(self, "Redef error: cannot change kind of class {name}.")
		end
	end

	redef meth visibility_level
	do
		return n_visibility.level
	end
end

redef class AMainClassdef
	redef meth name
	do
		return once "Sys".to_symbol
	end
end

redef class ATopClassdef
	redef meth name
	do
		return once "Object".to_symbol
	end
end

class MMSrcTypeFormalParameter
special MMTypeFormalParameter
	# The associated node
	readable attr _node: AFormaldef 

	init(name: Symbol, pos: Int, local_class: MMLocalClass, n: AFormaldef)
	do
		super(name, pos, local_class)
		_node = n
	end
end

redef class AFormaldef
	# The associated formal generic parameter (MM entity)
	attr _formal: MMSrcTypeFormalParameter

	redef meth accept_class_builder(v)
	do
		var name = n_id.to_symbol
		var formal_type = new MMSrcTypeFormalParameter(name, v.local_class_arity, v.local_class, self)
		_formal = formal_type
		v.local_class_arity = v.local_class_arity + 1
		v.local_class.register_formal(formal_type)
		v.formals[name] = formal_type
		super
	end

	redef meth accept_class_verifier(v)
	do
		super
		var c = v.local_class
		var o = c.global.intro
		if c == o then
			if n_type == null then
				_formal.bound = v.module.type_any
			else
				_formal.bound = n_type.get_stype(v)
			end
		else
			var ob = o.get_formal(_formal.position).bound.for_module(v.module)
			if n_type == null then
				_formal.bound = ob
			else
				_formal.bound = n_type.get_stype(v)
				if _formal.bound != ob then
					v.error(self, "Redef error: Cannot change formal parameter type of class {c}; got {_formal.bound}, expected {ob}.")
				end
			end
		end
	end
end

redef class ASuperclass
	readable attr _ancestor: MMSrcAncestor

	redef meth accept_class_specialization_builder(v)
	do
		super
		var c = n_type.get_local_class(v)
		var ancestor = new MMSrcAncestor(self, c)
		_ancestor = ancestor
		v.local_class.add_direct_parent(ancestor)
	end

	redef meth accept_class_ancestor_builder(v)
	do
		super
		_ancestor.stype = n_type.get_unchecked_stype(v)
		_ancestor.inheriter = v.local_class.get_type
	end

	redef meth accept_class_verifier(v)
	do
		super
		n_type.check_conform(v)
	end
end

redef class PPropdef
	# Process and check properties of the property.
	# * Distinguish inits and methods
	# * Inherit or check visibility.
	# * Check redef errors.
	# * Check forbiden attribute definitions.
	# * Check signature conformance.
	private meth process_and_check(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
	do
		if prop.global.intro == prop then
			do_and_check_intro(v, prop, has_redef, visibility_level)
		else
			do_and_check_redef(v, prop, has_redef, visibility_level)
		end
	end

	# The part of process_and_check when prop is an introduction
	private meth do_and_check_intro(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
	do
		var glob = prop.global
		var gbc = prop.local_class.global
		if v.local_class.global.visibility_level >= 3 then
			# Method of private classes are private
			visibility_level = 3
		end
		glob.visibility_level = visibility_level
		if has_redef then
			v.error(self, "Error: No property {prop.local_class}::{prop} is inherited. Remove the redef keyword to define a new property.")
		end
		if glob.is_attribute then
			if gbc.is_interface then
				v.error(self, "Error: Attempt to define attribute {prop} in the interface {prop.local_class}.")
			else if gbc.is_universal then
				v.error(self, "Error: Attempt to define attribute {prop} in the universal class {prop.local_class}.")
			end
		else if glob.is_init then
			if gbc.is_interface then
				v.error(self, "Error: Attempt to define a constructor {prop} in the class {prop.local_class}.")
			else if gbc.is_universal then
				v.error(self, "Error: Attempt to define a constructor {prop} in the universal {prop.local_class}.")
			end
		end
		if prop.signature == null then
			if glob.is_init then
				var supers = prop.local_class.super_methods_named(prop.name)
				inherit_signature(v, prop, supers)
			end
			if prop.signature != null then
				# ok
			else if not v.untyped_params.is_empty then
				v.error(v.untyped_params.first, "Error: Untyped parameter.")
			else
				prop.signature = new MMSignature(new Array[MMType], null, v.local_class.get_type)
			end
		end
	end

	private meth inherit_signature(v: PropertyVerifierVisitor, prop: MMLocalProperty, supers: Array[MMLocalProperty])
	do
		var s = prop.signature
		for ip in supers do
			var isig = ip.signature.adaptation_to(v.local_class.get_type)

			if s == null then
				if v.params.length != isig.arity then
					#prop.node.printl("v.params.length {v.params.length} != isig.arity {isig.arity} ; {prop.full_name} vs {ip.full_name}")
					return
				end
				for p in v.params do
					var t = isig[p.position]
					p.stype = t
					if p.position == isig.vararg_rank then
						t = v.type_array(t)
					end
					p.variable.stype = t
				end

				s = isig
				prop.signature = s
			end
		end
	end

	# The part of process_and_check when prop is a redefinition
	private meth do_and_check_redef(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
	do
		var is_init = self isa AConcreteInitPropdef
		var glob = prop.global

		if not has_redef then
			v.error(self, "Redef error: {prop.local_class}::{prop} is an inherited property. To redefine it, add the redef keyword.")
			return
		end
		if glob.is_init and not is_init then
			v.error(self, "Redef error: A method {prop.local_class}::{prop} cannot redefine a constructor.")
		else if not glob.is_init and is_init then
			v.error(self, "Redef error: A constructor {prop.local_class}::{prop} cannot redefine a method.")
		end

		var s = prop.signature
		#print "process {prop.local_class.module}::{prop.local_class}::{prop} from global {prop.global.local_property.local_class.module}::{prop.global.local_property.local_class}::{prop.global.local_property}"
		for i in prop.prhe.direct_greaters do
			var ip = i.local_class[prop.global]
			var isig = i.signature.adaptation_to(v.local_class.get_type)

			if s == null then
				#print "{prop.full_name} inherits signature from {ip.full_name}"
				if v.params.length != isig.arity then
					v.error(self, "Redef error: {prop.local_class}::{prop} redefines {ip.local_class}::{ip} with {isig.arity} parameter(s).")
					return
				end
				for p in v.params do
					var t = isig[p.position]
					p.stype = t
					if p.position == isig.vararg_rank then
						t = v.type_array(t)
					end
					p.variable.stype = t
				end
				s = isig
				prop.signature = s
			end

			#print "orig signature:  {i.signature.recv} . {i.signature}"
			#print "inh signature:   {isig.recv} . {isig}"
			#print "redef signature: {s.recv} . {s}"

			if glob.is_init and i.local_class.global != prop.local_class.global then
				# Do not check signature
			else if s.arity != isig.arity then
				v.error(self, "Redef error: {prop.local_class}::{prop} redefines {ip.local_class}::{ip} with {isig.arity} parameter(s).")
			else
				for i in [0..s.arity[ do
					if s[i] != isig[i] then
						v.error(self, "Redef error: Expected {isig[i]} (as in {ip.local_class}::{ip}), got {s[i]} in {prop.local_class}::{prop}.")
					end
				end
			end

			var srt = s.return_type
			var isrt = isig.return_type
			if srt == null and isrt != null then
				v.error(self, "Redef error: The procedure {prop.local_class}::{prop} redefines the function {ip.local_class}::{ip}.")
			else if srt != null and isrt == null then
				v.error(self, "Redef error: The function {prop.local_class}::{prop} redefines the procedure {ip.local_class}::{ip}.")
			else if srt != null and isrt != null and not srt < isrt then
				v.error(self, "Redef error: Expected {isrt} (as in {ip.local_class}::{ip}), got {srt} in {prop.local_class}::{prop}.")
			else if srt != null and isrt != null and srt != isrt and prop isa MMAttribute then
				# FIXME: To remove
				v.warning(self, "Redef warning: Expected {isrt} (as in {ip.local_class}::{ip}), got {srt} in {prop.local_class}::{prop}.")
			end
		end

		if visibility_level != 1 and glob.visibility_level != visibility_level then
			v.error(self, "Redef error: {prop.local_class}::{prop} redefinition cannot change visibility.")
		end
		glob.check_visibility(v, self, v.module, true)
	end
end

redef class AAttrPropdef
	redef readable attr _readmethod: MMSrcMethod
	redef readable attr _writemethod: MMSrcMethod
	redef readable attr _prop: MMSrcAttribute 

	redef meth accept_property_builder(v)
	do
		super
		var name = n_id.to_symbol
		var prop = new MMSrcAttribute(name, v.local_class, self)
		_prop = prop
		v.local_class.add_src_local_property(v, prop)

		if n_readable != null then
			name = n_id.text.substring_from(1).to_symbol
			_readmethod = new MMReadImplementationMethod(name, v.local_class, self)
			v.local_class.add_src_local_property(v, _readmethod)
		end
		if n_writable != null then
			name = (n_id.text.substring_from(1) + "=").to_symbol
			_writemethod = new MMWriteImplementationMethod(name, v.local_class, self)
			v.local_class.add_src_local_property(v, _writemethod)
		end
	end
	
	redef meth accept_property_verifier(v)
	do
		super
		var t: MMType
		if n_type != null then
			t = n_type.get_stype(v)
		else
			v.error(self, "Not yet implemented: Attribute definition {_prop.local_class}::{_prop} requires an explicit type.")
			return
		end

		var signature = new MMSignature(new Array[MMType], t, v.local_class.get_type)
		_prop.signature = signature
		var visibility_level = n_visibility.level
		process_and_check(v, _prop, n_kwredef != null, visibility_level)
		if n_readable != null then
			_readmethod.signature = signature
			process_and_check(v, _readmethod, n_readable.n_kwredef != null, visibility_level)
			n_type.check_visibility(v, _readmethod)
		end
		if n_writable != null then
			_writemethod.signature = new MMSignature(new Array[MMType].with(t), null, v.local_class.get_type)
			process_and_check(v, _writemethod, n_writable.n_kwredef != null, visibility_level)
			n_type.check_visibility(v, _writemethod)
		end
	end

	redef meth accept_abs_syntax_visitor(v)
	do
		v.local_property = prop
		super
		v.local_property = null
	end
end

redef class AMethPropdef
	# Name of the method
	readable attr _name: Symbol 

	redef readable attr _method: MMMethSrcMethod

	redef meth accept_property_builder(v)
	do
		super
		if n_methid == null then
			if self isa AConcreteInitPropdef then
				_name = once "init".to_symbol
			else
				_name = once "main".to_symbol
			end
		else 
			_name = n_methid.name
			# FIXME: Add the 'unary' keyword
			if n_methid.name == (once "-".to_symbol) then
				var ns = n_signature
				if ns isa ASignature and ns.n_params.length == 0 then
					_name = once "unary -".to_symbol
				end
			end
		end
		var prop = new MMMethSrcMethod(_name, v.local_class, self)
		_method = prop
		v.local_class.add_src_local_property(v, prop)
	end

	redef meth accept_property_verifier(v)
	do
		v.params = new Array[PParam]
		v.untyped_params = new Array[PParam]
		v.signature = null
		v.vararg_rank = -1

		super

		if v.signature == null then
			#_method.signature = new MMSignature(new Array[MMType], null, v.local_class.get_type)
		else
			_method.signature = v.signature
		end
		var visibility_level = 1
		if n_visibility != null and n_visibility.level > 1 then
			visibility_level = n_visibility.level
		end
		process_and_check(v, _method, n_kwredef != null, visibility_level)
		if n_signature != null then n_signature.check_visibility(v, _method)
	end

	redef meth accept_abs_syntax_visitor(v)
	do
		v.local_property = method
		super
		v.local_property = null
	end
end

redef class AMainMethPropdef
	redef meth process_and_check(v, prop, has_redef, visibility_level)
	do
		prop.global.visibility_level = visibility_level
		prop.signature = new MMSignature(new Array[MMType], null, v.local_class.get_type)
		# Disable all checks for main
	end
end

redef class ATypePropdef
	redef readable attr _prop: MMSrcTypeProperty 

	redef meth accept_property_builder(v)
	do
		super
		var name = n_id.to_symbol
		var prop = new MMSrcTypeProperty(name, v.local_class, self)
		_prop = prop
		v.local_class.add_src_local_property(v, prop)
	end
	
	redef meth accept_property_verifier(v)
	do
		super
		var signature = new MMSignature(new Array[MMType], n_type.get_stype(v), v.local_class.get_type)
		_prop.signature = signature
		var visibility_level = n_visibility.level
		process_and_check(v, _prop, n_kwredef != null, visibility_level)
	end
	
	redef meth accept_abs_syntax_visitor(v)
	do
		v.local_property = prop
		super
		v.local_property = null
	end
end

# Visitor used to build a full method name from multiple tokens
private class MethidAccumulator
special Visitor
	readable attr _name: String 
	redef meth visit(n)
	do
		if n isa Token then
			_name.append(n.text)
		else
			n.visit_all(self)
		end
	end

	init
	do
		_name = new String
	end
end

redef class PMethid
	# Method name
	readable attr _name: Symbol 

	redef meth accept_property_builder(v)
	do
		var accumulator = new MethidAccumulator
		accumulator.visit(self)
		_name = accumulator.name.to_symbol
		super
	end
end

redef class PSignature
	# Check that visibilities of types in the signature are compatible with the visibility of the property.
	meth check_visibility(v: AbsSyntaxVisitor, p: MMLocalProperty) is abstract
end

redef class ASignature
	redef meth accept_property_verifier(v)
	do
		super
		if not v.untyped_params.is_empty then
			if v.untyped_params.first != v.params.first or n_type != null then
				v.error(v.untyped_params.first, "Syntax error: untyped parameter.")
				return
			end
		else if not v.params.is_empty or n_type != null then
			var pars = new Array[MMType]
			for p in v.params do
				pars.add(p.stype)
			end
			var ret: MMType = null
			if n_type != null then
				ret = n_type.get_stype(v)
			end
			v.signature = new MMSignature(pars, ret, v.local_class.get_type)
			if v.vararg_rank >= 0 then
				v.signature.vararg_rank = v.vararg_rank
			end
		end
	end

	redef meth check_visibility(v, p)
	do
		if p.global.visibility_level >= 3 then return
		for n in n_params do
			if n.n_type != null then n.n_type.check_visibility(v, p)
		end
		if n_type != null then n_type.check_visibility(v, p)
	end
end

redef class PParam
	redef readable attr _position: Int

	redef readable attr _variable: Variable 

	# The type of the parameter in signature
	readable writable attr _stype: MMType

	redef meth accept_property_verifier(v)
	do
		super
		_position = v.params.length
		_variable = new Variable(n_id.to_symbol, self)
		v.params.add(self)
		v.untyped_params.add(self)
		if n_type != null then
			var stype = n_type.get_stype(v)
			for p in v.untyped_params do
				p.stype = stype
				if is_vararg then
					if v.vararg_rank == -1 then
						v.vararg_rank = p.position
					else
						v.error(self, "Error: A vararg parameter is already defined.")
					end
					stype = v.type_array(stype) 
				end
				p.variable.stype = stype
			end
			v.untyped_params.clear
		end
	end

	meth is_vararg: Bool is abstract
end

redef class AParam
	redef meth is_vararg do return n_dotdotdot != null
end

redef class PType
	# Check that visibilities of types in the signature are compatible with the visibility of the property.
	private meth check_visibility(v: AbsSyntaxVisitor, p: MMLocalProperty) is abstract
end

redef class AType
	redef meth check_visibility(v, p)
	do
		if p.global.visibility_level >= 3 then return
		var t = get_stype(v)
		if t == null then return
		var bc = t.local_class
		if bc == null then return
		if bc.global.visibility_level >= 3 then
			v.error(self, "Access error: Class {bc} is private and cannot be used in the signature of the non-private property {p}.")
		end
		for n in n_types do
			n.check_visibility(v, p)
		end
	end
end

redef class PExpr
	redef meth accept_class_builder(v) do end
	redef meth accept_property_builder(v) do end
	redef meth accept_property_verifier(v) do end
end
