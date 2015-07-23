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

			generate_class_header(jclass.class_type)

			for id, signatures in jclass.methods do
				for signature in signatures do
					generate_method(jclass, id, id, signature.return_type, signature.params)
					file_out.write "\n"
				end
			end

			# Constructors
			for constructor in jclass.constructors do
				var complex = jclass.constructors.length != 1 and constructor.params.not_empty
				var base_name = if complex then "from" else ""
				var name = jclass.nit_name_for(base_name, constructor.params, complex)

				generate_constructor(jclass, constructor, name)
			end

			# Attributes
			for id, java_type in jclass.attributes do
				generate_getter_setter(jclass, id, java_type)
			end

			file_out.write "end\n\n"
		end

		if stub_for_unknown_types then
			for jtype, nit_type in model.unknown_types do
				generate_unknown_class_header(jtype)
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

	private fun generate_class_header(jtype: JavaType)
	do
		var nit_type = model.java_to_nit_type(jtype)
		file_out.write "# Java class: {jtype.to_package_name}\n"
		file_out.write "extern class {nit_type} in \"Java\" `\{ {jtype.to_package_name} `\}\n"
		file_out.write "\tsuper JavaObject\n\n"
	end

	private fun generate_unknown_class_header(jtype: JavaType)
	do
		var nit_type = jtype.extern_name

		file_out.write "extern class {nit_type} in \"Java\" `\{ {jtype.to_package_name} `\}\n"
		file_out.write "\tsuper JavaObject\n\nend\n"
	end

	private fun generate_method(java_class: JavaClass, jmethod_id, method_id: String,
		jreturn_type: JavaType, jparam_list: Array[JavaType])
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
			var nit_type = model.java_to_nit_type(jparam)

			if not nit_type.is_known then comment = "#"
			if jparam.is_primitive_array then comment = "#"

			var cast = jparam.param_cast

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
		method_id = method_id.to_nit_method_name
		method_id = java_class.nit_name_for(method_id, jparam_list, java_class.methods[jmethod_id].length > 1)
		var nit_signature = new Array[String]

		nit_signature.add "\tfun {method_id}"

		if not jparam_list.is_empty then
			nit_signature.add "({nit_params})"
		end

		var return_type = null
		if not jreturn_type.is_void then
			return_type = model.java_to_nit_type(jreturn_type)

			if not return_type.is_known then comment = "#"
			if jreturn_type.is_primitive_array then comment = "#"

			nit_signature.add ": {return_type} "
		end

		file_out.write doc
		file_out.write comment + nit_signature.join

		if comment == "#" then
			file_out.write " in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n"
		# Methods with return type
		else if return_type != null then
			file_out.write " in \"Java\" `\{\n{comment}\t\treturn {jreturn_type.return_cast}self.{jmethod_id}({java_params});\n{comment}\t`\}\n"
		# Methods without return type
		else if jreturn_type.is_void then
			file_out.write " in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n"
		# No copy
		else
			file_out.write " in \"Java\" `\{\n{comment}\t\tself.{jmethod_id}({java_params});\n{comment}\t`\}\n"
		end
	end

	# Generate getter and setter to access an attribute, of field
	private fun generate_getter_setter(java_class: JavaClass, java_id: String, java_type: JavaType)
	do
		var nit_type = model.java_to_nit_type(java_type)
		var nit_id = java_id.to_nit_method_name
		nit_id = java_class.nit_name_for(nit_id, [java_type], false)

		var c = ""
		if not nit_type.is_known then c = "#"
		if java_type.is_primitive_array then c = "#"

		file_out.write """
	# Java getter: {{{java_class}}}.{{{java_id}}}
{{{c}}}	fun {{{nit_id}}}: {{{nit_type}}} in "Java" `{
{{{c}}}		return self.{{{java_id}}};
{{{c}}}	`}

	# Java setter: {{{java_class}}}.{{{java_id}}}
{{{c}}}	fun {{{nit_id}}}=(value: {{{nit_type}}}) in "Java" `{
{{{c}}}		self.{{{java_id}}} = value;
{{{c}}}	`}

"""
	end

	# Generate getter and setter to access an attribute, of field
	private fun generate_constructor(java_class: JavaClass, constructor: JavaConstructor, name: String)
	do
		var c = ""
		var nit_params_s = ""
		var java_params_s = ""

		if constructor.params.not_empty then
			var nit_params = new Array[String]
			var java_params = new Array[String]
			var param_id = 'a'
			for java_type in constructor.params do

				java_params.add "{java_type.param_cast}{param_id}"

				var nit_type = model.java_to_nit_type(java_type)
				nit_params.add  "{param_id}: {nit_type}"
				param_id = param_id.successor(1)

				if not nit_type.is_known then c = "#"
				if java_type.is_primitive_array then c = "#"
			end

			nit_params_s = "(" + nit_params.join(", ") + ")"
			java_params_s = java_params.join(", ")
		end

		file_out.write """
	# Java constructor: {{{java_class}}}
{{{c}}}	new {{{name}}}{{{nit_params_s}}} in "Java" `{
{{{c}}}		return new {{{java_class}}}({{{java_params_s}}});
{{{c}}}	`}

"""
	end
end

redef class Sys
	# List of Nit keywords
	#
	# These may also be keywords in Java, but there they would be used capitalized.
	private var nit_keywords = new HashSet[String].from(["abort", "abstract", "and", "assert",
		"break", "class", "continue", "do", "else", "end", "enum", "extern", "false", "implies",
		"import", "init", "interface", "intrude", "if", "in", "is", "isa", "isset", "for", "label",
		"loop", "module", "new", "not", "null",	"nullable", "or", "package", "private",
		"protected", "public", "return", "self", "super", "then", "true", "type", "var", "while",

	# Top-level methods
		"class_name", "get_time", "hash", "is_same_type", "is_same_instance", "output",

	# Pointer or JavaObject methods
		"free"])
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

redef class JavaClass
	# Property names used in this class
	private var used_name = new HashSet[String]

	# Get an available property name for the Java property with `name` and parameters
	#
	# If `use_parameters_name` then expect that there will be conflicts,
	# so use the types of `parameters` to build the name.
	private fun nit_name_for(name: String, parameters: Array[JavaType], use_parameters_name: Bool): String
	do
		# Append the name of each parameter
		if use_parameters_name then
			for param in parameters do
				name += "_" + param.id
			end
		end

		# As a last resort, append numbers to the name
		var base_name = name
		var count = 1
		while used_name.has(name) do
			name = base_name + count.to_s
			count += 1
		end

		used_name.add name
		return name
	end
end
