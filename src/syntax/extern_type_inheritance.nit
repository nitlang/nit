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

# This module manages the C type of extern classes
module extern_type_inheritance

import primitive_info
intrude import extern_inline

redef class MMLocalClass
	redef fun extern_c_type : String
	do
		return extern_type.code
	end

	fun extern_type_origin : MMLocalClass
	do
		extern_type
		return extern_type_origin_cache.as(not null)
	end

	# where was the extern type explicitly declared
	private var extern_type_origin_cache : nullable MMLocalClass = null

	# extern type of an extern class
	private var extern_type_cache : nullable ExternCode = null

	redef fun extern_type
	do
		assert global.is_extern

		if extern_type_cache != null then return extern_type_cache

		if global.intro != self then
			if global.intro.extern_type_cache != null then
				extern_type_cache = global.intro.extern_type_cache
				extern_type_origin_cache = self
				return extern_type_cache
			end
		end

		if name == once "Pointer".to_symbol then
			extern_type_cache = new ExternCode( "C", "void*", null )
			extern_type_origin_cache = self
			return extern_type_cache
		end

		# find all extern types in direct parents
		var extern_types = new HashSet[MMLocalClass]
		var local_class = self # global.class_refinement_hierarchy .first
			for c in local_class.cshe.direct_greaters do
				if c.global.is_extern then
					extern_types.add( c.extern_type_origin )
				end
			end
		#end

		if extern_types.length > 1 then
			stderr.write("Error: Extern class {mmmodule}::{name} has ambiguous extern type, found in super classes: \n")
			for c in extern_types do stderr.write( "{c.extern_type.code} from {c}\n" )
			exit(1)
		else if extern_types.length == 1 then
			var source = extern_types.first
			extern_type_cache = source.extern_type
			extern_type_origin_cache = source
		else
			# Extern class has unknown extern type. This should never happen.
			abort
		end

		return extern_type_cache
	end

	redef fun extern_type=( v )
	do
		extern_type_cache = v
		extern_type_origin_cache = self
	end
end

