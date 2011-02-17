class A
	var attr: String
end

class B
	super A

	init(attr)
	do
		self.attr = attr.to_upper
	end
end

var a = new A("toto")
print a.attr

var b = new B("toto")
print b.attr
