import functional

class A
        fun toto do print "A::toto"
end

class B
        super A
        redef fun toto do print "B:toto"
end

redef class Object
        fun tutu(x: Int): Int do return x + 1
end

redef class Int
        redef fun tutu(x) do return x + self
end


var x = 10
var b: A
if x < 10 then
        b = new A
else
        b = new B
end
var f = &b.toto
f.call

var g = &10.tutu
print g.call(10)
