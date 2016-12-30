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

# Execute FFI code by creating and loading shared libraries
#
# Triggers the compilation of the library when needed.
module dynamic_loading_ffi is ldflags "-ldl"

import naive_interpreter

import on_demand_compiler
import ffi

in "C Header" `{
	#include <dlfcn.h>
	#include <inttypes.h>

	// C structure behind `CallArg`
	typedef union nit_call_arg {
		long value_Int;
		int value_Bool;
		uint32_t value_Char;
		uint8_t value_Byte;
		int8_t value_Int8;
		int16_t value_Int16;
		uint16_t value_UInt16;
		int32_t value_Int32;
		uint32_t value_UInt32;
		double value_Float;
		void* value_Pointer;
	} nit_call_arg;

	// Signature shared by all entry points
	typedef int (*nit_foreign_lib_entry)(int, nit_call_arg*, nit_call_arg*);
`}

# Single cell in the list of arguments sent to foreign code (and received)
#
# Each cell can hold all primitive types and pointers to Nit class instances.
#
# Since this is a C pointer, it acts as both a single cell and an array.
private extern class CallArg `{ nit_call_arg* `}

	# Initialize an array of `CallArg` of `length` elements
	new (length: Int) `{ return calloc(length, sizeof(nit_call_arg)); `}

	# Get the element at `index` after `self`
	fun [](index: Int): CallArg `{ return self + index; `}

	# The `Int` held by this cell
	fun int: Int `{ return self->value_Int; `}

	# The `Int` held by this cell
	fun int=(value: Int) `{ self->value_Int = value; `}

	# The `Bool` held by this cell
	fun bool: Bool `{ return self->value_Bool; `}

	# The `Bool` held by this cell
	fun bool=(value: Bool) `{ self->value_Bool = value; `}

	# The `Char` held by this cell
	fun char: Char `{ return self->value_Char; `}

	# The `Char` held by this cell
	fun char=(value: Char) `{ self->value_Char = value; `}

	# The `Byte` held by this cell
	fun byte: Byte `{ return self->value_Byte; `}

	# The `Byte` held by this cell
	fun byte=(value: Byte) `{ self->value_Byte = value; `}

	# The `Int` held by this cell
	fun int8: Int8 `{ return self->value_Int8; `}

	# The `Int` held by this cell
	fun int8=(value: Int8) `{ self->value_Int8 = value; `}

	# The `Int` held by this cell
	fun int16: Int16 `{ return self->value_Int16; `}

	# The `Int` held by this cell
	fun int16=(value: Int16) `{ self->value_Int16 = value; `}

	# The `Int` held by this cell
	fun uint16: UInt16 `{ return self->value_UInt16; `}

	# The `Int` held by this cell
	fun uint16=(value: UInt16) `{ self->value_UInt16 = value; `}

	# The `Int` held by this cell
	fun int32: Int32 `{ return self->value_Int32; `}

	# The `Int` held by this cell
	fun int32=(value: Int32) `{ self->value_Int32 = value; `}

	# The `Int` held by this cell
	fun uint32: UInt32 `{ return self->value_UInt32; `}

	# The `Int` held by this cell
	fun uint32=(value: UInt32) `{ self->value_UInt32 = value; `}

	# The `Float` held by this cell
	fun float: Float `{ return self->value_Float; `}

	# The `Float` held by this cell
	fun float=(value: Float) `{ self->value_Float = value; `}

	# The `Pointer` held by this cell
	fun pointer: Pointer `{ return self->value_Pointer; `}

	# The `Pointer` held by this cell
	fun pointer=(value: Pointer) `{ self->value_Pointer = value; `}

	# The `Instance` held by this cell
	fun instance: Instance is light_ffi `{ return (Instance)self->value_Pointer; `}

	# The `Instance` held by this cell
	fun instance=(value: Instance) is light_ffi `{ self->value_Pointer = value; `}

	# The `CString` held by this cell
	fun c_string: CString `{ return (char*)self->value_Pointer; `}

	# Set the content of this cell according to `static_type`
	#
	# Opposite of `to_instance`.
	fun from_static_type(value: Instance, static_type: MType)
	do
		if static_type.name == "Int" then
			assert value isa PrimitiveInstance[Int]
			self.int = value.val
		else if static_type.name == "Bool" then
			assert value isa PrimitiveInstance[Bool]
			self.bool = value.val
		else if static_type.name == "Char" then
			assert value isa PrimitiveInstance[Char]
			self.char = value.val
		else if static_type.name == "Byte" then
			assert value isa PrimitiveInstance[Byte]
			self.byte = value.val
		else if static_type.name == "Int8" then
			assert value isa PrimitiveInstance[Int8]
			self.int8 = value.val
		else if static_type.name == "Int16" then
			assert value isa PrimitiveInstance[Int16]
			self.int16 = value.val
		else if static_type.name == "UInt16" then
			assert value isa PrimitiveInstance[UInt16]
			self.uint16 = value.val
		else if static_type.name == "Int32" then
			assert value isa PrimitiveInstance[Int32]
			self.int32 = value.val
		else if static_type.name == "UInt32" then
			assert value isa PrimitiveInstance[UInt32]
			self.uint32 = value.val
		else if static_type.name == "Float" then
			assert value isa PrimitiveInstance[Float]
			self.float = value.val
		else if static_type.name == "CString" then
			assert value isa PrimitiveInstance[CString]
			self.pointer = value.val
		else if static_type isa MClassType and static_type.mclass.kind == extern_kind then
			assert value isa PrimitiveInstance[Pointer] else print value.class_name
			self.pointer = value.val
		else
			self.instance = value
		end
	end

	# Get the content of this cell as an `Instance` of the `static_type`
	#
	# Opposite of `from_static_type`.
	fun to_instance(static_type: MType, v: NaiveInterpreter): Instance
	do
		var name = static_type.name
		if name == "Int" then
			return v.int_instance(self.int)
		else if name == "Bool" then
			return if self.bool then
				v.true_instance
			else v.false_instance
		else if name == "Char" then
			return v.char_instance(self.char)
		else if name == "Byte" then
			return v.byte_instance(self.byte)
		else if name == "Int8" then
			return v.int8_instance(self.int8)
		else if name == "Int16" then
			return v.int16_instance(self.int16)
		else if name == "UInt16" then
			return v.uint16_instance(self.uint16)
		else if name == "Int32" then
			return v.int32_instance(self.int32)
		else if name == "UInt32" then
			return v.uint32_instance(self.uint32)
		else if name == "Float" then
			return v.float_instance(self.float)
		else if name == "CString" then
			var instance = new PrimitiveInstance[CString](static_type, self.c_string)
			v.init_instance_primitive instance
			return instance
		else if static_type isa MClassType and static_type.mclass.kind == extern_kind then
			# We tag it with the most precise known type
			var instance = new PrimitiveInstance[Pointer](static_type, self.pointer)
			v.init_instance_primitive instance
			return instance
		else
			return self.instance
		end
	end
end

# Handle to foreign code library
private extern class ForeignCodeLib
	# Open and load the library at `path`
	new dlopen(path: CString) `{
		return dlopen(path, RTLD_LOCAL | RTLD_NOW);
	`}

	# Find the `ForeignCodeEntry` at `symbol_name`
	fun dlsym(symbol_name: CString): ForeignCodeEntry `{
		return dlsym(self, symbol_name);
	`}
end

private fun dlerror: CString `{ return dlerror(); `}

# Handle to an implementation function in a `ForeignCodeLib`
private extern class ForeignCodeEntry`{ nit_foreign_lib_entry `}

	# Invoke the implementation function by passing `args` and receive the return value
	fun call(argc: Int, args, ret: CallArg): Bool `{
		return ((nit_foreign_lib_entry)self)(argc, args, ret);
	`}
end

redef class AMethPropdef
	# Handle to the entrypoint of this method in the foreign code library
	private var foreign_entry_cache: nullable ForeignCodeEntry = null

	redef fun call_extern(v, mpropdef, args, frame)
	do
		# Fallback the default error if this method is not supported
		if not supported_by_dynamic_ffi then return super

		var entry = foreign_entry_cache
		if entry == null then
			# Get handle to foreign code lib
			var amodule = v.modelbuilder.mmodule2node(mpropdef.mclassdef.mmodule)
			assert amodule != null

			var lib = amodule.foreign_code_lib(v)
			if lib == null then return v.error_instance

			# Get handle to implementation function
			entry = lib.dlsym(mpropdef.foreign_lib_entry_cname.to_cstring)
			if entry.address_is_null then
				print mpropdef.foreign_lib_entry_cname
				v.fatal "FFI Error: Cannot find method {mpropdef.name} in foreign code library."
				return v.error_instance
			end

			foreign_entry_cache = entry
		end

		# Prepare to send args to foreign code lib
		var is_init = mpropdef.mproperty.is_init
		if is_init then args.shift
		var native_args_length = args.length

		var native_args = new CallArg(args.length)
		var a = 0
		if not is_init then
			var arg = args[a]
			var native_arg = native_args[a]
			native_arg.from_static_type(arg, mpropdef.mclassdef.mclass.mclass_type)
			a += 1
		end
		for param in mpropdef.msignature.mparameters do
			var arg = args[a]
			var native_arg = native_args[a]
			native_arg.from_static_type(arg, param.mtype)
			a += 1
		end

		# Allocate memory for the return value
		var native_return = new CallArg(1)
		var error = entry.call(native_args_length, native_args, native_return)

		if error then
			v.fatal "FFI Error: Native code library reported an error"
			return null
		end

		# Get the result
		var return_mtype = mpropdef.msignature.return_mtype
		if is_init then return_mtype = mpropdef.mclassdef.mclass.mclass_type

		var return_value
		if return_mtype == null then
			return_value = null
		else
			return_value = native_return.to_instance(return_mtype, v)
		end

		native_args.free
		native_return.free

		return return_value
	end
end

redef class AModule

	private var foreign_code_lib_cache: nullable ForeignCodeLib = null

	# Handle to the external library with FFI code
	private fun foreign_code_lib(v: NaiveInterpreter): nullable ForeignCodeLib
	do
		var lib = foreign_code_lib_cache
		if lib != null then return lib

		var mmodule = mmodule
		assert mmodule != null

		var foreign_code_lib_path = v.foreign_code_lib_path(mmodule)

		# Compile lib
		compile_foreign_lib v

		lib = new ForeignCodeLib.dlopen(foreign_code_lib_path.to_cstring)
		if lib.address_is_null then
			v.fatal "FFI Error: Cannot load foreign code library for {mmodule.name}: {dlerror.to_s}"
			return null
		end

		foreign_code_lib_cache = lib
		return lib
	end
end
