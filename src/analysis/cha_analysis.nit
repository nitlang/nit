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

# This module implements Class Hierarchy Analysis (CHA)
package cha_analysis

import reachable_method_analysis
import icode
import program

class ChaContext
	super ReachableMethodAnalysis
	readable var _reachable_iroutines: HashSet[IRoutine] = new HashSet[IRoutine]

	redef fun is_iroutine_reachable(ir: nullable IRoutine): Bool do
		return ir != null and reachable_iroutines.has(ir)
	end

	redef fun is_method_reachable(method: MMMethod): Bool do
		return is_iroutine_reachable(method.iroutine)
	end
end

class ChaBuilder
	readable var _iroutine_to_search: List[IRoutine] = new List[IRoutine]
	readable var _context: ChaContext
	readable var _program: Program

	init(p: Program) do
		_program = p
		_context = new ChaContext
	end

	private fun add_search(method: nullable MMMethod, iroutine: nullable IRoutine, is_static: Bool, is_super: Bool) do
		# Add the exact method
		if iroutine != null and not context.is_iroutine_reachable(iroutine) then
			context.reachable_iroutines.add(iroutine)
			_iroutine_to_search.add(iroutine)
		end

		if method != null then
			# Add every redefinition
			if not is_static then
				for other in method.prhe.smallers do
					if other isa MMMethod then
						add_search(other, other.iroutine, true, false)
					end
				end
			end

			# Add all parents since we don't know which one will get called !
			if is_super then
				for greater in method.prhe.greaters do
					if greater isa MMMethod then
						add_search(greater, greater.iroutine, true, false)
					end
				end
			end
		end
	end

	# Build the context associated with this builder
	fun work do
		var main_method = program.main_method
		if main_method == null then return

		add_search (main_method, main_method.iroutine, true, false)

		while not iroutine_to_search.is_empty do
			var v = new ChaVisitor(self)
			var iroutine = iroutine_to_search.pop
			v.visit_icode(iroutine.body)
		end
	end
end

class ChaVisitor
	super ICodeVisitor
	readable var _builder: ChaBuilder

	redef fun visit_icode(ic)
	do
		if ic isa IStaticCall then
			# FIXME: take only the last property on the redef. hierarchie
			builder.add_search(ic.property, ic.property.iroutine, true, false)
		else if ic isa INew then
			# FIXME: take only the last property on the redef. hierarchie
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			if not cls.global.is_extern then
				var m = cls[ic.property.global].as(MMMethod)
				var r = cls.new_instance_iroutine[m]
				builder.add_search(ic.property, r, false, false)
			end
		else if ic isa ISuper then
			builder.add_search(ic.property, ic.property.iroutine, false, true)
		else if ic isa ICall then
			builder.add_search(ic.property, ic.property.iroutine, false, false)
		else if ic isa ICheckInstance then
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			var ir = cls.checknew_iroutine
			builder.add_search(null, ir, true, false)
		else if ic isa IInitAttributes then
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			var ir = cls.init_var_iroutine
			builder.add_search(null, ir, true, false)
		end
		super
	end

	init(b: ChaBuilder)
	do
		_builder = b
	end
end
