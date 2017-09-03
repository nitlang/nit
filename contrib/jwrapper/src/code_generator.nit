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

import gen_nit

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
		if module_name != null then file_out.write "module {module_name} is no_warning(\"useless-superclass\")\n"
		file_out.write "\n"

		# All importations
		var imports = new HashSet[String]
		imports.add "import java\n"
		for key, jclass in model.classes do
			for import_ in jclass.imports do imports.add "import android::{import_}\n"
		end
		file_out.write imports.join("\n")
		file_out.write "\n"

		# Sort classes from top-level classes (java.lang.Object) to leaves
		var standard_classes = new Array[JavaClass]
		for name, jclass in model.classes do
			if not jclass.class_type.is_anonymous then standard_classes.add jclass
		end
		var linearized = model.class_hierarchy.linearize(standard_classes)

		for jclass in linearized do
			# Skip classes with an invalid name at the Java language level
			if jclass.class_type.extern_equivalent.has("-") then continue

			generate_class_header(jclass)

			if not sys.opt_no_properties.value then

				for id, signatures in jclass.local_intro_methods do
					for signature in signatures do
						assert not signature.is_static
						generate_method(jclass, id, id, signature.return_type, signature.params)
						file_out.write "\n"
					end
				end

				# Constructors
				for constructor in jclass.constructors do
					var complex = jclass.constructors.length != 1 and constructor.params.not_empty
					var base_name = if complex then "from" else ""
					var name = jclass.nit_name_for(base_name, constructor.params, complex, false, local_only=true)

					generate_constructor(jclass, constructor, name)
				end

				# Attributes
				for id, attribute in jclass.attributes do if not attribute.is_static then
					generate_getter_setter(jclass, id, attribute)
				end
			end

			# JNI services
			generate_jni_services jclass.class_type

			# Close the class
			file_out.write "end\n\n"

			if not sys.opt_no_properties.value then

				# Static functions as top-level methods
				var static_functions_prefix = jclass.class_type.extern_name.to_snake_case
				for id, signatures in jclass.methods do
					for signature in signatures do if signature.is_static then
						var nit_id = static_functions_prefix + "_" + id
						generate_method(jclass, id, nit_id, signature.return_type, signature.params, is_static=true)
						file_out.write "\n"
					end
				end

				# Static attributes as top-level getters and setters
				for id, attribute in jclass.attributes do if attribute.is_static then
					generate_getter_setter(jclass, id, attribute)
				end
			end

			# Primitive arrays
			for d in [1..opt_arrays.value] do
				generate_primitive_array(jclass, d)
			end
		end

		if stub_for_unknown_types then
			for jtype, nit_type in model.unknown_types do
				generate_unknown_class_header(jtype)
				file_out.write "\n"
			end
		end

		file_out.close
	end

	# Serialize `model` to a file next to `file_name`
	fun write_model_to_file
	do
		if not sys.opt_save_model.value then return

		# Write the model to file next to the Nit module
		var model_path = file_name.strip_extension + ".jwrapper.bin"
		var model_stream = model_path.to_path.open_wo
		var serializer = new MsgPackSerializer(model_stream)
		serializer.serialize model
		model_stream.close
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

	private fun generate_class_header(java_class: JavaClass)
	do
		var java_type = java_class.class_type
		var nit_type = model.java_to_nit_type(java_type)

		var super_java_types = new HashSet[JavaType]
		super_java_types.add_all java_class.extends
		super_java_types.add_all java_class.implements

		var supers = new Array[String]
		var effective_supers = 0
		for java_super in super_java_types do
			var nit_super = model.java_to_nit_type(java_super)

			# Comment out unknown types
			var c = ""
			if not nit_super.is_known and comment_unknown_types then c = "# "

			supers.add "{c}super {nit_super}"
			if c != "# " then effective_supers += 1
		end

		if effective_supers == 0 then
			if java_class.class_type.java_full_name == "java.lang.Object" or
			   not model.knows_the_object_class then
				supers.add "super JavaObject"
			else supers.add "super Java_lang_Object"
		end

		file_out.write """
# Java class: {{{java_type.extern_equivalent}}}
extern class {{{nit_type}}} in "Java" `{ {{{java_type.extern_equivalent}}} `}
	{{{supers.join("\n\t")}}}

"""
	end

	private fun generate_unknown_class_header(jtype: JavaType)
	do
		var nit_type = jtype.extern_name

		file_out.write "extern class {nit_type} in \"Java\" `\{ {jtype.extern_equivalent} `\}\n"
		file_out.write "\tsuper JavaObject\n\nend\n"
	end

	private fun generate_method(java_class: JavaClass, java_method_id, method_id: String,
		java_return_type: JavaType, java_params: Array[JavaType], is_static: nullable Bool)
	do
		var java_args = new Array[String]
		var nit_params = new Array[String]
		var nit_id = "arg"
		var nit_id_no = 0
		var c = ""

		# Parameters
		for jparam in java_params do
			var nit_type = model.java_to_nit_type(jparam)

			if not nit_type.is_known and comment_unknown_types then c = "#"
			if jparam.is_vararg then c = "#"

			java_args.add "{jparam.param_cast}{nit_id}{nit_id_no}"
			nit_params.add "{nit_id}{nit_id_no}: {nit_type}"

			nit_id_no += 1
		end

		# Method identifier
		method_id = method_id.to_nit_method_name
		method_id = java_class.nit_name_for(method_id, java_params, java_class.methods[java_method_id].length > 1, is_static == true)

		# Build the signature
		var nit_signature = new Array[String]
		nit_signature.add "fun {method_id}"
		if not java_params.is_empty then nit_signature.add "({nit_params.join(", ")})"

		# Return value
		var return_type = null
		if not java_return_type.is_void then
			return_type = model.java_to_nit_type(java_return_type)

			if not return_type.is_known and comment_unknown_types then c = "#"
			if java_return_type.is_vararg then c = "#"

			nit_signature.add ": " + return_type.to_s
		end

		# Build the call in Java
		var java_call
		if is_static == true then
			java_call = java_class.class_type.java_full_name
		else java_call = "self"
		java_call += ".{java_method_id}({java_args.join(", ")})"

		if return_type != null then java_call = "return {java_return_type.return_cast}" + java_call

		# Tabulation
		var t = "\t"
		if is_static == true then t = ""
		var ct = c+t

		# Write
		file_out.write """
{{{t}}}# Java implementation: {{{java_return_type}}} {{{java_class.class_type.extern_equivalent}}}.{{{java_method_id}}}({{{java_params.join(", ")}}})
{{{ct}}}{{{nit_signature.join}}} in "Java" `{
{{{ct}}}	{{{java_call}}};
{{{ct}}}`}
"""
	end

	# Generate getter and setter to access an attribute, of field
	private fun generate_getter_setter(java_class: JavaClass, java_id: String,
		attribute: JavaAttribute)
	do
		var java_type = attribute.java_type
		var nit_type = model.java_to_nit_type(java_type)

		var nit_id = java_id
		if attribute.is_static then nit_id = java_class.class_type.extern_name.to_snake_case + "_" + nit_id
		nit_id = nit_id.to_nit_method_name
		nit_id = java_class.nit_name_for(nit_id, [java_type], false, attribute.is_static)

		var c = ""
		if not nit_type.is_known and comment_unknown_types then c = "#"
		if java_type.is_vararg then c = "#"

		var recv
		if attribute.is_static then
			recv = java_class.class_type.java_full_name
		else recv = "self"

		# Tabulation
		var t = "\t"
		if attribute.is_static then t = ""
		var ct = c+t

		file_out.write """
{{{t}}}# Java getter: {{{java_class.class_type.extern_equivalent}}}.{{{java_id}}}
{{{ct}}}fun {{{nit_id}}}: {{{nit_type}}} in "Java" `{
{{{ct}}}	return {{{recv}}}.{{{java_id}}};
{{{ct}}}`}

{{{t}}}# Java setter: {{{java_class.class_type.extern_equivalent}}}.{{{java_id}}}
{{{ct}}}fun {{{nit_id}}}=(value: {{{nit_type}}}) in "Java" `{
{{{ct}}}	{{{recv}}}.{{{java_id}}} = value;
{{{ct}}}`}

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

				if not nit_type.is_known and comment_unknown_types then c = "#"
				if java_type.is_vararg then c = "#"
			end

			nit_params_s = "(" + nit_params.join(", ") + ")"
			java_params_s = java_params.join(", ")
		end

		file_out.write """
	# Java constructor: {{{java_class.class_type.extern_equivalent}}}
{{{c}}}	new {{{name}}}{{{nit_params_s}}} in "Java" `{
{{{c}}}		return new {{{java_class.class_type.java_full_name}}}({{{java_params_s}}});
{{{c}}}	`}

"""
	end

	private fun generate_primitive_array(java_class: JavaClass, dimensions: Int)
	do
		var base_java_type = java_class.class_type
		var java_type = base_java_type.clone
		java_type.array_dimension = dimensions

		var base_nit_type = model.java_to_nit_type(base_java_type)
		var nit_type = model.java_to_nit_type(java_type)

		file_out.write """
# Java primitive array: {{{java_type.extern_equivalent}}}
extern class {{{nit_type}}} in "Java" `{ {{{java_type.extern_equivalent}}} `}
	super AbstractJavaArray[{{{base_nit_type}}}]

	# Get a new array of the given `size`
	new(size: Int) in "Java" `{ return new {{{base_java_type}}}[(int)size]; `}

	redef fun [](i) in "Java" `{ return self[(int)i]; `}

	redef fun []=(i, e) in "Java" `{ self[(int)i] = e; `}

	redef fun length in "Java" `{ return self.length; `}

"""
		generate_jni_services(java_type)
		file_out.write """
end

"""
	end

	# Generate JNI related services
	#
	# For now, mostly avoid issue #845, but more services could be generated as needed.
	private fun generate_jni_services(java_type: JavaType)
	do
		var nit_type = model.java_to_nit_type(java_type)

		file_out.write """
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = {{{nit_type}}}_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
"""
	end
end

redef class Sys
	# List of Nit keywords
	#
	# These may also be keywords in Java, but there they would be used capitalized.
	private var nit_keywords: Set[String] is lazy do
		var set = new HashSet[String]
		set.add_all keywords
		set.add_all methods_in_pointer
		return set
	end

	# Name of methods used at the top-level
	#
	# Used by `JavaClass::nit_name_for` with static properties.
	private var top_level_used_names = new HashSet[String]

	# Option to _not_ generate properties (static or from classes)
	var opt_no_properties = new OptionBool("Do not wrap properties, only classes and basic services", "-n", "--no-properties")

	# Should the model be serialized to a file?
	var opt_save_model = new OptionBool("Save the model next to the generated Nit module", "-s", "--save-model")
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
	private var used_names = new HashSet[String] is serialize

	# Get an available property name for the Java property with `name` and parameters
	#
	# If `use_parameters_name` then expect that there will be conflicts,
	# so use the types of `parameters` to build the name.
	private fun nit_name_for(name: String, parameters: Array[JavaType], use_parameters_name: Bool, is_static: Bool, local_only: nullable Bool): String
	do
		# Append the name of each parameter
		if use_parameters_name then
			for param in parameters do
				var id = param.id
				id += "Array"*param.array_dimension
				name += "_" + id
			end
		end

		# Set of sets of property names, local or top-level
		var local_used_names
		var used_names
		if is_static then
			# Top-level methods
			local_used_names = sys.top_level_used_names
			used_names = sys.top_level_used_names
		else if local_only == true then
			# Local only: constructors
			local_used_names = self.used_names
			used_names = self.used_names
		else
			# Avoid conflicts with all super classes
			local_used_names = self.used_names
			used_names = new HashSet[String]
			for sup in in_hierarchy.greaters do
				used_names.add_all sup.used_names
			end
		end

		# As a last resort, append numbers to the name
		var base_name = name
		var count = 1
		while used_names.has(name) do
			name = base_name + count.to_s
			count += 1
		end

		local_used_names.add name
		return name
	end
end
