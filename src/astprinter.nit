# This file is part of NIT ( http://www.nitlanguage.org ).
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

import typing
import phase
intrude import parser
import literal

private class ASTPrinterVisitor
	super Visitor
	redef fun visit(node)
	do
		node.accept_printer(self)
	end

	var out = new List[String]
	var indent_level = 0

	var has_eol = true

	fun eol
	do
		if has_eol then return
		out.add("\n")
		for x in [0..indent_level[ do out.add("\t")
		has_eol = true
	end

	var last_current: nullable ANode

	fun write(s: String)
	do
		if last_current != current_node then
			last_current = current_node
			var l = current_node._location
			if l != null then
				eol
				out.add(s)
				out.add("\t# {l.colored_line("0;32").split_with('\n').first}")
				has_eol = false
				eol
				return
			end
		end
		out.add(s)
		has_eol = false
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

redef class ABlockExpr
	redef fun accept_printer(v)
	do
		for x in n_expr do
			v.enter_visit(x)
			v.eol
		end
	end
end

redef class AIntExpr
	redef fun accept_printer(v)
	do
		v.write(value.to_s)
	end
end

redef class ANewExpr
	redef fun accept_printer(v)
	do
		v.write("new {mtype.as(not null)}.{mproperty.as(not null)}")
		if not n_args.n_exprs.is_empty then
			v.write("(")
			v.indent
			var is_first = true
			for a in n_args.n_exprs do
				if is_first then is_first = false else v.write(",")
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
		v.enter_visit(n_expr)
		v.write(".{mproperty.name}")
		if not raw_arguments.is_empty then
			v.write("(")
			v.indent
			var is_first = true
			for a in raw_arguments.as(not null) do
				if is_first then is_first = false else v.write(",")
				v.enter_visit(a)
			end
			v.unindent
			v.write(")")
		end
	end
end

redef class AVarExpr
	redef fun accept_printer(v)
	do
		var name = variable.name
		if name == "" then name = "t{variable.object_id}"
		v.write(name)
	end
end

redef class AVarAssignExpr
	redef fun accept_printer(v)
	do
		var name = variable.name
		if name == "" then name = "t{variable.object_id}"
		v.write("{name} = ")
		v.indent
		v.enter_visit(n_value)
		v.unindent
	end
end
