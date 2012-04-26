# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Hashable things.
# It introduces an hash function in objects.
package hash

import kernel

redef class Object
	# The hash code of the object.
	# Assuming that a == b -> a.hash == b.hash
	##
	# Without redefinition, it is based on the `object_id' of the instance.
	fun hash: Int do return object_id / 8
end

redef class Int
	redef fun hash do return self
end

redef class Char
	redef fun hash do return ascii
end

redef class Bool
	redef fun hash
	do
		if self then
			return 1
		else
			return 0
		end
	end
end

