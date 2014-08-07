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
intrude import string_experimentations::utf8_noindex

var s = "aàハ𐍆".as(FlatString)
assert s.char_at(0).code_point == 97
assert s.char_at(1).code_point == 224
assert s.char_at(2).code_point == 12495
assert s.char_at(3).code_point == 66374

var str = "ハaロЖー𐍃a世界 ᓀ . ᓂ A,𐍆 a日本A語aです".as(FlatString)

print str.length
print str

for i in [0 .. str.length[ do
	str.char_at(i).output
end

'\n'.output

var ss = str.reversed.as(FlatString)

for i in [0 .. ss.length[ do ss.char_at(i).output

'\n'.output

var x = str.substring(4,4).as(FlatString)

for i in [0 .. x.length[ do x.char_at(i).output

'\n'.output

var xx = x.reversed.as(FlatString)

for i in [0 .. xx.length[ do xx.char_at(i).output

'\n'.output

assert str * 2 == str + str

assert x * 2 == x + x

print str.to_upper

print str.to_lower

var buf = new FlatBuffer.from(str)

buf.append str

var bf = new FlatBuffer.from(str)

bf.times(2)

assert bf == buf

var bf2 = new FlatBuffer.from(str)

bf2.char_at(0) = str.char_at(1)
bf2.char_at(1) = str.char_at(0)

for i in [0 .. bf2.length[ do bf2.char_at(i).output

'\n'.output

bf2.lower

for i in [0 .. bf2.length[ do bf2.char_at(i).output

'\n'.output

bf2.upper

for i in [0 .. bf2.length[ do bf2.char_at(i).output

'\n'.output

bf2.reverse

for i in [0 .. bf2.length[ do bf2.char_at(i).output

'\n'.output
