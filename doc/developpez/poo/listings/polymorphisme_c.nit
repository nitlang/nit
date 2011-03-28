abstract class Forme 
	fun aire :Float is abstract
end
 
class Carre
	super Forme

	var cote: Float

	init(c: Float) 
	do
		cote = c
	end

	redef fun aire: Float 
	do
		return cote * cote
	end
end
 
class Cercle
	super Forme
   
	var rayon: Float

	init (r: Float) 
	do
		rayon = r
	end

	redef fun aire: Float 
	do
		return  pi * rayon * rayon
	end
end

var forme: Forme

forme = new Carre(10.0)
print forme.aire # Affiche "100"

forme = new Cercle(10.0)
print forme.aire # Affiche "314.15"
