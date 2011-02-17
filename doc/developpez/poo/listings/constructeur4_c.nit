class MaClasse

	var entier: Int
	var chaine: String	

	# Constructeur utilisant des valeurs par défaut
	init 
	do
		entier = 10
		chaine = "toto"
	end

	# Constructeur nommé acceptant des valeurs
	init with_value(i: Int) 
	do
		entier = i
		chaine = "tata"
	end
end

var o1 = new MaClasse
var o2 = new MaClasse.with_values(10)
