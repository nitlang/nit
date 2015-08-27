import kernel

class A[E]
end

class B[F] super A[F]
end

class C[G] super B[Int]
end

class D super C[Bool]
end

fun maybe: Bool do return true

var ai: A[Int] = new A[Int]
var ab: A[Bool] = new A[Bool]
var bi: B[Int] = new B[Int]
var bb: B[Bool] = new B[Bool]
var ci: C[Int] = new C[Int]
var cb: C[Bool] = new C[Bool]
var d: D = new D

if maybe then ai = ai
#alt1#if maybe then ai = ab
if maybe then ai = bi
#alt1#if maybe then ai = bb
if maybe then ai = ci
if maybe then ai = cb
if maybe then ai = d

#alt1#if maybe then ab = ai
if maybe then ab = ab
#alt1#if maybe then ab = bi
if maybe then ab = bb
#alt1#if maybe then ab = ci
#alt1#if maybe then ab = cb
#alt1#if maybe then ab = d

#alt1#if maybe then bi = ai
#alt1#if maybe then bi = ab
if maybe then bi = bi
#alt1#if maybe then bi = bb
if maybe then bi = ci
if maybe then bi = cb
if maybe then bi = d

#alt1#if maybe then bb = ai
#alt1#if maybe then bb = ab
#alt1#if maybe then bb = bi
if maybe then bb = bb
#alt1#if maybe then bb = ci
#alt1#if maybe then bb = cb
#alt1#if maybe then bb = d

#alt1#if maybe then cb = ai
#alt1#if maybe then ci = ab
#alt1#if maybe then ci = bi
#alt1#if maybe then ci = bb
if maybe then ci = ci
#alt1#if maybe then ci = cb
#alt1#if maybe then ci = d

#alt1#if maybe then cb = ai
#alt1#if maybe then cb = ab
#alt1#if maybe then cb = bi
#alt1#if maybe then cb = bb
#alt1#if maybe then cb = ci
if maybe then cb = cb
if maybe then cb = d

#alt1#if maybe then d = ai
#alt1#if maybe then d = ab
#alt1#if maybe then d = bi
#alt1#if maybe then d = bb
#alt1#if maybe then d = ci
#alt1#if maybe then d = cb
if maybe then d = d
