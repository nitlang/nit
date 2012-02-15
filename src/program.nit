# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Common things to represent a Nit program/library
package program

import metamodel
import icode
private import primitive_info
import mmloader

redef class ToolContext
	readable writable var _global: Bool = false
	writable var _use_SFT_optimization: Bool = true

	# We can say that we are using SFT optimization *only* when we are
	# doing global compilation and we enabled the command line option
	fun use_SFT_optimization: Bool do return global and _use_SFT_optimization
end

# Instances of this class represent a program/library that will
# be analyzed/compiled by nitc
class Program
	# This is the ToolContext associated with this Program
	# It contains (amongts other things) the command line options
	readable var _tc: ToolContext

	# This module is the 'main' module, the one where we find the 'main' method
	readable var _main_module: MMModule

	# This method is the entry point of this program
	# There might be no entry point (if in fact we are compiling a library)
	readable var _main_method: nullable MMMethod = null

	# This is the class that contains the main method.
	# Would be null if there is no main method
	readable var _main_class: nullable MMLocalClass = null

	# This method will ensure that all the metamodel is computed before we
	# start using all the classes
	private fun finish_processing_classes do
		var classes = new Array[MMLocalClass]
		for c in main_module.local_classes do
			c.compute_super_classes
			classes.add(c)
		end

		for c in classes do
			c.compute_ancestors
		end
	end

	fun compute_main_method do
		# Check for the 'Sys' class
		var sysname = once "Sys".to_symbol
		if not main_module.has_global_class_named(sysname) then return
		var sys = main_module.class_by_name(sysname)

		# Check for 'Sys::main' method
		var entryname = once "main".to_symbol
		if not sys.has_global_property_by_name(entryname) then return

		_main_method = sys.select_method(entryname)
		_main_class = sys
	end

	# Generation of allocation function of this class
	fun generate_allocation_iroutines
	do
		for c in main_module.local_classes do
			if c.global.is_abstract or c.global.is_interface then continue
			var pi = c.primitive_info
			if pi == null then
				do
					# Generate INIT_ATTRIBUTES routine
					var iself = new IRegister(c.get_type)
					var iselfa = [iself]
					var iroutine = new IRoutine(iselfa, null)
					var icb = new ICodeBuilder(main_module, iroutine)

					for g in c.global_properties do
						if not g.intro isa MMAttribute then continue
						var p = c[g]
						var t = p.signature.return_type
						if p isa MMAttribute and t != null then
							var ir = p.iroutine
							if ir == null then continue
							# FIXME: Not compatible with sep compilation
							var e = icb.inline_routine(ir, iselfa, null).as(not null)
							icb.stmt(new IAttrWrite(p, iself, e))
						end
					end

					c.init_var_iroutine = iroutine
				end
				do
					# Compile CHECKNAME
					var iself = new IRegister(c.get_type)
					var iselfa = [iself]
					var iroutine = new IRoutine(iselfa, null)
					var icb = new ICodeBuilder(main_module, iroutine)
					for g in c.global_properties do
						if not g.intro isa MMAttribute then continue
						var p = c[g]
						var t = p.signature.return_type
						if p isa MMAttribute and t != null and not t.is_nullable then
							icb.add_attr_check(p, iself)
						end
					end

					c.checknew_iroutine = iroutine
				end

				for g in c.global_properties do
					# FIXME skip invisible constructors
					if not g.is_init_for(c) then continue
					var p = c[g]
					assert p isa MMMethod

					var iself = new IRegister(c.get_type)
					var iparams = new Array[IRegister]
					for i in [0..p.signature.arity[ do iparams.add(new IRegister(p.signature[i]))
					var iroutine = new IRoutine(iparams, iself)
					iroutine.location = p.iroutine.location
					var icb = new ICodeBuilder(main_module, iroutine)

					var inew = new IAllocateInstance(c.get_type)
					inew.result = iself
					icb.stmt(inew)
					var iargs = [iself]
					iargs.add_all(iparams)

					icb.stmt(new IInitAttributes(c.get_type, iself))
					icb.stmt(new IStaticCall(p, iargs))
					icb.stmt(new ICheckInstance(c.get_type, iself))

					c.new_instance_iroutine[p] = iroutine
				end
			end
		end
	end

	# This function will call the attached block for each IRoutines
	# in this program
	fun with_each_iroutines
		!action(i: IRoutine, m: MMModule)
	do
		for m in main_module.mhe.greaters_and_self do
			for c in m.local_classes do
				var iroutine: nullable IRoutine = null

				# Process methods and attributes initialization
				for p in c.local_local_properties do
					if p isa MMAttribute then
						iroutine = p.iroutine
					else if p isa MMMethod then
						iroutine = p.iroutine
					end
					if iroutine == null then continue
					action(iroutine, m)
				end

				# Process class-specific iroutines
				iroutine = c.init_var_iroutine
				if iroutine != null then
					action(iroutine, m)
				end
				iroutine = c.checknew_iroutine
				if iroutine != null then
					action(iroutine, m)
				end
				for i in c.new_instance_iroutine.values do
					action(i, m)
				end
			end
		end
	end

	# This function will call the attached block for each MMMethods
	# in this program
	fun with_each_methods
		!action(m: MMMethod)
	do
		for m in main_module.mhe.greaters_and_self do
			for c in m.local_classes do
				# Process methods and attributes initialization
				for p in c.local_local_properties do
					if p isa MMMethod then
						action(p)
					end
				end
			end
		end
	end

	# This function will call the attached block for each live local classes
	# in this program
	fun with_each_live_local_classes
		!action(m: MMLocalClass)
	do
		for c in main_module.local_classes do
			action(c)
		end
	end

	init(m: MMModule, toolcontext: ToolContext) do
		_main_module = m
		_tc = toolcontext
		finish_processing_classes
	end
end

redef class MMLocalClass
	# IRoutine for the initialization of the default attributes (called by IInitAttributes)
	readable writable var _init_var_iroutine: nullable IRoutine = null
	# IRoutine to validate the instance after initialization (called by ICheckInstance)
	readable writable var _checknew_iroutine: nullable IRoutine = null
	# IRoutines to call to create a new valid instance (memory allocated, object initialized and validated)
	# These iroutines will call: IAllocateInstance, IInitAttributes, some init function and ICheckInstance
	# These routines will be called by INew
	readable var _new_instance_iroutine: HashMap[MMMethod, IRoutine] = new HashMap[MMMethod, IRoutine]
end
