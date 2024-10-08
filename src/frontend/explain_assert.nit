# This file is part of NIT ( https://nitlanguage.org ).
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

# Explain failed assert to the console by modifying the AST.
#
# This module implements the service `AAssertExpr::explain_assert_str`,
# which should be used by the engines.
#
# Example assert:
#
# ~~~nitish
# var x = 0.0
# var y = 1.0
# assert x.is_approx(y, 0.5)
# ~~~
#
# Produces the following output on failure:
#
# ~~~raw
# Runtime assert: 0.0.is_approx(1.0, 0.5)
# ~~~
module explain_assert

import astbuilder
intrude import literal # for value=
intrude import typing # for mtype=

import explain_assert_api

redef class ToolContext

	# Phase modifying the AST to explain assets when they fail
	var explain_assert_phase: Phase = new ExplainAssertPhase(self, [modelize_class_phase, typing_phase, literal_phase])
end

private class ExplainAssertPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		var mmodule = nmodule.mmodule
		if mmodule == null then return

		# Skip if `mmodule` doesn't have access to `String`
		var string_class = toolcontext.modelbuilder.try_get_mclass_by_name(nmodule, mmodule, "String")
		if string_class == null then return

		# Launch a visitor on all elements of the AST
		var visitor = new ExplainAssertVisitor(toolcontext, mmodule, string_class.mclass_type)
		visitor.enter_visit nmodule
	end
end

# Visitor to find and explain asserts
private class ExplainAssertVisitor
	super Visitor

	# The toolcontext is our entry point to most services
	var toolcontext: ToolContext

	# The visited module
	var mmodule: MModule

	# Type of `String` (the generated code does not work without a `String`)
	var string_mtype: MType

	redef fun visit(node)
	do
		# Recursively visit all sub-nodes
		node.visit_all(self)

		# Only work on asserts
		if not node isa AAssertExpr then return
		var expr = node.n_expr

		# Skip assert on a single boolean var and asserts on false:
		# ~~~
		# assert false
		# # or
		# var x = false # Or any boolean expression
		# assert x
		# ~~~
		if expr isa AVarExpr or expr isa AFalseExpr then return

		# Build the superstring to explain the assert
		var explain_str = new ASuperstringExpr

		# Prepare attribute used by visited nodes
		self.assert_node = node
		self.explain_str = explain_str
		expr.accept_explain_assert self

		# Done! Store the superstring in the assert's node
		if explain_str.n_exprs.not_empty then
			node.explain_assert_str = explain_str
		end
	end

	# Visited assert node
	var assert_node: AAssertExpr is noinit

	# Superstring in construction to explain the `assert_node`
	var explain_str: ASuperstringExpr is noinit

	# Build an `AStringExpr` containing `value`
	#
	# Add it to `explain_str` if `auto_add == true`, the default.
	fun explain_string(value: String, auto_add: nullable Bool): AStringExpr
	do
		auto_add = auto_add or else true

		var tk = new TString
		tk.text = "\"{value}\""
		var op = new AStringExpr
		op.n_string = tk
		op.mtype = string_mtype
		op.value = value
		op.location = assert_node.location

		if auto_add then explain_str.n_exprs.add op
		return op
	end

	# Add the value of `v_expr` to `explain_str` and protect null values
	fun explain_expr(v_expr: AExpr)
	do
		var mtype = v_expr.mtype
		if mtype == null then
			explain_string "<unexpected error>"
			return
		end

		# Set the expression value aside
		var old_parent = v_expr.parent
		var expr = v_expr.make_var_read
		if old_parent != null then old_parent.validate

		# Protect nullable types
		if mtype isa MNullType then
			explain_string "null"
			return
		else if mtype isa MNullableType then
			var e = new AOrElseExpr
			e.n_expr = expr
			e.n_expr2 = explain_string("null", false)
			e.location = assert_node.location
			e.mtype = mmodule.object_type

			explain_str.n_exprs.add e
			return
		end

		explain_str.n_exprs.add expr
	end

	# Add all the arguments in `AExprs` to `explain_str`
	fun explain_args(n_args: AExprs)
	do
		var first = true
		for n_arg in n_args.to_a do
			if not first then
				explain_string ", "
			else first = false

			explain_expr n_arg
		end
	end
end

redef class AAssertExpr
	redef var explain_assert_str = null
end

redef class AExpr
	# Fill `v` to explain this node if the parent assert fails
	private fun accept_explain_assert(v: ExplainAssertVisitor)
	do if mtype != null then v.explain_expr self
end

redef class ABinopExpr
	redef fun accept_explain_assert(v)
	do
		if n_expr.mtype == null or n_expr2.mtype == null then return

		v.explain_expr n_expr
		v.explain_string " {n_op.text} "
		v.explain_expr n_expr2
	end
end

redef class ACallExpr
	redef fun accept_explain_assert(v)
	do
		if n_expr.mtype == null then return

		v.explain_expr n_expr
		v.explain_string ".{n_qid.n_id.text}"

		if n_args.to_a.not_empty then
			v.explain_string "("
			v.explain_args n_args
			v.explain_string ")"
		end
	end
end

redef class ABraExpr
	redef fun accept_explain_assert(v)
	do
		if n_expr.mtype == null then return

		v.explain_expr n_expr
		v.explain_string "["
		v.explain_args n_args
		v.explain_string "]"
	end
end

redef class AIsaExpr
	redef fun accept_explain_assert(v)
	do
		if n_expr.mtype == null then return

		v.explain_expr n_expr
		v.explain_string " {n_kwisa.text} "
		v.explain_string n_type.collect_text
	end
end

redef class ANotExpr
	redef fun accept_explain_assert(v)
	do
		v.explain_string "{n_kwnot.text} "
		n_expr.accept_explain_assert v
	end
end

redef class ABinBoolExpr
	# Don't explain the conditions using `and`, `or`, etc.
	redef fun accept_explain_assert(v) do end
end
