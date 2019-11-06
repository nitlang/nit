#!/usr/bin/env nit
#
# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain

# Task: Integer Overflow
# SEE: <rosettacode.org/wiki/Integer_overflow>
module integer_overflow

# Nit possed integers of 32-bit name Int32 and unsigned
# integers of 32-bit.
# Nit does not recognize overflow.

print "Signed 32-bit:"
print( -(-2147483647i32 - 1i32) )
print 2000000000i32 + 2000000000i32
print -2147483647i32 - 2147483647i32
print 46341i32 * 46341i32
#print( (-2147483647i32 - 1i32) / -1i32 )

print "unsigned 32-bit:"
print -4294967295u32
print 3000000000u32 + 3000000000u32
print 2147483647u32 - 4294967295u32
print 65537u32 * 65537u32
