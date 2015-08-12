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

import objc_model

class CodeGenerator
	fun generator(classes: Array[nullable ObjcClass]) do
		var init_with_alloc = true
		for classe in classes do
			var file = new FileWriter.open(classe.name + ".nit")
			nit_class_generator(classe, file, init_with_alloc)
			file.close
		end
	end

	fun type_convertor(type_word: String): String do
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

	fun nit_class_generator(classe: nullable ObjcClass, file: FileWriter, init_with_alloc: Bool) do
		var commented_methods = new Array[ObjcMethod]
		file.write "import cocoa::foundation\n\n"
		file.write("extern class " + classe.name + """ in "ObjC" `{ """ + classe.name  + """ * `}\n""")
		for super_name in classe.super_names do
			file.write("""	super """ + super_name + "\n")
		end
		if classe.super_names.is_empty then file.write("""	super NSObject\n""")
		new_nit_generator(classe, file, init_with_alloc)
		file.write("\n")
		for attribute in classe.attributes do
			nit_attribute_generator(attribute, file)
		end
		for method in classe.methods do
			if method.is_commented then
				commented_methods.add(method)
			else
				if init_with_alloc and method.params.first.name.has("init") then continue
				file.write("""	""")
				nit_method_generator(method, file, init_with_alloc)
				file.write(""" in "ObjC" `{\n		""")
				objc_method_generator(method, file)
				file.write("""	`}""")
				if method != classe.methods.last then file.write("\n\n")
			end
		end
		for commented_method in commented_methods do
			if commented_method == commented_methods.first then file.write("\n")
			file.write("""	#""")
			nit_method_generator(commented_method, file, init_with_alloc)
			if commented_method != commented_methods.last then file.write("\n")
		end
		file.write "\nend\n"
	end

	fun new_nit_generator(classe: nullable ObjcClass, file: FileWriter, init_with_alloc: Bool) do
		if init_with_alloc then
			for method in classe.methods do
				if method.params.first.name.has("init") and not method.is_commented then
					file.write """\n	"""
					if method.params.first.name == "init" then
						file.write "new"
					else
						nit_method_generator(method, file, init_with_alloc)
					end
					file.write """ in "ObjC" `{\n"""
					new_alloc_init_objc_generator(classe.name, method, file)
					file.write """	`}\n"""
				end
			end
		else
			file.write """\n	new in "ObjC"`{\n"""
			new_objc_generator(classe, file)
			file.write """	`}\n"""
		end
	end

	fun nit_attribute_generator(attribute: ObjcAttribute, file: FileWriter) do
		nit_attribute_setter_generator(attribute, file)
		file.write "\n"
	end

	fun nit_attribute_setter_generator(attribute: ObjcAttribute, file: FileWriter) do
		file.write("""	fun """ + attribute.name.to_snake_case + ": " + type_convertor(attribute.return_type))
		file.write """ in "ObjC" `{\n"""
		objc_attribute_setter_generator(attribute, file)
		file.write """	`}\n"""
	end

	fun nit_attribute_getter_generator(attribute: ObjcAttribute, file: FileWriter) do
		file.write("""	fun """ + attribute.name.to_snake_case + "=(value: " + type_convertor(attribute.return_type) + ")")
		file.write " in \"ObjC\" `\{\n"
		objc_attribute_getter_generator(attribute, file)
		file.write """	`}\n"""
	end

	fun nit_method_generator(method: ObjcMethod, file: FileWriter, init_with_alloc: Bool) do
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
		file.write(name)
		for param in method.params do
			if param == method.params.first and not param.is_single then
				file.write("(" + param.variable_name + ": " + type_convertor(param.return_type))
			end
			if param != method.params.first and not param.is_single then
				file.write(", " + param.variable_name + ": " + type_convertor(param.return_type))
			end
			if param == method.params.last and not param.is_single then
				file.write ")"
			end
		end
		if method.return_type != "void" and not method.params.first.name.has("init") then file.write(": " + type_convertor(method.return_type))
	end

	fun new_alloc_init_objc_generator(classe_name: String, method: ObjcMethod, file: FileWriter) do
		file.write("""		return [[""" + classe_name + " alloc] ")
		for param in method.params do
			if not param.is_single then
				file.write(param.name + ":" + param.variable_name)
				if not param == method.params.last then file.write(" ")
			else
				file.write param.name
			end
		end
		file.write "];\n"
	end

	fun new_objc_generator(classe: nullable ObjcClass, file: FileWriter) do
		file.write("""		return [""" + classe.name + " alloc];\n")
	end

	fun objc_attribute_setter_generator(attribute: ObjcAttribute, file: FileWriter) do
		file.write("""		return [self """ + attribute.name + "];\n")
	end

	fun objc_attribute_getter_generator(attribute: ObjcAttribute, file: FileWriter) do
		file.write("""		self.""" + attribute.name + " = value;\n")
	end

	fun objc_method_generator(method: ObjcMethod, file: FileWriter) do
		if method.return_type != "void" then file.write("return ")
		file.write "[self "
		for param in method.params do
			if not param.is_single then
				file.write(param.name + ":" + param.variable_name)
				if not param == method.params.last then file.write " "
			else
				file.write(param.name)
			end
		end
		file.write "];\n"
	end
end
