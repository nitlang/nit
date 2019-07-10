import functional

class A
        var y = 10
        fun titi(x: Int)
        do
                print "in titi: {x+y}"
        end

        fun tutu(x: Int): Int
        do
                return x + y
        end
end

class B[E]
        fun tete(x: E)
        do
                print "in tete: {x.as(not null)}"
        end

        fun tata(x: E)
        do
                if x == null then
                        print "tata null"
                else
                        print "tata not null: {x}"
                end
        end
end

redef class Object
        fun toto(x: Int): Int
        do
                return x + 1
        end
end

redef class Int
        redef fun toto(x)
        do
                return x + self
        end
end

print 1.toto(10)

var a = new A
var b: B[Object] = new B[Int]
var b2 = new B[nullable Int]
b2.tata(null)
b2.tata(40)
var f = &a.titi
var w = &a.tutu
var h = &b.tete
var z = &b2.tata
h.call(10000)
var y: Fun1[Int,Int] = w
var l: Fun1[Object,Object] = y
print l.call(10)
var q = &w.call
var p = &q.call
assert q.call(10) == 20
assert p.call(10) == 20
var d = &10.toto
var e: Fun1[Object, Object] = &d.call
assert d.call(1000) == 1010
assert e.call(1000) == 1010
#
z.call(null)
z.call(400)

var ll = &10.toto

print ll.call(1000)
var lll = &ll.call
print lll.call(1000)

#var zs = [h,z]
#
#for i in zs do
#        do
#                print i.call(10)
#        catch
#                print "error"
#        end
#end
