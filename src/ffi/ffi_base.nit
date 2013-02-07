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

module ffi_base

import native_interface
import syntax # TODO move extern_implementation to MM
import c_tools

interface FFIVisited
	fun accept_ffi_visitor( v : FFIVisitor ) do end
end

redef class ExternCode
	super FFIVisited

	# last resort for extern method
	# assumes this is a code block in the root of a module
	# should never be called if the extern method is implemented inline by a known language
	redef fun accept_ffi_visitor( v )
	do
		var language = self.language
		if language != null then
			v.tc.warning( null, "language \"{language}\" used to implement a code block in {v.mmmodule} is unknown." )
		else
			v.tc.warning( null, "please specify a language to implement code blocks in {v.mmmodule}." ) # is ok with spec as of now, won't be raised
		end
	end

	var language_lowered : nullable String = null

	redef init ( language, code, loc )
	do
		super
		if language != null then language_lowered = language.to_lower
	end
end

redef class MMMethod
	super FFIVisited

	# last resort for extern method
	# should never be called if the extern method is implemented inline by a known language
	redef fun accept_ffi_visitor( v )
	do
		if extern_implementation != null then
			var language = extern_implementation.language
			if language != null then
				v.tc.warning( null, "language \"{language}\" used to implement {full_name} is unknown." )
			else
				v.tc.warning( null, "please specify a language to implement {full_name}." ) # is ok with spec as of now, won't be raised
			end
		end
	end
end

# set of extern imports in a language to be used by a module
# FIXME move to native_interface or MM?
class ExternImportSet
	# set of imported functions, cached to avoid repetitions
	var callbacks : Set[ MMExplicitImport ] = new HashSet[ MMExplicitImport ]

	# set of imported functions, cached to avoid repetitions
	var supers : Set[ MMExplicitImport ] = new HashSet[ MMExplicitImport ]

	# set of relevant types, cached to avoid repetitions
	var types : Set[ MMType ] = new HashSet[ MMType ]

	# set of imported casts and as, cached to avoid repetitions
	var casts : Set[ MMImportedCast ] = new HashSet[ MMImportedCast ]
end

redef class MMLocalClass
	super FFIVisited

	fun c_type : nullable String do return null
end

redef class MMModule
	super FFIVisited

	redef fun accept_ffi_visitor( v )
	do
		for local_class in local_classes do
			# if class is extern and defined here first
			if local_class.global.intro == local_class and
			   local_class.global.is_extern then
				local_class.accept_ffi_visitor( v )
			end

			for prop in local_class.local_local_properties do
				# if defined of redefined in this module and is extern
				if prop.mmmodule == self and prop isa MMMethod and  prop.is_extern and
				   prop.extern_implementation != null then
					prop.accept_ffi_visitor( v )
				end
			end

		end

		for block in extern_code_blocks do block.accept_ffi_visitor( v )
	end
end

class FFIVisitor
	var tc : ToolContext

	# module being visited
	var mmmodule : MMModule

	var compilation_unit = new CCompilationUnit
end

