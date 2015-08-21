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

# Code generation
module objc_generator

import opts

import objc_model

redef class Sys
	# Path to the output file
	var opt_output = new OptionString("Output file", "-o")
end

class CodeGenerator
	# Merge the calls to `alloc` and `init...` in a single constructor?
	#
	# If `true`, also the default behavior, initializing an extern Objective-C object looks like:
	# ~~~nitish
	# var o = new NSArray.init_with_array(some_other_array)
	# ~~~
	#
	# If `false`, the object must first be allocated and then initialized.
	# This is closer to the Objective-C behavior:
	# ~~~nitish
	# var o = new NSArray
	# o.init_with_array(some_other_array)
	# ~~~
	var init_with_alloc = true is writable

	# Generate Nit code to wrap `classes`
	fun generate(classes: Array[ObjcClass])
	do
		# Open specified path or stdin
		var file
		var path = opt_output.value
		if path != null then
			if path.file_extension != "nit" then
				print_error "Warning: output file path does not end with '.nit'"
			end

			file = new FileWriter.open(path)
		else
			file = stdout
		end

		# Generate code
		for classe in classes do
			write_class(classe, file)
		end

		if path != null then file.close
	end

	private fun type_convertor(type_word: String): String
	do
		var types = new HashMap[String, String]
		types["char"] = "Byte"
		types["short"] = "Int"
		types["short int"] = "Int"
		types["int"] = "Int"
		types["long"] = "Int"
		types["long int"] = "Int"
		types["long long"] = "Int"
		types["long long int"] = "Int"
		types["float"] = "Float"
		types["double"] = "Float"
		types["long double"] = "Float"

		types["NSUInteger"] = "Int"
		types["BOOL"] = "Bool"
		types["id"] = "NSObject"

		if types.has_key(type_word) then
			return types[type_word]
		else
			return type_word
		end
	end

	private fun write_class(classe: ObjcClass, file: Writer)
	do
		var commented_methods = new Array[ObjcMethod]
		file.write "import cocoa::foundation\n\n"
		file.write "extern class " + classe.name + """ in "ObjC" `{ """ + classe.name  + """ * `}\n"""
		for super_name in classe.super_names do
			file.write """	super """ + super_name + "\n"
		end
		if classe.super_names.is_empty then file.write """	super NSObject\n"""
		write_constructor(classe, file)
		file.write "\n"
		for attribute in classe.attributes do
			write_attribute(attribute, file)
		end
		for method in classe.methods do
			if method.is_commented then
				commented_methods.add(method)
			else
				if init_with_alloc and method.params.first.name.has("init") then continue
				file.write """	"""
				write_method(method, file)
				file.write """ in "ObjC" `{\n		"""
				write_objc_method_call(method, file)
				file.write """	`}"""
				if method != classe.methods.last then file.write "\n\n"
			end
		end
		for commented_method in commented_methods do
			if commented_method == commented_methods.first then file.write "\n"
			file.write """	#"""
			write_method(commented_method, file)
			if commented_method != commented_methods.last then file.write "\n"
		end
		file.write "\nend\n"
	end

	private fun write_constructor(classe: ObjcClass, file: Writer)
	do
		if init_with_alloc then
			for method in classe.methods do
				if method.params.first.name.has("init") and not method.is_commented then
					file.write """\n	"""
					if method.params.first.name == "init" then
						file.write "new"
					else
						write_method(method, file)
					end
					file.write """ in "ObjC" `{\n"""
					write_objc_init_call(classe.name, method, file)
					file.write """	`}\n"""
				end
			end
		else
			file.write """\n	new in "ObjC"`{\n"""
			file.write """		return [""" + classe.name + " alloc];\n"
			file.write """	`}\n"""
		end
	end

	private fun write_attribute(attribute: ObjcAttribute, file: Writer)
	do
		write_attribute_getter(attribute, file)
		# TODO write_attribute_setter if there is no `readonly` annotation
		file.write "\n"
	end

	private fun write_attribute_getter(attribute: ObjcAttribute, file: Writer)
	do
		file.write """	fun """ + attribute.name.to_snake_case + ": " + type_convertor(attribute.return_type)
		file.write """ in "ObjC" `{\n"""
		file.write """		return [self """ + attribute.name + "];\n"
		file.write """	`}\n"""
	end

	private fun write_attribute_setter(attribute: ObjcAttribute, file: Writer)
	do
		file.write """	fun """ + attribute.name.to_snake_case + "=(value: " + type_convertor(attribute.return_type) + ")"
		file.write " in \"ObjC\" `\{\n"
		file.write """		self.""" + attribute.name + " = value;\n"
		file.write """	`}\n"""
	end

	private fun write_method(method: ObjcMethod, file: Writer)
	do
		var name = ""
		for param in method.params do
			name += param.name[0].to_upper.to_s + param.name.substring_from(1)
			name = name.to_snake_case
		end
		if name.has("init") and init_with_alloc then
			file.write "new "
		else
			if not init_with_alloc and name == "init" then name = "init_0"
			file.write "fun "
		end
		file.write name
		for param in method.params do
			if param == method.params.first and not param.is_single then
				file.write "(" + param.variable_name + ": " + type_convertor(param.return_type)
			end
			if param != method.params.first and not param.is_single then
				file.write ", " + param.variable_name + ": " + type_convertor(param.return_type)
			end
			if param == method.params.last and not param.is_single then
				file.write ")"
			end
		end
		if method.return_type != "void" and not method.params.first.name.has("init") then
			file.write ": " + type_convertor(method.return_type)
		end
	end

	private fun write_objc_init_call(classe_name: String, method: ObjcMethod, file: Writer)
	do
		file.write """		return [[""" + classe_name + " alloc] "
		for param in method.params do
			if not param.is_single then
				file.write param.name + ":" + param.variable_name
				if not param == method.params.last then file.write " "
			else
				file.write param.name
			end
		end
		file.write "];\n"
	end

	private fun write_objc_method_call(method: ObjcMethod, file: Writer)
	do
		if method.return_type != "void" then file.write "return "
		file.write "[self "
		for param in method.params do
			if not param.is_single then
				file.write param.name + ":" + param.variable_name
				if not param == method.params.last then file.write " "
			else
				file.write param.name
			end
		end
		file.write "];\n"
	end
end
