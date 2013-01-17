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
# This module enhance `Iterator`s with some methods that enable a
# pipeline-like programing that offers the manupulation of
# collections trough connected filters with reasonable memory constraints.
module pipeline

redef interface Iterator[E]
	# Filter: sort with ComparableSorter.
	# SEE: `sort_with` for details
	# REQUIRE: self isa Iterator[Comparable]
	#
	#     [1,3,2].iterator.sort.to_a	#=> [1,2,3]
	fun sort: Iterator[E]
	do
		assert self isa Iterator[Comparable]
		var sorter = new ComparableSorter[Comparable]
		var a = self.to_a
		sorter.sort(a)
		return a.iterator
	end

	# Filter: sort with a given `sorter`.
	# Important: require O(n) memory.
	#
	# REQUIRE: self isa Iterator[Object]
	# FIXME: AbstractSorter[E] is refused
	fun sort_with(sorter: AbstractSorter[Object]): Iterator[E]
	do
		assert self isa Iterator[Object]
		var a = self.to_a
		sorter.sort(a)
		return a.iterator
	end

	# Filter: reject duplicates.
	# Elements already seen are rejected.
	#
	# Important: rely on `==` and `hash`
	# Important: require O(m) in memory, where m is the total number of uniq items.
	#
	#     [1,2,1,1,1,3,2].iterator.uniq.to_a	#=> [1,2,3]
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
	#     [1,2,1,1,1,3,2].iterator.uniq.to_a	#=> [1,2,1,3,2]
	fun seq_uniq: Iterator[E]
	do
		return new PipeSeqUniq[E](self)
	end

	# Combine two iterators.
	#
	# When the first iterator is terminated, the second is started.
	#
	#    ([1,2].iterator + [3,4].iterator).to_a	#=> [1,2,3,4]
	fun +(other: Iterator[E]): Iterator[E]
	do
		return new PipeJoin[E](self, other)
	end

	# Alternate each item with `e`.
	#
	#   [1,2,3].iterator.alternate(0).to_a		#=> [1,0,2,0,3]
	fun alternate(e: E): Iterator[E]
	do
		return new PipeAlternate[E](self, e)
	end

	# Filter: reject a given `item`.
	#
	#   [1,1,2,1,3].iterator.skip(1).to_a		#=> [2,3]
	fun skip(item: E): Iterator[E]
	do
		return new PipeSkip[E](self, item)
	end

	# Filter: keep only the first `length` items.
	#
	# This filter does not always consume `self'.
	#
	#    var i = [1,2,3,4,5].iterator
	#    i.head(2).to_a	#=> [1,2]
	#    i.to_a		#=> [3,4,5]
	fun head(length: Int): Iterator[E]
	do
		return new PipeHead[E](self, length)
	end

	# Filter: reject the first `length` items.
	#
	#    [1,2,3,4,5].iterator.skip_head(2).to_a	#=> [3,4,5]
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
	#    [1,2,3,4,5].iterator.tail(2).to_a	#=> [4,5]
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
	#    [1,2,3,4,5].iterator.skip_tail(2).to_a	#=> [1,2,3]
	#
	# Important: require O(length) in memory
	fun skip_tail(length: Int): Iterator[E]
	do
		return new PipeSkipTail[E](self, length)
	end
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
