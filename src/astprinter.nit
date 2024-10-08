# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# print AST in an human form
module astprinter

import semantize
intrude import parser
private import literal

private class ASTPrinterVisitor
	super Visitor
	redef fun visit(node)
	do
		node.accept_printer(self)
	end

	fun visit_block_noend(keyword: String, n_block: nullable AExpr): Bool
	do
		space
		write(keyword)
		var nl = number_of_lines(n_block)
		if nl == 0 then
			space
			return true
		else if nl == 1 then
			space
			indent
			enter_visit(n_block)
			unindent
			return false
		else
			eol
			indent
			enter_visit(n_block)
			unindent
			return true
		end
	end

	fun visit_block(keyword: String, n_block: nullable AExpr)
	do
		if visit_block_noend(keyword, n_block) then
			write("end")
		end
		eol
	end

	fun number_of_lines(n_expr: nullable AExpr): Int
	do
		if n_expr == null then return 0 else return n_expr.number_of_lines
	end

	fun varname(variable: nullable Variable): String
	do
		if variable == null then return "?"
		var name = variable.name
		if name == "" then name = "t{variable.object_id}"
		return name
	end

	var out = new List[String]
	var indent_level = 0

	var has_eol = true
	var has_space = false

	fun eol
	do
		if has_eol then return
		has_eol = true
		out.add("\n")
	end
	fun space
	do
		has_space = true
	end

	var last_current: nullable ANode = null

	fun write(s: String)
	do
		if has_eol then
			for x in [0..indent_level[ do out.add("\t")
		else if has_space then
			out.add(" ")
		end
		if last_current != current_node then
			last_current = current_node
		end
		out.add(s)
		has_eol = false
		has_space = false
	end

	fun indent do indent_level += 1
	fun unindent do indent_level -= 1
end

redef class ANode
	# print the tree (using the semantic information) on screen
	# This method is used to debug AST transformations
	fun print_tree
	do
		var v = new ASTPrinterVisitor
		v.enter_visit(self)
		v.eol
		for s in v.out do
			printn s
		end
	end

	private fun accept_printer(v: ASTPrinterVisitor)
	do
		v.eol
		v.write("({inspect}")
		v.indent
		visit_all(v)
		v.write(")")
		v.unindent
	end
end

redef class Token
	redef fun accept_printer(v)
	do
		#v.write(text)
		super
	end
end

redef class ADoc
	redef fun accept_printer(v) do visit_all(v)
end

redef class AType
	redef fun accept_printer(v) do v.write(mtype.to_s)
end


redef class AMainMethPropdef
	redef fun accept_printer(v) do v.enter_visit(n_block)
end

redef class AExpr
	fun number_of_lines: Int do return 1
end

redef class ABlockExpr
	redef fun number_of_lines
	do
		var res = 0
		for x in n_expr do
			res += x.number_of_lines
		end
		return res
	end
	redef fun accept_printer(v)
	do
		for x in n_expr do
			v.enter_visit(x)
			v.eol
		end
	end
end

redef class ADoExpr
	redef fun number_of_lines do return n_block.number_of_lines
	redef fun accept_printer(v) do
		v.visit_block("do", n_block)
	end
end

redef class ALoopExpr
	redef fun number_of_lines do return n_block.number_of_lines
	redef fun accept_printer(v) do
		v.visit_block("loop", n_block)
	end
end

redef class AForExpr
	redef fun number_of_lines do return n_block.number_of_lines
	redef fun accept_printer(v) do
		v.write("for ")
		var is_first_group = true
		for g in n_groups do
			if is_first_group then is_first_group = false else v.write(", ")
			var is_first_variable = true
			for va in g.variables do
				if is_first_variable then is_first_variable = false else v.write(", ")
				v.write(v.varname(va))
			end
			v.write(" in ")
			v.visit(g.n_expr)
		end
		v.visit_block("do", n_block)
	end
end

redef class AIfExpr
	redef fun number_of_lines
	do
		var nt = n_then.number_of_lines
		var ne = if n_else != null then n_else.number_of_lines else 0
		if nt <= 1 or ne <= 1 then return nt.max(ne)
		return nt + ne + 1
	end
	redef fun accept_printer(v) do
		v.write("if ")
		v.enter_visit(n_expr)
		if n_else != null and n_else.number_of_lines > 0 then
			v.visit_block_noend("then", n_then)
			v.visit_block("else", n_else)
		else
			v.visit_block("then", n_then)
		end
	end
end

redef class AIfexprExpr
	redef fun number_of_lines
	do
		var nt = n_then.number_of_lines
		var ne = n_else.number_of_lines
		if nt <= 1 or ne <= 1 then return nt.max(ne)
		return nt + ne + 1
	end
	redef fun accept_printer(v) do
		v.write("if ")
		v.enter_visit(n_expr)
		v.write(" then ")
		v.visit(n_then)
		v.write(" else ")
		v.visit(n_else)
	end
end

redef class ANewExpr
	redef fun accept_printer(v)
	do
		v.write("new {mtype.as(not null)}.{callsite.mproperty}")
		if not n_args.n_exprs.is_empty then
			v.write("(")
			v.indent
			var is_first = true
			for a in n_args.n_exprs do
				if is_first then is_first = false else v.write(", ")
				v.enter_visit(a)
			end
			v.unindent
			v.write(")")
		end
	end
end

redef class ASendExpr
	redef fun accept_printer(v)
	do
		if not n_expr isa AImplicitSelfExpr then
			v.enter_visit(n_expr)
			v.write "."
		end
		v.write(callsite.mproperty.name)
		if not raw_arguments.is_empty then
			v.write("(")
			v.indent
			var is_first = true
			for a in raw_arguments do
				if is_first then is_first = false else v.write(", ")
				v.enter_visit(a)
			end
			v.unindent
			v.write(")")
		end
	end
end

redef class ANotExpr
	redef fun accept_printer(v)
        do
		v.write("not ")
		v.visit(n_expr)
	end
end

redef class AAndExpr
	redef fun accept_printer(v)
        do
		v.visit(n_expr)
		v.write(" and ")
		v.visit(n_expr2)
	end
end

redef class AOrExpr
	redef fun accept_printer(v)
        do
		v.visit(n_expr)
		v.write(" or ")
		v.visit(n_expr2)
	end
end

redef class AIsaExpr
	redef fun accept_printer(v)
	do
		v.visit(n_expr)
		v.write(" isa ")
		v.visit(n_type)
	end
end

redef class AAsCastExpr
	redef fun accept_printer(v)
	do
		v.visit(n_expr)
		v.write(".as(")
		v.visit(n_type)
		v.write(")")
	end
end

redef class AAsNotnullExpr
	redef fun accept_printer(v)
	do
		v.visit(n_expr)
		v.write(".as(not null)")
	end
end

redef class AOrangeExpr
	redef fun accept_printer(v)
	do
		v.write("[")
                v.visit(n_expr)
		v.write("..")
		v.visit(n_expr2)
		v.write("[")
	end
end

redef class ACrangeExpr
	redef fun accept_printer(v)
	do
		v.write("[")
                v.visit(n_expr)
		v.write("..")
		v.visit(n_expr2)
		v.write("]")
	end
end

redef class AArrayExpr
	redef fun accept_printer(v)
	do
		v.write("[")
		var is_first = true
		for n in n_exprs do
			if is_first then is_first = false else v.write(", ")
			v.visit(n)
		end
		v.write("]")
	end
end

redef class AVarExpr
	redef fun accept_printer(v)
	do
		v.write(v.varname(variable))
	end
end

redef class AVardeclExpr
	redef fun accept_printer(v)
	do
		v.write("var ")
		v.write(v.varname(variable))
		if n_type != null then
			v.write(": ")
			v.enter_visit(n_type)
		end
		if n_expr != null then
			v.write(" = ")
			v.enter_visit(n_expr)
		end
	end
end

redef class AVarAssignExpr
	redef fun accept_printer(v)
	do
		v.write(v.varname(variable))
		v.write(" = ")
		v.indent
		v.enter_visit(n_value)
		v.unindent
	end
end

redef class AVarReassignExpr
	redef fun accept_printer(v)
	do
		v.write(v.varname(variable))
		v.write(" ")
		v.write(reassign_callsite.mproperty.name)
		v.write("= ")
		v.indent
		v.enter_visit(n_value)
		v.unindent
	end
end

redef class AReturnExpr
	redef fun accept_printer(v)
	do
		v.write("return ")
		v.enter_visit(n_expr)
	end
end

redef class ABreakExpr
	redef fun accept_printer(v) do v.write("break")
end
redef class AContinueExpr
	redef fun accept_printer(v) do v.write("continue")
end

redef class AAssertExpr
	redef fun accept_printer(v)
	do
		v.write("assert ")
		v.enter_visit(n_expr)
	end
end

redef class ASelfExpr
	redef fun accept_printer(v) do v.write("self")
end

redef class AImplicitSelfExpr
	redef fun accept_printer(v) do end
end

redef class ATrueExpr
	redef fun accept_printer(v) do v.write("true")
end

redef class AFalseExpr
	redef fun accept_printer(v) do v.write("false")
end

redef class ANullExpr
	redef fun accept_printer(v) do v.write("null")
end

redef class AIntegerExpr
	redef fun accept_printer(v)
	do
		v.write(value.to_s)
	end
end

redef class AStringExpr
	redef fun accept_printer(v)
	do
		v.write("\"")
		v.write(value.escape_to_nit)
		v.write("\"")
	end
end
