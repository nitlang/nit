class MaClasse
	fun methode(prenom, nom: String) 
	do
		print "Bonjour {prenom} {nom} !"
	end
end

var o = new MaClasse
o.methode("John", "Doe") #Bonjour John Do !
