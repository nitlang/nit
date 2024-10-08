# This file is part of NIT ( https://nitlanguage.org ).
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
# It is recommended to sub-class `Finalizable` only on
# simple objects directly managing a limited resource. This use case
# is common when wrapping an extern instance with a standard object.
class Finalizable

	# Liberate any resources held by `self` before the memory holding `self` is freed
	#
	# This method is invoked by the GC during a garbage collection when `self`
	# is no longer referenced. It can also be called by the user. Its implementation
	# must be planned accordingly and ensure that it may be invoked more than once.
	#
	# The object are not finialized in a topological order, it is safe for this method
	# to use attributes of this instances, unless theses attributes are finalizable as well
	# because they may have been finalized already.
	fun finalize do end
end

# An object to be finalized only once
#
# This is an utility sub-class to `Finalizable` which ensures that `finalized_once`
# is called only once per instance. User classes implementing `FinalizableOnce`
# shoud specialize `finalize_once` and _not_ `finalize`. When manipulating the user
# class, only `finalize` should be called as it protects `finalize_once`.
class FinalizableOnce
	super Finalizable

	# Has `self` been finalized? (either by the GC or an explicit call to `finalize`)
	var finalized = false

	redef fun finalize
	do
		if finalized then return

		finalize_once
		finalized = true
	end

	# Real finalization method of `FinalizableOnce`, will be called only once
	#
	# See: `Finalizable::finalize` for restrictions on finalizer methods.
	protected fun finalize_once do end
end
