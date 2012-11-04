# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Management of time and dates
package time

import kernel

redef class Object
	# Unix time: the number of seconds elapsed since January 1, 1970
	protected fun get_time: Int is extern "kernel_Any_Any_get_time_0"
end

redef class Sys
	# Wait a specific number of second and nanoseconds
	fun nanosleep(sec, nanosec: Int) is extern "std_nanosleep"
end
