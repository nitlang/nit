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

import core::kernel

class A
   fun +: A
   do
	   0.output
	   return self
   end
   fun +(a: A): A
   do
	   2.output
	   return self
   end
   fun -: A
   do
	   1.output
	   return self
   end
   fun -(a: A): A
   do
	   6.output
	   return self
   end
   fun *(a: A): A
   do
	   3.output
	   return self
   end
   fun /(a: A): A
   do
	   4.output
	   return self
   end
   fun %(a: A): A
   do
	   5.output
	   return self
   end
   redef fun ==(a: nullable Object): Bool
   do
	   7.output
	   return true
   end
   fun <(a: A): Bool
   do
	   9.output
	   return true
   end
   fun >(a: A): Bool
   do
	   10.output
	   return true
   end
   fun <=(a: A): Bool
   do
	   11.output
	   return true
   end
   fun >=(a: A): Bool
   do
	   12.output
	   return true
   end
   fun <=>(a: A): Int
   do
	   13.output
	   return 0
   end
   fun <<(a: A): A
   do
	   14.output
	   return a
   end
   fun >>(a: A): A
   do
	   15.output
	   return a
   end
   fun **(a: A): A
   do
	   16.output
	   return a
   end
   fun |(a: A): A
   do
	   16.output
	   return a
   end
   fun ^(a: A): A
   do
	   17.output
	   return a
   end
   fun &(a: A): A
   do
	   18.output
	   return a
   end
   fun ~: A
   do
	   19.output
	   return self
   end

   init do end
end

var a = new A
var a2 = new A
var b : Bool
var i: Int

a = +a + -a - a * a / a % a >> a << a ** a | ~a ^ a & a
b = a == a2 and a < a and a > a and a <= a and a >= a
i = a <=> a

'\n'.output

a += a
a -= a
a *= a
a /= a
a %= a
a **= a
a <<= a
a >>= a
a |= a
a ^= a
a &= a
