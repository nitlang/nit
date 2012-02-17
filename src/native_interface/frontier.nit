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

			### extern classes
			# if class is extern and defined here first
			if local_class.global.intro == local_class and
			   local_class.global.is_extern then
				local_class.compile_defaut_extern_type( v )
			end
		end

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

			v.types.add( cast.from )
			v.types.add( cast.to )
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
		var params = new Array[String]

		# receiver
		var name_for_sub = "recv___nit"
		fc.decls.add( "val_t {name_for_sub};\n" )
		fc.exprs.add( "{signature.recv.assign_from_friendly( name_for_sub, "recv" )};\n" )
		params.add( name_for_sub )

		# other params
		for p in signature.params do
			name_for_sub = "{p.name}___nit"
			fc.decls.add( "val_t {name_for_sub};\n" )
			fc.exprs.add( "{p.mmtype.assign_from_friendly( name_for_sub, p.name.to_s )};\n" )
			params.add( name_for_sub )
		end

		# hook to generated C
		var return_type : nullable MMType = null

		if signature.return_type != null then
			return_type = signature.return_type
		end

		var s = new Buffer
		if return_type != null then
			fc.decls.add( "{return_type.friendly_extern_name} return___nitni;\n" )
			fc.decls.add( "val_t return___nit;\n" )
			s.append( "return___nit = " )
		end

		s.append( "{super_meth_call}( recv___nit )" )

		s.append( "( {params.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		# verify and return
		if return_type != null
		then
			fc.exprs.add( "{return_type.assign_to_friendly( "return___nitni", "return___nit" )};\n" )
			fc.exprs.add( "return return___nitni;\n" )
		end

		v.body.append( fc.to_writer )
	end

	# Compiles body and header for the out method.
	# The out method is called by generated C code
	# It handles variables conversions and verification
	fun compile_out_to_frontier( v : FrontierVisitor )
	do
		# header
		v.header.add( "\n/* out/indirect function for {full_name} */\n" )
		v.header.add( "{out_csignature};\n" ) # incoming types boxed

		# body
		v.body.add( "/* out/indirect function for {full_name} */\n" )
		var fc = new FunctionCompiler( out_csignature )

		# params
		var params = new List[String]

		if not is_init then
			var name_for_impl = "recv___nitni"
			fc.decls.add( "{signature.recv.friendly_extern_name} {name_for_impl};\n" )
			fc.exprs.add( "{signature.recv.assign_to_friendly( name_for_impl, "recv" )};\n" )
			params.add( name_for_impl )
		end

		for p in signature.params do
			var name_for_impl = "{p.name}___nitni"
			fc.decls.add( "{p.mmtype.friendly_extern_name} {name_for_impl};\n" )
			fc.exprs.add( "{p.mmtype.assign_to_friendly( name_for_impl, p.name.to_s )};\n" )
			params.add( name_for_impl )
		end

		# call to impl
		var return_type : nullable MMType = null

		if signature.return_type != null then
			return_type = signature.return_type
		else if is_init then
			return_type = local_class.get_type
		end

		var s = new Buffer
		if return_type != null then
			fc.decls.add( "{return_type.friendly_extern_name} return___nitni;\n" )
			fc.decls.add( "val_t return___nit;\n" )
			s.append( "return___nitni = " )
		end

		s.append( "{extern_name.as(not null)}( {params.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		# return
		if return_type != null then
			fc.exprs.add( "{return_type.assign_from_friendly( "return___nit", "return___nitni" )};\n" )
			fc.exprs.add( "return return___nit;\n" )
		end

		v.body.append( fc.to_writer )
	end

end

redef class MMLocalClass
	# Defines a defaut type for special of pointers in frontier.
	# Can be overriden in the custime .nit.h file, as seen with nits.
	fun compile_defaut_extern_type( v : FrontierVisitor )
	do
		v.header.add( "#ifndef {get_type.friendly_extern_name}\n" )
		v.header.add( "\ttypedef void* {get_type.friendly_extern_name};\n" )
		v.header.add( "#endif\n\n" )
	end
end

redef class MMSignature
	fun compile_frontier( v : FrontierVisitor )
	do
		# receiver
		v.types.add( recv )

		# params
		for p in params do v.types.add( p.mmtype )

		# return
		var rt = return_type
		if rt != null then
			v.types.add( rt )
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
		fc.decls.add( "{to.friendly_extern_name} {out_name};\n" )

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
		fc.exprs.add( "if ( ! {compile_condition_isa( name )} )\{" )
		fc.exprs.add( "\tfprintf( stderr, \"Casting to {self} failed because value is not a {self}.\" );\n" )
		fc.exprs.add( "\tabort();\n" )
		fc.exprs.add( "\}" )
	end

	# Compiles an expression to verify if an object is of the given type.
	# To be nested within a condition.
	fun compile_condition_isa( var_name : String ) : String
	do
		return "( ISOBJ( {var_name} ) ? OBJISA( {var_name}, {local_class.cname} ): VALISA( {var_name}, {local_class.cname} ) )"
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
			v.header_top.add( "typedef struct s_{name}\{\n" )
			v.header_top.add( "\tval_t v;\n" )
			v.header_top.add( "\} {name};\n" )
			v.header_top.add( "#endif\n\n" )

			# add null version, as a struct
			if is_nullable then
				var null_getter = "null_{as_notnull.friendly_extern_name}"
				var null_getter_local = "{mmmodule.to_s}_{null_getter}"

				v.header.add( "{name} {null_getter_local}();\n" )

				v.header.add( "#ifndef {null_getter}\n" )
				v.header.add( "#define {null_getter} {null_getter_local}\n" )
				v.header.add( "#endif\n\n" )

				v.body.add( "{name} {null_getter_local}()\n" )
				v.body.add( "\{\n" )
				v.body.add( "\t{name} n;\n" )
				v.body.add( "\tn.v = NIT_NULL;\n" )
				v.body.add( "\treturn n;\n" )
				v.body.add( "\}\n\n" )
			end
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
		var params = new Array[String]

		# if not init, add receiver
		if not method.is_init then
			var name_for_sub = "recv___nit"
			fc.decls.add( "val_t {name_for_sub};\n" )
			fc.exprs.add( "{signature.recv.assign_from_friendly( name_for_sub, "recv" )};\n" )
			params.add( name_for_sub )
		end

		for p in signature.params do
			var name_for_sub = "{p.name}___nit"
			fc.decls.add( "val_t {name_for_sub};\n" )
			fc.exprs.add( "{p.mmtype.assign_from_friendly( name_for_sub, p.name.to_s )};\n" )
			params.add( name_for_sub )
		end

		# call to nit
		var return_type : nullable MMType = null

		# handles return of method or constructor
		if method.signature.return_type != null then
			return_type = method.signature.return_type
		else if method.is_init then
			return_type = method.local_class.get_type
		end

		var s = new Buffer
		if return_type != null then
			fc.decls.add( "{return_type.friendly_extern_name} result___nitni;\n" )
			fc.decls.add( "val_t result___nit;\n" )
			s.append( "result___nit = " )
		end

		# hook to generated C code
		if method.is_init then
			s.append( "NEW_{local_class}_{method.global.intro.cname}" )
		else
			s.append( "{method.global.meth_call}( recv___nit )" )
		end

		s.append( "( {params.join( ", " )} );\n" )

		fc.exprs.add( s.to_s )

		# return
		if return_type != null then
			var result_name_nitni = "result___nitni"
			var result_name_nit = "result___nit"

			fc.exprs.add( "{return_type.assign_to_friendly( result_name_nitni, result_name_nit )};\n" )
			fc.exprs.add( "return {result_name_nitni};\n" )
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
