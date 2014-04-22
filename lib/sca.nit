# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Benjamin JOSE - - SCHEIDT <beness.j@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Offers services to use SCA architecture

module sca

# Parameter to send between componant to comunicate
class Parameter
	var name: String
	var value: Object
	
	# Parameter name
	fun getName: String do
		return name
	end
	
	# Parameter value
	fun getValue: Object do
		return value
	end
end

# Use to have reference to a service
class SCAReference
	var destination: String
	var service: nullable SCAService

	# invoke a remote method
	fun invoke(operation: String, parameters: nullable List[Parameter]): nullable Object
	do
		return service.invoke(operation, parameters)
	end
	
	fun getDestination: String do
		return destination
	end
end

# Use to open the componant on a service
class SCAService
	var name: String
	var composite: SCAComponentImp
	
	# invoke a local method
	fun invoke(operation: String, parameters: nullable List[Parameter]): nullable Object 
	do
		return composite.receive(operation, parameters)
	end
	
	fun getName: String do
		return name
	end
end

# Parent componant use to have the Design Pattern Composite
# Can be Composite or Component
class SCAComponent
	var services: List[SCAService] = new List[SCAService]
	var references: List[SCAReference] = new List[SCAReference]
	var name: String

	fun getName: String do
		return name
	end
	
	# Add a new service
	fun addService(service:SCAService) do
		self.services.add service
	end
	
	# Get specifique service
	fun getService(name:String): nullable SCAService do
		for service in services do
			if service.getName == name then
				return service
			end
		end
		return null
	end
	
	# Add a new reference
	fun addReference(reference:SCAReference) do
		self.references.add reference
	end
	
	# Get specifique reference
	fun getReference(destination:String): nullable  SCAReference do
		for reference in references do
			if reference.getDestination == destination then
				return reference
			end
		end
		return null
	end

end

# Composite, can contain other composite or componants
class SCAComposite
	super SCAComponent

	var childs: List[SCAComponent] = new List[SCAComponent]

	# Add a child (composite or componant)
	fun add(element: SCAComponent) do
		childs.add element
	end

	# Delete a child
	fun delete(element: SCAComponent) do
		childs.remove element
	end
	
	# Get specifique child
	fun get(name: String): nullable SCAComponent do
		for component in childs do
			if component.getName == name then
				return component
			end
		end
		return null
	end

	# Get all childs
	fun getAll: List[SCAComponent]
	do
		return childs
	end
	
end

# Component class
class SCAComponentImp
	super SCAComponent

	# Use when a message is send
	fun receive(operation: String, parameters: nullable List[Parameter]): nullable Object is abstract	
end
