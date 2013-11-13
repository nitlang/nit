# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

module test_ropes

var str_part_1 = "Je"

var str_part_2 = "suis"

var str_part_3 = "ici"

var str_part_4 = "."

var space = " "

var test = "Je suis ici."

var rope_uniq_test = new ImmutableRope.with_string("zzzzzzzzzzzzzzzzzzzzzzzzzzzz")

var not_rope_uniq_test = new ImmutableRope.with_string("zzzzzzzzzzzzzezzzzzzzzzzzzzz")

################################
#      Rope methods tests      #
################################

var buf = new Buffer

buf.append(str_part_1)
buf.append(space)
buf.append(str_part_2)
buf.append(space)
buf.append(str_part_3)
buf.append(str_part_4)

print buf

var buf_rope = new BufferRope

buf_rope.append_multi(str_part_1,space,str_part_2,space,str_part_3,str_part_4)

var buf_rope_with_str = new BufferRope.with_string(test)

print buf_rope*3

print buf_rope_with_str*5

print buf_rope + buf_rope_with_str

assert buf_rope.length == buf_rope_with_str.length

assert buf_rope == buf_rope_with_str

assert buf_rope.multi_concat(buf_rope, buf_rope) == buf_rope * 3

print buf_rope.subrope(0, 5)

assert buf_rope.subrope(0, 5) == "Je su"

buf_rope.append("Hi !")

assert buf_rope > buf_rope_with_str

assert buf_rope == buf_rope.chars.to_s

assert buf_rope.chars.to_s == buf_rope

assert buf == buf_rope_with_str

######################################
#      BufferRope methods tests      #
######################################

assert buf_rope + buf_rope == buf_rope.concat(buf_rope)

assert buf_rope == buf_rope.freeze

######################################
#      Rope.chars methods tests      #
######################################

assert buf_rope.chars[3] == 's'

assert buf_rope.chars.index_of('k') == -1

assert buf_rope.chars.index_of('s') == 3

assert buf_rope.chars.count('s') == 4

assert buf_rope.chars.last == '!'

assert rope_uniq_test.chars.has_only('z')

assert not not_rope_uniq_test.chars.has_only('z')

assert (new BufferRope).chars.has_only('l')

print buf_rope.to_lower

print buf_rope.to_upper


