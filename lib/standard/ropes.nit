# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

# Nit implementation of the Ropes (see Ropes : An Alternative to Strings,
# SOFTWARE - PRACTICE AND EXPERIENCE, VOL. 25(12), 1315 - 1330 (DECEMBER 1995)
# Hans. J Boehm, Russ Atkinson and Michael Plass)
#
# A rope is a kind of string but instead of being flat, it relies on a binary tree structure to store data.
module ropes

intrude import string

