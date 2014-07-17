# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

import standard
intrude import string_experimentations::utf8

var s = "aàハ𐍆".as(FlatString)
assert s.index[0].code_point == 97
assert s.index[1].code_point == 224
assert s.index[2].code_point == 12495
assert s.index[3].code_point == 66374

var str = "ハaロЖー𐍃a世界 ᓀ . ᓂ A,𐍆 a日本A語aです".as(FlatString)

print str.length

print str.reversed

str.output

print ""

var x = str.substring(4,4).as(FlatString)

print x

for i in [0..x.length[ do
	print x.index[i + x.index_from].code_point.to_hex
end

print str.to_upper

print str.to_lower

print str * 2
