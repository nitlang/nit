# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 <alexis.laf@xymus.net>
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

# Manages foreign code blocks using the Nit FFI
module extern_inline

intrude import mmbuilder
import syntax_base
import primitive_info

# Extern code segment
class ExternCode
	var language : nullable String
	var code : String
	var location : nullable Location
end

redef class MMModule
	# extern code blocks in module
	var extern_code_blocks : Set[ExternCode] = new HashSet[ExternCode]
	redef var uses_ffi : Bool = false
end

redef class MMLocalClass
	# extern equivalent of class
	var extern_type : nullable ExternCode = null
end

redef class MMMethod
	# extern code bodu of extern method
	var extern_implementation : nullable ExternCode = null
end

redef class TExternCodeSegment
	# removes `{ and `} and return code of interest
	fun code : String do
		return text.substring( 2, text.length-4 )
	end
end

redef class AExternCodeBlock
	fun to_extern_code : ExternCode
	do
		var language
		if n_in_language == null then
			language = null
		else
			var text = n_in_language.n_string.text
			language = text.substring( 1, text.length-2 )
		end
		return new ExternCode( language, n_extern_code_segment.code, n_extern_code_segment.location )
	end
end

redef class AExternPropdef
	redef fun accept_property_verifier(v)
	do
		super

		# Extern method implementation
		var n_extern_code_block = self.n_extern_code_block
		if n_extern_code_block != null then
			if not method.is_extern then
				v.error( n_extern_code_block,
					"Cannot implement the non extern method {method.full_name} with extern code" )
			else
				method.extern_implementation = n_extern_code_block.to_extern_code
				method.mmmodule.uses_ffi = true
			end
		end
	end
end

redef class AStdClassdef
	redef fun accept_property_verifier(v)
	do
		super

		# Extern type of extern classes
		var extern_code_block = self.n_extern_code_block
		if extern_code_block != null then
			if not local_class.global.is_extern then
				v.error( extern_code_block,
					"Cannot define an extern equivalent in the non extern class {local_class.name}" )
			else
				local_class.extern_type = extern_code_block.to_extern_code
				local_class.mmmodule.uses_ffi = true
			end
		end
	end
end

redef class MMSrcModule
	# Syntax analysis and MM construction for the module
	# Require that supermodules are processed
	redef fun do_mmbuilder(tc: ToolContext)
	do
		super

		# extern code blocks
		if not node.n_extern_code_blocks.is_empty then uses_ffi = true
		for n_extern_code_block in node.n_extern_code_blocks do
			extern_code_blocks.add( n_extern_code_block.to_extern_code )
		end
	end
end
