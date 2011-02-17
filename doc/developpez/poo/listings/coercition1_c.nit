class Animal
end

class Vache
	special Animal

	fun broute 
	do
		print "La vache broute..."
	end
end
	
var x: Animal = new Vache
x.as(Vache).broute
