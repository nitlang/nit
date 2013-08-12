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

# Thansformations that simplify the AST of expressions
# This module transform complex AST `AExpr` nodes into simplier ones
module transform

import astbuilder
import auto_super_init
import astvalidation

redef class ToolContext
	var transform_phase: Phase = new TransformPhase(self, [typing_phase, auto_super_init_phase])
end

private class TransformPhase
	super Phase

	redef fun process_npropdef(npropdef: APropdef)
	do
		var val

		var v = new TransformVisitor(self, npropdef)
		v.enter_visit(npropdef)

		val = new ASTValidationVisitor
		val.enter_visit(npropdef)
	end
end

private class TransformVisitor
	super Visitor

	var phase: TransformPhase
	var mmodule: MModule
	var mclassdef: MClassDef
	var mpropdef: MPropDef
	var builder: ASTBuilder

	init(phase: TransformPhase, npropdef: APropdef)
	do
		self.phase = phase
		self.mpropdef = npropdef.mpropdef.as(not null)
		self.mclassdef = mpropdef.mclassdef
		self.mmodule = mclassdef.mmodule
		self.builder = new ASTBuilder(mmodule, mpropdef.mclassdef.bound_mtype)
	end

	redef fun visit(node)
	do
		if node isa AAnnotations then return
		node.visit_all(self)
		node.accept_transform_visitor(self)
	end

	# Get a primitive class or display a fatal error on `location`.
	fun get_class(location: AExpr, name: String): MClass
	do
		return mmodule.get_primitive_class(name)
	end

	# Get a primitive method or display a fatal error on `location`.
	fun get_method(location: AExpr, name: String, recv: MClass): MMethod
	do
		return phase.toolcontext.modelbuilder.force_get_primitive_method(location, name, recv, mmodule)
	end
end

redef class ANode
	private fun accept_transform_visitor(v: TransformVisitor)
	do
	end
end

redef class AVardeclExpr
	# `var x = y` is replaced with `x = y`
	#
	# Declarations are only useful for scope rules
	# Once names are associated with real objects, ther declaration become useless
	# Therefore, if there is no initial value, then just detach it
	# Else, replace it with a simple assignment
	redef fun accept_transform_visitor(v)
	do
		var nexpr = n_expr
		if nexpr == null then
			detach
		else
			var nvar = v.builder.make_var_assign(self.variable.as(not null), nexpr)
			replace_with(nvar)
		end
	end
end

redef class AIfexprExpr
	# is replaced with `AIfExpr`
	# Expression if and statement-if use two distinct classes for historical reasons
	# However, on can replace the `AIfexprExpr` with the simpler `AIfExpr`
	redef fun accept_transform_visitor(v)
	do
		var nif = v.builder.make_if(n_expr, self.mtype)
		nif.n_then.add(n_then)
		nif.n_else.add(n_else)

		replace_with(nif)
	end
end

redef class AOrExpr
	# `x or y` is replaced with `if x then x else y`
	redef fun accept_transform_visitor(v)
	do
		var nif = v.builder.make_if(n_expr, self.mtype)
		nif.n_then.add(n_expr.make_var_read)
		nif.n_else.add(n_expr2)

		replace_with(nif)
	end
end

redef class AAndExpr
	# `x and y` is replaced with `if x then y else x`
	redef fun accept_transform_visitor(v)
	do
		var nif = v.builder.make_if(n_expr, self.mtype)
		nif.n_then.add(n_expr2)
		nif.n_else.add(n_expr.make_var_read)

		replace_with(nif)
	end
end

redef class AWhileExpr
	redef fun accept_transform_visitor(v)
	do
		# TODO
	end
end

redef class AForExpr
	redef fun accept_transform_visitor(v)
	do
		# TODO
	end
end

redef class AArrayExpr
	# `[x,y]` is replaced with
	#
	#     var t = new Array[X].with_capacity(2)
	#     t.add(x)
	#     t.add(y)
	#     t
	redef fun accept_transform_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		var nblock = v.builder.make_block

		var meth = v.get_method(self, "with_capacity", mtype.mclass)
		var nnew = v.builder.make_new(mtype, meth, [v.builder.make_int(n_exprs.n_exprs.length)])
		nblock.add nnew

		var madd = v.get_method(self, "push", mtype.mclass)
		for nexpr in self.n_exprs.n_exprs do
			var nadd = v.builder.make_call(nnew.make_var_read, madd, [nexpr])
			nblock.add nadd
		end
		var nres = nnew.make_var_read
		nblock.add nres

		replace_with(nblock)
	end
end

redef class ASuperstringExpr
	# `"x{y}z"` is replaced with
	#
	#     var t = new Array[Object].with_capacity(3)
	#     t.add("x")
	#     t.add(y)
	#     t.add("z")
	#     t.to_s
	redef fun accept_transform_visitor(v)
	do
		var nblock = v.builder.make_block

		var arraytype = v.get_class(self, "Array").get_mtype([v.get_class(self, "Object").mclass_type])
		var meth = v.get_method(self, "with_capacity", arraytype.mclass)
		var nnew = v.builder.make_new(arraytype, meth, [v.builder.make_int(n_exprs.length)])
		nblock.add nnew

		var madd = v.get_method(self, "add", arraytype.mclass)
		for nexpr in self.n_exprs do
			var nadd = v.builder.make_call(nnew.make_var_read, madd, [nexpr])
			nblock.add nadd
		end

		var mtos = v.get_method(self, "to_s", arraytype.mclass)
		var ntos = v.builder.make_call(nnew.make_var_read, mtos, null)
		nblock.add ntos

		replace_with(nblock)
	end
end

redef class ACrangeExpr
	# `[x..y]` is replaced with `new Range[X](x,y)`
	redef fun accept_transform_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		var meth = v.get_method(self, "init", mtype.mclass)

		replace_with(v.builder.make_new(mtype, meth, [n_expr, n_expr2]))
	end
end

redef class AOrangeExpr
	# `[x..y[` is replaced with `new Range[X].without_last(x,y)`
	redef fun accept_transform_visitor(v)
	do
		var mtype = self.mtype.as(MClassType)
		var meth = v.get_method(self, "without_last", mtype.mclass)

		replace_with(v.builder.make_new(mtype, meth, [n_expr, n_expr2]))
	end
end

redef class AParExpr
	# `(x)` is replaced with `x`
	redef fun accept_transform_visitor(v)
	do
		replace_with(n_expr)
	end
end

redef class ASendReassignFormExpr
	# `x.foo(y)+=z` is replaced with
	#
	#     x.foo(y) = x.foo(y) + z
	#
	# witch is, in reality:
	#
	#     x."foo="(y, x.foo(y)."+"(z))
	redef fun accept_transform_visitor(v)
	do
		var nblock = v.builder.make_block
		nblock.add(n_expr)

		var read_args = new Array[AExpr]
		var write_args = new Array[AExpr]
		for a in raw_arguments.as(not null) do
			nblock.add(a)
			read_args.add(a.make_var_read)
			write_args.add(a.make_var_read)
		end

		var nread = v.builder.make_call(n_expr.make_var_read, callsite.mproperty, read_args)

		var nnewvalue = v.builder.make_call(nread, reassign_callsite.mproperty, [n_value])

		write_args.add(nnewvalue)
		var nwrite = v.builder.make_call(n_expr.make_var_read, write_callsite.mproperty, write_args)
		nblock.add(nwrite)

		replace_with(nblock)
	end
end

redef class AVarReassignExpr
	# `v += z` is replaced with `v = v + z`
	redef fun accept_transform_visitor(v)
	do
		var variable = self.variable.as(not null)

		var nread = v.builder.make_var_read(variable)
		var nnewvalue = v.builder.make_call(nread, reassign_callsite.mproperty, [n_value])
		var nwrite = v.builder.make_var_assign(variable, nnewvalue)

		replace_with(nwrite)
	end
end

redef class AAttrReassignExpr
	# `x.a += z` is replaced with `x.a = x.a + z`
	redef fun accept_transform_visitor(v)
	do
		var nblock = v.builder.make_block
		nblock.add(n_expr)
		var attribute = self.mproperty.as(not null)

		var nread = v.builder.make_attr_read(n_expr.make_var_read, attribute)
		var nnewvalue = v.builder.make_call(nread, reassign_callsite.mproperty, [n_value])
		var nwrite = v.builder.make_attr_assign(n_expr.make_var_read, attribute, nnewvalue)
		nblock.add(nwrite)

		replace_with(nblock)
	end
end
