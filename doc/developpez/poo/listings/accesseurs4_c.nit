interface I
	fun attr: Int is abstract
	fun attr=(o: Int) is abstract
end

class A
super I
	redef var attr: Int redef writable
end

