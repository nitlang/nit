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
import opts

import jtype_converter

class JavaType
	var identifier = new Array[String]
	var generic_params: nullable Array[JavaType] = null

	# Is this a void return type?
	var is_void = false

	# Is this type a vararg?
	var is_vararg = false is writable

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

	fun is_collection: Bool do return is_primitive_array or collections_list.has(self.id)

	fun is_wrapped: Bool do return find_extern_class[full_id] != null

	# Name to give an extern class wrapping this type
	fun extern_name: String
	do
		var name
		var prefix = extern_class_prefix
		if prefix == null then
			# Use the namespace, e.g. java.lang.String -> Java_lang_String
			assert not identifier.is_empty
			if identifier.length == 1 then
				name = identifier.last
			else
				var first = identifier.first
				var last = identifier.last
				var mid = identifier.subarray(1, identifier.length-2)
				name = first.simple_capitalized + "_"
				if mid.not_empty then name += mid.join("_") + "_"
				name += last
			end
		else
			# Use the prefix and the short class name
			# e.g. given the prefix Native: java.lang.String -> NativeString
			name = prefix + id
		end

		name = name.replace("-", "_")
		name = name.replace("$", "_")
		return name
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

	# Comparison based on fully qualified named and generic params
	# Ignores primitive array so `a.b.c[][] == a.b.c`
	redef fun ==(other) do return other isa JavaType and self.full_id == other.full_id

	redef fun hash do return self.full_id.hash

	var collections_list: Array[String] is lazy do return ["List", "ArrayList", "LinkedList", "Vector", "Set", "SortedSet", "HashSet", "TreeSet", "LinkedHashSet", "Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
	var iterable: Array[String] is lazy do return ["ArrayList", "Set", "HashSet", "LinkedHashSet", "LinkedList", "Stack", "TreeSet", "Vector"]
	var maps: Array[String] is lazy do return ["Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
end

class NitType
	# Nit class name
	var identifier: String

	# If this NitType was found in `lib/android`, contains the module name to import
	var mod: nullable NitModule

	# Is this type known, wrapped and available in Nit?
	var is_known: Bool = true

	redef fun to_s do return identifier
end

# Model of a single Java class
class JavaClass
	# Type of this class
	var class_type: JavaType

	# Attributes of this class
	var attributes = new HashMap[String, JavaType]

	# Methods of this class organized by their name
	var methods = new MultiHashMap[String, JavaMethod]

	# Constructors of this class
	var constructors = new Array[JavaConstructor]

	# Importations from this class
	var imports = new HashSet[NitModule]

	redef fun to_s do return class_type.to_s
end

# Model of all the Java class analyzed in one run
class JavaModel

	# All analyzed classes
	var classes = new HashMap[String, JavaClass]

	# Add a class in `classes`
	fun add_class(jclass: JavaClass)
	do
		var key = jclass.class_type.full_id
		classes[key] = jclass
	end

	# Unknown types, not already wrapped and not in this pass
	private var unknown_types = new HashMap[JavaType, NitType]

	# Wrapped types, or classes analyzed in this pass
	private var known_types = new HashMap[JavaType, NitType]

	# Get the `NitType` corresponding to the `JavaType`
	#
	# Also registers types so they can be reused and
	# to keep track of unknown types.
	fun java_to_nit_type(jtype: JavaType): NitType
	do
		# Check cache
		if known_types.keys.has(jtype) then return known_types[jtype]
		if unknown_types.keys.has(jtype) then return unknown_types[jtype]

		# Is it a compatible primitive type?
		if not jtype.is_primitive_array then
			var name = converter.to_nit_type(jtype.id)
			if name != null then
				# We got a Nit equivalent
				var nit_type = new NitType(name)
				known_types[jtype] = nit_type
				return nit_type
			end
		end

		# Is being wrapped in this pass?
		var key = jtype.full_id
		if classes.keys.has(key) then
			var nit_type = new NitType(jtype.extern_name)
			known_types[jtype] = nit_type

			return nit_type
		end

		# Search in lib
		var nit_type = find_extern_class[jtype.full_id]
		if nit_type != null then
			known_types[jtype] = nit_type
			return nit_type
		end

		# Unknown type
		nit_type = new NitType(jtype.extern_name)
		nit_type.is_known = false
		unknown_types[jtype] = nit_type
		return nit_type
	end
end

# A Java method, with its signature
class JavaMethod
	# Type returned by the method
	var return_type: JavaType

	# Type of the arguments of the method
	var params: Array[JavaType]
end

# A Java method, with its signature
class JavaConstructor
	# Type of the parameters of this constructor
	var params: Array[JavaType]
end

# A Nit module, use to import the referenced extern classes
class NitModule
	# Relative path to the module
	var path: String

	# Name of the module
	var name: String is lazy do return path.basename(".nit")

	redef fun to_s do return self.name
	redef fun ==(other) do return other isa NitModule and self.path == other.path
	redef fun hash do return self.path.hash
end

redef class Sys
	# Collection of Java classes already wrapped in the library
	#
	# * The key is from `JavaType.full_id`.
	# * The value is the corresponding `NitType`.
	var find_extern_class: DefaultMap[String, nullable NitType] is lazy do
		var map = new DefaultMap[String, nullable NitType](null)
		var modules = new HashMap[String, NitModule]

		var nit_dir = "NIT_DIR".environ
		if nit_dir.is_empty then
			# Simple heuristic to find the Nit lib
			var dir = sys.program_name.dirname / "../../../"
			nit_dir = dir.simplify_path
			if not nit_dir.file_exists then return map
		end

		# Use grep to find all extern classes implemented in Java
		var grep_regex = "extern class [a-zA-Z0-9]\\\+[ ]\\\+in[ ]\\\+\"Java\""
		var grep_args = ["-r", grep_regex,
			nit_dir/"lib/android/",
			nit_dir/"lib/java/"]

		var grep = new ProcessReader("grep", grep_args...)
		var lines = grep.read_lines
		grep.close
		grep.wait

		# Sort out the modules, Nit class names and Java types
		var regex = """(.+):\\s*extern +class +([a-zA-Z0-9]+) *in *"Java" *`\\{ *([a-zA-Z0-9.$/]+) *`\\}""".to_re
		for line in lines do
			var matches = line.search_all(regex)
			for match in matches do
				var path = match[1].to_s
				var nit_name = match[2].to_s
				var java_name = match[3].to_s

				# Debug code
				# print "+ Found {nit_name}:{java_name} at {path}"

				var mod = modules.get_or_null(path)
				if mod == null then
					mod = new NitModule(path)
					modules[path] = mod
				end

				map[java_name] = new NitType(nit_name, mod)
			end
		end

		return map
	end

	# Option to set `extern_class_prefix`
	var opt_extern_class_prefix = new OptionString("Prefix to extern classes (By default uses the full namespace)", "-p")

	# Prefix used to name extern classes, if `null` use the full namespace
	var extern_class_prefix: nullable String is lazy do return opt_extern_class_prefix.value
end

redef class Text
	# Get a copy of `self` where the first letter is capitalized
	fun simple_capitalized: String
	do
		if is_empty then return to_s

		var c = chars.first.to_upper
		var s = c.to_s + substring_from(1)
		return s
	end
end
