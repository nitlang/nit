module test_test_nitunit is test

intrude import test_nitunit

class TestX
	test

	fun test_foo is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: X
		subject.foo
	end

	fun test_foo1 is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: X
		var a: Int
		var b: Int
		subject.foo1(a, b)
	end

	fun test_foo2 is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: X
		var exp: Bool
		var res = subject.foo2
		assert exp == res
	end

	fun test_foo3 is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: X
		var exp: Y[X]
		var res = subject.foo3
		assert exp == res
	end

	fun test_foo3= is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: X
		var foo3: Y[X]
		subject.foo3 = foo3
	end
end

class TestY
	test

	fun test_bra is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject[e]
		assert exp == res
	end

	fun test_bra_assign is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var i: Int
		subject[e] = i
	end

	fun test_plus is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject + e
		assert exp == res
	end

	fun test_minus is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject - e
		assert exp == res
	end

	fun test_star is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject * e
		assert exp == res
	end

	fun test_slash is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject / e
		assert exp == res
	end

	fun test_percent is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Int
		var res = subject % e
		assert exp == res
	end

	fun test_unary_minus is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var exp: Int
		var res = -subject
		assert exp == res
	end

	fun test_equals is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: nullable Object
		var exp: Bool
		var res = subject == e
		assert exp == res
	end

	fun test_not_equals is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: nullable Object
		var exp: Bool
		var res = subject != e
		assert exp == res
	end

	fun test_lt is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Bool
		var res = subject < e
		assert exp == res
	end

	fun test_le is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Bool
		var res = subject <= e
		assert exp == res
	end

	fun test_compare is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Bool
		var res = subject <=> e
		assert exp == res
	end

	fun test_ge is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Bool
		var res = subject >= e
		assert exp == res
	end

	fun test_gt is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Y[X]
		var e: Int
		var exp: Bool
		var res = subject > e
		assert exp == res
	end
end

class TestZ
	test

	fun test_bra is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Z
		var i: Int
		var j: Int
		var exp: Bool
		var res = subject[i, j]
		assert exp == res
	end

	fun test_bra_assign is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Z
		var i: Int
		var j: Int
		var k: Bool
		subject[i, j] = k
	end

	fun test_foo= is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Z
		var i: Int
		var j: Int
		subject.foo(i) = j
	end

	fun test_bar= is test do
		assert not_implemented: false # TODO remove once implemented

		var subject: Z
		var i: Int
		var j: Int
		var k: Int
		subject.bar(i, j) = k
	end
end
