# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Pipelined filters and operations on iterators.
#
# This module enhances `Iterator` with some methods that enable a pipeline-like programing.
# The processing of elements in a pipeline is done trough connected filters that are implemented with reasonable memory constraints.
module pipeline

redef interface Iterator[E]
	# Filter: sort with `default_comparator`.
	# SEE: `sort_with` for details
	# REQUIRE: self isa Iterator[Comparable]
	#
	#     assert [1,3,2].iterator.sort.to_a	     ==  [1,2,3]
	fun sort: Iterator[E]
	do
		assert self isa Iterator[Comparable]
		var a = self.to_a
		default_comparator.sort(a)
		return a.iterator
	end

	# Filter: sort with a given `comparator`.
	# Important: require O(n) memory.
	#
	#     assert ["a", "c", "b"].iterator.sort_with(alpha_comparator).to_a  == ["a", "b", "c"]
	fun sort_with(comparator: Comparator): Iterator[E]
	do
		var a = self.to_a
		comparator.sort(a)
		return a.iterator
	end

	# Filter: reject duplicates.
	# Elements already seen are rejected.
	#
	# Important: rely on `==` and `hash`
	# Important: require O(m) in memory, where m is the total number of uniq items.
	#
	#     assert [1,2,1,1,1,3,2].iterator.uniq.to_a	     ==  [1,2,3]
	#
	# REQUIRE: self isa Iterator[Object]
	fun uniq: Iterator[E]
	do
		assert self isa Iterator[Object]
		return new PipeUniq[E](self)
	end

	# Filter: reject continuous sequences of duplicates
	#
	# Important: rely on `==`.
	#
	#     assert [1,2,1,1,1,3,2].iterator.seq_uniq.to_a	     ==  [1,2,1,3,2]
	fun seq_uniq: Iterator[E]
	do
		return new PipeSeqUniq[E](self)
	end

	# Combine two iterators.
	#
	# When the first iterator is terminated, the second is started.
	#
	#     assert ([1..20[.iterator + [20..40[.iterator).to_a	     ==  ([1..40[).to_a
	#
	# SEE: `Iterator2`
	fun +(other: Iterator[E]): Iterator[E]
	do
		return new PipeJoin[E](self, other)
	end

	# Alternate each item with `e`.
	#
	#     assert [1,2,3].iterator.alternate(0).to_a		     ==  [1,0,2,0,3]
	fun alternate(e: E): Iterator[E]
	do
		return new PipeAlternate[E](self, e)
	end

	# Filter: reject a given `item`.
	#
	#     assert [1,1,2,1,3].iterator.skip(1).to_a		     ==  [2,3]
	fun skip(item: E): Iterator[E]
	do
		return new PipeSkip[E](self, item)
	end

	# Filter: keep only the first `length` items.
	#
	# This filter does not always consume `self'.
	#
	#     var i = [1,2,3,4,5].iterator
	#     assert i.head(2).to_a   == [1,2]
	#     assert i.to_a           == [3,4,5]
	fun head(length: Int): Iterator[E]
	do
		return new PipeHead[E](self, length)
	end

	# Filter: reject the first `length` items.
	#
	#     assert [1,2,3,4,5].iterator.skip_head(2).to_a	     ==  [3,4,5]
	#
	# ENSURE: self == return
	fun skip_head(length: Int): Iterator[E]
	do
		while length > 0 and self.is_ok do
			length -= 1
			self.next
		end
		return self
	end

	# Filter: keep only the last `length` items.
	#
	#     assert [1,2,3,4,5].iterator.tail(2).to_a	     ==  [4,5]
	#
	# Important: require O(length) in memory
	fun tail(length: Int): Iterator[E]
	do
		var lasts = new List[E]
		while self.is_ok do
			while lasts.length >= length do lasts.shift
			lasts.push(self.item)
			self.next
		end
		return lasts.iterator
	end

	# Filter: reject the last `length` items.
	#
	#     assert [1,2,3,4,5].iterator.skip_tail(2).to_a	     ==  [1,2,3]
	#
	# Important: require O(length) in memory
	fun skip_tail(length: Int): Iterator[E]
	do
		return new PipeSkipTail[E](self, length)
	end

	# Filter: reject items that does not meet some criteria.
	#
	#     class IsEvenFunction
	#       super Function[Int, Bool]
	#       redef fun apply(i) do return i % 2 == 0
	#     end
	#     assert [1,2,3,4,8].iterator.select(new IsEvenFunction).to_a  == [2,4,8]
	fun select(predicate: Function[E, Bool]): Iterator[E]
	do
		return new PipeSelect[E](self, predicate)
	end
end

# Concatenates a sequence of iterators.
#
# Wraps an iterator of sub-iterators and iterates over the elements of the
# sub-iterators.
#
# ~~~nit
# var i: Iterator[Int]
# var empty = new Array[Int]
#
# i = new Iterator2[Int]([
# 	[1, 2, 3].iterator,
# 	empty.iterator,
# 	[4, 5].iterator
# ].iterator)
# assert i.to_a == [1, 2, 3, 4, 5]
#
# i = new Iterator2[Int]([
# 	empty.iterator,
# 	[42].iterator,
# 	empty.iterator
# ].iterator)
# assert i.to_a == [42]
# ~~~
#
# SEE: `Iterator::+`
class Iterator2[E]
	super Iterator[E]

	# The inner iterator over sub-iterators.
	var inner: Iterator[Iterator[E]]

	redef fun finish
	do
		var i = current_iterator
		if i != null then i.finish
	end

	redef fun is_ok
	do
		var i = current_iterator
		if i == null then return false
		return i.is_ok
	end

	redef fun item
	do
		var i = current_iterator
		assert i != null
		return i.item
	end

	redef fun next
	do
		var i = current_iterator
		assert i != null
		i.next
	end

	redef fun start
	do
		var i = current_iterator
		if i != null then i.start
	end

	private var previous_iterator: nullable Iterator[E] = null

	private fun current_iterator: nullable Iterator[E]
	do
		if previous_iterator == null then
			# Get the first sub-iterator.
			if inner.is_ok then
				previous_iterator = inner.item
				previous_iterator.start
				inner.next
			else
				return null
			end
		end
		# Get the first sub-iterator that has a current item.
		while inner.is_ok and not previous_iterator.is_ok do
			previous_iterator.finish
			previous_iterator = inner.item
			previous_iterator.start
			inner.next
		end
		return previous_iterator
	end
end

# Wraps an iterator to skip nulls.
#
# ~~~nit
# var i: Iterator[Int]
#
# i = new NullSkipper[Int]([null, 1, null, 2, null: nullable Int].iterator)
# assert i.to_a == [1, 2]
#
# i = new NullSkipper[Int]([1, null, 2, 3: nullable Int].iterator)
# assert i.to_a == [1, 2, 3]
# ~~~
class NullSkipper[E: Object]
	super Iterator[E]

	# The inner iterator.
	var inner: Iterator[nullable E]

	redef fun finish do inner.finish

	redef fun is_ok do
		skip_nulls
		return inner.is_ok
	end

	redef fun item do
		skip_nulls
		return inner.item.as(E)
	end

	redef fun next do
		inner.next
		skip_nulls
	end

	private fun skip_nulls do
		while inner.is_ok and inner.item == null do inner.next
	end
end

# Interface that reify a function.
# Concrete subclasses must implements the `apply` method.
#
# This interface helps to manipulate function-like objects.
#
# The main usage it as a transformation; that takes an argument and produce a result.
# See `map` for example.
#
# Another usage is as a predicate, with `Function[E, Bool]`.
# See `Iterator::select` for example.
#
# Function with more than one argument can be reified with some uncurification.
# Eg. `Function[ARG1, Function[ARG2, RES]]`.
#
# NOTE: Nit is not a functionnal language, this class is a very basic way to
# simulate the reification of a simple function.
interface Function[FROM, TO]
	# How an element is mapped to another one.
	fun apply(e: FROM): TO is abstract

	# Filter: produce an iterator which each element is transformed.
	#
	#     var i = [1,2,3].iterator
	#     assert fun_to_s.map(i).to_a  == ["1", "2", "3"]
	#
	# Note: because there is no generic method in Nit (yet?),
	# there is no way to have a better API.
	# eg. with the Iterator as receiver and the function as argument.
	# (see `Iterator::select`)
	fun map(i: Iterator[FROM]): Iterator[TO]
	do
		return new PipeMap[FROM, TO](i, self)
	end
end

private class FunctionToS
	super Function[Object, String]
	redef fun apply(e) do return e.to_s
end

### Specific private iterator classes

private class PipeUniq[E]
	super Iterator[E]

	var source: Iterator[E]

	var seen = new HashSet[Object] # FIXME HashSet[E]

	redef fun is_ok do return source.is_ok

	redef fun item do return source.item

	redef fun next
	do
		self.seen.add(self.item.as(Object))
		source.next
		while source.is_ok and self.seen.has(source.item.as(Object)) do
			source.next
		end
	end
end

private class PipeSeqUniq[E]
	super Iterator[E]

	var source: Iterator[E]

	redef fun is_ok do return source.is_ok

	redef fun item do return source.item

	redef fun next
	do
		var seen = self.item
		source.next
		while source.is_ok and seen == source.item do
			source.next
		end
	end
end

private class PipeJoin[E]
	super Iterator[E]
	var source1: Iterator[E]
	var source2: Iterator[E]

	redef fun is_ok
	do
		return source1.is_ok or source2.is_ok
	end

	redef fun item
	do
		if source1.is_ok then return source1.item else return source2.item
	end

	redef fun next
	do
		if source1.is_ok then source1.next else source2.next
	end
end

private class PipeAlternate[E]
	super Iterator[E]

	var source: Iterator[E]
	var odd_item: E
	var odd = true

	redef fun is_ok do return source.is_ok

	redef fun item
	do
		if odd then
			return source.item
		else
			return odd_item
		end
	end

	redef fun next
	do
		if odd then
			source.next
		end
		odd = not odd
	end
end

private class PipeSkip[E]
	super Iterator[E]

	var source: Iterator[E]
	var skip_item: E

	init do do_skip

	fun do_skip
	do
		while source.is_ok and source.item == skip_item do source.next
	end

	redef fun is_ok do return source.is_ok

	redef fun item do return source.item

	redef fun next
	do
		source.next
		do_skip
	end
end

private class PipeHead[E]
	super Iterator[E]

	var source: Iterator[E]

	var length: Int

	redef fun is_ok do return length > 0 and source.is_ok

	redef fun item do return source.item

	redef fun next
	do
		length -= 1
		source.next
	end
end

private class PipeSkipTail[E]
	super Iterator[E]

	var source: Iterator[E]

	var length: Int

	var lasts = new List[E]

	init
	do
		var lasts = self.lasts
		while source.is_ok and lasts.length < length do
			lasts.push(source.item)
			source.next
		end
	end

	redef fun is_ok do return source.is_ok

	redef fun item do return lasts.first

	redef fun next
	do
		lasts.shift
		lasts.push(source.item)
		source.next
	end
end

private class PipeSelect[E]
	super Iterator[E]

	var source: Iterator[E]

	var predicate: Function[E, Bool]

	init do do_skip

	fun do_skip
	do
		while source.is_ok and not predicate.apply(source.item) do source.next
	end

	redef fun is_ok do return source.is_ok

	redef fun item do return source.item

	redef fun next
	do
		source.next
		do_skip
	end
end

private class PipeMap[E, F]
	super Iterator[F]

	var source: Iterator[E]
	var function: Function[E, F]

	var item_cache: nullable F = null
	var item_cached = false

	redef fun is_ok do return source.is_ok

	redef fun item do
		if item_cached then return item_cache
		item_cache = function.apply(source.item)
		item_cached = true
		return item_cache
	end

	redef fun next do
		source.next
		item_cached = false
	end
end

# Stateless singleton that reify to the `to_s` method.
#
#     assert fun_to_s.apply(5)  == "5"
fun fun_to_s: Function[Object, String] do return once new FunctionToS
