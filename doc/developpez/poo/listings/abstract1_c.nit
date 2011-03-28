abstract class ClasseAbstraite
	fun methode 
	do
		# code partagé par tous les descendants
	end
end

class ClasseComplete
	super ClasseAbstraite
end

var o = new ClasseComplete
o.methode
