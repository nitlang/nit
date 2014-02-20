import test_serialization

redef class A
#alt0#	auto_serializable
#alt2#	auto_serializable

	var iii: Int = 6789
	var sss: String = "redef"
end

redef class B
#alt1#	auto_serializable
#alt2#	auto_serializable

	var ffff: Float = 6.789
	var bbbb: Bool = false
end

super
