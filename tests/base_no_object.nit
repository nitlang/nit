import end

class Int
	fun output is intern
end

class A
	fun foo do 1.output
end

var a = new A
a.foo
#alt1# if a isa Int then 2.output
