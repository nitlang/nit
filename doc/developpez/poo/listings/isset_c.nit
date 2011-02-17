class A

	var attr: nullable String

	fun meth do
		if isset attr then print attr
	end
end

var a = new A
a.meth
