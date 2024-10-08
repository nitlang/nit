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

import kernel

class X
	fun foo: SELF do return self
	fun bar(o: SELF) do o.output_class_name
end

class Y
	super X

#alt1# redef fun foo do return new X
#alt2# redef fun foo do return new Y
end

class A[E]
	fun foo: Object do return new G[SELF]
end

class B[F]
	super A[F]
end

class G[E:A[nullable Object]]
end

var x = new X
x.output_class_name
x.foo.output_class_name
x.bar x

var y = new Y
y.output_class_name
y.foo.output_class_name
x.bar y
y.bar y
#alt3# y.bar x

var a = new A[Int]
a.output_class_name
a.foo.output_class_name

var b = new B[Bool]
b.output_class_name
b.foo.output_class_name
