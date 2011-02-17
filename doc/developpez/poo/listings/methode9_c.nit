class A
	fun methode(x: Int, y: Int..., z: Int)
	do
		print "x = {x}; y = {y.join(",")}; z = {z}"
	end
end

var a = new A
a.methode(1,2,3,4) # Affiche "x = 1; y = 2,3; z = 4"
a.methode(1,2,3) # Affiche "x = 1; y = ; z = 2"
