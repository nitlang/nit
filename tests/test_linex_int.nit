redef class Object
	fun foo do print "Object"
end

redef enum Int
	redef fun to_s
	do
		var s = "Int"
		return "{s} < {super}"
	end
	redef fun foo
	do
		print "Int"
		super
	end
end

# call local::to_s and then standard::to_s
print 123.to_s

# call Int::foo and then Object::foo
123.foo
