# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Automatic derivable implementations of standard basic methods.
#
# This module introduce `Derivable` as the main interface to implement (or auto-implement) and
# provides additional mixin-interfaces with specific default behavior of standard basic methods based
# on the services of this interface.
#
# The name *deriving* is inspired from the deriving mechanism of Haskell.
#
# This module also introduce a new annotation `auto_derive`. See `Derivable` for details.
module deriving is
	new_annotation auto_derive
end

# Interface of objects that expose some kind of internal representation in a very unreliable way.
#
# The point of this interface is to allow objects to give a basic representation of
# themselves within a simple key-value dictionary.
# The specific semantic of each key and value is let unspecified.
#
# Moreover the class annotation `auto_derive` will automatically implements the
# interface with the attributes locally defined in the class.
#
# ~~~
# class A
#    auto_derive
#    var an_int: Int
#    var a_string: String
# end
#
# var a = new A(5, "five")
# var map = a.derive_to_map
# assert map.length == 2
# assert map["an_int"] == 5
# assert map["a_string"] == "five"
# ~~~
interface Derivable
	# Returns a map that loosely represents the object `self`.
	#
	# Warning: by default the method returns an empty Map.
	# It is done this way so that subclasses can just call `super` and add their own attributes.
	#
	# Forgetting to redefine `derive_to_map` will broke the expectation of the user of the class
	# Since an empty map is not POLA.
	#
	# Note that the semantic of keys and values is let unspecified.
	# Moreover, there is no specification nor mechanism to avoid key collision.
	fun derive_to_map: Map[String, nullable Object]
	do
		return new HashMap[String, nullable Object]
	end
end

# Implementation of `to_s` for `Derivable` objects.
#
# The implementation uses `to_s` for each value of `attributes_to_map`.
#
# ~~~
# class A
#    auto_derive
#    super DeriveToS
#    var an_int: Int
#    var a_string: String
# end
#
# var a = new A(5, "five")
# assert a.to_s == "an_int:5; a_string:five"
# ~~~
#
# Warning: the method may go in an infinite recursion if there is a circuit in
# the implementation of `to_s`.
interface DeriveToS
	super Derivable
	redef fun to_s do return derive_to_map.join("; ", ":")
end

# Implementation of `==` and `hash` for `Derivable` objects.
#
# The implementations just call `==` and `hash` on `derive_to_map`.
#
# ~~~
# class A
#    auto_derive
#    super DeriveEqual
#    var an_int: Int
#    var a_string: String
# end
#
# var a = new A(5, "five")
# var b = new A(5, "five")
# var c = new A(6, "six")
# assert a == b
# assert a.hash == b.hash
# assert a != c
# ~~~
#
# Warning: the method may go in an infinite recursion if there is a circuit in
# the implementation of `==` or `hash`.
interface DeriveEqual
	super Derivable
	redef fun ==(other) do
		if not other isa Derivable then return false
		return derive_to_map == other.derive_to_map
	end
	redef fun hash do
		return derive_to_map.hash
	end
end
