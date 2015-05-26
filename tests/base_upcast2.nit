import kernel

class A[E]
end

class B[G] super A[Int]
end

class C super B[Bool]
end

class X
	#1alt1#type T: A[Int]
	#1alt2#type T: A[Bool]
	#1alt3#type T: B[Int]
	#1alt4#type T: B[Bool]
	#1alt5#type T: C
	fun toto
	do
		var ai: A[Int] = new A[Int]
		var ab: A[Bool] = new A[Bool]
		var bi: B[Int] = new B[Int]
		var bb: B[Bool] = new B[Bool]
		var c: C = new C

		var t: T = c.as(T)
		#alt1#if maybe then t = ai
		#alt2#if maybe then t = ab
		#alt3#if maybe then t = bi
		#alt4#if maybe then t = bb
		#alt5#if maybe then t = c
		#alt6#if maybe then ai = t
		#alt7#if maybe then ab = t
		#alt8#if maybe then bi = t
		#alt9#if maybe then bb = t
		#alt10#if maybe then c = t
	end
end

fun maybe: Bool do return true

