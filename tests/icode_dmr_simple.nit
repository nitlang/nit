
class A
	fun foo do
		#alt2#bar
		print "foo"
	end

	fun bar do
		#alt3#foo
		print "bar"
	end
end

var a = new A
a.foo
#alt1#a.bar
