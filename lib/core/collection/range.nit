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

# Module for range of discrete objects.
module range

import abstract_collection

# Range of discrete objects.
class Range[E: Discrete]
	super Collection[E]

	# Representation of the first element
	private var first_element: E

	# In introduction `first()` defines `expect(not_empty)`
	# but in our case, the `first` method now represents the access to the `first_element` attribute.
	# The expected contract is therefore no longer necessary this is why `expect(true)`.
	redef fun first
	is
		expect(true)
	do
		return first_element
	end

	# Set the first element `first_element`
	fun first=(element :E)
	is
		ensure(first_element == element)
	do
		first_element = element
	end

	# Get the last element.
	var last: E

	# Get the element after the last one.
	var after: E

	#     assert [1..10].has(5)
	#     assert [1..10].has(10)
	#     assert not [1..10[.has(10)
	redef fun has(item) do return item isa Comparable and item >= first and item <= last

	#     assert [1..1].has_only(1)
	#     assert not [1..10].has_only(1)
	redef fun has_only(item) do return first == item and item == last or is_empty

	#     assert [1..10].count(1)	== 1
	#     assert [1..10].count(0)	== 0
	redef fun count(item)
	do
		if has(item) then
			return 1
		else
			return 0
		end
	end

	redef fun iterator do return new IteratorRange[E](self)

	# Gets an iterator starting at the end and going backwards
	#
	#     var reviter = [1..4].reverse_iterator
	#     assert reviter.to_a == [4,3,2,1]
	#
	#     reviter = [1..4[.reverse_iterator
	#     assert reviter.to_a == [3,2,1]
	fun reverse_iterator: Iterator[E] do return new ReverseIteratorRange[E](self)

	#     assert [1..10].length		== 10
	#     assert [1..10[.length		== 9
	#     assert [1..1].length		== 1
	#     assert [1..-10].length	== 0
	redef fun length
	do
		if is_empty then return 0
		var nb = first.distance(after)
		if nb > 0 then
			return nb
		else
			return 0
		end
	end

	#     assert not [1..10[.is_empty
	#     assert not [1..1].is_empty
	#     assert [1..-10].is_empty
	redef fun is_empty do return first >= after

	# Create a range [`from`, `to`].
	# The syntax `[from..to]` is equivalent.
	#
	#     var a = [10..15]
	#     var b = new Range[Int] (10,15)
	#     assert a == b
	#     assert a.to_a == [10, 11, 12, 13, 14, 15]
	init(from: E, to: E) is old_style_init do
		first_element = from
		last = to
		after = to.successor(1)
	end

	# Create a range [`from`, `to`[.
	# The syntax `[from..to[` is equivalent.
	#
	#     var a = [10..15[
	#     var b = new Range[Int].without_last(10,15)
	#     assert a == b
	#     assert a.to_a == [10, 11, 12, 13, 14]
	init without_last(from: E, to: E)
	do
		first_element = from
		if from <= to then
			last = to.predecessor(1)
			after = to
		else
			last = to.successor(1)
			after = to
		end
	end

	# Two ranges are equals if they have the same first and last elements.
	#
	#     var a = new Range[Int](10, 15)
	#     var b = new Range[Int].without_last(10, 15)
	#     assert a == [10..15]
	#     assert a == [10..16[
	#     assert not a == [10..15[
	#     assert b == [10..15[
	#     assert b == [10..14]
	#     assert not b == [10..15]
	redef fun ==(o) do
		return o isa Range[E] and self.first == o.first and self.last == o.last
	end

	#     var a = new Range[Int](10, 15)
	#     assert a.hash == 455
	#     var b = new Range[Int].without_last(10, 15)
	#     assert b.hash == 432
	redef fun hash do
		# 11 and 23 are magic numbers empirically determined to be not so bad.
		return first.hash * 11 + last.hash * 23
	end

	# Gets an iterator that progress with a given step.
	#
	# The main usage is in `for` construction.
	#
	# ~~~
	# for i in [10..25].step(10) do assert i == 10 or i == 20
	# ~~~
	#
	# But `step` is usable as any kind of iterator.
	#
	# ~~~
	# assert [10..27].step(5).to_a == [10,15,20,25]
	# ~~~
	#
	# If `step == 1`, then it is equivalent to the default `iterator`.
	#
	# ~~~
	# assert [1..5].step(1).to_a == [1..5].to_a
	# ~~~
	#
	# If `step` is negative, then the iterator will iterate on ranges whose `first` > `last`.
	#
	# ~~~
	# assert [25..12].step(-5).to_a == [25,20,15]
	# ~~~
	#
	# On such ranges, the default `iterator` will be empty
	#
	# ~~~
	# assert [5..1].step(1).to_a.is_empty
	# assert [5..1].iterator.to_a.is_empty
	# assert [5..1].to_a.is_empty
	# assert [5..1].is_empty
	# ~~~
	#
	# Note that on non-empty range, iterating with a negative step will be empty
	#
	# ~~~
	# assert [1..5].step(-1).to_a.is_empty
	# ~~~
	fun step(step: Int): Iterator[E]
	do
		var i
		if step >= 0 then
			i = iterator
		else
			i = new DowntoIteratorRange[E](self)
			step = -step
		end

		if step == 1 then return i
		return i.to_step(step)
	end
end

# Iterator on ranges.
private class IteratorRange[E: Discrete]
	super Iterator[E]
	var range: Range[E]
	redef var item is noinit

	redef fun is_ok do return _item < _range.after

	redef fun next do _item = _item.successor(1)

	init
	do
		_item = _range.first
	end
end

# Reverse iterator on ranges.
private class ReverseIteratorRange[E: Discrete]
	super Iterator[E]
	var range: Range[E]
	redef var item is noinit

	redef fun is_ok do return _item >= _range.first

	redef fun next do _item = _item.predecessor(1)

	init
	do
		_item = _range.last
	end
end

# Iterator on ranges.
private class DowntoIteratorRange[E: Discrete]
	super IndexedIterator[E]
	var range: Range[E]
	redef var item is noinit
	redef fun index do return _item.distance(_range.first)

	redef fun is_ok do return _item >= _range.last

	redef fun next do _item = _item.predecessor(1)

	init
	do
		_item = _range.first
	end
end

redef class Int
	# Returns the range from 0 to `self-1`.
	#
	#     assert 3.times == [0..3[
	#     assert 10.times == [0..10[
	#     assert ((-1).times).is_empty
	#
	# This can be usefull for loops:
	#
	#    var s = new Array[String]
	#    for i in 3.times do s.add "cool"
	#    assert s.join(" ") == "cool cool cool"
	fun times: Range[Int] do return [0 .. self[
end
