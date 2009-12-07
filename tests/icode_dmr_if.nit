
class A
	fun foo do
		print "foo"
	end

	fun bar do
		print "bar"
	end
end

var a = new A
if true then
	a.foo
#alt1#else
#alt1#	a.bar
end
