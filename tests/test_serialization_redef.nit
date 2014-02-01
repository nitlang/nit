import test_serialization

redef class A
#alt0#	auto_serializable
#alt2#	auto_serializable

	var iii = 6789
	var sss = "redef"
end

redef class B
#alt1#	auto_serializable
#alt2#	auto_serializable

	var ffff = 6.789
	var bbbb = false
end

super
