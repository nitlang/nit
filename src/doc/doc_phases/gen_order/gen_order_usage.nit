# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# TOC generation approaches based on module/type/method usage.
#
# TODO usage in documentation
module gen_order_usage

import gen_order_base
import semantize::typing

# Weight concerns based on the number of usage inside the concern.
class UsageWeighter
	super MEntityWeighter

	# Modelbuilder used to access AST.
	var modelbuilder: ModelBuilder

	redef fun weight_mgroup(mgroup) do
		var w = 0.0
		for m in mgroup.mmodules do
			weight_mmodule(m)
			w += m.weight
		end
		mgroup.weight = w
	end

	redef fun weight_mmodule(mmodule) do
		var nmodule = modelbuilder.mmodule2node(mmodule)
		if nmodule == null then return
		var visitor = new ModuleImportVisitor(mmodule)
		visitor.enter_visit(nmodule)
	end

	redef fun weight_mclass(mclass) do
		for mclassdef in mclass.mclassdefs do
			var nclassdef = modelbuilder.mclassdef2node(mclassdef)
			if nclassdef == null then continue
			var visitor = new TypeUsageVisitor
			visitor.enter_visit(nclassdef)
		end
	end

	redef fun weight_mclassdef(mclassdef) do
		var mclass = mclassdef.mclass
		weight_mclass(mclass)
		mclassdef.weight = mclass.weight
	end
end

# Weight module based on the number of import clauses
private class ModuleImportVisitor
	super Visitor

	var mmodule: MModule

	redef fun visit(n)
	do
		if n isa AStdImport then
			var mod = n.mmodule
			if mod != null then mod.weight += 1.0
		else if n isa AType then
			var mtype = n.mtype
			if mtype isa MClassType then
				var mod = mtype.mclass.intro.mmodule
				if mod != mmodule then
					mod.weight += 1.0
				end
			end
		end
		n.visit_all(self)
	end
end

# Weight classes based on the number of type references
private class TypeUsageVisitor
	super Visitor

	redef fun visit(n)
	do
		if n isa AExpr then
			increment_mtype(n.mtype)
		else if n isa AType then
			# TODO also track implicit things like array and ranges?
			increment_mtype(n.mtype)
		end
		n.visit_all(self)
	end

	fun increment_mtype(mtype: nullable MType) do
		if mtype == null then return
		if mtype isa MNullableType then mtype = mtype.mtype
		if mtype isa MGenericType then mtype = mtype.mclass.mclass_type
		if not mtype isa MClassType then return
		mtype.mclass.weight += 1.0
	end
end

private class CallUsageVisitor
	super Visitor

	redef fun visit(n)
	do
		if n isa ACallExpr then
			var callsite = n.callsite
			if callsite != null then
				var mpropdef = callsite.mpropdef
				mpropdef.mproperty.weight += 1.0
				mpropdef.weight += 1.0
			end
		end
		n.visit_all(self)
	end
end
