# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Memory-efficient Cartesian products, combinations and permutation on collections.
#
# This module offers memory-efficient views on combinatoric collections.
# Methods of the views create objects only when needed.
# Moreover, produced objects during iterations are free to be collected and
# their memory reused.
#
# This enable these views and method to works with very combinatoric large collections.
#
# When small combinatoric views need to be kept in memory (for fast access by example).
# The `Collection::to_a` method and other related factories can be used to transform
# the combinatoric views into extensive collections,
module combinations

redef class Collection[E]
	# Cartesian product, over `r` times `self`.
	#
	# See `CartesianCollection` for details.
	#
	# FIXME: Cannot be used if RTA is enabled. So `niti` or `--erasure` only.
	fun product(r: Int): Collection[SequenceRead[E]]
	do
		return new CartesianCollection[E]([self]*r)
	end

	# All `r`-length permutations on self (all possible ordering) without repeated elements.
	#
	# See `CartesianCollection` for details.
	#
	# FIXME: Cannot be used if RTA is enabled. So `niti` or `--erasure` only.
	fun permutations(r: Int): Collection[SequenceRead[E]]
	do
		var res = new CombinationCollection[E](self, r)
		res.are_sorted = false
		res.are_unique = true
		return res
	end

	# All `r`-length combinations on self (in same order) without repeated elements.
	#
	# See `CartesianCollection` for details.
	#
	# FIXME: Cannot be used if RTA is enabled. So `niti` or `--erasure` only.
	fun combinations(r: Int): Collection[SequenceRead[E]]
	do
		var res = new CombinationCollection[E](self, r)
		res.are_sorted = true
		res.are_unique = true
		return res
	end

	# All `r`-length combination on self (in same order) with repeated elements.
	#
	# See `CartesianCollection` for details.
	#
	# FIXME: Cannot be used if RTA is enabled. So `niti` or `--erasure` only.
	fun combinations_with_replacement(r: Int): Collection[SequenceRead[E]]
	do
		var res = new CombinationCollection[E](self, r)
		res.are_sorted = true
		res.are_unique = false
		return res
	end
end

# A view of a Cartesian-product collection over homogeneous collections.
#
# Therefore, this view *generates* all the sequences of elements constructed by associating
# en element for each one of the original collections.
#
# It is equivalent to doing nesting `for` for each collection.
#
# ~~~~
# var xs = [1, 2, 3]
# var ys = [8, 9]
# var xys = new CartesianCollection[Int]([xs, ys])
# assert xys.length == 6
# assert xys.to_a == [[1,8], [1,9], [2,8], [2,9], [3,8], [3,9]]
# ~~~~
#
# The pattern of the generate sequences produces a lexicographical order.
#
# Because it is a generator, it is memory-efficient and the sequences are created only when needed.
#
# Note: because it is a view, changes on the base collections are reflected on the view.
#
# ~~~~
# assert xs.pop == 3
# assert ys.pop == 9
# assert xys.to_a == [[1,8], [2,8]]
# ~~~~
class CartesianCollection[E]
	super Collection[SequenceRead[E]]

	# The base collections used to generate the sequences.
	var collections: SequenceRead[Collection[E]]

	redef fun length
	do
		var res = 1
		for c in collections do res = res * c.length
		return res
	end

	redef fun iterator do return new CartesianIterator[E](self)
end

private class CartesianIterator[E]
	super Iterator[SequenceRead[E]]
	var collection: CartesianCollection[E]

	# The array of iterations that will be increased in the lexicographic order.
	var iterators = new Array[Iterator[E]]

	init
	do
		for c in collection.collections do
			var it = c.iterator
			iterators.add it
			if not it.is_ok then is_ok = false
		end
	end

	redef var is_ok = true

	redef fun item
	do
		var len = iterators.length
		var res = new Array[E].with_capacity(len)
		for i in [0..len[ do
			var it = iterators[i]
			res.add(it.item)
		end
		return res
	end

	redef fun next
	do
		var rank = iterators.length - 1

		# Odometer-like increment starting from the last iterator
		loop
			var it = iterators[rank]
			it.next
			if it.is_ok then return

			# The iterator if over
			if rank == 0 then
				# It it is the first, then the whole thing is over
				is_ok = false
				return
			end

			# If not, restart the iterator and increment the previous one
			# (like a carry)
			iterators[rank] = collection.collections[rank].iterator
			rank -= 1
		end
	end
end

# A view of some combinations over a base collections.
#
# This view *generates* some combinations and permutations on a collection.
#
# By default, the generated sequences are combinations:
#
#   * each sequence has a length of `repeat`
#   * elements are in sorted order (see `are_sorted` for details)
#   * no repeated element (see `are_unique` for details)
#
# ~~~~
# var xs = [1, 2, 3]
# var cxs = new CombinationCollection[Int](xs, 2)
# assert cxs.length == 3
# assert cxs.to_a == [[1,2], [1,3], [2,3]]
# ~~~~
#
# Other kind of combinations can be generated by tweaking the attributes `are_sorted` and `are_unique`.
#
# * for permutation:
#
# ~~~~
# cxs.are_sorted = false
# cxs.are_unique = true
# assert cxs.length == 6
# assert cxs.to_a == [[1,2], [1,3], [2,1], [2,3], [3,1], [3,2]]
# ~~~~
#
# * for combinations with replacement:
#
# ~~~~
# cxs.are_sorted = true
# cxs.are_unique = false
# assert cxs.length == 6
# assert cxs.to_a == [[1,1], [1,2], [1,3], [2,2], [2,3], [3,3]]
# ~~~~
#
# * for product:
#
# ~~~~
# cxs.are_sorted = false
# cxs.are_unique = false
# assert cxs.length == 9
# assert cxs.to_a == [[1,1], [1,2], [1,3], [2,1], [2,2], [2,3], [3,1], [3,2], [3,3]]
# ~~~~
#
# However, in the last case, a faster alternative is to use `CartesianCollection`:
#
# ~~~~
# var cp = new CartesianCollection[Int]([xs] * 2)
# assert cp.to_a == cxs.to_a
# ~~~~
#
# As seen in the examples, the patterns of the generated sequences produce a lexicographical order.
#
# Because it is a generator, it is memory-efficient and the sequences are created only when needed.
#
# Note: because it is a view, changes on the base collection are reflected on the view.
#
# ~~~~
# assert xs.pop == 3
# cxs.are_sorted = true
# cxs.are_unique = true
# assert cxs.to_a == [[1,2]]
# ~~~~
class CombinationCollection[E]
	super Collection[SequenceRead[E]]

	# The base collection used to generate the sequences.
	var collection: Collection[E]

	# The maximum length of each generated sequence.
	var repeat: Int

	init
	do
		assert repeat >= 0
	end

	# Are the elements in the generated sequences sorted?
	# Default `true`.
	#
	# When `true`, the original order is preserved.
	#
	# Elements are compared by their order in the base collection,
	# not by their intrinsic value or comparability.
	#
	# ~~~~
	# var xs = [1, 1, 2]
	# var cxs = new CombinationCollection[Int](xs, 2)
	# cxs.are_sorted = true
	# assert cxs.to_a == [[1,1], [1,2], [1, 2]]
	# cxs.are_sorted = false
	# assert cxs.to_a == [[1,1], [1,2], [1, 1], [1, 2], [2, 1], [2, 1]]
	# ~~~~
	var are_sorted = true is writable

	# Are the element in the generated sequence unique?
	# Default `true`.
	#
	# When `true`, an element cannot be reused in the same sequence (no replacement).
	#
	# Elements are distinguished by their order in the base collection,
	# not by their intrinsic value or equality.
	#
	# ~~~~
	# var xs = [1, 1, 2]
	# var cxs = new CombinationCollection[Int](xs, 2)
	# cxs.are_unique = true
	# assert cxs.to_a == [[1,1], [1,2], [1, 2]]
	# cxs.are_unique = false
	# assert cxs.to_a == [[1,1], [1,1], [1,2], [1,1], [1,2], [2,2]]
	# ~~~~
	var are_unique = true is writable

	redef fun length
	do
		var n = collection.length
		if are_unique then
			if repeat > n then
				return 0
			end
			if are_sorted then
				return n.factorial / repeat.factorial
			else
				return n.factorial / (n-repeat).factorial
			end
		else
			if are_sorted then
				return (n+repeat-1).factorial / repeat.factorial / (n-1).factorial
			else
				return n ** repeat
			end
		end
	end

	redef fun iterator do
		return new CombinationIterator[E](self)
	end
end

private class CombinationIterator[E]
	super Iterator[SequenceRead[E]]
	var product: CombinationCollection[E]

	var iterators = new Array[Iterator[E]]
	var indices = new Array[Int]

	var are_sorted: Bool is noinit
	var are_unique: Bool is noinit

	init
	do
		are_sorted = product.are_sorted
		are_unique = product.are_unique

		for rank in [0..product.repeat[ do
			reset_iterator(rank)
		end
	end

	redef var is_ok = true

	redef fun item
	do
		var len = product.repeat
		var res = new Array[E].with_capacity(len)
		for i in [0..len[ do
			var it = iterators[i]
			res.add(it.item)
		end
		return res
	end

	redef fun next
	do
		var rank = product.repeat - 1

		loop
			var it = iterators[rank]

			if are_unique and not are_sorted then
				var idx = indices[rank] + 1
				it.next
				var adv = next_free(rank, idx)
				for i in [idx..adv[ do it.next
				indices[rank] = adv
			else
				it.next
				indices[rank] += 1
			end

			if it.is_ok then break
			if rank == 0 then
				is_ok = false
				return
			end
			rank -= 1
		end

		for r in [rank+1..product.repeat[ do
			reset_iterator(r)
		end
	end

	fun next_free(rank: Int, start: Int): Int
	do
		loop
			for i in [0..rank[ do
				if indices[i] == start then
					start += 1
					continue label
				end
			end
			break label
		end label
		return start
	end

	fun reset_iterator(rank: Int): Iterator[E]
	do
		var it = product.collection.iterator
		iterators[rank] = it
		var skip = 0

		if (not are_sorted and not are_unique) or rank == 0 then
			# DO NOTHING
		else if are_sorted and are_unique then
			skip = indices[rank-1] + 1
		else if are_sorted then
			skip = indices[rank-1]
		else
			skip = next_free(rank, 0)
		end

		for i in [0..skip[ do it.next
		indices[rank] = skip
		if not it.is_ok then is_ok = false
		return it
	end

	fun need_skip: Bool
	do
		if not are_sorted and not are_unique then
			return false
		else if are_sorted and are_unique then
			var max = -1
			for i in indices do
				if i <= max then return true
				max = i
			end
			return false
		else if are_sorted then
			var max = -1
			for i in indices do
				if i < max then return true
				max = i
			end
			return false
		else
			# are_unique
			for i in indices do
				if indices.count(i) > 1 then return true
			end
			return false
		end
	end
end
