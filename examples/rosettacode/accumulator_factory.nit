#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# The `accumulator factory` task.
# SEE: <http://rosettacode.org/wiki/Accumulator_factory>
#
# Nit has no first-class function.
# A class is used to store the state.
module accumulator_factory

class Accumulator
	# The accumulated sum
	# Numeric is used, so Int and Float are accepted
	private var sum: Numeric
	fun call(n: Numeric): Numeric
	do
		# `add` is the safe `+` method on Numeric
		sum = sum.add(n)
		return sum
	end
end

var x = new Accumulator(1)
x.call(5)
var y = new Accumulator(3)
print x.call(2.3)
