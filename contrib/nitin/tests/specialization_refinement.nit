class A
end
class B
end
var b: Object = new B
print b isa A
redef class B
super A
end
print b isa A
