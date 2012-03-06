
class B
	redef fun to_s do return "an instance of B"
end

class A
	var a = true
	var b = false
	var c = 12345
	var d = 1.2345
	var e = "asdf"
	var f = new B
	var g = new HashMap[Int,B]

	var h = true or false

	redef fun to_s do return "{a} {b} {c} {d} {e} {h}\n" +
		"{f}\n" + 
		"{a isa Bool} {b isa Bool} {c isa Int} {d isa Float}\n" +
		"{e isa String} {f isa B} {not f isa A} {g isa HashMap[Int,B]}"
end

var a = new A
print a
