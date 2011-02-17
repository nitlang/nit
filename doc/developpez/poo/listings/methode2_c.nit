class MaClasse
	fun methode1 
	do
		print "Bonjour M. X !"
	end

	fun methode2(prenom: String) 
	do
		print "Bonjour {prenom} !"
	end
end

var o = new MaClasse
o.methode1 #Bonjour M. X
o.methode2("Dave") #Bonjour Dave !
