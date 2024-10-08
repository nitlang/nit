# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# Test classes for variance analysis

import end

interface Object
end

# covariant
class A[T]
	fun foo: T is abstract
end

# contravariant
class B[T]
	fun foo(t: T) is abstract
end

# invariant
class C[T]
	fun foo(t: T) is abstract

	fun bar: T is abstract
end

# bivariant
class D[T]
	fun foo(x: Object) is abstract
end

# bivariant, the contravariant position of this complex expression
# reverse the variance, but contra*bivar = bivar
class E[T]
	super D[T]

	fun bar(x: E[D[C[T]]]) is abstract
end

# Covariant, the contravariant position reverse the variance,
# and the variance of A[B[T]] is contravariance
class F[T]
	super D[T]

	fun bar(x: A[B[T]]) is abstract
end

# Can be annotated bivariant
class G[T]
	super D[T]

	fun bar: A[D[E[T]]] is abstract
end

# invariant
class H[T]
	fun bar: A[B[C[T]]] is abstract
end

# Bivariant
class Src[T]
	fun bar (x: Dest[T]) is abstract
end

# Bivariant
class Dest[T]
	fun bar (x: Src[T]) is abstract
end

# Contravariant
class Src2[T]
	super B[T]

	fun bar(x: Src[B[T]]) is abstract
end

# Bivariant
class Cycle2[T]
	fun foo(x: Cycle2[T]): Cycle2[T] is abstract
end

# Bivariant
class Cycle3[T]
	fun foo(x: Cycle2[T]): C[D[T]] is abstract
end
