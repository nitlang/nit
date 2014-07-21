# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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
module types

import jtype_converter

class JavaType
	private var converter = new JavaTypeConverter
	var identifier: Array[String] = new Array[String]
	var generic_params: nullable Array[JavaType] = null
	var is_void = false
	var array_dimension = 0

	fun collections_list: Array[String] is cached do return ["List", "ArrayList", "LinkedList", "Vector", "Set", "SortedSet", "HashSet", "TreeSet", "LinkedHashSet", "Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
	fun iterable: Array[String] is cached do return ["ArrayList", "Set", "HashSet", "LinkedHashSet", "LinkedList", "Stack", "TreeSet", "Vector"]
	fun maps: Array[String] is cached do return ["Map", "SortedMap", "HashMap", "TreeMap", "Hashtable", "LinkedHashMap"]
	fun has_generic_params: Bool do return not generic_params == null
	fun is_primitive_array: Bool do return array_dimension > 0
	fun full_id: String do return identifier.join(".")
	fun id: String do return identifier.last

	fun return_cast: String
	do
		if self.has_generic_params then
			return converter.cast_as_return(self.generic_params[0].id)
		end

		return converter.cast_as_return(self.id)
	end

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

		if self.is_primitive_array then
			return self.convert_primitive_array
		end

		var type_id = converter.to_nit_type(self.id)

		if type_id == null then
			nit_type = new NitType(self.full_id)
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

	fun convert_primitive_array: NitType
	do
		var nit_type = new NitType("Array")

		var last_nit_type = nit_type

		for i in [1..array_dimension] do
			var temp: NitType
			last_nit_type.generic_params = new Array[NitType]

			if i == array_dimension then
				var temp_type = converter.to_nit_type(self.id)

				if temp_type == null then 
					temp_type = self.full_id
					nit_type.is_complete = false
				end

				temp = new NitType(temp_type)
			else
				temp = new NitType("Array")
			end

			last_nit_type.generic_params.add(temp)

			last_nit_type = temp
		end
		
		return nit_type
	end

	fun is_iterable: Bool do return iterable.has(self.id)

	fun is_collection: Bool do return is_primitive_array or collections_list.has(self.id)

	fun is_map: Bool do return maps.has(self.id)

	redef fun to_s: String
	do
		var id = self.full_id

		if self.is_primitive_array then
			for i in [0..array_dimension[ do
				id += "[]"
			end
		else if self.has_generic_params then 
			var gen_list = new Array[String]

			for param in generic_params do
				gen_list.add(param.to_s)
			end

			id += "<{gen_list.join(", ")}>"
		end

		return id
	end

	fun to_cast(jtype: String, is_param: Bool): String
	do
		if is_param then
			return converter.cast_as_param(jtype)
		end

		return converter.cast_as_return(jtype)
	end
end

class NitType
	var identifier: String
	var arg_id: String
	var generic_params: nullable Array[NitType] = null

	# Returns `true` if all types have been successfully converted to Nit type
	var is_complete: Bool = true

	fun has_generic_params: Bool do return not generic_params == null
	fun maps: Array[String] is cached do return ["HashMap", "RBTreeMap"]

	fun id: String do return identifier

	init (id: String)
	do
		self.identifier = id
	end

	fun is_map: Bool do return maps.has(self.identifier)

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

class JavaClass
	var name = new Array[String]
	var attributes = new HashMap[String, JavaType]
	var methods = new HashMap[String, Array[JReturnAndParams]]

	fun add_method(id: String, return_type: JavaType, params: Array[JavaType])
	do
		var ret_and_params = methods.get_or_default(id, new Array[JReturnAndParams])
		
		ret_and_params.add(new JReturnAndParams(return_type, new Array[JavaType].from(params)))
		methods[id] = ret_and_params
	end
end

class JReturnAndParams
	var return_type: JavaType
	var params: Array[JavaType]

	init(return_type: JavaType, params: Array[JavaType])
	do
		self.return_type = return_type
		self.params = params
	end
end
