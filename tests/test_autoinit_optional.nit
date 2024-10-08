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

# This test provides variations on having an attribute with a default value but optionally settable with the constructor
# The main points of variation here is what are the basic exposed services and behavior

# The attribute is stored as not nullable but manual setter with a nullable signature is exposed
# Setting with `null` invoke the real setter with the default value.
# The manual setter is used as an initializer thus collected in the autoinit.
#
# Best option if one wants to allow the user to reset the default (with null) once the object is created
class A
	var s: String is noautoinit, private writable(real_s=)
	fun s=(v: nullable String) is autoinit do self.real_s = v or else "Default"
end

# The attribute is stored as not nullable with standard automatic getter/setter
# The initializer is a manual method that accepts the nullable value and assigns the default value if null is given.
#
# Best option if the default can only be set a construction time
class B
	var s: String is noautoinit
	protected fun s_opt=(v: nullable String) is autoinit do self.s = v or else "Default"
end

# The attribute is stored as nullable.
# A manual getter is used to return a default value if the attribute is null.
#
# Shortest solution without annotation.
# Con: the default is determined by the getter and never stored (this could be an issue if the default is complex)
class C
	protected var s_opt: nullable String
	fun s: String do return s_opt or else "Default"
end

# The attribute is stored as nullable.
# A manual getter is used to return a default value if the attribute is null.
#
# Longer solution without annotation but the getter lazily computes and stores the default once
class D
	protected var s_opt: nullable String
	fun s: String do
		var res = s_opt
		if res != null then return res
		res = "Default"
		s_opt = res
		return res
	end
end

# The attribute is stored as not nullable with standard automatic getter/setter
# The initializer is manual method that accepts the nullable value and does nothing if null is given.
#
# This one has a tricky behavior if one accesses to `s` before `s_opt=` is executed
class E
	var s = "Default" is lazy
	protected fun s_opt=(v: nullable String) is autoinit do if v != null then s = v
end

var a2 = new A("Mine")
print a2.s
var a1 = new A
print a1.s
a1.s = "Other"
print a1.s
a1.s = null
print a1.s

print ""

var b2 = new B("Mine")
print b2.s
var b1 = new B
print b1.s
b1.s = "Other"
print b1.s
b1.s_opt = null
print b1.s
b1.s_opt = "Yet Another"
print b1.s

print ""

var c2 = new C("Mine")
print c2.s
var c1 = new C
print c1.s
c1.s_opt = "Other"
print c1.s
c1.s_opt = null
print c1.s

print ""

var d2 = new D("Mine")
print d2.s
var d1 = new D
print d1.s
d1.s_opt = "Other"
print d1.s
d1.s_opt = null
print d1.s

print ""

var e2 = new E("Mine")
print e2.s
var e1 = new E
print e1.s
e1.s = "Other"
print e1.s
e1.s_opt = null
print e1.s
e1.s_opt = "Yet Another"
print e1.s
