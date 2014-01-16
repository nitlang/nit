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
module mmbuilder

import syntax_base
private import primitive_info

redef class ToolContext
	redef fun handle_property_conflict(lc, impls)
	do
		var location: nullable Location = null
		if lc isa MMSrcLocalClass then
			var node = lc.node
			if node != null then node.location
		end
		#if location == null then location = lc.mmmodule.location
		var clas = new Array[MMLocalClass]
		for i in impls do
			clas.add(i.local_class)
		end
		self.fatal_error(location, "Property inheritance conflict in class {lc} for `{impls.first.name}': conflicting properties are defined in {clas.join(", ")}")
	end
end

# Class specialization hierarchy sorter
private class CSHSorter
	super AbstractSorter[MMLocalClass]
	redef fun compare(a, b)
	do
		return a.cshe.rank <=> b.cshe.rank
	end

	init do end
end

redef class MMSrcModule
	# Syntax analysis and MM construction for the module
	# Require that supermodules are processed
	fun do_mmbuilder(tc: ToolContext)
	do
		# Import global classes
		import_global_classes

		# Create local classes and attach them to global classes
		var mmbv = new ClassBuilderVisitor(tc, self)
		mmbv.enter_visit(node)
		tc.check_errors

		if mhe.direct_greaters.is_empty then
			process_default_classes(tc)
		end

		# Import unrefined local classes and attach them to global classes
		import_local_classes

		# Resolve classes in super clauses
		var mmbv1 = new ClassSpecializationBuilderVisitor(tc, self)
		mmbv1.enter_visit(node)
		tc.check_errors

		# Compute specialization relation
		for c in local_classes do
			if visibility_for(c.global.intro.mmmodule) < c.global.visibility_level then
				continue
			end
			c.compute_super_classes
		end
		tc.check_errors

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
			tc.check_errors
			c.compute_ancestors
		end

		# Check class conformity
		var mmbv1c = new ClassVerifierVisitor(tc, self)
		for c in classes do
			c.accept_class_visitor(mmbv1c)
		end
		tc.check_errors

		# Property inhritance and introduction
		var mmbv2 = new PropertyBuilderVisitor(tc, self)
		for c in classes do
			# Global property introduction and redefinition 
			c.accept_class_visitor(mmbv2)

			# Default and inherited constructor if needed
			if c isa MMSrcLocalClass and c.global.intro == c and not c.global.is_enum and not c.global.is_extern and not c.global.is_interface then
				c.process_default_constructors(mmbv2)
			end

			# Note that inherited unredefined property are processed on demand latter
		end
		tc.check_errors

		# Property signature analysis and inheritance conformance
		var mmbv3 = new PropertyVerifierVisitor(tc, self)
		for c in classes do
			c.accept_properties_visitor(mmbv3)
		end

		tc.check_errors
	end

	# Create some primitive default classes if they do not exists
	fun process_default_classes(tc: ToolContext)
	do
		var name = once ("Object".to_symbol)
		if not has_global_class_named(name) then
			var c = new MMSrcLocalClass(self, name, null, 0)
			c.new_global
			src_local_classes[name] = c
		end
		name = once ("Bool".to_symbol)
		if not has_global_class_named(name) then
			var c = new MMSrcLocalClass(self, name, null, 0)
			c.new_global
			src_local_classes[name] = c
		end
	end
end

redef class MMLocalClass
	# Accept a class visitor (on class nodes)
	private fun accept_class_visitor(v: AbsSyntaxVisitor)
	do
	end

	# Accept a class visitor (on class properties)
	private fun accept_properties_visitor(v: AbsSyntaxVisitor)
	do
	end
end

redef class MMSrcLocalClass
	redef fun accept_class_visitor(v)
	do
		var n = node
		while n != null do
			v.enter_visit(n)
			n = n.next_node
		end
	end

	# Accept a class visitor (on class properties)
	redef fun accept_properties_visitor(v)
	do
		var n = node
		while n != null do
			v.enter_visit(n)
			n = n.next_node
		end

		for p in src_local_properties.values do
			p.accept_property_visitor(v)
		end
	end

	# Introduce or inherit default constructors
	private fun process_default_constructors(v: PropertyBuilderVisitor)
	do
		# Is there already a constructor ?
		for gp in global_properties do
			if gp.is_init then
				# Return if explicit constructor in the class
				if gp.intro.local_class == self then return
			end
		end

		# Collect visible constructors in super stateful classes
		var super_inits = new ArraySet[MMLocalProperty]
		var super_constructors = new ArraySet[MMGlobalProperty]
		for sc in che.direct_greaters do
			if sc.global.is_enum and not sc.global.is_extern or sc.global.is_interface then continue
			for gp in sc.global_properties do
				if not gp.is_init then continue
				super_constructors.add(gp)
			end
			var initname = once ("init".to_symbol)
			if sc.has_global_property_by_name(initname) then
				var gp = sc.get_property_by_name(initname)
				super_inits.add(self[gp])
			end
		end

		# Collect unassigned attributes
		var unassigned_attributes = new Array[MMSrcAttribute]
		for a in src_local_properties.values do
			if a isa MMSrcAttribute then
				var n = a.node
				if n.n_expr == null then unassigned_attributes.add(a)
			end
		end

		if not super_constructors.is_empty then
			# Select most specific classes introducing inheritable constructors
			# Mixin classes are skipped
			var supers = new Array[MMLocalClass]
			for gp in super_constructors do
				var sc = gp.local_class
				if supers.has(sc) then continue
				if not sc.global.is_mixin then
					supers.add(sc)
				end
			end
			supers = che.order.select_smallests(supers)

			# A mixin class can only have 0 or 1 most specific non-mixin superclass
			var superclass: nullable MMLocalClass = null # This most specific non-mixin superclass (if any)

			if supers.length > 1 then
				v.error(node, "Error: Explicit constructor required in {self} since multiple inheritance of constructor is forbiden. Conflicting classes are {supers.join(", ")}. Costructors are {super_constructors.join(", ")}.")
				return
			else if supers.length == 1 then
				superclass = supers.first
			end

			for gp in super_constructors do
				# Inherit constructors : the one of the non-mixin super class or all from the all mixin super-classes
				if superclass == null or gp.local_class == superclass then
					make_visible_an_inherited_global_property(gp)
				end
			end
			global.mixin_of = superclass.as(not null).global # FIXME Dear! this should break!
		else
			# v.error(nodes.first, "Error, constructor required in {self} since no anonimous init found in {sc}.")

			# unassigned attributes, then implicit consructors are generated
			var p = new MMImplicitInit(self, unassigned_attributes, super_inits.to_a)
			add_src_local_property(v, p)
			#print("Create implicit init {p} in {self} from {super_inits.join(", ")} + {unassigned_attributes.length} args")
		end
	end

	# Add a source property
	# Register it to the class and attach it to global property
	private fun add_src_local_property(v: PropertyBuilderVisitor, prop: MMLocalProperty)
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
			var g = get_property_by_name(pname)
			prop.inherit_global(g)
		end

		if not prop.is_global_set then
			prop.new_global
			prop.global.is_init = prop.is_init
		end
	end
end

redef class MMLocalProperty
	private fun accept_property_visitor(v: AbsSyntaxVisitor)
	do
	end
end

redef class MMImplicitInit
	redef readable var _super_init: nullable MMLocalProperty = null
	redef fun accept_property_visitor(v)
	do
		var base: nullable MMLocalProperty = null
		for p in super_inits do
			if p.signature.arity > 0 then
				if base == null then
					base = p
				else
					v.error(null, "Error: explicit constructor needed in {local_class} since both super-constructor {base.full_name} and {p.full_name} have paramters")
					return
				end
			end
		end
		_super_init = base

		var params = new Array[MMParam]
		if base != null then
			var sig = base.signature
			for i in [0..sig.arity[ do
				params.add(sig.params[i])
			end
		end
		for a in unassigned_attributes do
			var sig = a.signature
			if sig == null then return # Broken attribute definition
			var name = a.name
			if name.to_s.chars.first == '_' or name.to_s.chars.first == '@' then
				name = a.to_s.substring_from(1).to_symbol
			end
			params.add(new MMParam(sig.return_type.as(not null), name))
		end
		signature = new MMSignature(params, null, local_class.get_type)
	end
end


# Concrete NIT class specialization relation
class MMSrcAncestor
	super MMAncestor
	redef readable var _local_class: MMLocalClass

	init(c: MMLocalClass)
	do
		_local_class = c
	end
end

###############################################################################

# A pass visitor for syntax analysis.
# * Build the classes and attach them to global classes
# * Collect generic formal parameters.
private class ClassBuilderVisitor
	super AbsSyntaxVisitor
	# Current class arity
	readable writable var _local_class_arity: Int = 0

	# Current class formal parameters
	readable writable var _formals: nullable Map[Symbol, MMTypeFormalParameter]

	redef fun visit(n) do n.accept_class_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Build ancertors (with only class informations not the type one)
private class ClassSpecializationBuilderVisitor
	super AbsSyntaxVisitor
	redef fun visit(n) do n.accept_class_specialization_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Compute types in ancestors
private class ClassAncestorBuilder
	super AbsSyntaxVisitor
	redef fun visit(n) do n.accept_class_ancestor_builder(self)
	init(tc, m) do super
end

# Another pass visitor for syntax analysis.
# * Checks classes in regard to superclasses
private class ClassVerifierVisitor
	super AbsSyntaxVisitor
	redef fun visit(n) do n.accept_class_verifier(self)
	init(tc, m) do super
end


# Another pass visitor for syntax analysis.
# * Build propertie names
# * Build local properties and attache them to global properties
# * Attach bound to formal types
private class PropertyBuilderVisitor
	super AbsSyntaxVisitor
	redef fun visit(n) do n.accept_property_builder(self)
	init(tc, m) do super
end

# Another pass pass visitor for syntax analysis.
# * Check property conformance
private class PropertyVerifierVisitor
	super AbsSyntaxVisitor

	# The signature currently build
	readable writable var _signature_builder: SignatureBuilder

	redef fun visit(n) do n.accept_property_verifier(self)

	init(tc, m)
	do
		super
		_signature_builder = new SignatureBuilder
	end
end

# Information about a signature currently build
private class SignatureBuilder
	# Current visited parameter types
	readable writable var _params: Array[AParam] = new Array[AParam]
	
	# Visited parameters without type information added
	readable writable var _untyped_params: Array[AParam] = new Array[AParam]

	# Position of the current star parameter
	readable writable var _vararg_rank: Int = -1

	# Current closure declarations
	readable writable var _closure_decls: Array[AClosureDecl] = new Array[AClosureDecl]

	# True is a problen occured durring building
	readable writable var _has_error_occured: Bool = false

	# Current signature
	readable writable var _signature: nullable MMSignature = null 
end

###############################################################################

redef class ANode
	private fun accept_class_builder(v: ClassBuilderVisitor) do accept_abs_syntax_visitor(v)
	private fun accept_class_specialization_builder(v: ClassSpecializationBuilderVisitor) do accept_abs_syntax_visitor(v)
	private fun accept_class_ancestor_builder(v: ClassAncestorBuilder) do accept_abs_syntax_visitor(v)
	private fun accept_class_verifier(v: ClassVerifierVisitor) do accept_abs_syntax_visitor(v)
	private fun accept_property_builder(v: PropertyBuilderVisitor) do accept_abs_syntax_visitor(v)
	private fun accept_property_verifier(v: PropertyVerifierVisitor) do accept_abs_syntax_visitor(v)
end

redef class AModule
	# Import supermodules and compute visibility
	fun import_super_modules(tc: ToolContext, mod: MMSrcModule)
	do
		# Import super-modules
		var supers = new Array[MMModule]
		var no_import: nullable AImport = null
		for i in n_imports do
			var n = i.module_name
			if n != null then
				var m = tc.get_module(n, mod)
				supers.add(m)
				mod.add_super_module(m, i.visibility_level)
			else
				no_import = i
			end
		end
		if no_import != null then
			if not supers.is_empty then
				tc.error(no_import.location, "Error: Top modules cannot import other modules.")
			end
		else if supers.is_empty then
			var stdname = once "standard".to_symbol
			var m = tc.get_module(stdname, mod)
			supers.add(m)
			mod.add_super_module(m, 1)
		end

		tc.add_module(mod, supers)
	end
end

redef class AModuledecl
	redef fun accept_class_builder(v)
	do
		if n_name.n_id.to_symbol != v.mmmodule.name then
			v.error(n_name.n_id, "Error: Module name mismatch between {v.mmmodule.name} and {n_name.n_id.to_symbol}")
		end
	end
end

redef class AImport
	# Imported module name (or null)
	fun module_name: nullable Symbol is abstract

	# Visibility level (intrude/public/private)
	fun visibility_level: Int is abstract
end
redef class AStdImport
	redef fun module_name
	do
		return n_name.n_id.to_symbol
	end
	redef fun visibility_level
	do
		return n_visibility.level
	end
end
redef class ANoImport
	redef fun module_name
	do
		return null
	end
end

redef class AVisibility
	# Visibility level
	fun level: Int is abstract
end
redef class APublicVisibility
	redef fun level do return 1
end
redef class AProtectedVisibility
	redef fun level do return 2
end
redef class APrivateVisibility
	redef fun level do return 3
end
redef class AIntrudeVisibility
	redef fun level do return 0
end


redef class AClassdef
	redef fun local_class: MMSrcLocalClass do return _local_class.as(not null)
	var _local_class: nullable MMSrcLocalClass

	# Name of the class
	fun name: Symbol is abstract

	# Number of formal parameters
	fun arity: Int do return 0

	# Visibility of the class
	fun visibility_level: Int do return 1

	redef fun accept_class_builder(v)
	do
		var local_class: MMSrcLocalClass
		var mod = v.mmmodule
		var local_classes = mod.src_local_classes
		if local_classes.has_key(name) then
			local_class = local_classes[name]
			_local_class = local_class
			if self isa AStdClassdef then
				# If we are not a special implicit class then rant
				v.error(self, "Error: A class {name} is already defined at line {local_class.node.location.line_start}.")
				return
			end
			# Add the new node after the last node
			var n = local_class.node
			while n.next_node != null do n = n.next_node
			n.next_node = self
		else
			local_class = new MMSrcLocalClass(mod, name, self, arity)
			_local_class = local_class
			local_classes[name] = local_class
			if not mod.has_global_class_named(name) then
				build_class_introduction(v)
			else
				var glob = mod.global_class_named(name)
				build_class_refinement(v, glob)
			end

		end
		v.local_class_arity = 0
		v.formals = local_class.formal_dict

		#####
		super
		#####

		v.formals = null
	end

	fun build_class_introduction(v: AbsSyntaxVisitor)
	do
		local_class.new_global
		var glob = local_class.global

		glob.visibility_level = visibility_level
		if self isa AStdClassdef then
			if n_kwredef != null then
				v.error(self, "Redef error: No class {name} is imported. Remove the redef keyword to define a new class.")
				return
			end
			glob.is_interface = n_classkind.is_interface
			glob.is_abstract = n_classkind.is_abstract
			glob.is_enum = n_classkind.is_enum
		end
	end

	fun build_class_refinement(v: AbsSyntaxVisitor, glob: MMGlobalClass)
	do
		local_class.set_global(glob)

		glob.check_visibility(v, self, v.mmmodule)
		if self isa AStdClassdef and n_kwredef == null then
			v.error(self, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		end

		if glob.intro.arity != _local_class.arity then
			v.error(self, "Redef error: Formal parameter arity missmatch; got {_local_class.arity}, expected {glob.intro.arity}.")
		end

		if self isa AStdClassdef and (not glob.is_interface and n_classkind.is_interface or
			not glob.is_abstract and n_classkind.is_abstract or
			not glob.is_enum and n_classkind.is_enum)
		then
			v.error(self, "Redef error: cannot change kind of class {name}.")
		end
	end

	redef fun accept_class_verifier(v)
	do
		super
		var glob = _local_class.global
		for c in _local_class.cshe.direct_greaters do
			var cg = c.global
			if glob.is_interface then
				if cg.is_enum then
					v.error(self, "Special error: Interface {name} try to specialise enum class {c.name}.")
				else if not cg.is_interface then
					v.error(self, "Special error: Interface {name} try to specialise class {c.name}.")
				end
			else if glob.is_enum then
				if not cg.is_interface and not cg.is_enum then
					v.error(self, "Special error: Enum class {name} try to specialise class {c.name}.")
				end
			else
				if cg.is_enum then
					v.error(self, "Special error: Class {name} try to specialise enum class {c.name}.")
				end
			end

		end
	end

	redef fun accept_abs_syntax_visitor(v)
	do
		v.local_class = _local_class
		super
		v.local_class = null
	end
end

redef class AClasskind
	fun is_interface: Bool do return false
	fun is_enum: Bool do return false
	fun is_abstract: Bool do return false
	fun is_extern : Bool do return false
end

redef class AInterfaceClasskind
	redef fun is_interface do return true
end
redef class AEnumClasskind
	redef fun is_enum do return true
end
redef class AExternClasskind
	redef fun is_extern do return true
end
redef class AAbstractClasskind
	redef fun is_abstract do return true
end

redef class AStdClassdef
	redef fun name
	do
		return n_id.to_symbol
	end
	redef fun arity
	do
		return n_formaldefs.length
	end
	redef fun accept_class_specialization_builder(v)
	do
		super

		var glob = local_class.global
		if glob.intro == local_class then
			glob.is_interface = n_classkind.is_interface
			glob.is_abstract = n_classkind.is_abstract
			glob.is_enum = n_classkind.is_enum
			glob.is_extern = n_classkind.is_extern
			glob.visibility_level = visibility_level
		end
	end
	redef fun accept_class_verifier(v)
	do
		super
		var glob = _local_class.global
		if glob.intro == _local_class then
			# Intro
			if n_kwredef != null then
				v.error(self, "Redef error: No class {name} is imported. Remove the redef keyword to define a new class.")
			end
			if glob.is_extern then
				glob.mmmodule.is_extern_hybrid = true
			end

			for c in _local_class.cshe.direct_greaters do
				var cg = c.global
				if glob.is_interface then
					if cg.is_enum then
						v.error(self, "Special error: Interface {name} try to specialise enum class {c.name}.")
					else if not cg.is_interface then
						v.error(self, "Special error: Interface {name} try to specialise class {c.name}.")
					end
				else if glob.is_enum then
					if not cg.is_interface and not cg.is_enum then
						v.error(self, "Special error: Enum class {name} try to specialise class {c.name}.")
					end
				else if glob.is_extern then
					if not cg.is_interface and not cg.is_extern then
						v.error(self, "Special error: Extern class {name} try to specialise class {c.name}.")
					end
				else
					if cg.is_enum then
						v.error(self, "Special error: Class {name} try to specialise enum class {c.name}.")
					else if cg.is_extern then
						v.error(self, "Special error: Class {name} try to specialise extern class {c.name}.")
					end
				end

			end
			return
		end

		# Redef

		glob.check_visibility(v, self, v.mmmodule)
		if n_kwredef == null then
			v.error(self, "Redef error: {name} is an imported class. Add the redef keyword to refine it.")
			return
		end

		if glob.intro.arity != _local_class.arity then
			v.error(self, "Redef error: Formal parameter arity mismatch; got {_local_class.arity}, expected {glob.intro.arity}.")
		end

		if 
			not glob.is_interface and n_classkind.is_interface or
			not glob.is_abstract and n_classkind.is_abstract or
			not glob.is_enum and n_classkind.is_enum or
			not glob.is_extern and n_classkind.is_extern
		then
			v.error(self, "Redef error: cannot change kind of class {name}.")
		end
	end

	redef fun visibility_level
	do
		return n_visibility.level
	end
end

redef class AMainClassdef
	redef fun name
	do
		return once "Sys".to_symbol
	end
end

redef class ATopClassdef
	redef fun name
	do
		return once "Object".to_symbol
	end
end

redef class AFormaldef
	# The associated formal generic parameter (MM entity)
	var _formal: nullable MMTypeFormalParameter

	redef fun accept_class_builder(v)
	do
		var name = n_id.to_symbol
		var formal_type = new MMTypeFormalParameter(name, v.local_class_arity, v.local_class)
		_formal = formal_type
		v.local_class_arity = v.local_class_arity + 1
		v.local_class.register_formal(formal_type)
		v.formals[name] = formal_type
		super
	end

	redef fun accept_class_verifier(v)
	do
		super
		var c = v.local_class
		var o = c.global.intro
		if c == o then
			if n_type == null then
				_formal.bound = v.mmmodule.type_any.as_nullable
			else
				var stype = n_type.get_stype(v)
				if stype == null then return
				_formal.bound = stype
			end
		else
			var ob = o.get_formal(_formal.position).bound.for_module(v.mmmodule)
			if n_type == null then
				_formal.bound = ob
			else
				var stype = n_type.get_stype(v)
				if stype == null then return
				_formal.bound = stype
				if _formal.bound != ob then
					v.error(self, "Redef error: Cannot change formal parameter type of class {c}; got {_formal.bound}, expected {ob}.")
				end
			end
		end
	end
end

redef class ASuperclass
	readable var _ancestor: nullable MMSrcAncestor

	redef fun accept_class_specialization_builder(v)
	do
		super
		var c = n_type.get_local_class(v)
		if c == null then return
		var ancestor = new MMSrcAncestor(c)
		_ancestor = ancestor
		v.local_class.add_direct_parent(ancestor)
	end

	redef fun accept_class_ancestor_builder(v)
	do
		super
		_ancestor.stype = n_type.get_unchecked_stype(v)
		_ancestor.inheriter = v.local_class.get_type
	end

	redef fun accept_class_verifier(v)
	do
		super
		n_type.check_conform(v)
	end
end

redef class APropdef
	# Process and check properties of the property.
	# * Distinguish inits and methods
	# * Inherit or check visibility.
	# * Check redef errors.
	# * Check forbiden attribute definitions.
	# * Check signature conformance.
	private fun process_and_check(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
	do
		if prop.global.intro == prop then
			do_and_check_intro(v, prop, has_redef, visibility_level)
		else
			do_and_check_redef(v, prop, has_redef, visibility_level)
		end
	end

	# The part of process_and_check when prop is an introduction
	private fun do_and_check_intro(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
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
			else if gbc.is_enum then
				v.error(self, "Error: Attempt to define attribute {prop} in the enum class {prop.local_class}.")
			else if gbc.is_extern then
				v.error(self, "Error: Attempt to define attribute {prop} in the extern class {prop.local_class}.")
			end
		else if glob.is_init then
			if gbc.is_interface then
				v.error(self, "Error: Attempt to define a constructor {prop} in the class {prop.local_class}.")
			else if gbc.is_enum then
				v.error(self, "Error: Attempt to define a constructor {prop} in the enum {prop.local_class}.")
			end

			# ok in extern
		end
		if prop.signature == null then
			if glob.is_init then
				var supers = prop.local_class.super_methods_named(prop.name)
				inherit_signature(v, prop, supers)
			end
			if prop.signature != null or v.signature_builder.has_error_occured then
				# ok
			else if not v.signature_builder.untyped_params.is_empty then
				v.error(v.signature_builder.untyped_params.first, "Error: Untyped parameter.")
			else
				prop.signature = new MMSignature(new Array[MMParam], null, v.local_class.get_type)
				for clos in v.signature_builder.closure_decls do
					prop.signature.closures.add(clos.variable.closure)
				end
			end
		end
	end

	private fun inherit_signature(v: PropertyVerifierVisitor, prop: MMLocalProperty, supers: Array[MMLocalProperty])
	do
		var s = prop.signature
		for ip in supers do
			var isig = ip.signature.adaptation_to(v.local_class.get_type)

			if s == null then
				if v.signature_builder.params.length != isig.arity then
					return
				end
				for p in v.signature_builder.params do
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
	private fun do_and_check_redef(v: PropertyVerifierVisitor, prop: MMLocalProperty, has_redef: Bool, visibility_level: Int)
	do
		var is_init = self isa AInitPropdef
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
		#print "process {prop.local_class.mmmodule}::{prop.local_class}::{prop} from global {prop.global.local_property.local_class.mmmodule}::{prop.global.local_property.local_class}::{prop.global.local_property}"
		for i in prop.prhe.direct_greaters do
			var ip = i.local_class[prop.global]
			var isig = i.signature
			if isig == null then break # previous signature is invalid
			isig = isig.adaptation_to(v.local_class.get_type)

			if s == null then
				#print "{prop.full_name} inherits signature from {ip.full_name}"
				if v.signature_builder.params.length != isig.arity then
					v.error(self, "Redef error: {prop.local_class}::{prop} redefines {ip.local_class}::{ip} with {isig.arity} parameter(s).")
					return
				end
				if v.signature_builder.closure_decls.length != isig.closures.length then
					v.error(self, "Redef error: {prop.local_class}::{prop} redefines {ip.local_class}::{ip} with {isig.arity} closure(s).")
					return
				end
				for p in v.signature_builder.params do
					var t = isig[p.position]
					p.stype = t
					if p.position == isig.vararg_rank then
						t = v.type_array(t)
					end
					p.variable.stype = t

					isig.params[p.position].name = p.variable.name
				end
				s = isig
				prop.signature = s
				#print "s is null"
			end

			var nberr = v.tc.error_count
			#print "Check {prop.local_class}::{prop}{s} vs {ip.local_class}::{ip}{isig}"
			#print "s={s.object_id} isig={isig.object_id} isigorig={i.signature.object_id}"

			#print "orig signature:  {i.signature.recv} . {i.signature}"
			#print "inh signature:   {isig.recv} . {isig}"
			#print "redef signature: {s.recv} . {s}"

			if s.arity != isig.arity then
				v.error(self, "Redef error: {prop.local_class}::{prop} redefines {ip.local_class}::{ip} with {isig.arity} parameter(s).")
			else if s.arity > 0 then
				if self isa AMethPropdef then
					# A standard method
					for j in [0..s.arity[ do
						if s[j] != isig[j] then
							v.error(n_signature.n_params[j], "Redef error: Expected {isig[j]}, as in {ip.local_class}::{ip}.")
						end
					end
				else if self isa AAttrPropdef then
					# A write accessor
					if s[0] != isig[0] then
						v.error(n_type, "Redef error: Expected {isig[0]}, as in the parameter of {ip.local_class}::{ip}.")
					end

				else
					abort #
				end
			end

			var srt = s.return_type
			var isrt = isig.return_type
			if srt == null and isrt != null then
				v.error(self, "Redef error: The procedure {prop.local_class}::{prop} redefines the function {ip.local_class}::{ip}.")
			else if srt != null and isrt == null then
				v.error(self, "Redef error: The function {prop.local_class}::{prop} redefines the procedure {ip.local_class}::{ip}.")
			else if srt != null and isrt != null and not srt < isrt then
				var n: nullable ANode = null
				if self isa AMethPropdef then
					n = self.n_signature.n_type
				else if self isa AAttrPropdef then
					n = self.n_type
				else if self isa ATypePropdef then
					n = self.n_type
				end
				v.error(n, "Redef error: Expected {isrt}, as in {ip.local_class}::{ip}.")
			else if not s < isig and nberr == v.tc.error_count then
				# Systematic fallback for conformance check
				v.error(self, "Redef error: Incompatible redefinition of {ip.local_class}::{ip} with {prop.local_class}::{prop}")
			else if srt != null and isrt != null and srt != isrt and prop isa MMAttribute then
				v.error(self, "Redef error: Expected {isrt}, as in {ip.local_class}::{ip}.")
			end
		end

		if visibility_level != 1 and glob.visibility_level != visibility_level then
			v.error(self, "Redef error: {prop.local_class}::{prop} redefinition cannot change visibility.")
		end
		glob.check_visibility(v, self, v.mmmodule, true)
	end
end

redef class AAttrPropdef
	redef readable var _readmethod: nullable MMSrcMethod
	redef readable var _writemethod: nullable MMSrcMethod
	var _prop: nullable MMSrcAttribute
	redef fun prop do return _prop.as(not null)

	redef fun accept_property_builder(v)
	do
		super
		var name: Symbol
		if n_id != null then
			name = n_id.to_symbol
		else
			name = ("@" + n_id2.text).to_symbol
		end
		var lc = v.local_class
		var prop = new MMSrcAttribute(name, lc, self)
		_prop = prop
		v.local_class.add_src_local_property(v, prop)

		if n_readable != null or n_id == null then
			if n_id != null then
				name = n_id.text.substring_from(1).to_symbol
			else
				name = n_id2.to_symbol
			end
			var readmethod = new MMReadImplementationMethod(name, lc, self)
			_readmethod = readmethod
			v.local_class.add_src_local_property(v, readmethod)
		end
		if n_writable != null or n_id == null then
			if n_id != null then
				name = (n_id.text.substring_from(1) + "=").to_symbol
			else
				name = (n_id2.text + "=").to_symbol
			end
			var writemethod = new MMWriteImplementationMethod(name, lc, self)
			_writemethod = writemethod
			v.local_class.add_src_local_property(v, writemethod)
		end
	end
	
	redef fun accept_property_verifier(v)
	do
		super
		var t: nullable MMType = null
		if n_type != null then
			var t0 = n_type.get_stype(v)
			if t0 != null then t = t0 else return
		else if n_expr != null then
			t = n_expr.get_easy_stype(v)
		end

		if t == null then
			v.error(self, "Not yet implemented: Attribute definition {prop.local_class}::{prop} requires an explicit type.")
			return
		end

		var prop = prop
		var signature = new MMSignature(new Array[MMParam], t, v.local_class.get_type)
		prop.signature = signature
		var visibility_level = n_visibility.level
		process_and_check(v, prop, n_id != null and n_kwredef != null, visibility_level)
		if n_readable != null or n_id == null then
			var m = _readmethod.as(not null)
			m.signature = signature
			process_and_check(v, m, (n_readable != null and n_readable.n_kwredef != null) or (n_id == null and n_kwredef != null), visibility_level)
			if n_type != null then n_type.check_visibility(v, m)
		end
		if n_writable != null or n_id == null then
			var m = _writemethod.as(not null)
			m.signature = new MMSignature(new Array[MMParam].with_items(new MMParam(t, once "value".to_symbol)), null, v.local_class.get_type)
			var vl = visibility_level
			if n_id == null then
				if n_writable == null then vl = 3 else vl = n_writable.n_visibility.level # write accessor has a specific visibility
			end
			process_and_check(v, m, n_writable != null and n_writable.n_kwredef != null, vl)
			if n_type != null then n_type.check_visibility(v, m)
		end
	end

	redef fun accept_abs_syntax_visitor(v)
	do
		v.local_property = _prop
		super
		v.local_property = null
	end
end

redef class AMethPropdef
	# Name of the method
	readable var _name: nullable Symbol 

	var _method: nullable MMMethSrcMethod
	redef fun method do return _method.as(not null)

	redef fun accept_property_builder(v)
	do
		super
		var name: Symbol
		if n_methid == null then
			if self isa AInitPropdef then
				name = once "init".to_symbol
			else
				name = once "main".to_symbol
			end
		else
			name = n_methid.name.as(not null)
			# FIXME: Add the 'unary' keyword
			if n_methid.name == (once "-".to_symbol) then
				var ns = n_signature
				if ns != null and ns.n_params.length == 0 then
					name = once "unary -".to_symbol
				end
			end
		end
		_name = name
		var prop = new MMMethSrcMethod(name, v.local_class, self)
		_method = prop
		v.local_class.add_src_local_property(v, prop)
	end

	redef fun accept_property_verifier(v)
	do
		v.signature_builder = new SignatureBuilder
		super

		if v.signature_builder.has_error_occured then return

		if v.signature_builder.signature == null then
			#_method.signature = new MMSignature(new Array[MMType], null, v.local_class.get_type)
		else
			method.signature = v.signature_builder.signature.as(not null)
		end
		var visibility_level = 1
		if n_visibility != null and n_visibility.level > 1 then
			visibility_level = n_visibility.level
		end
		process_and_check(v, method, n_kwredef != null, visibility_level)
		if n_signature != null then n_signature.check_visibility(v, method)
	end

	redef fun accept_abs_syntax_visitor(v)
	do
		v.local_property = _method
		super
		v.local_property = null
	end
end

redef class AMainMethPropdef
	redef fun process_and_check(v, prop, has_redef, visibility_level)
	do
		prop.global.visibility_level = visibility_level
		prop.signature = new MMSignature(new Array[MMParam], null, v.local_class.get_type)
		# Disable all checks for main
	end
end

redef class AExternPropdef
	redef fun accept_property_verifier(v)
	do
		super # Compute signature
		var ename: String
		if n_extern != null then
			ename = n_extern.text
			ename = ename.substring(1, ename.length-2)
		else
			ename = method.default_extern_name
		end
		method.extern_name = ename
	end
end

redef class ATypePropdef
	redef fun prop do return _prop.as(not null)
	var _prop: nullable MMSrcTypeProperty

	redef fun accept_property_builder(v)
	do
		super
		var name = n_id.to_symbol
		var prop = new MMSrcTypeProperty(name, v.local_class, self)
		_prop = prop
		v.local_class.add_src_local_property(v, prop)
	end
	
	redef fun accept_property_verifier(v)
	do
		super
		var signature = new MMSignature(new Array[MMParam], n_type.get_stype(v), v.local_class.get_type)
		prop.signature = signature
		var visibility_level = n_visibility.level
		process_and_check(v, prop, n_kwredef != null, visibility_level)
	end
	
	redef fun accept_abs_syntax_visitor(v)
	do
		v.local_property = _prop
		super
		v.local_property = null
	end
end

# Visitor used to build a full method name from multiple tokens
private class MethidAccumulator
	super Visitor
	readable var _name: Buffer = new FlatBuffer
	redef fun visit(n)
	do
		if n isa Token then
			_name.append(n.text)
		else
			n.visit_all(self)
		end
	end
end

redef class AMethid
	redef readable var _name: nullable Symbol

	redef fun accept_property_builder(v)
	do
		var accumulator = new MethidAccumulator
		accumulator.enter_visit(self)
		_name = accumulator.name.to_s.to_symbol
		super
	end
end

redef class ASignature
	redef fun accept_property_verifier(v)
	do
		super
		if v.signature_builder.has_error_occured then
			return
		else if not v.signature_builder.untyped_params.is_empty then
			if v.signature_builder.untyped_params.first != v.signature_builder.params.first or n_type != null then
				v.error(v.signature_builder.untyped_params.first, "Syntax error: untyped parameter.")
				return
			end
		else if not v.signature_builder.params.is_empty or n_type != null then
			var pars = new Array[MMParam]
			for p in v.signature_builder.params do
				pars.add( new MMParam( p.stype.as(not null),  p.n_id.to_symbol ) )
			end
			var ret: nullable MMType = null
			if n_type != null then
				ret = n_type.get_stype(v)
				if ret == null then
					v.signature_builder.has_error_occured = true
					return
				end
			end
			v.signature_builder.signature = new MMSignature(pars, ret, v.local_class.get_type)
			if v.signature_builder.vararg_rank >= 0 then
				v.signature_builder.signature.vararg_rank = v.signature_builder.vararg_rank
			end
			for clos in v.signature_builder.closure_decls do
				v.signature_builder.signature.closures.add(clos.variable.closure)
			end
		end
	end

	# Check that visibilities of types in the signature are compatible with the visibility of the property.
	fun check_visibility(v: AbsSyntaxVisitor, p: MMLocalProperty)
	do
		if p.global.visibility_level >= 3 then return
		for n in n_params do
			if n.n_type != null then n.n_type.check_visibility(v, p)
		end
		if n_type != null then n_type.check_visibility(v, p)
	end
end

redef class AParam
	redef readable var _position: Int = 0

	redef fun variable: ParamVariable do return _variable.as(not null)
	var _variable: nullable ParamVariable

	# The type of the parameter in signature
	readable writable var _stype: nullable MMType

	redef fun accept_property_verifier(v)
	do
		super
		_position = v.signature_builder.params.length
		_variable = new ParamVariable(n_id.to_symbol, n_id)
		v.signature_builder.params.add(self)
		v.signature_builder.untyped_params.add(self)
		if n_type != null then
			var stype = n_type.get_stype(v)
			if stype == null then
				v.signature_builder.has_error_occured = true
				return
			end
			for p in v.signature_builder.untyped_params do
				p.stype = stype
				if is_vararg then
					if v.signature_builder.vararg_rank == -1 then
						v.signature_builder.vararg_rank = p.position
					else
						v.error(self, "Error: A vararg parameter is already defined.")
					end
					stype = v.type_array(stype)
				end
				p.variable.stype = stype
			end
			v.signature_builder.untyped_params.clear
		end
	end

	fun is_vararg: Bool do return n_dotdotdot != null
end

redef class AClosureDecl
	redef readable var _position: Int = 0

	redef fun variable: ClosureVariable do return _variable.as(not null)
	var _variable: nullable ClosureVariable

	redef fun accept_property_verifier(v)
	do
		var old_signature_builder = v.signature_builder
		v.signature_builder = new SignatureBuilder
		super
		if v.signature_builder.has_error_occured then
			return
		end
		var sig = v.signature_builder.signature
		if sig == null then
			sig = new MMSignature(new Array[MMParam], null, v.local_class.get_type)
		end
		if sig.return_type != null and n_kwbreak != null then
			v.error(self, "Syntax Error: A break block cannot have a return value.")
		end

		# Add the finalizer to the closure signature
		var finalize_sig = new MMSignature(new Array[MMParam], null, v.mmmodule.type_any) # FIXME should be no receiver
		var finalizer_clos = new MMClosure(once ("break".to_symbol), finalize_sig, false, true)
		sig.closures.add(finalizer_clos)

		var name = n_id.to_symbol
		var clos = new MMClosure(name, sig, n_kwbreak != null, n_expr != null)
		for c in old_signature_builder.closure_decls do
			if c.n_id.to_symbol == name then
				v.error(n_id, "Error: A closure '!{name}' already defined at {c.n_id.location.relative_to(n_id.location)}.")
				return
			end
		end
		v.signature_builder = old_signature_builder
		_position = old_signature_builder.closure_decls.length
		old_signature_builder.closure_decls.add(self)
		_variable = new ClosureVariable(n_id.to_symbol, n_id, clos)
	end
end

redef class AType
	# Check that visibilities of types in the signature are compatible with the visibility of the property.
	private fun check_visibility(v: AbsSyntaxVisitor, p: MMLocalProperty)
	do
		if p.global.visibility_level >= 3 then return
		var t = get_stype(v)
		if t == null then return
		var bc = t.local_class
		if bc.global.visibility_level >= 3 then
			v.error(self, "Access error: Class {bc} is private and cannot be used in the signature of the non-private property {p}.")
		end
		for n in n_types do
			n.check_visibility(v, p)
		end
	end
end

redef class AExpr
	redef fun accept_class_builder(v) do end
	redef fun accept_property_builder(v) do end
	redef fun accept_property_verifier(v) do end

	private fun get_easy_stype(v:PropertyVerifierVisitor) : nullable MMType do return null
end

redef class ABoolExpr
	redef fun get_easy_stype(v) do return v.type_bool
end

redef class AStringExpr
	redef fun get_easy_stype(v) do return v.type_string
end

redef class ACharExpr
	redef fun get_easy_stype(v) do return v.type_char
end

redef class AIntExpr
	redef fun get_easy_stype(v) do return v.type_int
end

redef class AFloatExpr
	redef fun get_easy_stype(v) do return v.type_float
end

redef class ANewExpr
	redef fun get_easy_stype(v) do return n_type.get_stype(v)
end
