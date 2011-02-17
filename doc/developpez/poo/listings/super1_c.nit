class ClasseMere
	fun coucou(nom: String) 
	do
		print "Bonjour {nom} (depuis la classe mère)"
	end
end

class ClasseFille
	super ClasseMere

	redef fun coucou(nom: String) 
	do
		super
		print "Bonjour {nom} (depuis la classe fille)"
	end
end

var o = new ClasseFille
o.coucou("Dave") #Bonjour Dave (depuis la classe mère)
		 #Bonjour Dave (depuis la classe fille)
