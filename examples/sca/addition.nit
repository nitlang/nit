module addition

import sca 

class Addition 
	super SCAComponentImp 
	
	init(composite:SCAComposite) do
		super "addition"
		
		# ajout du service
		var addition_service = new SCAService("addition_service", self)
		self.addService addition_service
	end
	
	fun plus(a:Int, b:Int): Int do
		return a + b
	end
	
	redef fun receive(operation: String, parameters: nullable List[Parameter]): nullable Object do
		if operation == "plus" then
			return self.plus(parameters[0].getValue.to_s.to_i, parameters[1].getValue.to_s.to_i)
		end
		
		return null
	end
end