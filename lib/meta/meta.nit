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

# Simple user-defined meta-level to manipulate types of instances as object.
#
# Unfortunately, since the meta-objects are user-defined they are provided without
# any pre-defined information or behavior.
# For the same reasons, the Nit OO mechanisms do not rely on this user-defined meta-level.
#
# However `meta` permits the definition of user-defined meta-classes at any level
# of meta, even with user-defined meta-loops.
#
# ## Meta-classes
#
# Meta-classes can be defined easily in 3 steps:
#
# * define a root for the class hierarchy (eg `XObject`)
# * define a meta-class (eq `XClass[E: XObject] super Class[E]`)
# * redefine `CLASS` and `class_factory` in the root
#
# ~~~nitish because broke with nitc, see Limitation bellow
# class XObject
#    redef CLASS: XClass[SELF]
#    redef class_factory(name) do return new XClass[SELF](name)
# end
# class XClass[E: XObject] super Class[E] end
#
# var x1 = new XObject
# var x2 = new XObject
# assert x1.get_class == x2.get_class
# assert x1.get_class isa XClass[XObject]
# assert x1.get_class.get_class isa Class[XClass[XObject]]
# ~~~
#
# ## Limitation
#
# Currently works only with the interpreter `nit` and the compiler with `--erasure` (without `--rta`).
#
# `--rta` will try to detect all the runtime types, and will infinitely discover `Class[Class[Class[....]]]`.
# Unfortunately, `--separate` and `--global` require `--rta`.
#
# Moreover, the interpreter and `--erasure` have a different behavior with generics since
# with `--erasure` a single meta-instance is shared for all type variations of a same generic class.
#
# Class names are used as a primary key to identify classes.
# But name conflicts are not managed and will make the program crashes at runtime (on some cast error)
module meta

redef class Object
	# The meta-object representing the dynamic type of `self`.
	#
	# Specific meta-object can be used in subclasses
	# by redefining `CLASS` and `class_factory`.
	fun get_class: CLASS do
		var class_pool = once new HashMap[String, Class[Object]]
		var name = class_name
		var res = class_pool.get_or_null(name)
		if res != null then return res.as(CLASS)
		res = class_factory(name)
		assert res.name == name
		class_pool[name] = res
		return res
	end

	# The type of the class of self.
	# To be redefined in case of specific meta-class.
	type CLASS: Class[SELF]

	# Implementation used by `get_class` to create the specific class.
	#
	# To be redefined to use specific meta-classes.
	#
	# Note: Do not forget to update the virtual type `CLASS`.
	#
	# REQUIRE: `result.name` == `name`
	protected fun class_factory(name: String): CLASS
	do
		return new Class[SELF](name)
	end
end

# This meta-class is the root the meta-class hierarchy
class Class[E: Object]
	# The name of the class
	var name: String

	redef fun to_s do return name
end

# Helper to get the name of a type
#
# This is one of the hackiest way to retrieve the name of a random type.
#
# ~~~
# var dummy = new GetName[Sequence[nullable Comparable]]
# assert dummy.to_s == "Sequence[nullable Comparable]"
# ~~~
#
# This also works to resolve formal types
#
# ~~~
# class G[T]
#   type V: Collection[T]
#
#   var name_of_v: String = (new GetName[V]).to_s is lazy
# end
#
# var g = new G[Bool]
# assert g.name_of_v == "Collection[Bool]"
# ~~~
#
# Warning: this does not work if --erasure is used.
class GetName[E]
	redef fun to_s do
		var name = class_name
		if name.length < 9 then return ""
		return name.substring(8, name.length-9)
	end
end
