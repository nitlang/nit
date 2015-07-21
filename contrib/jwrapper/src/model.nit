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

# Contains the java and nit type representation used to convert java to nit code
module model

import more_collections

import jtype_converter

class JavaType
	var identifier = new Array[String]
	var generic_params: nullable Array[JavaType] = null
	var is_void = false

	# Has some generic type to be resolved (T extends foo => T is resolved to foo)
	var has_unresolved_types = false

	# Dimension of primitive array: `int[][]` is 2d
	var array_dimension = 0

	fun is_primitive_array: Bool do return array_dimension > 0

	fun has_generic_params: Bool do return not generic_params == null
	fun full_id: String do return identifier.join(".")
	fun id: String do return identifier.last.replace("$", "")

	fun return_cast: String do return converter.cast_as_return(self.id)

	fun param_cast: String
	do
		if self.has_generic_params then
			return converter.cast_as_param(self.generic_params[0].id)
		end

		return converter.cast_as_param(self.id)
	end

	fun to_nit_type: NitType
	do
		var nit_type: NitType
		var type_id = null

		if not is_primitive_array then
			type_id = converter.to_nit_type(self.id)
		end

		if type_id == null then
			nit_type = self.extern_name
			nit_type.is_complete = false
		else
			nit_type = new NitType(type_id)
		end

		if not self.has_generic_params then return nit_type

		nit_type.generic_params = new Array[NitType]

		for param in generic_params do
			var nit_param = param.to_nit_type

			nit_type.generic_params.add(nit_param)

			if not nit_param.is_complete then nit_type.is_complete = false
		end

		return nit_type
	end

	fun is_collection: Bool do return is_primitive_array or collections_list.has(self.id)

	fun is_wrapped: Bool do return find_extern_class != null

	fun extern_name: NitType
	do
		if is_wrapped then return new NitType.with_module(find_extern_class.as(not null).first, find_extern_class.as(not null).second)

		var name
		if is_primitive_array then
			# Primitive arrays have a special naming convention
			name = "Java" + extern_class_name.join.capitalized + "Array"
		else
			name = "Java" + extern_class_name.join
		end

		name = name.replace("-", "_")

		var nit_type = new NitType(name)
		nit_type.is_complete = false
		return nit_type
	end

	fun to_cast(jtype: String, is_param: Bool): String
	do
		if is_param then
			return converter.cast_as_param(jtype)
		end

		return converter.cast_as_return(jtype)
	end

	redef fun to_s
	do
		var id = self.full_id

		if self.is_primitive_array then
			id += "[]" * array_dimension
		else if self.has_generic_params then
			var params = [for param in generic_params do param.to_s]
			id += "<{params.join(", ")}>"
		end

		return id
	end

	# To fully qualified package name
	# Cuts the primitive array `[]`
	fun to_package_name: String
	do
		var str = self.to_s
		var len = str.length

		return str.substring(0, len - (2*array_dimension))
	end

	fun resolve_types(conversion_map: HashMap[String, Array[String]])
	do
		if identifier.length == 1 then
			var resolved_id = conversion_map.get_or_null(self.id)
			if resolved_id != null then self.identifier = new Array[String].from(resolved_id)
		end

		if self.has_generic_params then
			for params in generic_params do params.resolve_types(conversion_map)
		end
	end

	private fun extern_class_name: Array[String]
	do
		var class_name = new Array[String]
		class_name.add(self.id)

		if not self.has_generic_params then return class_name

		class_name.add "Of"

		for param in generic_params do class_name.add_all param.extern_class_name

		return class_name
	end

	# Search inside `lib/android` directory for already wrapped classes
	# If found, contains the class identifier and the Nit Module name
	var find_extern_class: nullable Couple[String, NitModule] is lazy do

		var regex = "extern class [a-zA-Z1-9]\\\+[ ]\\\+in[ ]\\\+\"Java\"[ ]*`\{[ ]*" + self.to_s + "\\\+[ ]*`\}"
		var nit_dir = "NIT_DIR".environ
		if nit_dir.is_empty then return null

		var grep = new ProcessReader("grep", "-r", regex, nit_dir/"lib/android/", nit_dir/"lib/java/")
		var to_eat = ["private", "extern", "class"]

		var output = grep.read_line

		var output_class = output.substring_from(output.index_of(':') + 1)
		var tokens = output_class.split(" ")

		var nclass_name = ""

		for token in tokens do
			if to_eat.has(token) then continue
			nclass_name = token
			break
		end

		if nclass_name == "" then return null

		var str = output.substring(0, output.search(".nit").from)
		str = str.substring_from(str.last_index_of('/') + 1)
		var mod = new NitModule(str)

		return new Couple[String, NitModule](nclass_name, mod)
	end

	# Comparison based on fully qualified named and generic params
	# Ignores primitive array so `a.b.c[][] == a.b.c`
	redef fun ==(other)
	do
		if other isa JavaType then
			return self.repr == other.repr
		end
		return false
	end

	redef fun hash do return self.repr.hash

	private fun repr: String
	do
		var id = self.full_id

		if self.has_generic_params then
			var gen_list = new Array[String]

			for param in generic_params do
				gen_list.add(param.to_s)
			end

			id += "<{gen_list.join(", ")}>"
		end

		return id
	end

	var collections_list: Array[String] is lazy do return ["List", "ArrayList", "LinkedList", "Vector", "Set", "SortedSet", "HashSet", "TreeSet", "LinkedHashSet", "Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
	var iterable: Array[String] is lazy do return ["ArrayList", "Set", "HashSet", "LinkedHashSet", "LinkedList", "Stack", "TreeSet", "Vector"]
	var maps: Array[String] is lazy do return ["Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
end

class NitType
	var identifier: String
	var arg_id: String
	var generic_params: nullable Array[NitType] = null

	# If this NitType was found in `lib/android`, contains the module name to import
	var mod: nullable NitModule

	# Returns `true` if all types have been successfully converted to Nit type
	var is_complete: Bool = true

	fun has_generic_params: Bool do return not generic_params == null

	fun id: String do return identifier

	init (id: String)
	do
		self.identifier = id
	end

	init with_generic_params(id: String, gen_params: String...)
	do
		self.init(id)
		self.generic_params = new Array[NitType]
		for param in gen_params do self.generic_params.add new NitType(param)
	end

	init with_module(id: String, mod: NitModule)
	do
		self.init(id)
		self.mod = mod
	end

	redef fun to_s: String
	do
		var id = self.identifier

		if self.has_generic_params then
			var gen_list = new Array[String]

			for param in generic_params do
				gen_list.add(param.to_s)
			end

			id += "[{gen_list.join(", ")}]"
		end

		return id
	end
end

# Model of a single Java class
class JavaClass
	# Type of this class
	var class_type = new JavaType

	# Attributes of this class
	var attributes = new HashMap[String, JavaType]

	# Methods of this class organized by their name
	var methods = new MultiHashMap[String, JavaMethod]

	# Importations from this class
	var imports = new HashSet[NitModule]

	redef fun to_s do return class_type.to_s
end

# Model of all the Java class analyzed in one run
class JavaModel
	# Unknown Java types used in `classes`
	var unknown_types = new HashSet[JavaType]

	# All analyzed classes
	var classes = new Array[JavaClass]
end

# A Java method, with its signature
class JavaMethod
	# Type returned by the method
	var return_type: JavaType

	# Type of the arguments of the method
	var params: Array[JavaType]
end

# A Nit module, use to import the referenced extern classes
class NitModule
	# Name of the module
	var name: String

	redef fun ==(other): Bool do return self.to_s == other.to_s
	redef fun to_s: String do return self.name
	redef fun hash: Int do return self.name.hash
end
