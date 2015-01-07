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

# Services to convert java type to nit type and get casts if needed
module jtype_converter

class JavaTypeConverter

	var type_map = new HashMap[String, String]
	var param_cast_map = new HashMap[String, String]
	var return_cast_map = new HashMap[String, String]

	init
	do
		# Java type to nit type
		type_map["byte"] = "Int"
		type_map["Byte"] = "Int"
		type_map["short"] = "Int"
		type_map["Short"] = "Int"
		type_map["int"] = "Int"
		type_map["Integer"] = "Int"
		type_map["long"] = "Int"
		type_map["Long"] = "Int"
		type_map["char"] = "Char"
		type_map["Character"] = "Char"
		type_map["float"] = "Float"
		type_map["Float"] = "Float"
		type_map["double"] = "Float"
		type_map["Double"] = "Float"
		type_map["boolean"] = "Bool"
		type_map["Boolean"] = "Bool"
		type_map["Object"] = "JavaObject"
		type_map["String"] = "JavaString"
		type_map["CharSequence"] = "JavaString"


		# Cast if the type is given as a parameter
		param_cast_map["byte"] = "(byte)"
		param_cast_map["Byte"] = "(Byte)"
		param_cast_map["short"] = "(short)"
		param_cast_map["Short"] = "(short)"
		param_cast_map["float"] = "(float)"
		param_cast_map["Float"] = "(float)"
		param_cast_map["int"] = "(int)"
		param_cast_map["Integer"] = "(int)"

		# Cast if the type is given as a return value
		return_cast_map["CharSequence"] = "(String)"
	end

	fun to_nit_type(java_type: String): nullable String
	do
		return self.type_map.get_or_null(java_type)
	end

	fun cast_as_param(java_type: String): String
	do
		return self.param_cast_map.get_or_default(java_type, "")
	end
	
	fun cast_as_return(java_type: String): String
	do
		return self.return_cast_map.get_or_default(java_type, "")
	end
end
