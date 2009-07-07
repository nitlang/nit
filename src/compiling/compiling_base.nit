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

import syntax
private import utils

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
	fun add_decl(s: String)
	do
		if _indent_level >= 8 then
			_ctx.decls.add("\t\t" + s)
		else
			_ctx.decls.add("  " * _indent_level + s)
		end
	end

	# Add a line in the current instr block
	fun add_instr(s: String)
	do
		if _indent_level >= 8 then
			_ctx.instrs.add("\t\t" + s)
		else
			_ctx.instrs.add("  " * _indent_level + s)
		end
	end

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
		out.add("")
		return out.join("\n")
	end

	# The processed module
	readable var _module: MMModule

	# Where instr and decl are stored
	readable writable var _ctx: CContext = new CContext

	# The current indent lever
	readable writable var _indent_level: Int = 0

	# The ToolContext info
	readable var _tc: ToolContext

	# Create a new CompilerVisitor based on a module
	init(module: MMModule, tc: ToolContext)
	do
		_module = module
		_tc = tc
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

redef class MMLocalClass
	# Cached primitive_info result
	var _primitive_info_cache: nullable PrimitiveInfo = null

	# If primitive_info result cached?
	var _primitive_info_b: Bool = false

	# Return the primitive information of the class.
	# Return null if the class is not primitive
	# FIXME: Only here since there is no universal type yet
	fun primitive_info: nullable PrimitiveInfo
	do
		if _primitive_info_b == true then return _primitive_info_cache

		var ctypes = once primitive_ctypes
		if ctypes.has_key(name) then
			_primitive_info_cache = ctypes[name]
			_primitive_info_b = true
			return _primitive_info_cache
		end
		var i = ctypes.iterator
		while i.is_ok do
			var n = i.key
			if module.has_global_class_named(n) then
				var c = module.class_by_name(n)
				if cshe < c then
					_primitive_info_cache = i.item
					_primitive_info_b = true
					return _primitive_info_cache
				end
			end
			i.next
		end
		_primitive_info_b = true
		return null
	end

	# Static information of primitive types
	private fun primitive_ctypes: HashMap[Symbol, PrimitiveInfo]
	do
		var res = new HashMap[Symbol, PrimitiveInfo]
		var pnames = ["Int",    "Char", "Bool", "Float", "NativeString", "NativeArray", "Pointer"]
		var tagged = [true,     true,   true,   false,   false,          false,         false]
		var cnames = ["bigint", "char", "int",  "float", "char *",       "val_t *",     "void *"]
		for i in [0..pnames.length[ do
			var n = pnames[i].to_symbol
			var pi = new PrimitiveInfo(n, tagged[i], cnames[i])
			res[n] = pi
		end
		return res
	end
end

# Information about a primitive class
class PrimitiveInfo
	# The name of the class
	readable var _name: Symbol

	# Is the class tagged (aka not boxed)
	readable var _tagged: Bool

	# The corresponding c type for the primitive value
	readable var _cname: String

	private init(n: Symbol, t: Bool, c: String)
	do
		_name = n
		_tagged = t
		_cname = c
	end
end

redef class MMType
	# The corresponding c type
	fun cname: String
	do
		var pi = local_class.primitive_info
		if pi == null then
			return "val_t"
		else
			return pi.cname
		end
	end

	# The default c value for uninitialized types.
	# Return "null" for non primitive types and something more specific for primitive types
	fun default_cvalue: String
	do
		var pi = local_class.primitive_info
		if pi != null and pi.tagged then
			return "TAG_{local_class.name}(({pi.cname})0)"
		else
			return "NIT_NULL"
		end
	end

	# Box (or tag) a primitive value
	# Is identity if not primitive
	fun boxtype(s: String): String
	do
		var pi = local_class.primitive_info
		if pi == null then
			return s
		else if pi.tagged then
			return "TAG_{local_class.name}({s})"
		else
			return "BOX_{local_class.name}({s})"
		end
	end

	# Unbox (or untag) a primitive value
	# Is identity if not primitive
	fun unboxtype(s: String): String
	do
		var pi = local_class.primitive_info
		if pi == null then
			return s
		else if pi.tagged then
			return "UNTAG_{local_class.name}({s})"
		else
			return "UNBOX_{local_class.name}({s})"
		end
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

