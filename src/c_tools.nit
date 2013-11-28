# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

# provides tools to write C .c and .h files
module c_tools

import compiling_writer

# Accumulates all C code for a compilation unit
class CCompilationUnit
	## header
	# comments and native interface imports
	var header_c_base : Writer = new Writer

	# custom C header code or generated for other languages
	var header_custom : Writer = new Writer

	# types of extern classes and friendly types
	var header_c_types : Writer = new Writer

	# implementation declaration for extern methods
	var header_decl : Writer = new Writer

	## body
	# comments, imports, etc
	var body_decl : Writer = new Writer

	# custom code and generated for ffi
	var body_custom : Writer = new Writer

	# implementation body of extern methods
	var body_impl : Writer = new Writer

	# files to compile TODO check is appropriate
	var files = new Array[String]

	fun add_local_function( efc : CFunction )
	do
		body_decl.add( "{efc.signature};\n" )
		body_impl.add( "\n" )
		body_impl.append( efc.to_writer )
	end

	fun add_exported_function( efc : CFunction )
	do
		header_decl.add( "{efc.signature};\n" )
		body_impl.add( "\n" )
		body_impl.append( efc.to_writer )
	end

	fun compile_header_core( stream : OStream )
	do
		header_c_base.write_to_stream( stream )
		header_custom.write_to_stream( stream )
		header_c_types.write_to_stream( stream )
		header_decl.write_to_stream( stream )
	end

	fun compile_body_core( stream : OStream )
	do
		body_decl.write_to_stream( stream )
		body_custom.write_to_stream( stream )
		body_impl.write_to_stream( stream )
	end
end

# Accumulates C code related to a specific function
class CFunction
	var signature : String

	var decls : Writer = new Writer
	var exprs : Writer = new Writer

	fun to_writer : Writer
	do
		var w = new Writer

		w.add( "{signature}\n\{\n" )

		w.append( decls )
		w.add( "\n" )
		w.append( exprs )

		w.add( "\}\n" )

		return w
	end
end
