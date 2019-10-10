import functional

class Toto
	var x: Int
	fun f1: Int do return x
	fun f2: String do return "x: {x}"
	fun f3(y: Int): Int do return x + y
	fun f4(s: String) do print "{x}, {s}"
	fun f5 do self.x += 10
end

class A[E]

	fun bar
	do
		print "{class_name}"
	end

	fun foo
	do
		var h1 = &A[E].bar
		h1.call(self)
	end
end

var f1 = &Toto.f1
var f2 = &Toto.f2
var f3 = &Toto.f3
var f4 = &Toto.f4
var f5 = &Toto.f5

print(f1 isa Fun1[Toto,Int])
print(f2 isa Fun1[Toto,String])
print(f3 isa Fun2[Toto,Int,Int])
print(f4 isa Proc2[Toto, String])
print(f5 isa Proc1[Toto])

var t1 = new Toto(1)

print f1.call(t1)	# 1
print f2.call(t1)	# x: 1
print f3.call(t1,10)	# 11
f4.call(t1, "test")	# 1, test
f5.call(t1)

print t1.x		# 11

var g1 = &Array[Int].length
#alt1# var g2 = &nullable Array[Int].length
#alt2# var g3 = &Array[E].length
print g1.call([1,2,3,4]) # 4

var a1 = new A[Int]
a1.foo
