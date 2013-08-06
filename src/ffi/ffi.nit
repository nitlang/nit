# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# This module implements the FFI with different languages
module ffi

import c

redef class MMSrcModule
	redef fun compile_separate_module(cprogram: CProgram)
	do
		super

		if is_extern_hybrid then
			var visitor = new FFIVisitor( cprogram.program.tc, self )
			# TODO use cprogram to add generated files?

			# actually compile stub
			accept_ffi_visitor( visitor )

			# write to file
			if uses_ffi then
				visitor.compile
			end
		end
	end
end

redef class FFIVisitor
	fun compile
	do
		var compdir = tc.compdir.as(not null)
		var base_name = "{mmmodule.cname}._ffi"
		var c_file = "{base_name}.c"
		var h_file = "{base_name}.h"

		# header comments
		var module_info = "/*\n\tExtern implementation of Nit module {mmmodule.name}\n*/\n"

		# header file guard
		var guard = "{mmmodule.cname.to_s.to_upper}_NIT_H"

		# .h
		var stream = new OFStream.open( "{compdir}/{h_file}" )
		stream.write( module_info )
		stream.write( "#include <{mmmodule.name}._nitni.h>\n\n" )
		stream.write( "#ifndef {guard}\n" )
		stream.write( "#define {guard}\n\n" )
		compilation_unit.header_c_base.write_to_stream( stream )
		compilation_unit.header_custom.write_to_stream( stream )
		compilation_unit.header_c_types.write_to_stream( stream )
		compilation_unit.header_decl.write_to_stream( stream )
		stream.write( "#endif\n" )
		stream.close

		# .c
		stream = new OFStream.open( "{compdir}/{c_file}" )
		stream.write( module_info )
		stream.write( "#include \"{h_file}\"\n" )
		compilation_unit.body_decl.write_to_stream( stream )
		compilation_unit.body_custom.write_to_stream( stream )
		compilation_unit.body_impl.write_to_stream( stream )
		stream.close
	end
end
