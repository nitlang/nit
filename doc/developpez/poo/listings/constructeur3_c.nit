class MaClasse

	var entier: Int
	var chaine: String	

	# Réécriture du constructeur par défaut
	init(i: Int, s: String)
	do
		entier = i
		chaine = s
	end
end

var o = new MaClasse(10, "toto")
