# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Benjamin JOSE <beness.j@gmail.com>
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
# Structure used for the SQLSerialization module.
# It describes one field of an object.
# It supports circular reference et composition.
class ObjectProperty
	# The ID of the object in the DB
	var obj_id : Int
	
	# The name of the property
	var name : String
	
	# The type of the property
	var property_type : String
	
	# The value of the property
	var value : nullable Object writable
	
	# If it is a circular reference
	var reference_id : String writable
		
	# The type of the owner of the property
	var owner_type : String
	
	init(obj_id: Int, name: String, property_type: String, value: nullable Object, owner: String)
	do
		self.obj_id = obj_id
		self.name = name
		self.property_type = property_type
		self.value = value
		self.reference_id = ""
		self.owner_type = owner
	end
		
	redef fun to_s do
		return "Unique ID: {obj_id} Name: {name} Type: {property_type} Value: {value} Ref ID: {reference_id}\n"
	end
end

