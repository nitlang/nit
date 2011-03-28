class MaClasse
	fun methode(i: Int): Int is abstract
end

class MonAutreClasse
	super MaClasse
	redef fun methode(i: Int): Int 
	do
		return i
	end
end
