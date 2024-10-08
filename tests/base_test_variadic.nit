# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

import kernel
import array

class A

	fun variadic(b: Discrete...)
	do
		b[0].output
		b[1].output
		b[2].output
	end

end

class B
	super A

	redef fun variadic(b: Discrete...)
	do
		super
	end
end

(new A).variadic(1,2,3)
(new B).variadic(4,5,6)
