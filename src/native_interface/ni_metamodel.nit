# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

# Information relevant to the native interface
module ni_metamodel

import compiling
import primitive_info
import utils

redef class MMType

	# Friendly name used by frontier and custom code.
	# It's mainly the nit class name or the primitive type when available.
	fun friendly_extern_name: String
	do
		var pi = local_class.primitive_info
		if is_nullable then
			return "nullable_{local_class.name.to_s}"
		else if pi == null then
			return local_class.name.to_s
		else
			return pi.cname
		end
	end

	fun mangled_name: String
	do
		var pi = local_class.primitive_info
		if is_nullable then
			return "nullable_{local_class.name.to_s}"
		else
			return local_class.name.to_s
		end
	end

	# Return the expression to convert this type from its native version.
	fun from_native( name : String ) : String
	do
		if ( local_class.primitive_info != null or local_class.global.is_extern ) and
			not is_nullable then
			return boxtype( name )
		else
			var getter = "{name}->ref.val"

			return boxtype( getter )
		end
	end

	# Return the expression to convert and assign this type to its
	# friendly/native version.
	fun assign_to_friendly( native_name, nit_name : String ) : String
	do
		if ( local_class.primitive_info != null or local_class.global.is_extern ) and
			not is_nullable then
			return "{native_name} = {unboxtype( nit_name )}"
		else
			return "{native_name}->ref.val = {unboxtype( nit_name )}"
		end
	end

	# Return the expression to convert and assign this type to its
	# generated C version, from friendly/native.
	fun assign_from_friendly( nit_name, native_name : String ) : String
	do
		if ( local_class.primitive_info != null or local_class.global.is_extern ) and
			not is_nullable then # int, float, point/void* ...
			return "{nit_name} = {boxtype(native_name)}"
		else
			return "{nit_name} = {native_name}->ref.val"
		end
	end

	fun uses_nitni_ref : Bool do return local_class.primitive_info == null or is_nullable

	fun friendly_null_getter : String
	do
		return "null_{as_notnull.mangled_name}"
	end
	
	fun local_friendly_null_getter_from( m : MMModule ) : String
	do
		return "{m.to_s}_{friendly_null_getter}"
	end
end

redef class MMMethod
	# Local friendly name from a given module.
	# Used to avoid conflits between modules.
	fun local_friendly_name_from( m : MMModule, local_class : MMLocalClass ) : String
	do
		return "{m.to_s}_{friendly_extern_name(local_class)}"
	end

	fun friendly_super_cname : String
	do
		return "{friendly_extern_name(local_class)}___super"
	end

	fun local_friendly_super_name_from( m : MMModule ) : String
	do
		return "{m.to_s}_{friendly_super_cname}"
	end

	private fun friendly_cparams( local_class : MMLocalClass ) : List[ String ]
	do
		var params = new List[String]

		if not global.is_init then
			params.add( "{local_class.get_type.friendly_extern_name} recv" )
		end

		for p in signature.params do
			params.add( "{p.mmtype.friendly_extern_name} {p.name}" )
		end

		return params
	end

	private fun csignature_with_suffix( suffix : String, local_class : MMLocalClass ) : String
	do
		var name = "{friendly_extern_name(local_class)}{suffix}"

		return csignature_with_name( name, local_class )
	end

	private fun csignature_with_name( name : nullable String, local_class : MMLocalClass ) : String
	do
		var s = new FlatBuffer

		# return type
		if signature.return_type != null then
			s.append( "{signature.return_type.friendly_extern_name} " )
		else if global.is_init then
			s.append( "{local_class.get_type.friendly_extern_name} " )
		else
			s.append( "void " )
		end

		# function name
		if name == null then
			s.append( friendly_extern_name( local_class ) )
		else
			s.append( name )
		end

		# params
		var params = friendly_cparams( local_class )

		s.append( "( {params.join( ", " )} )" )

		return s.to_s
	end

	fun friendly_csignature( local_class : MMLocalClass ) : String
	do
		return csignature_with_name( null, local_class )
	end

	fun frontier_csignature_from( m : MMModule, local_class : MMLocalClass ) : String
	do
		return csignature_with_name( local_friendly_name_from(m, local_class), local_class )
	end

	fun friendly_super_csignature : String
	do
		return csignature_with_suffix( "___super", local_class )
	end

	fun frontier_super_csignature_from( m : MMModule ) : String
	do
		return csignature_with_name( local_friendly_super_name_from(m), local_class )
	end

	fun impl_csignature : String
	do
		return csignature_with_suffix( "___impl", local_class )
	end

	# below is for frontier only
	private fun cparams : List[ String ]
	do
		var params = new List[String]
		if not global.is_init then params.add( "val_t recv" )
		for p in signature.params do params.add( "val_t {p.name}" )
		return params
	end

	fun out_csignature : String
	do # boxed types
		var s = new FlatBuffer

		# return type
		if signature.return_type != null or global.is_init then
			s.append( "val_t " )
		else
			s.append( "void " )
		end

		# function name
		if global.is_init then
			s.append( "NEW_{local_class}_{cname}" )
		else
			s.append( "{friendly_extern_name(local_class)}___out" )
		end

		# params
		s.append( "( {cparams.join( ", " )} )" )

		return s.to_s
	end
end

redef class MMImportedCast

	var in_name : String = "value"

	fun as_friendly_extern_name : String do
		if is_about_nullable_only then
			if is_not_null_to_nullable  then # to null
				# nullable_Object Object_as_nullable( Object o )
				return "{from.mangled_name}_as_nullable"
			else if is_nullable_to_not_null then # from null
				# Object Object_as_not_null( nullable_Object o )
				return "{to.mangled_name}_as_not_null"
			else
				abort
			end
		else # inter types
			# String Object_as_String( Object o )
			return "{from.mangled_name}_as_{to.mangled_name}"
		end
	end

	fun as_local_cname( m : MMModule ) : String do
		return "{m.to_s}_{as_friendly_extern_name}"
	end

	fun as_local_csignature( m : MMModule ) : String
	do
		return "{to.friendly_extern_name} {as_local_cname( m )}( {from.friendly_extern_name} {in_name} )"
	end

	fun as_friendly_csignature : String
	do
		return "{to.friendly_extern_name} {as_friendly_extern_name}( {from.friendly_extern_name} {in_name} )"
	end

	fun is_a_friendly_extern_name : String do
		if is_about_nullable_only then
			if is_not_null_to_nullable then # to null
				abort # would always be true
			else if is_nullable_to_not_null then # from null
				# Object_is_null( nullable_Object o )
				# is opposite from others
				return "{to.mangled_name}_is_null"
			else
				abort
			end
		else # inter types
			# Object_is_a_String( Object o )
			return "{from.mangled_name}_is_a_{to.mangled_name}"
		end
	end

	fun is_a_local_cname( m : MMModule ) : String do
		return "{m.to_s}_{is_a_friendly_extern_name}"
	end

	# Signature of function to check if an object of the "from" type is of
	# the "to" type.
	fun is_a_local_csignature( m : MMModule ) : String
	do
		return "int {is_a_local_cname( m )}( {from.friendly_extern_name} {in_name} )"
	end

	fun is_a_friendly_csignature : String
	do
		return "int {is_a_friendly_extern_name}( {from.friendly_extern_name} {in_name} )"
	end

	redef fun hash
	do
		return from.hash+to.hash
	end
end
