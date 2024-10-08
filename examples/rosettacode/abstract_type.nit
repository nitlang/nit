#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: abstract type
# SEE: <http://rosettacode.org/wiki/Abstract_type>
#
# Methods withouts implementation are annotated `abstract`.
#
# Abstract classes and interfaces can contain abstract methods and concrete (i.e. non-abstract) methods.
# Abstract classes can also have attributes.
module abstract_type

interface Inter
	fun method1: Int is abstract
	fun method2: Int do return 1
end

abstract class Abs
	fun method1: Int is abstract
	fun method2: Int do return 1
	var attr: Int
end
