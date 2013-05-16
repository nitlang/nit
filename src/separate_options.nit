# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# module adding separate specification of opts to compiler
module separate_options

import mmloader
import compiling

# only to order correctly redefs of compile_separate_module
import native_interface
import ffi

redef class ToolContext
	# all ops precised in .ops files
	var separate_options : OptionContext = new OptionContext
	var opt_cc_lib_paths: OptionArray = new OptionArray("Path to libraries for C compiler", "--cc-lib-path")
	var opt_cc_libs: OptionArray = new OptionArray("Name of library to use for C compiler", "--cc-lib-name")
	var opt_cc_include_paths: OptionArray = new OptionArray("Path to .h files for C compiler", "--cc-header-path")

	redef init
	do
		super

		separate_options.add_option( opt_cc_lib_paths )
		separate_options.add_option( opt_cc_libs )
		separate_options.add_option( opt_cc_include_paths )
	end

	fun integrate_separate_options( options : String, mod : MMModule )
	do
		for line in options.split_with('\n') do
			line = line.strip_extension( "\n" )
			separate_options.parse( line.split_with( ' ' ) )
			var rest = new Array[String]
			for s in separate_options.rest do if s.length > 0 then rest.add( s )
			if rest.length > 0 then
				error( null, "module \"{mod}\" args file has unknown args: {rest.join(", ")}" )
			end
		end

		cc_lib_paths.append( opt_cc_lib_paths.value )
		cc_libs.append( opt_cc_libs.value )
		cc_include_paths.append( opt_cc_include_paths.value )
	end
end

redef class MMSrcModule

	redef fun compile_separate_module(cprogram)
	do
		super

		# extract options from file
		var options_path = "{location.file.filename}.args"
		if options_path.file_exists then
			var option_file = new IFStream.open( options_path )
			var option_content = option_file.read_all
			option_file.close

			cprogram.program.tc.integrate_separate_options( option_content, self )
			cprogram.program.tc.check_errors
		end
	end
end
