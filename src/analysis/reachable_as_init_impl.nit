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

# This module introduces an analysis that flags all initializers called as new A.x
package reachable_as_init_impl

import reachable_method_analysis
import reachable_as_init

class ReachableAsInitBuilder
	readable var _context: ReachableAsInitAnalysisImpl = new ReachableAsInitAnalysisImpl
	readable var _program: Program

	fun work do
		program.with_each_iroutines !action(i, m)  do
			if program.rma.is_iroutine_reachable(i) then
				var v = new RAIVisitor(self)
				v.visit_iroutine(i)
			end
		end
	end

	init(p: Program) do
		_program = p
	end
end

# Visitor will add only initializers in the _methods list.
# If the checked method is in this list, it is reachable as init !
class ReachableAsInitAnalysisImpl
	super ReachableAsInitAnalysis
	var _methods: HashMap[MMLocalClass, List[MMMethod]] = new HashMap[MMLocalClass, List[MMMethod]]

	redef fun is_method_reachable_as_init(method: MMMethod, c: MMLocalClass): Bool do
		if _methods.has_key(c) then return _methods[c].has(method)
		return false
	end

	init do end
end

class RAIVisitor
	super ICodeVisitor
	readable var _builder: ReachableAsInitBuilder

	redef fun visit_icode(ic)
	do
		if ic isa INew then
			# FIXME: take only the last property on the redef. hierarchie
			var t = ic.stype
			var cls = t.for_module(builder.program.main_module).local_class
			var m = cls[ic.property.global].as(MMMethod)
			assert m.global.is_init
			if not builder.context._methods.has_key(cls) then builder.context._methods[cls] = new List[MMMethod]
			if not builder.context._methods[cls].has(m) then builder.context._methods[cls].add(m)
		end
		super
	end

	init(b: ReachableAsInitBuilder)
	do
		_builder = b
	end
end
