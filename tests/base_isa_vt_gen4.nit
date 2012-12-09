import kernel

class G[U,V]
end

class H[W]
end

class A
	type T: X
	fun foo: Object do return new G[H[nullable T], Object]
end

class B
	super A
	redef type T: Y
end

class X
end
class Y
	super X
end

var b = new B
var bt = b.foo
