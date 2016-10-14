# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Serialization support for the compiler
module compiler_serialization

import model::serialize_model
import abstract_compiler

redef class ModelBuilder
	redef fun write_and_make(compiler)
	do
		var uses_json_serialization_read = false
		for mod in compiler.mainmodule.in_importation.greaters do
			var concern = mod.parent_concern
			if mod.name == "serialization_read" and concern != null and concern.name == "json" then
				uses_json_serialization_read = true
				break
			end
		end

		if uses_json_serialization_read then
			write_poset_to_file(compiler, "nit_class_inheritance_metamodel", compiler.mainmodule.flatten_mclass_hierarchy)
		end

		super
	end

	# Write `poset` to a C file
	private fun write_poset_to_file(compiler: AbstractCompiler, name: String, poset: POSet[Object])
	do
		var json = poset.to_thin_json

		var code = new CodeFile(name)
		compiler.files.add code

		var writer = new CodeWriter(code)
		writer.add """
char *{{{name}}} = "{{{json.escape_to_c}}}";
		"""
	end
end

redef class AMethPropdef
	redef fun compile_intern_to_c(v, mpropdef, arguments)
	do
		var pname = mpropdef.mproperty.name
		var ret = mpropdef.msignature.as(not null).return_mtype
		if pname == "class_inheritance_metamodel_json" then
			v.add("extern char* nit_class_inheritance_metamodel;")
			v.ret(v.new_expr("nit_class_inheritance_metamodel", ret.as(not null)))
			return true
		end

		return super
	end
end
