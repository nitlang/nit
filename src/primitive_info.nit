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
package primitive_info

#FIXME Split this package into 2: one in metamodel and one in compiling

import metamodel

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
		var pnames = ["Int",    "Char", "Bool", "Float", "NativeString", "Pointer"]
		var tagged = [true,     true,   true,   false,   false,          false]
		var cnames = ["bigint", "char", "int",  "float", "char *",       "void *"]
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

	# Is the type tagged?
	fun is_tagged: Bool
	do
		if is_nullable then return false
		var pi = local_class.primitive_info
		return pi != null and pi.tagged
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

