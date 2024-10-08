# This file is part of NIT (https://nitlanguage.org).
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

# Model of the parsed Java classes and their corresponding Nit types
module model is serialize

import more_collections
import opts
import poset
import msgpack

import jtype_converter

class JavaType
	super Cloneable

	# Identifiers composing the namespace and class name
	#
	# An array of all the names that would be separated by `.`.
	# Each name may contain `$`.
	var identifier = new Array[String]

	var generic_params: nullable Array[JavaType] = null

	# Is this a void return type?
	var is_void = false

	# Is this type a vararg?
	var is_vararg = false is writable

	# Is this type based on an anonymous class?
	var is_anonymous: Bool is lazy do
		for id in identifier do
			for part in id.split("$") do
				if part.chars.first.is_digit then return true
			end
		end
		return false
	end

	# Has some generic type to be resolved (T extends foo => T is resolved to foo)
	var has_unresolved_types = false

	# Dimension of primitive array: `int[][]` is 2d
	var array_dimension = 0

	fun is_primitive_array: Bool do return array_dimension > 0

	fun has_generic_params: Bool do return not generic_params == null

	fun return_cast: String do return converter.cast_as_return(self.id)

	fun param_cast: String
	do
		if self.has_generic_params then
			return converter.cast_as_param(self.generic_params[0].id)
		end

		return converter.cast_as_param(self.id)
	end

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
			# e.g. given the prefix Native: java.lang.String -> CString
			name = prefix + id
		end

		if is_primitive_array then
			name += "_" + "Array" * array_dimension
		end

		name = name.replace("-", "_")
		name = name.replace("$", "_")
		return name
	end

	# Short name of the class, mangled to remove `$` (e.g. `Set`)
	var id: String is lazy, noserialize do return identifier.last.replace("$", "")

	# Full name of this class as used in java code (e.g. `java.lang.Set`)
	var java_full_name: String is lazy, noserialize do return identifier.join(".").replace("$", ".")

	# Full name of this class as used by jni (e.g. `android.graphics.BitmapFactory$Options`)
	var jni_full_name: String is lazy, noserialize do return identifier.join(".")

	# Name of this class for the extern declaration in Nit (e.g. `java.lang.Set[]`)
	var extern_equivalent: String is lazy, noserialize do return jni_full_name + "[]" * array_dimension

	# Full name of this class with arrays and generic values (e.g. `java.lang.Set<E>[]`)
	redef fun to_s do
		var id = self.java_full_name

		if self.is_primitive_array then
			id += "[]" * array_dimension
		else if self.has_generic_params then
			var params = [for param in generic_params do param.to_s]
			id += "<{params.join(", ")}>"
		end

		return id
	end

	# Get a copy of `self`
	redef fun clone
	do
		var jtype = new JavaType
		jtype.identifier = identifier
		jtype.generic_params = generic_params
		jtype.is_void = is_void
		jtype.is_vararg = is_vararg
		jtype.array_dimension = array_dimension
		return jtype
	end

	# Comparison based on fully qualified named
	redef fun ==(other) do return other isa JavaType and
		self.java_full_name == other.java_full_name and
		self.array_dimension == other.array_dimension

	redef fun hash do return self.java_full_name.hash
end

class NitType
	# Nit class name
	var identifier: String

	# If this NitType was found in `lib/android`, contains the module name to import
	var mod: nullable NitModuleRef

	# Is this type known, wrapped and available in Nit?
	var is_known: Bool = true

	redef fun to_s do return identifier
end

# Model of a single Java class
class JavaClass
	# Type of this class
	var class_type: JavaType

	# Attributes of this class
	var attributes = new HashMap[String, JavaAttribute]

	# Methods of this class organized by their name
	var methods = new MultiHashMap[String, JavaMethod]

	# Methods signatures introduced by this class
	var local_intro_methods = new MultiHashMap[String, JavaMethod]

	# Constructors of this class
	var constructors = new Array[JavaConstructor]

	# Importations from this class
	var imports = new HashSet[NitModuleRef]

	# Interfaces implemented by this class
	var implements = new HashSet[JavaType]

	# Super classes of this class
	var extends = new HashSet[JavaType]

	# Position of self in `model.class_hierarchy`
	var in_hierarchy: nullable POSetElement[JavaClass] = null is noserialize

	redef fun to_s do return class_type.to_s

	# Resolve the types in `other` in the context of this class
	private fun resolve_types_of(other: JavaClass)
	do
		# Methods
		for mid, method in other.methods do
			for signature in method do
				self.resolve(signature.return_type, signature.generic_params)
				for param in signature.params do self.resolve(param, signature.generic_params)
			end
		end

		# Constructors
		for signature in other.constructors do
			for param in signature.params do self.resolve(param, signature.generic_params)
		end

		# Attributes
		for aid, attribute in other.attributes do
			self.resolve attribute.java_type
		end
	end

	# Resolve `java_type` in the context of this class
	#
	# Replace, in place, parameter types by their bound.
	private fun resolve(java_type: JavaType, property_generic_params: nullable Array[JavaType])
	do
		# Skip types with a full package name
		if java_type.identifier.length != 1 then return

		# Skip primitive types
		if converter.type_map.keys.has(java_type.id) then return

		# Gather the generic parameters of the method, then the class
		var params = new Array[JavaType]
		if property_generic_params != null then params.add_all property_generic_params
		var class_generic_params = class_type.generic_params
		if class_generic_params != null then params.add_all class_generic_params

		# Skip if there is not parameters usable to resolve
		if params.is_empty then return

		for param in params do
			if param.identifier == java_type.identifier then
				# Found a marching parameter type
				# TODO use a more precise bound
				java_type.identifier = ["java", "lang", "Object"]
				return
			end
		end
	end

	redef fun hash do return class_type.hash
	redef fun ==(o) do return o isa JavaClass and o.class_type == class_type
end

# Model of all the Java class analyzed in one run
class JavaModel

	# Classes analyzed in this pass
	var classes = new HashMap[String, JavaClass]

	# All classes, from this pass and from other passes
	var all_classes: HashMap[String, JavaClass] is noserialize, lazy do
		var classes = new HashMap[String, JavaClass]
		classes.add_all self.classes

		for model_path in sys.opt_load_models.value do
			if not model_path.file_exists then
				print_error "Error: model file '{model_path}' does not exist"
				continue
			end

			var file = model_path.to_path.open_ro
			var d = new MsgPackDeserializer(file)
			var model = d.deserialize
			file.close

			if d.errors.not_empty then
				print_error "Error: failed to deserialize model file '{model_path}' with:\n* {d.errors.join("\n* ")}"
				continue
			end

			if not model isa JavaModel then
				print_error "Error: model file contained a '{if model == null then "null" else model.class_name}'"
				continue
			end

			classes.add_all model.classes
		end

		return classes
	end

	# Does this model have access to the `java.lang.Object`?
	var knows_the_object_class: Bool = all_classes.keys.has("java.lang.Object") is lazy, noserialize

	# Add a class in `classes`
	fun add_class(jclass: JavaClass)
	do
		var key = jclass.class_type.java_full_name
		classes[key] = jclass
	end

	# Unknown types, not already wrapped and not in this pass
	var unknown_types = new HashMap[JavaType, NitType] is noserialize

	# Wrapped types, or classes analyzed in this pass
	var known_types = new HashMap[JavaType, NitType] is noserialize

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
		var key = jtype.java_full_name
		if classes.keys.has(key) then
			if jtype.array_dimension <= opt_arrays.value then
				var nit_type = new NitType(jtype.extern_name)
				known_types[jtype] = nit_type
				return nit_type
			end
		end

		# Search in lib
		var nit_type = find_extern_class[jtype.extern_equivalent]
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

	# Resolve the types in methods and attributes of this class
	fun resolve_types
	do
		for id, java_class in classes do
			java_class.resolve_types_of java_class

			# Ask nester classes for resolve too
			var matches = id.search_all("$")
			for match in matches do
				var nester_name = id.substring(0, match.from)
				if classes.keys.has(nester_name) then
					var nester = classes[nester_name]
					nester.resolve_types_of java_class
				end
			end
		end
	end

	# Specialization hierarchy of `classes`
	var class_hierarchy = new POSet[JavaClass] is noserialize

	# Fill `class_hierarchy`
	fun build_class_hierarchy
	do
		var object_type = new JavaType
		object_type.identifier = ["java","lang","Object"]

		# Fill POSet
		for name, java_class in all_classes do
			# Skip anonymous classes
			if java_class.class_type.is_anonymous then continue

			java_class.in_hierarchy = class_hierarchy.add_node(java_class)

			# Collect explicit super classes
			var super_classes = new Array[JavaType]
			super_classes.add_all java_class.implements
			super_classes.add_all java_class.extends

			# Remove unavailable super classes
			for super_type in super_classes.reverse_iterator do
				# Is the super class available?
				if not all_classes.keys.has(super_type.java_full_name) then super_classes.remove(super_type)
			end

			# If the is no explicit supers, add `java.lang.Object` (if it is known)
			if super_classes.is_empty and java_class.class_type != object_type and
			   knows_the_object_class then
				super_classes.add object_type
			end

			for super_type in super_classes do
				# Is the super class available?
				if not all_classes.keys.has(super_type.java_full_name) then continue

				var super_class = all_classes[super_type.java_full_name]
				class_hierarchy.add_edge(java_class, super_class)
			end
		end

		# Flatten classes from the top one (Object like)
		var linearized = class_hierarchy.linearize(class_hierarchy)

		# Methods intro
		for java_class in linearized do
			var greaters = java_class.in_hierarchy.greaters

			for mid, signatures in java_class.methods do
				for signature in signatures do
					if signature.is_static then continue

					# Check if this signature exists in a parent
					for parent in greaters do
						if parent == java_class then continue

						if not parent.methods.keys.has(mid) then continue

						if parent.methods[mid].has(signature) then continue label
					end

					# This is an introduction! register it
					java_class.local_intro_methods[mid].add signature

				end label
			end
		end
	end
end

# A property to a Java class
abstract class JavaProperty

	# Is this property marked static?
	var is_static: Bool
end

# A Java method, with its signature
class JavaMethod
	super JavaProperty

	# Type returned by the method
	var return_type: JavaType

	# Type of the arguments of the method
	var params: Array[JavaType]

	# Generic parameters of this method
	var generic_params: Array[JavaType]

	redef fun ==(o) do return o isa JavaMethod and o.is_static == is_static and o.params == params
	redef fun hash do return params.hash
end

# An attribute in a Java class
class JavaAttribute
	super JavaProperty

	# Type of the attribute
	var java_type: JavaType
end

# A Java method, with its signature
class JavaConstructor
	# Type of the parameters of this constructor
	var params: Array[JavaType]

	# Generic parameters of this constructor
	var generic_params: Array[JavaType]
end

# A Nit module, use to import the referenced extern classes
class NitModuleRef
	# Relative path to the module
	var path: String

	# Name of the module
	var name: String is lazy, noserialize do return path.basename(".nit")

	redef fun to_s do return self.name
	redef fun ==(other) do return other isa NitModuleRef and self.path == other.path
	redef fun hash do return self.path.hash
end

redef class Sys
	# Collection of Java classes already wrapped in the library
	#
	# * The key uses `JavaType.to_s`.
	# * The value is the corresponding `NitType`.
	var find_extern_class: DefaultMap[String, nullable NitType] is lazy do
		var map = new DefaultMap[String, nullable NitType](null)
		var modules = new HashMap[String, NitModuleRef]

		var lib_paths = opt_libs.value
		if lib_paths == null then lib_paths = new Array[String]

		if lib_paths.has("auto") then
			lib_paths.remove "auto"
			var nit_dir = "NIT_DIR".environ
			if nit_dir.is_empty then
				# Simple heuristic to find the Nit lib
				var dir = sys.program_name.dirname / "../../../lib/"
				dir = dir.simplify_path
				if dir.file_exists then lib_paths.add dir.simplify_path
			end
		end

		if lib_paths.is_empty then return map

		# Use grep to find all extern classes implemented in Java
		var grep_regex = "extern class [a-zA-Z0-9_]\\\+[ ]\\\+in[ ]\\\+\"Java\""
		var grep_args = ["-r", "--with-filename", grep_regex]
		grep_args.add_all lib_paths

		var grep = new ProcessReader("grep", grep_args...)
		var lines = grep.read_lines
		grep.close
		grep.wait

		# Sort out the modules, Nit class names and Java types
		var regex = """(.+):\\s*extern +class +([a-zA-Z0-9_]+) *in *"Java" *`\\{(.+)`\\}""".to_re
		for line in lines do
			var matches = line.search_all(regex)
			for match in matches do
				var path = match[1].to_s
				var nit_name = match[2].to_s
				var java_name = match[3].to_s.trim

				# Debug code
				# print "+ Found {nit_name}: {java_name} at {path}"

				var mod = modules.get_or_null(path)
				if mod == null then
					mod = new NitModuleRef(path)
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
	var extern_class_prefix: nullable String is lazy, noserialize do return opt_extern_class_prefix.value

	# Libraries to search for existing wrappers
	var opt_libs = new OptionArray("Paths to libraries with wrappers of Java classes ('auto' to use the full Nit lib)", "-i")

	# Generate the primitive array version of each class up to the given depth
	var opt_arrays = new OptionInt("Depth of the primitive array for each wrapped class (default: 1)", 1, "-a")

	# Generate the primitive array version of each class up to the given depth
	var opt_load_models = new OptionArray("Saved models to search for super-classes", "-m")
end

redef abstract class Text
	# Get a copy of `self` where the first letter is capitalized
	fun simple_capitalized: String
	do
		if is_empty then return to_s

		var c = chars.first.to_upper
		var s = c.to_s + substring_from(1)
		return s
	end
end
