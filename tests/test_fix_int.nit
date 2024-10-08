# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Tests for the fixed-length integers variant of standard
module test_fix_int

private fun test_int(i, j, l: Numeric) do
	print ""
	var k = i + j

	print k
	print k.to_i
	print k.to_b

	k = l + j

	print k
	print k.to_i
	print k.to_b

	print k.to_i8
	print k.to_i16
	print k.to_u16
	print k.to_i32
	print ""
end

var i: Numeric
var j: Numeric
var l: Numeric

j = 126i8
i = 2i8
l = 1i8

test_int(i, j, l)

j = 32766i16
i = 2i16
l = 1i16

test_int(i, j, l)

j = 65534u16
i = 2u16
l = 1u16

test_int(i, j, l)

j = 2147483646i32
i = 2i32
l = 1i32

test_int(i, j, l)

j = 4294967294u32
i = 2u32
l = 1u32

test_int(i, j, l)

j = 254u8
i = 2u8
l = 1u8

test_int(i, j, l)

j = 254
i = 2
l = 1

test_int(i, j, l)
