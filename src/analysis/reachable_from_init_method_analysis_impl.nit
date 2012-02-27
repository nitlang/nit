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

# This package introduces an algorithm to find all methods reachable
# from at least one reachable initializer
package reachable_from_init_method_analysis_impl

import reachable_from_init_method_analysis
import reachable_method_analysis

class RFIMABuilder
	readable var _program: Program
	readable var _context: RFIMAContext = new RFIMAContext

	init (p: Program) do
		_program = p
	end

	fun work do
		program.with_each_live_local_classes !action(c) do
			# For each reachable constructors for this class
			for g in c.global_properties do
				var p = c[g]
				if not p.global.is_init_for(c) then continue
				assert p isa MMMethod
				if not program.rma.as(not null).is_method_reachable(p) then continue
				if not c.new_instance_iroutine.has_key(p) then continue
				var ir = c.new_instance_iroutine[p]

				# Process this constructor
				context.reachable_from_init_iroutines.add(ir)
				(new RFIMAVisitor(context, program)).visit_iroutine(ir)
			end
		end
	end
end

class RFIMAContext
	super ReachableFromInitMethodAnalysis
	readable var _reachable_from_init_iroutines: HashSet[IRoutine] = new HashSet[IRoutine]

	redef fun is_iroutine_reachable_from_init(ir: nullable IRoutine): Bool do
		return ir != null and reachable_from_init_iroutines.has(ir)
	end

	redef fun is_method_reachable_from_init(method: MMMethod): Bool do
		return is_iroutine_reachable_from_init(method.iroutine)
	end
end

class RFIMAVisitor
	super ICodeVisitor
	readable var _context: RFIMAContext
	readable var _program: Program

	init (context: RFIMAContext, p: Program) do
		_context = context
		_program = p
	end

	fun process_call(iroutine: IRoutine) do
		if context.is_iroutine_reachable_from_init(iroutine) then return
		context.reachable_from_init_iroutines.add(iroutine)
		visit_iroutine(iroutine)
	end

	redef fun visit_icode(ic)
	do
		if ic isa IStaticCall then
			# FIXME: take only the last property on the redef. hierarchie
			var ir = ic.property.iroutine
			if ir != null then process_call(ir)
		else if ic isa INew then
			# FIXME: take only the last property on the redef. hierarchie
			var t = ic.stype
			var cls = t.for_module(program.main_module).local_class
			var m = cls[ic.property.global].as(MMMethod)
			if not m.is_extern then
				var r = cls.new_instance_iroutine[m]
				process_call(r)
			end
		else if ic isa ISuper then
			# Process possible calls
			var method = ic.property
			for greater in method.prhe.greaters_and_self do
				if greater isa MMMethod then
					var ir = greater.iroutine
					if ir != null then process_call(ir)
				end
			end
		else if ic isa ICall then
			# Process possible calls
			var method = ic.property
			var ir = method.iroutine
			if ir != null then process_call(ir)
			for other in method.prhe.smallers do
				if other isa MMMethod then
					ir = other.iroutine
					if ir != null then process_call(ir)
				end
			end
		else if ic isa ICheckInstance then
			var t = ic.stype
			var cls = t.for_module(program.main_module).local_class
			var ir = cls.checknew_iroutine
			if ir != null then process_call(ir)
		else if ic isa IInitAttributes then
			var t = ic.stype
			var cls = t.for_module(program.main_module).local_class
			var ir = cls.init_var_iroutine
			if ir != null then process_call(ir)
		end
		super
	end
end
