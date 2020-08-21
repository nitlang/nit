# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Introduces thread-safe concurrent collections
#
# This module offers new thread-safe collections. If you want to
# render basic collections thread-safe and don't mind the overhead cost,
# you can use `threads::redef_collections`.
#
# Concurrent collections:
#
# - [x] `ConcurrentArray`
# - [x] `ConcurrentList`
# - [ ] `ConcurrentHashMap`
# - [ ] `ConcurrentHashSet`
# - [ ] `ConcurrentRef`
# - [ ] `ConcurrentQueue`
#
# Introduced collections specialize their critical methods according to the
# current implementation in the standard library. If additional services
# are added to the underlying collections by refinement or evolution, they
# might need to be covered in the concurrent version.
module concurrent_collections

import pthreads

redef class Collection[E]
	# Type of the concurrent variant of this collection
	type CONCURRENT: ConcurrentCollection[E]

	# Wraps `self` in a thread-safe collection
	fun to_concurrent: CONCURRENT is abstract
end

redef class SequenceRead[E]
	redef type CONCURRENT: ConcurrentSequenceRead[E]
end

redef class Sequence[E]
	redef type CONCURRENT: ConcurrentSequence[E]
end

redef class Array[E]
	redef type CONCURRENT: ConcurrentArray[E]

	redef fun to_concurrent do return new ConcurrentArray[E].wrap(self)
end

redef class List[E]
	redef type CONCURRENT: ConcurrentList[E]

	redef fun to_concurrent do return new ConcurrentList[E].wrap(self)
end

# A concurrent variant to the standard `Collection`
abstract class ConcurrentCollection[E]
	super Collection[E]

	# Type of the equivalent non thread-safe collection
	type REAL: Collection[E]

	# Collection wrapped by `self`
	var real_collection: REAL is noinit

	# `Mutex` used to synchronize access to `self`
	#
	# It is used by the implementation on each protected methods. It can also
	# be used externally to ensure that no other `Thread` modify this object.
	var mutex = new Mutex

	redef fun count(e)
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.count(e)
		mutex.unlock
		return r
	end

	redef fun first
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.first
		mutex.unlock
		return r
	end

	redef fun has(e)
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.has(e)
		mutex.unlock
		return r
	end

	redef fun has_all(e)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.has_all(e)
		mutex.unlock
		return r
	end

	redef fun has_only(e)
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.has_only(e)
		mutex.unlock
		return r
	end

	redef fun is_empty
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.is_empty
		mutex.unlock
		return r
	end

	redef fun iterator
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.iterator
		mutex.unlock
		return r
	end

	redef fun length
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.length
		mutex.unlock
		return r
	end

	redef fun to_a
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.to_a
		mutex.unlock
		return r
	end

	redef fun rand
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.rand
		mutex.unlock
		return r
	end

	redef fun join(sep, last_sep)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.join(sep, last_sep)
		mutex.unlock
		return r
	end

	redef fun to_s
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.to_s
		mutex.unlock
		return r
	end
end

# A concurrent variant to the standard `SequenceRead`
abstract class ConcurrentSequenceRead[E]
	super ConcurrentCollection[E]
	super SequenceRead[E]

	redef type REAL: SequenceRead[E]

	redef fun ==(o)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection == o
		mutex.unlock
		return r
	end

	redef fun [](index)
	is
		no_contract
	do
		mutex.lock
		var r = real_collection[index]
		mutex.unlock
		return r
	end

	redef fun hash
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.hash
		mutex.unlock
		return r
	end

	redef fun index_of(index)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.index_of(index)
		mutex.unlock
		return r
	end

	redef fun index_of_from(index, from)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.index_of_from(index, from)
		mutex.unlock
		return r
	end

	redef fun iterator_from(index)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.iterator_from(index)
		mutex.unlock
		return r
	end

	redef fun last
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.last
		mutex.unlock
		return r
	end

	redef fun last_index_of(e)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.last_index_of(e)
		mutex.unlock
		return r
	end

	redef fun last_index_of_from(e, from)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.last_index_of_from(e, from)
		mutex.unlock
		return r
	end

	redef fun reverse_iterator
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.reverse_iterator
		mutex.unlock
		return r
	end

	redef fun reverse_iterator_from(from)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.reverse_iterator_from(from)
		mutex.unlock
		return r
	end
end

# A concurrent variant to the standard `Sequence`
abstract class ConcurrentSequence[E]
	super ConcurrentSequenceRead[E]
	super Sequence[E]

	redef type REAL: Sequence[E]

	redef fun []=(index, e)
	is
		no_contract
	do
		mutex.lock
		real_collection[index] = e
		mutex.unlock
	end

	redef fun add(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.add e
		mutex.unlock
	end

	redef fun append(e)
	is
		#no_contract
	do
		mutex.lock
		real_collection.append e
		mutex.unlock
	end

	redef fun first=(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.first = e
		mutex.unlock
	end

	redef fun insert(e, i)
	is
		no_contract
	do
		mutex.lock
		real_collection.insert(e, i)
		mutex.unlock
	end

	redef fun insert_all(from, pos)
	is
		no_contract
	do
		mutex.lock
		real_collection
		mutex.unlock
	end

	redef fun last=(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.last = e
		mutex.unlock
	end

	redef fun pop
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.pop
		mutex.unlock
		return r
	end

	redef fun prepend(e)
	is
		#no_contract
	do
		mutex.lock
		real_collection.prepend e
		mutex.unlock
	end

	redef fun push(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.push e
		mutex.unlock
	end

	redef fun remove_at(index)
	is
		no_contract
	do
		mutex.lock
		real_collection.remove_at(index)
		mutex.unlock
	end

	redef fun shift
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.shift
		mutex.unlock
		return r
	end

	redef fun unshift(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.unshift(e)
		mutex.unlock
	end

	redef fun subarray(start, len)
	is
		#no_contract
	do
		mutex.lock
		var r = real_collection.subarray(start, len)
		mutex.unlock
		return r
	end
end

# A concurrent variant to the standard `Array`
class ConcurrentArray[E]
	super ConcurrentSequence[E]
	super Array[E]

	redef type REAL: Array[E]

	init wrap(real_collection: REAL) do self.real_collection = real_collection
	init do self.real_collection = new Array[E]

	redef fun clear
	is
		no_contract
	do
		mutex.lock
		real_collection.clear
		mutex.unlock
	end

	redef fun enlarge(cap)
	is
		#no_contract
	do
		mutex.lock
		real_collection.enlarge(cap)
		mutex.unlock
	end

	redef fun remove_all(e)
	is
		#no_contract
	do
		mutex.lock
		real_collection.remove_all(e)
		mutex.unlock
	end

	redef fun swap_at(a, b)
	is
		#no_contract
	do
		mutex.lock
		real_collection.swap_at(a, b)
		mutex.unlock
	end

	redef fun has(e)
	is
		no_contract
	do
		mutex.lock
		var result = real_collection.has(e)
		mutex.unlock
		return result
	end

	#
	## The following method defs are conflict resolutions
	#

	redef fun add(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.add e
		mutex.unlock
	end

	redef fun length
	do
		mutex.lock
		var r = real_collection.length
		mutex.unlock
		return r
	end
end

# A concurrent variant to the standard `List`
class ConcurrentList[E]
	super ConcurrentSequence[E]
	super List[E]

	redef type REAL: List[E]

	init wrap(real_collection: REAL) do self.real_collection = real_collection
	init do self.real_collection = new List[E]

	redef fun link(l)
	is
		#no_contract
	do
		mutex.lock
		real_collection.link(l)
		mutex.unlock
	end

	redef fun slice(from, to)
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.slice(from, to)
		mutex.unlock
		return r
	end

	#
	## The following method defs are conflict resolutions
	#

	redef fun pop
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.pop
		mutex.unlock
		return r
	end

	redef fun is_empty
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.is_empty
		mutex.unlock
		return r
	end

	redef fun unshift(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.unshift(e)
		mutex.unlock
	end

	redef fun push(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.push(e)
		mutex.unlock
	end

	redef fun shift
	is
		no_contract
	do
		mutex.lock
		var value = real_collection.shift
		mutex.unlock
		return value
	end
end

# A collection which `is_empty` method blocks until it's empty
class ReverseBlockingQueue[E]
	super ConcurrentList[E]

	# Used to block or signal on waiting threads
	private var cond = new PthreadCond

	# Adding the signal to release eventual waiting thread(s)
	redef fun push(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.push(e)
		mutex.unlock
	end

	# When the Queue is empty, signal any possible waiting thread
	redef fun remove(e)
	is
		#no_contract
	do
		mutex.lock
		real_collection.remove(e)
		if real_collection.is_empty then cond.signal
		mutex.unlock
	end

	# Wait until the Queue is empty
	redef fun is_empty
	is
		no_contract
	do
		mutex.lock
		while not real_collection.is_empty do self.cond.wait(mutex)
		mutex.unlock
		return true
	end
end

# A Blocking queue implemented from a `ConcurrentList`
# `shift` is blocking if there isn't any element in `self`
# `push` or `unshift` releases every blocking threads
class BlockingQueue[E]
	super ConcurrentList[E]

	# Used to block or signal on waiting threads
	private var cond = new PthreadCond

	# Adding the signal to release eventual waiting thread(s)
	redef fun push(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.push(e)
		self.cond.signal
		real_collection.push(e)
		mutex.unlock
	end

	redef fun unshift(e)
	is
		no_contract
	do
		mutex.lock
		real_collection.unshift(e)
		self.cond.signal
		mutex.unlock
	end

	# If empty, blocks until an item is inserted with `push` or `unshift`
	redef fun shift
	is
		no_contract
	do
		mutex.lock
		while real_collection.is_empty do self.cond.wait(mutex)
		var r = real_collection.shift
		mutex.unlock
		return r
	end

	redef fun is_empty
	is
		no_contract
	do
		mutex.lock
		var r = real_collection.is_empty
		mutex.unlock
		return r
	end
end
