# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This package implements Reachable Type Analysis(RTA)
package rta_analysis

import instantiated_type_analysis
import reachable_method_analysis
import icode
import program

class RtaContext
	super ReachableMethodAnalysis
	super InstantiatedTypeAnalysis
	init do end
	readable var _instanciated_classes: HashSet[MMLocalClass] = new HashSet[MMLocalClass]

	redef fun is_class_instantiated(local_class: MMLocalClass): Bool do return instanciated_classes.has(local_class)

	readable var _reachable_iroutines: HashSet[IRoutine] = new HashSet[IRoutine]

	redef fun is_iroutine_reachable(ir: nullable IRoutine): Bool do
		return ir != null and reachable_iroutines.has(ir)
	end

	redef fun is_method_reachable(method: MMMethod): Bool do
		return is_iroutine_reachable(method.iroutine)
	end
end

class RtaBuilder
	readable var _context : RtaContext
	readable var _program: Program
	readable var _iroutine_to_search: List[IRoutine] = new List[IRoutine]
	readable var _call_sites: HashSet[IAbsCall] = new HashSet[IAbsCall]
	readable var _called_methods: HashSet[MMMethod] = new HashSet[MMMethod]

	init (p: Program) do
		_context = new RtaContext
		_program = p
	end

	# Check if the class where the method was introduced is instantiated
	# Also check every subclasses if they use the same 'version' of the
	# method
	fun check_method(m: MMMethod): Bool do
		var m_cls = m.local_class.for_module(program.main_module)

		if context.is_class_instantiated(m_cls) then return true

		for cls in m_cls.cshe.smallers do
			if not cls[m.global] == m then continue
			if context.is_class_instantiated(cls) then return true
		end
		return false
	end

	# Check all call sites to find those that just became 'activated'
	# by some new type instantiation
	fun check_call_sites do
		var calls_to_remove = new List[IAbsCall]
		for call in call_sites do
			var m = call.property
			var all_added = true

			# Check for this method
			if check_method(m) then
				add_reachable_iroutine(m.iroutine)
			else
				all_added = false
			end

			# Check all methods 'under' this one in the hierarchy
			for other in m.prhe.smallers do
				if not other isa MMMethod then continue
				if check_method(other) then
					add_reachable_iroutine(other.iroutine)
				else
					all_added = false
				end
			end

			if all_added then calls_to_remove.add(call)
		end

		# If all sub-methods are added, no need to keep checking this call !
		for call in calls_to_remove do
			call_sites.remove(call)
		end
	end

	fun add_instantiated_class(cls: MMLocalClass) do
		if context.is_class_instantiated(cls) then return
		context.instanciated_classes.add(cls)

		check_call_sites
	end

	fun add_reachable_call(call: IAbsCall) do
		var m = call.property
		if called_methods.has(m) then return
		if call_sites.has(call) then return

		call_sites.add(call)
		called_methods.add(m)
		check_call_sites
	end

	fun add_reachable_iroutine(ir: nullable IRoutine) do
		if ir == null or context.is_iroutine_reachable(ir) then return
		context.reachable_iroutines.add(ir)
		iroutine_to_search.add(ir)
	end

	# Need to hard-code some automaticaly instanciated types !
	private fun force_some_type_analysis do
		var forced_types = ["Object", "Bool", "Float", "Int", "String", "NativeString", "Range", "Array", "ArrayIterator", "Inline__"]

		for some_type in forced_types do
			if not program.main_module.has_global_class_named(some_type.to_symbol) then continue
			var cls_type = program.main_module.class_by_name(some_type.to_symbol)
			add_instantiated_class(cls_type)
		end

		if program.main_module.has_global_class_named("Inline__".to_symbol) then
			var ptr_class = program.main_module.class_by_name("Inline__".to_symbol)
			# Assume that all classes that are subclasses of Inline__
			# can be inlined without notice ...
			# and are always counted as instantiated
			for ptr_sub_class in ptr_class.cshe.smallers do
				add_instantiated_class(ptr_sub_class)
			end
		end

		if program.main_module.has_global_class_named("Pointer".to_symbol) then
			var ptr_class = program.main_module.class_by_name("Pointer".to_symbol)
			# Assume that all classes that are subclasses of Pointer
			# can be returned by the native interface
			# and are always counted as instantiated
			for ptr_sub_class in ptr_class.cshe.smallers do
				add_instantiated_class(ptr_sub_class)
			end
		end

		for cls in program.main_module.global_classes do
			if not cls.is_enum and not cls.is_extern then continue
			add_instantiated_class(program.main_module[cls])
		end

		# defines all extern classes as used to make sure that static
		# C functions in frontier compile.
		program.with_each_methods !action( prop ) do
			if prop.is_extern then
				add_reachable_iroutine(prop.iroutine)
			end
		end
	end

	# Build the context associated with this builder
	fun work do
		if program.main_method == null then
			# Add primitive type (so that compiling works)
			for t in ["Int","Char","Bool"] do
				if program.main_module.has_global_class_named(t.to_symbol) then
					add_instantiated_class(program.main_module.class_by_name(t.to_symbol))
				end
			end
			return
		end

		add_instantiated_class(program.main_class.as(not null))
		add_reachable_iroutine(program.main_method.as(not null).iroutine)
		force_some_type_analysis

		while not iroutine_to_search.is_empty do
			var v = new RtaVisitor(self)
			var iroutine = iroutine_to_search.pop
			v.visit_icode(iroutine.body)
		end
	end
end

class RtaVisitor
	super ICodeVisitor
	readable var _builder: RtaBuilder

	redef fun visit_icode(ic)
	do
		if ic isa IStaticCall then
			# FIXME: take only the last property on the redef. hierarchie
			builder.add_reachable_iroutine(ic.property.iroutine)
		else if ic isa INew then
			# FIXME: take only the last property on the redef. hierarchie
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			if not cls.global.is_extern then
				var m = cls[ic.property.global].as(MMMethod)
				var r = cls.new_instance_iroutine[m]
				builder.add_reachable_iroutine(r)
			end
			builder.add_instantiated_class(cls)
		else if ic isa ISuper then
			# Add every parents ...
			for p in ic.property.prhe.greaters_and_self do
				if p isa MMMethod then
					builder.add_reachable_iroutine(p.iroutine)
				end
			end
		else if ic isa ICall then
			builder.add_reachable_call(ic)
		else if ic isa ICheckInstance then
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			var ir = cls.checknew_iroutine
			builder.add_reachable_iroutine(ir)
		else if ic isa IInitAttributes then
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			var ir = cls.init_var_iroutine
			builder.add_reachable_iroutine(ir)
		end
		super
	end

	init(b: RtaBuilder)
	do
		_builder = b
	end
end
