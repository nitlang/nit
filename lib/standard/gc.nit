# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Access to the Nit internal garbage collection mechanism
module gc

import kernel

redef class Sys
	# Initiate a garbage collection
	fun force_garbage_collection is intern
end

# An object needing finalization
#
# Sub-classes of `Finalizable` must no have cycles, or else they will not be
# liberated. For this reason, it is recommended to sub-class `Finalizable`
# only on simple objects directly managing a limited resource. This use case
# is common when wrapping an extern instance with a standard object.
class Finalizable

	# Liberate any resources held by `self` before the memory holding `self` is freed
	#
	# This method is invoked by the GC during a garbage collection when `self`
	# is no longer referenced. It can also be called by the user. Its implementation
	# must be planned accordingly and ensure that it may be invoked more than once.
	#
	# The object are finialized in a topological order, it is safe for this method
	# to use attributes of this instances.
	fun finalize do end
end
