# This file is part of NIT ( https://nitlanguage.org ).
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

# Model of the parsed Objective-C files
module objc_model

# Model of all the analyzed Objective-C classes
class ObjcModel
	# All analyzed classes
	var classes = new Array[ObjcClass]

	# Is `objc_type` known by this model?
	fun knows_type(objc_type: Text): Bool
	do
		for c in classes do
			if c.name == objc_type then return true
		end

		return imported_types.has(objc_type)
	end

	# Are all types in the signature or `method` known by this model?
	fun knows_all_types(method: ObjcMethod): Bool
	do
		for param in method.params do
			if param.is_single then break
			if not knows_type(param.return_type) then return false
		end

		var r = method.return_type
		return r == "void" or r == "id" or knows_type(r)
	end

	# Objective-C types available in imported modules
	#
	# TODO seach in existing wrappers
	private var imported_types = ["NSObject", "NSString"]
end

# Objective-C class
class ObjcClass
	# Name of the super classes
	var super_names = new Array[String]

	# Name of this Objective-C class
	var name: String

	# Attributes of this Objective-C class
	var attributes = new Array[ObjcAttribute]

	# Methods of this Objective-C class
	var methods = new Array[ObjcMethod]
end

# Method of an `ObjcClass`
class ObjcMethod
	super ObjcProperty

	# Is this a static class method declared with '+'? Otherwise it's an instance method.
	var is_class_property: Bool = false is writable

	# Parameters of the method
	var params = new Array[ObjcParam]

	# Return type as a `String`
	var return_type: String is noinit, writable

	# Does this method look like a constructor/method?
	fun is_init: Bool do return params.first.name.has_prefix("init") and not is_class_property
end

# Attribute of an `ObjcClass`
class ObjcAttribute
	super ObjcProperty

	# Name of this attribute
	var name: String is noinit, writable

	# Type of this attribute
	var return_type: String is noinit, writable
end

# Property of an `ObjcClass`
class ObjcProperty
	# Introducing class
	var objc_class: ObjcClass

	# Is this property to be commented out?
	var is_commented = false is writable
end

# Parameter of an `ObjcMethod`
class ObjcParam
	# Parameter name, used by the caller (e.g. `withObject` in `withObject: (NSObject*) obj`)
	var name: String is noinit, writable

	# Type of the parameter name
	var return_type: String is noinit, writable

	# Argument name, used within the body (e.g. `obj` in `withObject: (NSObject*) obj`)
	var variable_name: String is noinit, writable

	# Is this a primitive array? with at least one `[]`.
	var is_table = false is writable

	# Is this a pointer type?
	var is_pointer = false is writable

	# Is this a parameter with only a `name`?
	var is_single = false is writable

	redef fun to_s
	do
		if is_single then return name
		return "{name}:({return_type}){variable_name}"
	end
end
