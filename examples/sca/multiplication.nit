module multiplication

import sca

# Composant multiplication
class Multiplication
	super SCAComponentImp
	
	init(composite:SCAComposite) do
		super "multiplication"
		
		# ajout du service
		var multiplication_service = new SCAService("multiplication_service", self)
		self.addService multiplication_service
	end

	# Méthode de multiplication
	fun fois(a:Int, b:Int): Int do
		return a * b
	end
	
	# Définition des méthodes pouvant être appelées par référence
	redef fun receive(operation: String, parameters: nullable List[Parameter]): nullable Object do
		if operation == "fois" then
			return self.fois(parameters[0].value.to_s.to_i, parameters[1].value.to_s.to_i)
		end
		
		return null
	end
end
