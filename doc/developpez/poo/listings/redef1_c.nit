class ClasseMere
	fun methode 
	do
		print "Méthode originale"
	end
end

class ClasseFille
	super ClasseMere

	redef fun methode 
	do
		print "Méthode redéfinie"
	end
end

var o = new ClasseFille
o.methode #Méthode redéfinie
