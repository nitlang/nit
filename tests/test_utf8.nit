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
import utf8

var str = "ハaローa世界A, a日本A語aです"

print str

var x = str.as(FlatString).to_utf8

assert str.length == 38
assert x.length == 18

for i in str do printn i

printn "\n"

print x.length

for i in x.chars do printn i

printn "\n"

for i in x.reversed.chars do printn i

printn '\n'

for i in x.substring(4,4).chars do printn i

printn '\n'

for i in x.substring_from(6).chars do printn i

printn '\n'

for i in x.substring(6,12).chars do printn i

printn '\n'

for i in x.to_upper.chars do printn i

printn '\n'

for i in x.to_lower.chars do printn i

printn '\n'

var xx = x + x

var xy = x * 2

assert xx == xy

