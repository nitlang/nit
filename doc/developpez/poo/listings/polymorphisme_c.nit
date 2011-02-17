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
