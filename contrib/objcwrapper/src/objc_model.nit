module objc_model

class ObjcModel
	var classes = new Array[ObjcClass]
end

class ObjcClass
	var super_names = new Array[String]
	var name: String
	var attributes = new Array[ObjcAttribute]
	var methods = new Array[ObjcMethod]
end

class ObjcMethod
	super Property

	var scope: Char is noinit, writable
	var params = new Array[Param]
	var return_type: String is noinit, writable
end

class ObjcAttribute
	super Property

	var name: String is noinit, writable
	var return_type: String is noinit, writable
end

class Property
	var is_commented = false is writable
end

class Param
	var name: String is noinit, writable
	var return_type: String is noinit, writable
	var variable_name: String is noinit, writable
	var is_table = false is writable
	var is_pointer = false is writable
	var is_single = false is writable
end
