module calculatrice

import sca

# Composant calculatrice
class Calculatrice 
	super SCAComponentImp
	
	init(composite:SCAComposite) do
		with_name "calculatrice"
		
		# reference vers addition
		var addition_service = composite.get("addition").get_service("addition_service")
		var ref_addition = new SCAReference("addition", addition_service)
		self.add_reference ref_addition
		
		# reference vers multiplication
		var multiplication_service = composite.get("multiplication").get_service("multiplication_service")
		var ref_multiplication = new SCAReference("multiplication", multiplication_service)
		self.add_reference ref_multiplication
		
		composite.add self
	end

	# Appel de la méthode du composant addition
	fun addition(a:Int, b:Int): Int do
		# initialisation des paramètres à envoyer
		var params = new List[Parameter]
		var p1 = new Parameter("a", a)
		var p2 = new Parameter("b", b)
		params.add p1
		params.add p2

		# on fait appel à la référence "addition" pour envoyer le message à la méthode "plus"
		var r = self.get_reference("addition").invoke("plus", params)

		return r.to_s.to_i
	end

	# Appel de la méthode du composant multiplication
	fun multiplication(a:Int, b:Int): Int do
		# initialisation des paramètres à envoyer
		var params = new List[Parameter]
		var p1 = new Parameter("a", a)
		var p2 = new Parameter("b", b)
		params.add p1
		params.add p2

		# on fait appel à la référence "multiplication" pour envoyer le message à la méthode "fois"
		var r = self.get_reference("multiplication").invoke("fois", params)

		return r.to_s.to_i
	end

end
