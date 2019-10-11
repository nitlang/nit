import functional

class Toto
	var x: Int
	fun f1: Int do return x
	fun f2: String do return "x: {x}"
	fun f3(y: Int): Int do return x + y
	fun f4(s: String) do print "{x}, {s}"
	fun f5 do self.x += 10
end

redef class Int
	fun fizz: Proc1[A[Int]]
	do
		var a1 = new A[Int]("Int")
		return a1.baz
	end
end

class A[E]
	var ename: String

	redef fun to_s do return "A[{ename}]"

	fun bar
	do
		print self.to_s
	end

	fun foo
	do
		var h1 = &A[E].bar
		h1.call(self)
	end

	fun bad: A[E]
	do
		return self
	end

	fun baz: Proc1[A[E]]
	do
		var h1 = &A[E].foo
		return h1
	end

	fun fun_to_s: Fun1[A[E], String]
	do
		return &A[E].to_s
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

var a1 = new A[Int]("Int")
var a2 = new A[Int]("Int")
a1.foo # A[Int]
var h1: Proc1[A[Int]] = a1.baz
h1.call(a1) # A[Int]

var h2 = 10.fizz
h2.call(a1) # A[Int]

var aint_to_s = a1.fun_to_s

print aint_to_s.call(a2) # A[Int]

var h3: Proc1[A[Object]] = a1.baz
h3.call(a1) # A[Int]
