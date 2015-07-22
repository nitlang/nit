# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
# Copyright 2015 Alexis Laferrière <alexis.laf@xymus.net>
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

# Services to generate extern class `in "Java"`
module code_generator

intrude import model

class CodeGenerator

	# Path to the output file
	var file_name: String

	# Model of Java class being wrapped
	var model: JavaModel

	# Comment out methods with unknown (unwrapped) types
	var comment_unknown_types: Bool

	# Generate stub classes for unknown types used in the generated module
	var stub_for_unknown_types: Bool

	# Output file
	var file_out: Writer = new FileWriter.open(file_name) is lazy, writable

	# Name of the Nit module to generate
	var module_name: nullable String is lazy do
		if file_name.file_extension == "nit" then
			# Output file ends with .nit, we expect it to be a valid name
			return file_name.basename(".nit")
		else return null
	end

	# Generate the Nit module into `file_out`
	fun generate
	do
		# License
		file_out.write license

		# Module declaration
		var module_name = module_name
		if module_name != null then file_out.write "module {module_name}\n"
		file_out.write "\n"

		# All importations
		var imports = new HashSet[String]
		imports.add "import java\n"
		for key, jclass in model.classes do
			for import_ in jclass.imports do imports.add "import android::{import_}\n"
		end
		file_out.write imports.join("\n")
		file_out.write "\n"

		for key, jclass in model.classes do

			file_out.write gen_class_header(jclass.class_type)

			for id, signatures in jclass.methods do
				var c = 0
				for signature in signatures do
					var nid = id
					if c > 0 then nid += c.to_s
					c += 1

					file_out.write gen_method(jclass, id, nid, signature.return_type, signature.params)
					file_out.write "\n"
				end
			end
			file_out.write "end\n\n"
		end

		if stub_for_unknown_types then
			for jtype in model.unknown_types do
				file_out.write gen_unknown_class_header(jtype)
				file_out.write "\n"
			end
		end
	end

	# License for the header of the generated Nit module
	var license = """
# This file is part of NIT (http://www.nitlanguage.org).
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

# This code has been generated using `jwrapper`
""" is writable

	fun gen_class_header(jtype: JavaType): String
	do
		var temp = new Array[String]
		var nit_type = jtype.to_nit_type
		temp.add "# Java class: {jtype.to_package_name}\n"
		temp.add "extern class {nit_type} in \"Java\" `\{ {jtype.to_package_name} `\}\n"
		temp.add "\tsuper JavaObject\n\n"

		return temp.join
	end

	fun gen_unknown_class_header(jtype: JavaType): String
	do
		var nit_type = jtype.extern_name

		var temp = new Array[String]
		temp.add("extern class {nit_type} in \"Java\" `\{ {jtype.to_package_name} `\}\n")
		temp.add("\tsuper JavaObject\n\nend\n")

		return temp.join
	end

	fun gen_method(java_class: JavaClass, jmethod_id, nmethod_id: String, jreturn_type: JavaType, jparam_list: Array[JavaType]): String
	do
		var java_params = ""
		var nit_params  = ""
		var nit_id = "arg"
		var nit_id_no = 0
		var nit_types = new Array[NitType]
		var comment = ""

		# Parameters
		for i in [0..jparam_list.length[ do
			var jparam = jparam_list[i]
			var nit_type = jparam.to_nit_type

			if not nit_type.is_complete then
				if jparam.is_wrapped then
					java_class.imports.add nit_type.mod.as(not null)
				else
					model.unknown_types.add jparam
					if comment_unknown_types then
						comment = "#"
					else
						nit_type = jparam.extern_name
					end
				end
			end

			var cast = ""

			if not jparam.is_collection then cast = jparam.param_cast

			nit_types.add(nit_type)

			if i == jparam_list.length - 1 then
				java_params += "{cast}{nit_id}{nit_id_no}"
				nit_params  += "{nit_id}{nit_id_no}: {nit_type}"
			else
				java_params += "{cast}{nit_id}{nit_id_no}" + ", "
				nit_params  += "{nit_id}{nit_id_no}: {nit_type}, "
			end

			nit_id_no += 1
		end

		# Method documentation
		var doc = "\t# Java implementation: {java_class}.{jmethod_id}\n"

		# Method identifier
		var method_id = nmethod_id.to_nit_method_name
		var nit_signature = new Array[String]

		nit_signature.add "\tfun {method_id}"

		if not jparam_list.is_empty then
			nit_signature.add "({nit_params})"
		end

		var return_type = null

		if not jreturn_type.is_void then
			return_type = jreturn_type.to_nit_type

			if not return_type.is_complete then
				if jreturn_type.is_wrapped then
					java_class.imports.add return_type.mod.as(not null)
				else
					model.unknown_types.add jreturn_type
					if comment_unknown_types then
						comment = "#"
					else
						return_type = jreturn_type.extern_name
					end
				end
			end

			nit_signature.add ": {return_type} "
		end

		var temp = new Array[String]

		temp.add doc
		temp.add(comment + nit_signature.join)

		if comment == "#" then
			temp.add(" in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n")
		# Methods with return type
		else if return_type != null then
			temp.add(" in \"Java\" `\{\n{comment}\t\treturn {jreturn_type.return_cast}self.{jmethod_id}({java_params});\n{comment}\t`\}\n")
		# Methods without return type
		else if jreturn_type.is_void then
			temp.add(" in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n")
		# No copy
		else
			temp.add(" in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n")
		end

		return temp.join
	end
end

redef class Sys
	# List of Nit keywords
	#
	# These may also be keywords in Java, but there they would be used capitalized.
	private var nit_keywords: Array[String] = ["abort", "abstract", "and", "assert",
		"break", "class", "continue", "do", "else", "end", "enum", "extern", "false", "implies",
		"import", "init", "interface", "intrude", "if", "in", "is", "isa", "isset", "for", "label",
		"loop", "module", "new", "not", "null",	"nullable", "or", "package", "private",
		"protected", "public", "return", "self", "super", "then", "true", "type", "var", "while"]
end

redef class String

	# Convert the Java method name `self` to the Nit style
	#
	# * Converts to snake case
	# * Strips `Get` and `Set`
	# * Add suffix `=` to setters
	fun to_nit_method_name: String
	do
		var name = self.to_snake_case
		if name.has_prefix("get_") then
			name = name.substring_from(4)
		else if name.has_prefix("set_") then
			name = name.substring_from(4)
			if nit_keywords.has(name) then name += "_"
			name += "="
		end

		# Strip the '_' prefix
		while name.has_prefix("_") do name = name.substring(1, name.length-1)

		# Escape Nit keywords
		if nit_keywords.has(name) then name += "_"

		# If the name starts by something other than a letter, prefix with `java_`
		if not name.chars.first.is_letter then name = "java_" + name

		name = name.replace("$", "_")

		return name
	end
end
