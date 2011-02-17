class A 
	fun methode(a: String, b: Int): Bool
	do
		return a[b]
	end
end

class B
	super A

	redef fun methode(a, b)
	do
		return a.to_upper[b]
	end
end
