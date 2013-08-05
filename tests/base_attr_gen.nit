class A[E]
	var e: E
	init do end
end
var i = 1
var a = new A[nullable Int]#alt1#
#alt1#var a = new A[Int]
a.e.output
