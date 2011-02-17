class ClasseMere
	init 
	do
		print "Constructeur de la super classe"
	end
end

class ClasseFille
	super ClasseMere

	init 
	do
		print "Constructeur de la sous classe"
		super
	end
end

var o = new ClasseFille # Constructeur de la sous classe
			# Constructeur de la super classe
