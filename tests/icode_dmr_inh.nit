class B
	fun foo do
		print "bfoo"
	end
end

class A
	super B
	redef fun foo do
		print "afoo"
	end
end

var o: B
#alt1#o = new B
#alt2#o = new B
#alt3#o = new B
#alt3#o.foo
o = new A#alt2#
o.foo
