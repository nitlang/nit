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
# This module enhance `Collection`s with some methods that enable a
# pipeline-like programing that offers the manupulation of
# collections trough connected filters with reasonable memory constraints.
#
# The filters methods return a view bounded on the original collection.
# Filters can be chained to build complex virtual collections.
#
# FIXME: Fix vocabulary (lazy/view/filter)
# FIXME: Maybe the name of the method should indicate that the method is 'lazy' (or is a filter).
module pipeline

redef interface Collection[E]
	# Filter: sort with ComparableSorter.
	# SEE: `sort_with` for details
	# REQUIRE: self isa Iterator[Comparable]
	#
	#     [1,3,2].sort_filter	#=> [1,2,3]
	fun sort_filter: Collection[E]
	do
		assert self isa Collection[Comparable]
		var sorter = new ComparableSorter[Comparable]
		var a = self.to_a
		sorter.sort(a)
		return a
	end

	# Filter: sort with a given `sorter`.
	# Important: require O(n) memory.
	fun sort_with(sorter: AbstractSorter[E]): Collection[E]
	do
		var a = self.to_a
		sorter.sort(a)
		return a
	end

	# Filter: reject duplicates.
	# Elements already seen are rejected.
	#
	# Important: rely on `==` and `hash`
	# Important: require O(m) in memory, where m is the total number of uniq items.
	#
	#     [1,2,1,1,1,3,2].uniq	#=> [1,2,3]
	#
	# REQUIRE: self isa Iterator[Object]
	fun uniq: Collection[E]
	do
		assert self isa Collection[Object]
		return new PipeUniq[E](self)
	end

	# Filter: reject continuous sequences of duplicates
	#
	# Important: rely on `==`.
	#
	#     [1,2,1,1,1,3,2].seq_uniq	#=> [1,2,1,3,2]
	fun seq_uniq: Collection[E]
	do
		return new PipeSeqUniq[E](self)
	end

	# The view of two combined collections.
	#
	#    ([1..20[ + [20..40[)	#=> [1..40[
	fun +(other: Collection[E]): Collection[E]
	do
		return new PipeJoin[E](self, other)
	end

	# Alternate each item with `e`.
	#
	#   [1,2,3].alternate(0)		#=> [1,0,2,0,3]
	fun alternate(e: E): Collection[E]
	do
		return new PipeAlternate[E](self, e)
	end

	# Filter: reject a given `item`.
	#
	#   [1,1,2,1,3].skip(1)		#=> [2,3]
	fun skip(item: E): Collection[E]
	do
		return new PipeSkip[E](self, item)
	end

	# Filter: keep only the first `length` items.
	#
	#    [1,2,3,4,5].head(2)	#=> [1,2]
	fun head(length: Int): Collection[E]
	do
		return new PipeHead[E](self, length)
	end

	# Filter: reject the first `length` items.
	#
	#    [1,2,3,4,5].skip_head(2)	#=> [3,4,5]
	#
	# ENSURE: self == return
	fun skip_head(length: Int): Collection[E]
	do
		return new PipeSkipHead[E](self, length)
	end

	# Filter: keep only the last `length` items.
	#
	#    [1,2,3,4,5].tail(2)	#=> [4,5]
	#
	# Important: require O(length) in memory
	fun tail(length: Int): Collection[E]
	do
		return new PipeTail[E](self, length)
	end

	# Filter: reject the last `length` items.
	#
	#    [1,2,3,4,5].skip_tail(2)	#=> [1,2,3]
	#
	# Important: require O(length) in memory
	fun skip_tail(length: Int): Collection[E]
	do
		return new PipeSkipTail[E](self, length)
	end
end

### Specific private collection and iterator classes

private class PipeUniq[E]
	super NaiveCollection[E]
	var source: Collection[E]
	redef fun iterator do return new PipeUniqIterator[E](source.iterator)
end

private class PipeUniqIterator[E]
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
	super NaiveCollection[E]
	var source: Collection[E]
	redef fun iterator do return new PipeSeqUniqIterator[E](source.iterator)
end

private class PipeSeqUniqIterator[E]
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
	super NaiveCollection[E]
	var source1: Collection[E]
	var source2: Collection[E]
	redef fun iterator do return new PipeJoinIterator[E](source1.iterator, source2.iterator)
end

private class PipeJoinIterator[E]
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
	super NaiveCollection[E]
	var source: Collection[E]
	var odd_item: E
	redef fun iterator do return new PipeAlternateIterator[E](source.iterator, odd_item)
end

private class PipeAlternateIterator[E]
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
	super NaiveCollection[E]
	var source: Collection[E]
	var skip_item: E
	redef fun iterator do return new PipeSkipIterator[E](source.iterator, skip_item)
end

private class PipeSkipIterator[E]
	super NaiveCollection[E]
	super Iterator[E]

	var source: Iterator[E]
	var skip_item: E

	init(source: Iterator[E], skip_item: E)
	do
		self.source = source
		self.skip_item = skip_item

		do_skip
	end

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
	super NaiveCollection[E]
	var source: Collection[E]
	var pipe_length: Int
	redef fun iterator do return new PipeHeadIterator[E](source.iterator, pipe_length)
end

private class PipeHeadIterator[E]
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

private class PipeSkipHead[E]
	super NaiveCollection[E]
	var source: Collection[E]
	var pipe_length: Int
	redef fun iterator
	do
		var res = source.iterator
		var length = pipe_length
		while length > 0 and res.is_ok do
			length -= 1
			res.next
		end
		return res
	end
end

private class PipeTail[E]
	super NaiveCollection[E]
	var source: Collection[E]
	var pipe_length: Int
	redef fun iterator
	do
		var lasts = new List[E]
		var res = source.iterator
		var length = pipe_length
		while res.is_ok do
			while lasts.length >= length do lasts.shift
			lasts.push(res.item)
			res.next
		end
		return lasts.iterator
	end
end

private class PipeSkipTail[E]
	super NaiveCollection[E]
	var source: Collection[E]
	var pipe_length: Int
	redef fun iterator do return new PipeSkipTailIterator[E](source.iterator, pipe_length)
end

private class PipeSkipTailIterator[E]
	super Iterator[E]

	var source: Iterator[E]

	var length: Int

	var lasts = new List[E]

	init(source: Iterator[E], length: Int)
	do
		self.source = source
		self.length = length
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
