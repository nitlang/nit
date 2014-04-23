module addition

import sca 

# Composant addition
class Addition 
	super SCAComponentImp 
	
	init(composite:SCAComposite) do 
		with_name "addition"
		
		# ajout du service
		var addition_service = new SCAService("addition_service", self)
		self.add_service addition_service
		
		composite.add self
	end
	
	# Méthode d'addition
	fun plus(a:Int, b:Int): Int do
		return a + b
	end
	
	# Définition des méthodes pouvant être appelées par référence
	redef fun receive(operation: String, parameters: nullable List[Parameter]): nullable Object do
		if operation == "plus" then
			return self.plus(parameters[0].value.to_s.to_i, parameters[1].value.to_s.to_i)
		end
		
		return null
	end
end
