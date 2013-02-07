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

# Handles C inline code
# Wraps all  code in a thin wrapper.
module c

import ffi_base

redef class ExternCode
	fun is_c : Bool do return language == null or
		language_lowered == "c" or language_lowered.has_prefix( "c " )

	fun is_c_body : Bool do return language == null or
		language_lowered == "c" or language_lowered ==  "c body"

	fun is_c_header : Bool do return language_lowered == "c header"

	redef fun accept_ffi_visitor( v )
	do
		if is_c_header then
			v.compilation_unit.header_custom.add( code )
		else if is_c_body then
			v.compilation_unit.body_custom.add( code )
		end
	end
end

redef class MMMethod
	redef fun accept_ffi_visitor( v )
	do
		if extern_implementation.is_c then
			var fc = new CFunction( impl_csignature )
			fc.decls.add( extern_implementation.location.as_line_pragma )
			fc.exprs.add( extern_implementation.code )
			v.compilation_unit.add_exported_function( fc )
		else
			super
		end
	end
end

redef class Location
	fun as_line_pragma : String
	do
		return "#line {line_start} \"{file.filename}\"\n"
	end
end
