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

# Model of the parsed Objective-C files
module objc_model

# Model of all the analyzed Objective-C classes
class ObjcModel
	# All analyzed classes
	var classes = new Array[ObjcClass]
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
	super Property

	# Scope: '+' for a static class method, and '-' for an instance method
	var scope: Char is noinit, writable

	# Parameters of the method
	var params = new Array[Param]

	# Return type as a `String`
	var return_type: String is noinit, writable
end

# Attribute of an `ObjcClass`
class ObjcAttribute
	super Property

	# Name of this attribute
	var name: String is noinit, writable

	# Type of this attribute
	var return_type: String is noinit, writable
end

# Property of an `ObjcClass`
class Property
	# Is this property to be commented out?
	var is_commented = false is writable
end

# Parameter of an `ObjcMethod`
class Param
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
end
