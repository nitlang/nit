module sca

class Parameter
	var name: String
	var value: Object
	
	fun getName: String do
		return name
	end
	
	fun getValue: Object do
		return value
	end
end

class SCAReference
	var destination: String
	var service: nullable SCAService

	fun invoke(operation: String, parameters: nullable List[Parameter]): nullable Object
	do
		return service.invoke(operation, parameters)
	end
	
	fun getDestination: String do
		return destination
	end
end

class SCAService
	var name: String
	var composite: SCAComponentImp
	
	fun invoke(operation: String, parameters: nullable List[Parameter]): nullable Object 
	do
		return composite.receive(operation, parameters)
	end
	
	fun getName: String do
		return name
	end
end

class SCAComponent
	var services: List[SCAService] = new List[SCAService]
	var references: List[SCAReference] = new List[SCAReference]
	var name: String

	fun getName: String do
		return name
	end
	
	fun addService(service:SCAService) do
		self.services.add service
	end
	
	fun getService(name:String): nullable SCAService do
		for service in services do
			if service.getName == name then
				return service
			end
		end
		
		return null
	end
	
	fun addReference(reference:SCAReference) do
		self.references.add reference
	end
	
	fun getReference(destination:String): nullable  SCAReference do
		for reference in references do
			if reference.getDestination == destination then
				return reference
			end
		end
		
		return null
	end

end

class SCAComposite
	super SCAComponent

	var childs: List[SCAComponent] = new List[SCAComponent]

	fun add(element: SCAComponent) do
		childs.add element
	end

	fun delete(element: SCAComponent) do
		childs.remove element
	end
	
	fun get(name: String): nullable SCAComponent do
		for component in childs do
			if component.getName == name then
				return component
			end
		end
		
		return null
	end

	fun getAll: List[SCAComponent]
	do
		return childs
	end
	
end

class SCAComponentImp
	super SCAComponent

	fun receive(operation: String, parameters: nullable List[Parameter]): nullable Object is abstract	
end
