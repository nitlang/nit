
class A
	var s : String
	init a( s : String ) do self.s = s
end

class B
	var i : Int
	init b( i : Int ) do self.i = i
end

class C
	super A
	super B

	init ( s : String, i : Int )
	do
		a(s)
		b(i)
	end

	redef fun to_s do return "{s} {i}"
end

var c = new C( "allo", 1234 )
print c
