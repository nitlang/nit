# This file is part of NIT ( http://www.nitlanguage.org ).
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
import functional

redef class Object
	fun foo: Object
	do
		print "foo{self}"
		return self
	end
	fun bar: Object
	do
		print "baz{self}"
		return self
	end
	fun baz: Object
	do
		print "baz{self}"
		return self
	end
end

class Y
	var quux: Object = self
end

var x

# self is the implicit receiver
x = &foo
x = &foo.bar
x = &foo.bar.baz
x = (&foo.bar).baz
x = &(foo.bar).baz

var y = new Y
#_lt1#x = &y # error since y is a variable TODO: put `alt1` back
x = &y.foo
x = &y.foo.bar
x = &y.foo.bar.baz
x = (&y.foo.bar).baz
x = &(y.foo.bar).baz

x = &y.quux
