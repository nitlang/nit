import test_multi_init

class D
	super A
	super B

	init ( s : String, i : Int )
	do
		a(s)
		b(i)
	end

	redef fun to_s do return "{s} {i}"
end

var c = new D( "allo", 1234 )
print c
