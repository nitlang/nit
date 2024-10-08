# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Memory-efficient Cartesian products on heterogeneous collections.
#
# This module is a proof-of-concept to propose memory-efficient views on collections.
#
# This is a specific alternative to `combinations`, that focuses only highly efficient
# Cartesian products between collections of different types.
#
#    Collection[Int] X Collection[String] -> Collection[(Int,String)]
#
# However, in Nit, there in no native *tuple* type.
# So we need a first building block, a pair.
module cartesian

# A simple read-only pair of two elements `e` and `f`.
class Pair[E, F]
	# The first element of the pair
	var e: E

	# The second element of the pair
	var f: F

	# The parenthesized notation.
	#
	# ~~~
	# var p = new Pair[Int, String](1, "hello")
	# assert p.to_s == "(1,hello)"
	# ~~~
	redef fun to_s
	do
		var es = e or else ""
		var fs = f or else ""
		return "({es},{fs})"
	end

	# Untyped pair equality.
	#
	# ~~~
	# var p1 = new Pair[Object, Object](1, 2)
	# var p2 = new Pair[Int, Int](1, 2)
	# var p3 = new Pair[Int, Int](1, 3)
	#
	# assert p1 == p2
	# assert p2 != p3
	# ~~~
	#
	# Untyped because we want that `p1 == p2` above.
	# So the method just ignores the real types of `E` and `F`.
	redef fun ==(o) do return o isa Pair[nullable Object, nullable Object] and e == o.e and f == o.f

	redef fun hash do return e.hash * 13 + f.hash * 27 # Magic numbers are magic!
end

# A view of a Cartesian-product collection over two collections.
#
# A Cartesian product over two collections is just a collection of pairs.
# Therefore, this view *contains* all the pairs of elements constructed by associating each
# element of the first collection to each element of the second collection.
#
# However the view is memory-efficient and the pairs are created only when needed.
#
# A simple Cartesian product
# ~~~~
# var c1 = [1,2]
# var c2 = ["a","b","c"]
# var c12 = new Cartesian[Int,String](c1, c2)
# assert c12.length    == 6
# assert c12.join(";") == "(1,a);(1,b);(1,c);(2,a);(2,b);(2,c)" # All the 6 pairs
# ~~~~
#
# Note: because it is a view, changes on the base collections are reflected on the view.
#
# E.g. c12 is a view on c1 and c2, so if c1 changes, then c12 "changes".
# ~~~~
# assert c2.pop        == "c"
# assert c12.length    == 4
# assert c12.join(";") == "(1,a);(1,b);(2,a);(2,b)" # All the 4 remaining pairs
# ~~~~
#
# Cartesian objects are collections, so can be used to build another Cartesian object.
# ~~~~
# var c3 = [1000..2000[
# var c123 = new Cartesian[Pair[Int,String],Int](c12, c3)
# assert c123.length   == 4000
# ~~~~
#
# All methods of Collection are inherited, it is so great!
#
# E.g. search elements?
# ~~~~
# var p12 = new Pair[Int,String](2,"b")
# assert c12.has(p12)      == true
# var p123 = new Pair[Pair[Int, String], Int](p12, 1500)
# var p123bis = new Pair[Pair[Int, String], Int](p12, 0)
# assert c123.has(p123)    == true
# assert c123.has(p123bis) == false
# ~~~~
class Cartesian[E, F]
	super Collection[Pair[E,F]]

	# The first collection
	var ce: Collection[E]

	# The second collection
	var cf: Collection[F]

	redef fun length do return ce.length * cf.length # optional, but so efficient...

	redef fun iterator do return new CartesianIterator[E,F](self)

	# Returns a new Cartesian where the first collection is the second.
	# Because the full collection is virtual, the operation is cheap!
	fun swap: Cartesian[F, E] do return new Cartesian[F, E](cf, ce)
end

# An iterator over a `Cartesian`-product collection.
class CartesianIterator[E,F]
	super Iterator[Pair[E,F]]

	# The associated Cartesian-product collection.
	var collection: Cartesian[E,F]

	# The iterator over the first collection of the Cartesian product.
	# Will be used only once.
	private var ice: Iterator[E] is noinit

	# The iterator over the second collection of the Cartesian product.
	# Will be used once for each element of the first collection.
	private var icf: Iterator[F] is noinit

	init do
		# Initialize each iterator
		ice = collection.ce.iterator
		icf = collection.cf.iterator
	end

	redef fun is_ok do return ice.is_ok and icf.is_ok

	redef fun item do
		# We lazily create the pair here
		var res = item_cache
		if res == null then
			res = new Pair[E,F](ice.item, icf.item)
			item_cache = res
		end
		return res
	end

	# Cached pair created by `item` and cleared by `next`.
	private var item_cache: nullable Pair[E,F] = null

	redef fun next do
		# Next item in the second iterator
		icf.next
		if not icf.is_ok then
			# If it is over, then reset it and advance the first iterator
			icf = collection.cf.iterator
			ice.next
		end
		# Reset the cache
		item_cache = null
	end

	# First member of `item`.
	#
	# This method shortcut the allocation of a `Pair`, thus should be more time and memory efficient.
	fun item_e: E do return ice.item

	# Second member of `item`.
	#
	# This method shortcut the allocation of a `Pair`, thus should be more time and memory efficient.
	fun item_f: E do return icf.item
end
