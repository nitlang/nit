interface AfficheType
	fun afficherType is abstract
end

class Personne 
	super AfficheType

	redef fun afficherType 
	do
		print "Je suis une personne"
	end

end

class Voiture
	super AfficheType

	redef fun afficherType 
	do
		print "Je suis une voiture"
	end
end
