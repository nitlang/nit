class A
	var attr: Int

	fun meth(attr: Int)
	do
		self.attr = attr
	end
end

var a = new A(10)
print a.attr # Affiche "10"

a.meth(20)

print a.attr # Affiche "20"
