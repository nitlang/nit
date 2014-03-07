# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Collect super sends
module collect_super_sends

import modelbuilder
private import modelize_property
private import typing

private class CollectSuperSends
	super Visitor
	var modelbuilder: ModelBuilder
	var res = new ArraySet[MMethodDef]
	var mpropdef: nullable MMethodDef

	# Get a new visitor on a classef to add type count in `typecount`.
	init(modelbuilder: ModelBuilder)
	do
		self.modelbuilder = modelbuilder
	end

	redef fun visit(n)
	do
		if n isa AMethPropdef then
			assert mpropdef == null
			mpropdef = n.mpropdef
			n.visit_all(self)
			mpropdef = null
			return
		end
		n.visit_all(self)
		if (n isa ASuperExpr and n.callsite == null) or n isa ASuperExternCall then
			var mprop = mpropdef
			assert mprop != null
			res.add(mprop)
		end
	end
end

redef class ModelBuilder
	# Visit the AST and return all method definitions that performs a `super`.
	fun collect_super_sends: Set[MMethodDef]
	do
		var visitor = new CollectSuperSends(self)

		# Visit all the source code to collect data
		for nmodule in self.nmodules do
			visitor.enter_visit(nmodule)
		end

		return visitor.res
	end
end
