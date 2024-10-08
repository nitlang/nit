# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Base facilities for String-related microbenchmarks
module bench_base

# Prepares a string to be used in a bench
fun prepare_string(strlen: Int): String do
	var s = "a"
	for i in [1 .. strlen[ do s += "a"
	return s
end

# Prepares a buffer to be used in a bench
fun prepare_buffer(strlen: Int): Buffer do
	var b = new Buffer
	for i in [0 .. strlen[ do b.add 'a'
	return b
end
