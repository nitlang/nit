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

# Information and tools relevant to the frontier files
module frontier

import metamodel

import ni_tools
import ni_metamodel

import syntax # FIXME: to remove since it breaks modularity

# Transitive variable through the frontier file
# Represents a variable going from Nit to C or from C to Nit
abstract class NiVariable
	fun ni_from_name : String is abstract
	fun ni_to_name : String is abstract
	fun ni_type : MMType is abstract

	# needs to be boxed or unboxed
	# anything using the GC
	fun needs_preparation : Bool
	do
		return ni_type.local_class.primitive_info == null or
			not ni_type.local_class.primitive_info.tagged or
			ni_type.is_nullable
	end

	# prepare variable to callback to Nit
	fun prepare_for_nit( fc : FunctionCompiler )
	do
		if needs_preparation then
			fc.decls.add( "val_t {ni_to_name};\n" )
			fc.exprs.add( "{ni_type.assign_from_friendly( ni_to_name, ni_from_name )};\n" )
		end
	end

	fun prepare_for_c( fc : FunctionCompiler )
	do
		if needs_preparation then
			ni_type.compile_new_local_ref( ni_to_name, fc, not self isa ReturnVariable ) # TODO
			fc.exprs.add( "{ni_type.assign_to_friendly( ni_to_name, ni_from_name )};\n" )
		end
	end

	# format of the variable to callback to Nit
	fun as_arg_to_nit : String
	do
		if needs_preparation then
			return ni_to_name
		else if ( ni_type.local_class.primitive_info != null or ni_type.local_class.global.is_extern ) and
			not ni_type.is_nullable then # int, float, point/void* ...
			return ni_type.boxtype(ni_from_name)
		else
			return "{ni_from_name}->ref.val"
		end
	end

	# format of the variable to call C implementation functions
	fun as_arg_to_c : String
	do
		if needs_preparation then
			return ni_to_name
		else
			return ni_type.unboxtype( ni_from_name )
		end
	end
end

redef class MMParam
	super NiVariable

	redef fun ni_from_name do return name.to_s
	redef fun ni_to_name do return "trans___{name}"
	redef fun ni_type do return mmtype
end

class ReceiverVariable
	super NiVariable

	redef fun ni_from_name do return "recv"
	redef fun ni_to_name do return "trans_recv"

	redef var ni_type : MMType
	init ( t : MMType ) do ni_type = t
end

class ReturnVariable
	super NiVariable

	redef fun ni_from_name do return "orig_return"
	redef fun ni_to_name do return "trans_return"

	redef var ni_type : MMType
	init ( t : MMType ) do ni_type = t

	# used only by friendly callbacks to Nit
	redef fun prepare_for_c( fc )
	do
		fc.decls.add( "val_t {ni_from_name};\n" )
		ni_type.compile_new_local_ref( ni_to_name, fc, true )
	end
	redef fun prepare_for_nit( fc )
	do
		ni_type.compile_new_local_ref( ni_from_name, fc, false )
		fc.decls.add( "val_t {ni_to_name};\n" )
	end
end

redef class MMSrcModule
	fun compile_frontier( v : FrontierVisitor )
	do
		# assumes is extern hybrid (verified by caller)

		v.body.add( "#include \"{name}._nitni.h\"\n" )

		# guard
		v.header_top.add( "#include <nit_common.h>\n" )
		v.header_top.add( "#include \"{v.cprogram.module_header_name(self)}\"\n" )

		var guard_name = "{name.to_s.to_upper}_NITNI_H"
		v.header_top.add( "#ifndef {guard_name}\n" )
		v.header_top.add( "#define {guard_name}\n\n" )

		# import custom _nit.h file from frontier
		var native_header = "{directory.path}/{name}.nit.h"
		if not native_header.file_exists then # try old style
			native_header = "{directory.path}/{name}_nit.h"
		end
		if native_header.file_exists then
			var path = "..".join_path(native_header).simplify_path
			v.body.add( "#include \"{path}\"\n" )
			v.header.add( "#include \"{path}\"\n" )
		end
		if uses_ffi then
			v.header.add( "#include <{cname}._ffi.h>\n" )
		end

		for local_class in local_classes do
			### extern methods
			for prop in local_class.local_local_properties do
				# if defined of redefined in this module
				# and is extern
				if prop.mmmodule == self and
				   prop isa MMSrcMethod and prop.is_extern then
					prop.compile_extern_to_frontier( v )
				end
			end
		end

		v.compile_cached

		v.header.add( "#endif\n" )
	end
end

redef class MMSrcMethod
	fun compile_extern_to_frontier( v : FrontierVisitor )
	do
		# defines types used in signature
		if signature != null then
			signature.compile_frontier( v )
		end

		for imported in explicit_imports do
			# adds friendly access to property
			v.friendlys.add( imported )

			# defines relevant types
			imported.signature.compile_frontier( v )
		end

		# adds casts and as verifications
		for cast in explicit_casts do
			v.casts.add( cast )

			v.types.add( cast.from.direct_type )
			v.types.add( cast.to.direct_type )
		end

		# adds super
		if need_super then
			compile_super_to_frontier( v )
		end

		# adds function in frontier to be called by pure nit
		compile_out_to_frontier( v )
	end

	# Compiles body and header for the friendly super method.
	# The friendly super method is called by custom native code and
	# calls the generated C code to execute the real implementation.
	# It handles types conversion and verifications.
	fun compile_super_to_frontier( v : FrontierVisitor )
	do
		# header
		v.header.add( "\n/* friendly for super of {full_name} */\n" )
		v.header.add( "{frontier_super_csignature_from( mmmodule )};\n" )

		# Defines a local name for simplier use, as with friendlys.
		v.header.add( "#ifndef {friendly_super_cname}\n" )
		v.header.add( "#define {friendly_super_cname} {local_friendly_super_name_from( mmmodule )}\n" )
		v.header.add( "#endif\n" )

		# body
		v.body.add( "\n/* friendly for super of {full_name} */\n" )
		var fc = new FunctionCompiler( friendly_super_csignature )

		# params
		var params = new Array[NiVariable]
		params.add( signature.recv_ni_variable )
		params.add_all( signature.params )

		# prepare transition
		for p in params do p.prepare_for_nit( fc )

		# extract strings
		var args = new Array[String]
		for p in params do args.add( p.as_arg_to_nit )

		# hook to generated C
		var rnv = signature.return_ni_variable
		var s = new FlatBuffer
		if rnv != null then
			rnv.prepare_for_c( fc )
			s.append( "{rnv.ni_from_name} = " )
		end

		s.append( "{super_meth_call}( {signature.recv_ni_variable.as_arg_to_nit} )" )
		s.append( "( {args.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		# return
		if rnv != null then
			fc.exprs.add( "{rnv.ni_type.assign_to_friendly( rnv.ni_to_name, rnv.ni_from_name )};\n" )
			fc.exprs.add( "return {rnv.ni_to_name};\n" )
		end

		v.body.append( fc.to_writer )
	end

	# Compiles body and header for the out method.
	# The out method is called by generated C code
	# It handles variables conversions and verification
	fun compile_out_to_frontier( v : FrontierVisitor )
	do
		# a simple out method can be optimized
		# To qualify as simple this method must:
		#	- have no explicit imports (including super and casts)
		#	- return nothing or return a primitive to C
		var is_simple = explicit_imports.is_empty and not need_super and
			explicit_casts.is_empty and (signature.return_type == null or
			signature.return_type.local_class.primitive_info != null )

		# header
		v.header.add( "\n/* out/indirect function for {full_name} */\n" )
		v.header.add( "{out_csignature};\n" ) # incoming types boxed

		# body
		v.body.add( "/* out/indirect function for {full_name} */\n" )
		var fc = new FunctionCompiler( out_csignature )

		# params
		var params = new List[NiVariable]
		if not is_init then params.add( signature.recv_ni_variable )
		params.add_all( signature.params )

		var args = new List[String]

		for nv in params do
			if not is_simple or nv.ni_type.local_class.primitive_info != null then
				nv.prepare_for_c( fc )
				args.add( nv.as_arg_to_c )
			else
				args.add( "NULL" )
			end
		end

		# call to impl
		var rnv = signature.return_ni_variable
		if rnv == null and is_init then
			rnv = new ReturnVariable( signature.recv )
		end

		var s = new FlatBuffer
		if rnv != null then
			rnv.prepare_for_nit( fc )
			s.append( "{rnv.ni_from_name} = " )
		end

		s.append( "{extern_name.as(not null)}( {args.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		if rnv != null then
			fc.exprs.add( "{rnv.ni_type.assign_from_friendly( rnv.ni_to_name, rnv.ni_from_name )};\n" )
		end

		fc.exprs.add( "nitni_local_ref_clean(  );\n" )

		# return
		if rnv != null then
			fc.exprs.add( "return {rnv.ni_to_name};\n" )
		end

		v.body.append( fc.to_writer )
	end

end

redef class MMSignature
	var recv_ni_variable : ReceiverVariable
	var return_ni_variable : nullable ReturnVariable
	redef init( params, return_type, recv_type )
	do
		super

		if return_type != null then
			return_ni_variable = new ReturnVariable( return_type )
		else
			return_ni_variable = null
		end
		recv_ni_variable = new ReceiverVariable( recv_type )
	end

	fun compile_frontier( v : FrontierVisitor )
	do
		# receiver
		v.types.add( recv.direct_type )

		# params
		for p in params do v.types.add( p.mmtype.direct_type )

		# return
		var rt = return_type
		if rt != null then
			v.types.add( rt.direct_type )
		end
	end
end

class FrontierVisitor
	# frontier file header

	# header comments, imports, guard and types
	var header_top : Writer = new Writer

	# rest of header
	var header : Writer = new Writer

	# frontier file body
	var body : Writer = new Writer

	# set of imported functions, cached to avoid repetitions
	var friendlys : Set[ MMExplicitImport ] = new HashSet[ MMExplicitImport ]

	# set of relevant types, cached to avoid repetitions
	var types : Set[ MMType ] = new HashSet[ MMType ]

	# set of imported casts and as, cached to avoid repetitions
	var casts : Set[ MMImportedCast ] = new HashSet[ MMImportedCast ]

	var mmmodule : MMModule

	var cprogram : CProgram

	# compiles cached types and callbacks
	fun compile_cached
	do
		# types
		for t in types do t.compile_to_frontier( self )

		# friendlys
		for friendly in friendlys do friendly.compile_friendly_to_frontier( self )

		# casts
		for cast in casts do cast.compile_to_frontier( self )
	end

	fun write_to_files( base_path : String )
	do
		var path = "{base_path}._nitni.h"
		var stream = new OFStream.open( path )
		header_top.write_to_stream( stream )
		header.write_to_stream( stream )
		stream.close

		path = "{base_path}._nitni.c"
		stream = new OFStream.open( path )
		body.write_to_stream( stream )
		stream.close
	end
end

redef class MMImportedCast
	# Defines functions to cast types and verify the type of an object.
	fun compile_to_frontier( v : FrontierVisitor )
	do
		# compile isa check
		if not ( is_about_nullable_only and is_not_null_to_nullable ) then
			v.header.add( "\n/* Type check for {from} with {to} */\n" )
			v.header.add( "{is_a_local_csignature( v.mmmodule )};\n" )

			v.header.add( "#ifndef {is_a_friendly_extern_name}\n" )
			v.header.add( "#define {is_a_friendly_extern_name} {is_a_local_cname( v.mmmodule )}\n" )
			v.header.add( "#endif\n" )

			var fc = compile_is( v.mmmodule )
			v.body.append( fc.to_writer )
		end

		# compile cast itself
		v.header.add( "\n/* Cast for {from} to {to} */\n" )
		v.header.add( "{as_local_csignature( v.mmmodule )};\n" )

		v.header.add( "#ifndef {as_friendly_extern_name}\n" )
		v.header.add( "#define {as_friendly_extern_name} {as_local_cname( v.mmmodule )}\n" )
		v.header.add( "#endif\n" )

		var fc = compile_as( v.mmmodule )
		v.body.append( fc.to_writer )
	end

	# Compiles a function to cast an object to a different type.
	# Verify type and if it is null.
	fun compile_as( m : MMModule ) : FunctionCompiler
	do
		var fc = new FunctionCompiler( as_local_csignature( m ) )

		var out_name = "out"
		var temp_name = "temp"

		fc.decls.add( "val_t {temp_name};\n" )
		to.compile_new_local_ref( out_name, fc, true )

		fc.exprs.add( "{from.assign_from_friendly(temp_name, in_name)};\n" )

		# makes sur it is not null if it cannot be
		if not to.is_nullable then
			compile_check_is_not_null( fc, temp_name )
		end

		# makes sure it's the right type, unless it's only a cast about null
		if not is_about_nullable_only then # inter types
			to.compile_check_isa( fc, temp_name )
		end

		fc.exprs.add( "{to.assign_to_friendly(out_name, temp_name)};\n" )

		fc.exprs.add( "return {out_name};\n" )

		return fc
	end

	# Compiles a function to verify if an object is of the given type.
	# Verify type and if it is null.
	fun compile_is( m : MMModule ) : FunctionCompiler
	do
		var fc = new FunctionCompiler( is_a_local_csignature( m ) )

		var temp_name = "temp"
		fc.decls.add( "val_t {temp_name};\n" )

		fc.exprs.add( "{from.assign_from_friendly(temp_name, in_name)};\n" )

		if is_nullable_to_not_null then # from null
			if is_about_nullable_only then # opposite, we want to know if null
				fc.exprs.add( "if ( ! ISNULL({temp_name}) ) return 0;\n" )
			else
				fc.exprs.add( "if ( ISNULL({temp_name}) ) return 0;\n" )
			end
		end

		if not is_about_nullable_only then # inter types
			fc.exprs.add( "if ( ! {to.compile_condition_isa( temp_name )} ) return 0;\n" )
		end

		fc.exprs.add( "return 1;\n" )

		return fc
	end

	# Compiles lines of code to check if an object is not null.
	# Is to be nested within another function.
	fun compile_check_is_not_null( fc : FunctionCompiler, name : String )
	do
		fc.exprs.add( "if ( ISNULL({name}) )\{" )
		fc.exprs.add( "\tfprintf( stderr, \"Casting from {from} to {to} failed because value is null.\" );\n" )
		fc.exprs.add( "\tabort();\n" )
		fc.exprs.add( "\}" )
	end

	redef fun ==( other )
	do
		return other isa MMImportedCast and
			other.from == from and other.to == to
	end
	redef fun hash
	do
		return from.hash + to.hash
	end
end

redef class MMType
	# Compiles a lines of code to ensure that an object is of the given type.
	# Aborts when it is of the wrong type
	# Does not check if it is null.
	# Is to be nested within another function.
	fun compile_check_isa( fc : FunctionCompiler, name : String )
	do
		fc.exprs.add( "if ( ! {compile_condition_isa( name )} )\{\n" )
		fc.exprs.add( "\tfprintf( stderr, \"Casting to {self} failed because value is not a {self}.\" );\n" )
		fc.exprs.add( "\tabort();\n" )
		fc.exprs.add( "\}\n" )
	end

	# Compiles an expression to verify if an object is of the given type.
	# To be nested within a condition.
	fun compile_condition_isa( var_name : String ) : String
	do
		return "( ISOBJ( {var_name} ) ? ISNULL( {var_name} ) || OBJISA( {var_name}, {local_class.cname} ): VALISA( {var_name}, {local_class.cname} ) )"
	end

	# Defines a friendly type in C for a given Nit type.
	# Standard Nit classes are kept within a struct.
	fun compile_to_frontier( v : FrontierVisitor )
	do
		var pi = local_class.primitive_info
		if pi == null or is_nullable then
			var name = friendly_extern_name
			var guard = "{name.to_s.to_upper}_TYPE"

			# defines struct
			v.header_top.add( "#ifndef {guard}\n" )
			v.header_top.add( "#define {guard}\n" )
			v.header_top.add( "struct s_{name}\{\n" )
			v.header_top.add( "\t\tstruct nitni_ref ref; /* real ref struct, must be first */\n" )
			v.header_top.add( "\};\n" )
			v.header_top.add( "typedef struct s_{name} *{name};\n" )

			# add null version, as a struct
			if is_nullable then
				var local_null_getter = local_friendly_null_getter_from( mmmodule )

				v.header_top.add( "#ifndef {friendly_null_getter}\n" )
				v.header_top.add( "#define {friendly_null_getter} {local_null_getter}\n" )
				v.header_top.add( "#endif\n" )

				v.header_top.add( "{name} {local_null_getter}();\n" )

				var fc = new FunctionCompiler( "{name} {local_null_getter}()" )
				compile_new_local_ref( "n", fc, true )
				fc.exprs.add( "return n;\n" )
				v.body.append( fc.to_writer )
			end

			# reference incr
			var incr_name = "{as_notnull.mangled_name}_incr_ref"
			v.header_top.add( "#define {incr_name}( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )\n" )

			# reference decr
			var decr_name = "{as_notnull.mangled_name}_decr_ref"
			v.header_top.add( "#define {decr_name}( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )\n" )

			v.header_top.add( "#endif\n" )
		end
	end

	fun compile_new_local_ref( var_name : String, fc : FunctionCompiler, stack_it : Bool )
	do
		var type_name = friendly_extern_name

		fc.decls.add( "{type_name} {var_name};\n" )
		if uses_nitni_ref then
			fc.exprs.add( "{var_name} = malloc( sizeof( struct s_{type_name} ) );\n" )
			fc.exprs.add( "{var_name}->ref.val = NIT_NULL;\n" )
			fc.exprs.add( "{var_name}->ref.count = 0;\n" )
			if stack_it then
				fc.exprs.add( "nitni_local_ref_add( (struct nitni_ref *){var_name} );\n" )
			end
		end
	end

	# compiles a stub local reference for unused references
	# allows to maintain static typing but avoids malloc and free
	fun compile_stub_local_ref( var_name : String, fc : FunctionCompiler )
	do
		var type_name = friendly_extern_name
		fc.decls.add( "{type_name} {var_name};\n" )
		if uses_nitni_ref then
			fc.exprs.add( "{var_name} = ({type_name})NULL;\n" )
		end
	end
end

redef class MMExplicitImport
	fun compile_friendly_to_frontier( v : FrontierVisitor )
	do
		# prototype in header
		v.header.add( "/* friendly for {method.full_name} */\n" )
		v.header.add( "{method.frontier_csignature_from( v.mmmodule, local_class )};\n" )

		# Defines a simplier name to be used within this module and to prevent
		# conflict with other modules importing the same friendly.
		v.header.add( "#ifndef {method.friendly_extern_name( local_class )}\n" )
		v.header.add( "#define {method.friendly_extern_name( local_class )} {method.local_friendly_name_from( v.mmmodule, local_class )}\n" )
		v.header.add( "#endif\n" )

		# implementation in body
		v.body.add( "/* friendly for {method.full_name} */\n" )

		var fc = new FunctionCompiler( method.frontier_csignature_from( v.mmmodule, local_class ) )

		# params
		var params = new Array[NiVariable]
		if not method.is_init then params.add( signature.recv_ni_variable )
		params.add_all( signature.params )

		for nv in params do nv.prepare_for_nit( fc )

		# handles return of method or constructor
		var rnv = signature.return_ni_variable
		if rnv == null and method.is_init then
			rnv = new ReturnVariable( signature.recv )
		end
		var s = new FlatBuffer
		if rnv != null then
			rnv.prepare_for_c( fc )
			s.append( "{rnv.ni_from_name} = " )
		end

		# hook to generated C code
		if method.is_init then
			s.append( "NEW_{local_class}_{method.global.intro.cname}" )
		else
			s.append( "{method.global.meth_call}( {signature.recv_ni_variable.as_arg_to_nit} )" )
		end

		var args = new Array[String]
		for p in params do args.add( p.as_arg_to_nit )

		s.append( "( {args.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		# return
		if rnv != null then
			fc.exprs.add( "{rnv.ni_type.assign_to_friendly( rnv.ni_to_name, rnv.ni_from_name )};\n" )
			fc.exprs.add( "return {rnv.ni_to_name};\n" )
		end

		v.body.append( fc.to_writer )
	end

	redef fun hash
	do
		return method.global.to_s.hash + local_class.to_s.hash
	end
	redef fun == ( other )
	do
		return other isa MMExplicitImport and
			method == other.method and local_class == other.local_class
	end
end
