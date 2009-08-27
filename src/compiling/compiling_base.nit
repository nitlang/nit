# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Common things for NIT compilation and C generation
package compiling_base

import mmloader
private import utils
import primitive_info
import program

redef class ToolContext
	readable writable var _global: Bool = false
	readable writable var _compdir: nullable String = null
	readable writable var _clibdir: nullable String = null
	readable writable var _bindir: nullable String = null
	readable writable var _output_file: nullable String = null
	readable writable var _boost: Bool = false
	readable writable var _no_cc: Bool = false
	readable writable var _ext_prefix: String = ""
end

# Class used to generate files.
# Note that in fact it is not a visitor.
# Note also that this class is unefficient and poorly designed thus requires love.
class CompilerVisitor
	# Add a line in the current declaration block
	fun add_decl(s: String...)
	do
		add_line_to(_ctx.decls, s)
	end

	# Add a line in the current instr block
	fun add_instr(s: String...)
	do
		add_line_to(_ctx.instrs, s)
	end

	fun add_line_to(a: Array[String], s: Array[String])
	do
		if _indent_level >= 8 then
			a.add("\t\t")
		else
			for i in [0.._indent_level[ do
				a.add("  ")
			end
		end
		for i in s do
			a.add(i)
		end
		a.add("\n")
	end

	# Add a assignment between a variable and an expression
	fun add_assignment(v: String, s: String)
	do
		if v != s then
			add_instr(v, " = ", s, ";")
		end
	end

	# C outputs written outside the current C function.
	readable writable var _out_contexts: Array[CContext] = new Array[CContext]

	# Return a unique new number for the instance
	fun new_number: Int
	do
		var res = _number_cpt
		_number_cpt = res + 1
		return res
	end
	# next number for new_number
	var _number_cpt: Int = 0

	# Add an indent level.
	# New decl and instr will be indented.
	fun indent do _indent_level += 1

	# Remove an indent level.
	fun unindent
	do
		_indent_level -= 1
		if _indent_level < 0 then _indent_level = 0
	end

	# Return a big string containing all decl and instr
	redef fun to_s
	do
		var out = new Array[String]
		out.append(_ctx.decls)
		out.append(_ctx.instrs)
		return out.to_s
	end

	# The processed module
	readable var _module: MMModule

	# Where instr and decl are stored
	readable writable var _ctx: CContext = new CContext

	# The current indent lever
	readable writable var _indent_level: Int = 0

	# The program we are compiling
	readable var _program: Program

	# Create a new CompilerVisitor based on a module
	init(module: MMModule, p: Program)
	do
		_module = module
		_program = p
	end
end

# Where instr and decl are stored for a module
# Note that this class is as badly designed as CompilerVisitor
class CContext
	readable var _decls: Array[String] = new Array[String] 
	readable var _instrs: Array[String] = new Array[String]

	fun append(c: CContext)
	do
		_instrs.append(c.decls)
		_instrs.append(c.instrs)
	end
	
	fun merge(c: CContext)
	do
		_decls.append(c.decls)
		_instrs.append(c.instrs)
	end

	init do end
end

redef class MMGlobalProperty
	# C symbol refering a method inocation
	fun meth_call: String
	do
		return "CALL_{intro.cname}"
	end

	# C symbol refering an attribure access
	fun attr_access: String
	do
		return "ATTR_{intro.cname}"
	end
end

redef class MMGlobalClass
	# C symbol refering the identifier of the class
	fun id_id: String
	do
		return "ID_{intro.name}"
	end

	# C symbol refering the color of the class (for subtype tests)
	fun color_id: String
	do
		return "COLOR_{intro.name}"
	end

	# C symbol refering the init table position of the class (for constructor linearization)
	fun init_table_pos_id: String
	do
		return "INIT_TABLE_POS_{intro.name}"
	end
end

redef class MMLocalProperty
	# Cacher result of cname
	var _cname_cache: nullable String

	# The mangled name of the method
	fun cname: String
	do
		var cname = _cname_cache
		if cname == null then
			cname = cmangle(module.name, local_class.name, name)
			_cname_cache = cname
		end
		return cname
	end

	# C macro used to get the function for the call of a super property
	fun super_meth_call: String
	do
		return "CALL_SUPER_{cname}"
	end
end

