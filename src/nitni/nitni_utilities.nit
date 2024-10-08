# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Support utilities to use nitni and the FFI
import nitni_base

redef class MMethod
	# Build a C function name for the FFI implementation (uses friendly naming).
	# * On a specific static receiver type `recv_mtype`
	# * In referene to the module `from_module` (used for type resolving and as a possible prefix)
	# * Has a possible `suffix` to the method name (may be "__super", "__impl", null, etc.)
	# * With a specified length indicating whether it uses the sort name or the long name with
	#   the module name as prefix
	fun build_cname(recv_mtype: MClassType, from_mmodule: MModule, suffix: nullable String, length: SignatureLength): String
	do
		var cname
		if self.is_init then
			if self.name == "init" or self.name == "new" or self.name == "defaultinit" then
				cname = "new_{recv_mtype.mangled_cname}"
			else
				cname = "new_{recv_mtype.mangled_cname}_{self.short_cname}"
			end
		else
			cname = "{recv_mtype.mangled_cname}_{self.short_cname}"
		end

		if suffix != null then cname = "{cname}{suffix}"

		if length.long then cname = "{from_mmodule.c_name}___{cname}"

		return cname
	end

	# Build a C function signature for the FFI implementation (uses friendly naming).
	# * On a specific static receiver type `recv_mtype`
	# * In referene to the module `from_module` (used for type resolving and as a possible prefix)
	# * Has a possible `suffix` to the method name (may be "__super", "__impl", null, etc.)
	# * With a specified length indicating whether it uses the sort name or the long name with
	#   the module name as prefix
	# * The `call_context` identifying which types and casts to use (see `CallContext` and its instances)
	fun build_csignature(recv_mtype: MClassType, from_mmodule: MModule, suffix: nullable String, length: SignatureLength, call_context: CallContext): String
	do
		var mmethoddef = lookup_first_definition(from_mmodule, recv_mtype)
		var signature = mmethoddef.msignature
		assert signature != null

		var creturn_type
		if self.is_init then
			creturn_type = call_context.name_mtype(recv_mtype)
		else if signature.return_mtype != null then
			var ret_mtype = signature.return_mtype
			ret_mtype = ret_mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			creturn_type = call_context.name_mtype(ret_mtype)
		else
			creturn_type = "void"
		end

		var cname = build_cname(recv_mtype, from_mmodule, suffix, length)

		var cparams = new List[String]
		if not self.is_init then
			cparams.add( "{call_context.name_mtype(recv_mtype)} self" )
		end
		for p in signature.mparameters do
			var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			cparams.add( "{call_context.name_mtype(param_mtype)} {p.name}" )
		end

		return "{creturn_type} {cname}( {cparams.join(", ")} )"
	end

	# Build a C function call for the FFI implementation (uses friendly naming).
	# * On a specific static receiver type `recv_mtype`
	# * In referene to the module `from_module` (used for type resolving and as a possible prefix)
	# * Has a possible `suffix` to the method name (may be "__super", "__impl", null, etc.)
	# * With a specified length indicating whether it uses the sort name or the long name with
	#   the module name as prefix
	# * The `call_context` identifying which types and casts to use (see `CallContext` and its instances)
	# * Possible suffix to the parameters `param_suffix`
	fun build_ccall(recv_mtype: MClassType, from_mmodule: MModule, suffix: nullable String, length: SignatureLength, call_context: CallContext, param_suffix: nullable String): String
	do
		if param_suffix == null then param_suffix = ""

		var mmethoddef = lookup_first_definition(from_mmodule, recv_mtype)
		var signature = mmethoddef.msignature
		assert signature != null

		var return_mtype = null
		if self.is_init then
			return_mtype = recv_mtype
		else if signature.return_mtype != null then
			return_mtype = signature.return_mtype
			return_mtype = return_mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
		end

		var cname = build_cname(recv_mtype, from_mmodule, suffix, length)

		var cparams = new List[String]
		if not self.is_init then
			cparams.add(call_context.cast_to(recv_mtype, "self{param_suffix}"))
		end

		for p in signature.mparameters do
			var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			cparams.add(call_context.cast_to(param_mtype, "{p.name}{param_suffix}"))
		end

		var joined_cparams = cparams.join(", ")
		var ccall = "{cname}({joined_cparams})"
		if return_mtype != null then
			return "return {call_context.cast_from(return_mtype, ccall)};"
		else
			return "{ccall};"
		end
	end
end

# Describes the context of the code to be generated by `build_ccall` and `build_csignature`
class CallContext
	# Which C name to use for type `mtype`
	fun name_mtype(mtype: MType): String do return mtype.cname_blind

	# How to cast a returned C variable named `name` of type `mtype`
	fun cast_from(mtype: MType, name: String): String do return name

	# How to cast a C argument named `name` of type `mtype`
	fun cast_to(mtype: MType, name: String): String do return name
end

# Call context to use
fun internal_call_context: CallContext do return new CallContext
fun long_signature: SignatureLength do return once new SignatureLength(true)
fun short_signature: SignatureLength do return once new SignatureLength(false)

# Length of the signature of a C function (long version hase the module name as prefix)
class SignatureLength
	private var long: Bool

	# TODO: private init because singleton class.
end
