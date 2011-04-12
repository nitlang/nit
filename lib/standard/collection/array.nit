# This file is part of NIT ( http://www.nitlanguage.org ).
# 
#  Copyright 2004-2008 Jean Privat <jean@pryen.org>
# 
#  This file is free software, which comes along with NIT.  This software is
#  distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
#  without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
#  PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
#  is kept unaltered, and a notification of the changes is added.
#  You  are  allowed  to  redistribute it and sell it, alone or is a part of
#  another product.

# This module introduces the standard array structure.
# It also implements two other abstract collections : ArrayMap and ArraySet 
package array

import abstract_collection
import map

# Resizeable one dimension array of objects.
# 
# Arrays have a literal representation :
#           a = [12, 32, 8]
# is equivalent with :
#           a = new Array[Int]
#           a.add(12)
#           a.add(32)
#           a.add(8)
class Array[E]
        super Sequence[E]
	super ArrayCapable[E]

        # The current length
        redef var length: Int = 0

        # The internal storage
        private var items: nullable NativeArray[E] = null

        # The size of 'items'
        var capacity: Int = 0

        redef fun is_empty do return length == 0

        # Without Iterator
        redef fun has(item)
        do
                var i = 0
                var l = length
                while i < l do
                        if self[i] == item then return true
                        i += 1
                end
                return false
        end

        # Without iterator
        redef fun count(item)
        do
                var res = 0
                var i = 0
                var l = length
                while i < l do
                        if self[i] == item then res += 1
                        i += 1
                end
                return res
        end

        redef fun index_of(item) do return index_of_from(item, 0)

        redef fun last_index_of(item: E): Int do return last_index_of_from(item, length-1)

        # Return a new array with same element but with reversed order
        fun reversed: Array[E]
        do
                var cmp = length
                var result = new Array[E].with_capacity(cmp)
                while cmp > 0 do
                        cmp -= 1
                        result.add(self[cmp])
                end
        return result
        end

        redef fun iterator: ArrayIterator[E] do return new ArrayIterator[E](self)

	redef fun iterator_from(from: Int): ArrayIterator[E] do
		assert from_in_bound: from > 0 and from < length
		return new ArrayIterator[E].from(self, from)
	end

	redef fun iterator_within(from: Int, to: Int): ArrayIterator[E] do
		assert from_in_bound: from > 0 and from < length
		assert to_in_bound: from > 0 and from < length and to >= from
		return new ArrayIterator[E].within(self, from, to)
	end
		

        #  Two arrays are equals if they have the same items in the same order.
        redef fun ==(o)
        do
                if not o isa Array[E] or o is null then return false
                var l = length
                if o.length != l then return false
                var i = 0
                while i < l do
                        if self[i] != o[i] then return false
                        i += 1
                end
        return true
        end

        # O(1)
        redef fun clear do length = 0

        redef fun remove(item) do remove_at(index_of(item))

        redef fun remove_at(i)
        do
                var l = length
                if i >= 0 and i < l then
                        var j = i + 1
                        while j < l do
                                self[j - 1] = self[j]
                                j += 1
                        end
                        length = l - 1
                end
        end

        # Without iterator
        redef fun iterate
                !each(e: E)
        do
                var i = 0
                while i < length do
                        each(items[i])
                        i += 1
                end
        end

        redef fun [](index)
        do
                assert index: index >= 0 and index < length
                return items[index]
        end

        redef fun []=(index, item)
        do
                assert index: index >= 0 and index < length + 1
                if capacity <= index then
                        enlarge(index + 1)
                end
                if length <= index then
                        length = index + 1
                end
                items[index] = item
        end
        
        redef fun add(item)
        do
                var l = length
                if capacity <= l then
                        enlarge(l + 1)
                end
                length = l + 1
                items[l] = item
        end

        protected fun copy_to(start: Int, len: Int, dest: Array[E], new_start: Int)
        do
                # TODO with native one
                var i = len
                while i > 0 do
                        i -= 1
                        dest[new_start + 1] = self[start + i]
                end
        end
        
        fun enlarge(cap: Int)
        do
                var c = capacity
                if cap <= c then return
                while c <= cap do c = c * 2 + 2
                var a = calloc_array(c)
                if capacity > 0 then items.copy_to(a, length)
                items = a
                capacity = c
        end
        
        # Create an empty array
        init
        do
                capacity = 0
                items = calloc_array(capacity)
                length = 0
        end

        redef fun append(item) do add(item)

        redef fun prepend(item) do insert_at(0, item)

	redef fun insert_at(i, item)
	do
                var l = length
                if i >= 0 and i < l then
                        var j = i
			var next = self[j]
                        while j + 1 < l do
					var tmp = next
					next = self[j + 1]
                                        self[j + 1] = tmp
                                        j += 1
                        end
			self[l] = next
                        self[i] = item
                        length = l + 1
                else if i == l then
                        add(item)
                end
	end

        # Create an array with some 'items'
        init with_items(objects: E...)
        do
                items = objects.items
                capacity = objects.capacity
                length = objects.length
        end
        
        # Create an empty array with the given capacity
        init with_capacity(cap: Int)
        do
                assert positive: cap >= 0
                items = calloc_array(cap)
                capacity = cap
                length = 0
        end

        # Create an array of 'count' elements with the same 'value'
        init filled_with(value: E, count: Int)
        do
                assert positive: count >= 0
                items = calloc_array(count)
                capacity = count
                length = count
                var i = 0
                while i < count do
                        self[i] = value
                        i += 1
                end
        end

        # Create an array filled with a given native array
        init with_native(nat: NativeArray[E], size: Int)
        do
                assert positive: size >= 0
                items = nat
                capacity = size
                length = size
        end

	# Sort the array using the !cmp function.
	redef fun sort
		!cmp(e1,e2: E): Int
	do
		sub_sort(0, length-1) !cmp(x,y) = cmp(x, y)
	end

	# Sort `array' between `from' and `to' indices
	private fun sub_sort(from: Int, to: Int)
		!cmp(e1,e2: E): Int
	do
		if from >= to then
			return
		else if from + 7 < to then
			var pivot = self[from]
			var i = from
			var j = to
			while j > i do
				while i <= to and cmp(self[i], pivot) <= 0 do i += 1
				while j > i and cmp(self[j], pivot) >= 0 do j -= 1
				if j > i then
					var t = self[i]
					self[i] = self[j]
					self[j] = t
				end
			end
			self[from] = self[i-1]
			self[i-1] = pivot
			sub_sort(from, i-2) !cmp(x,y) = cmp(x, y)
			sub_sort(i, to) !cmp(x,y) = cmp(x, y)
		else
			var i = from
			while i < to do
				var min = i
				var min_v = self[i]
				var j = i
				while j <= to do
					if cmp(min_v, self[j]) > 0 then
						min = j
						min_v = self[j]
					end
					j += 1
				end
				if min != i then
					self[min] = self[i]
					self[i] = min_v
				end
				i += 1
			end
		end
	end

end

# An 'Iterator' on 'Array'
class ArrayIterator[E]
	super SequenceIterator[E]

	var array: Array[E]
	var start: Int
	var stop: Int = -1

	init(array: Array[E])
	do
		self.array = array
		self.index = 0
		self.start = 0
	end

	init from(array: Array[E], from: Int)
	do
		self.array = array
		self.index = from
		self.start = from
	end

	init within(array: Array[E], from: Int, to: Int)
	do
		self.array = array
		self.index = from
		self.start = from
		self.stop = to
	end

	redef var index: Int = 0

	redef fun current
	do 
		assert has_next: has_next
		return array[index]
	end

	redef fun current=(item)
	do
		assert has_next: has_next
		array[index] = item
	end

	redef fun delete
	do
		assert has_next: has_next
		array.remove_at(index)
		index -= 1
	end

	redef fun insert_before(item)
	do
		assert has_next: has_next
		array.insert_at(index, item)
		index += 1
	end

	redef fun insert_after(item)
	do
		assert has_next: has_next
		array.insert_at(index + 1, item)
	end

	redef fun delete_before
	do
		assert has_next: has_next
		array.remove_at(index - 1)
		index -= 1
	end

	redef fun delete_after
	do
		assert has_next: has_next
		array.remove_at(index + 1)
	end

	redef fun has_next do 
		if stop != -1 then 
			return index < stop and index < array.length
		else
			return index < array.length
		end
	end

	redef fun next do index += 1

	redef fun rewind do index = start
end


# A 'Bag' implemented with an 'Array'
class ArrayBag[E: Object]
                super Bag[E]

        #  The stored elements.
        var array: Array[E]
        
        redef fun length do return array.length

        redef fun is_empty do return array.is_empty

        redef fun iterator do return array.iterator

        redef fun has(e) do return array.has(e)

        redef fun has_only(e) do return array.has_only(e)

        redef fun count(e) do return array.count(e)

        redef fun add(e) do array.add(e)

        redef fun pick do return array.pick

        redef fun remove(item)
        do
                var i = array.index_of(item)
                if i >= 0 then remove_at(i)
        end

        redef fun clear do array.clear

           #  Assume the capacity is at least `cap'.
        fun enlarge(cap: Int) do array.enlarge(cap)

        private fun remove_at(i: Int) do array.remove_at(i)

        #  Create an empty set
        init do array = new Array[E]

        #  Create an empty set with a given capacity.
        init with_capacity(i: Int) do array = new Array[E].with_capacity(i)

end

# Iterators on bags implemented with arrays
class ArrayBagIterator[E: Object]
        super CollectionIterator[E]

        var iterator: ArrayIterator[E]

        init(iterator: ArrayIterator[E]) do self.iterator = iterator

        redef fun has_next do return iterator.has_next

        redef fun next do iterator.next

        redef fun current do return iterator.current

        redef fun rewind do iterator.rewind

        redef fun delete do iterator.delete

	redef fun current=(item) do iterator.current = item

end

# A 'Set' implemented with an 'Array'
class ArraySet[E]
        super ArrayBag[E]
        super Set[E]

        init do super()

        redef fun add(e) do if not array.has(e) then array.add(e)

        redef fun count(e)
        do
                if(array.has(e)) then
                        return 1
                end
                return 0
        end

        redef fun iterator do return array.iterator
end

# Iterators on sets implemented with arrays
class ArraySetIterator[E: Object]
        super ArrayBagIterator[E]
end

# Refinment of super classes # # # # # # # # # # # # # # # # # # # # # # 

redef class Iterator[E]

        # Iterate on 'self' and build an array
        fun to_a: Array[E]
        do
                var res = new Array[E]
                while has_next do
                        res.add(current)
                        next
                end
                return res
        end

end

redef class Iterable[E]

        # Build a new array from an Iterable class
        fun to_a: Array[E]
        do
                return iterator.to_a
        end

end

# Native classes # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

# Subclasses of this class can create native arrays
interface ArrayCapable[E]
	# Get a new array of `size' elements.
	protected fun calloc_array(size: Int): NativeArray[E] is intern
end

# Native C array (void ...)
class NativeArray[E]
        fun [](index: Int): E is intern
        fun []=(index: Int, item: E) is intern
        fun copy_to(dest: NativeArray[E], length: Int) is intern
end

# Other tools # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

# Associative arrays implemented with an array of (key, value) pairs.
class ArrayMap[K: Object, E]
	super Map[K, E]

	# O(n)
	redef fun [](key)
	do
		var i = index(key)
		if i >= 0 then
			return items[i].value
		else
			abort
		end
	end

	# O(n)
	redef fun []=(key, item)
	do
		var i = index(key)
		if i >= 0 then
			items[i].value = item
		else
			items.add(new ArrayMapNode[K,E](key, item))
		end
	end

	# O(n)
	redef fun has_key(key) do return index(key) >= 0

	# O(1)
	redef fun length do return items.length

	redef fun iterator: ArrayMapIterator[K, E] do return new ArrayMapIterator[K, E](items.iterator)

	redef fun is_empty do return items.is_empty

	redef fun remove_first_value(item)
	do
		var i = items.length - 1
		while i >= 0 do
			if items[i].value == item then
				remove_at_index(i)
				return
			end
			i -= 1
		end
	end

	redef fun remove_at(key)
	do
		var i = index(key)
		if i >= 0 then remove_at_index(i)
	end

	redef fun clear do items.clear

	fun node_at(key: K): nullable ArrayMapNode[K, E]
	do
		var i = index(key)
		if i >= 0 then
			return items[i]
		else
			return null
		end
	end

	# Internal storage.
	var items: Array[ArrayMapNode[K,E]]

	# fast remove the ith element of the array
	private fun remove_at_index(i: Int) do items.remove_at(i)

	# The last positive result given by a index(1) call
	var last_index: Int = 0

	# Where is the `key' in `_item'?
	# return -1 if not found
	private fun index(key: K): Int
	do
		var l = last_index
		if l < items.length and items[l].key == key then return l

		var i = 0
		while i < items.length do
			if items[i].key == key then
				last_index = i
				return i
			end
			i += 1
		end
		return -1
	end

	# A new empty map.
	init
	do
		items = new Array[ArrayMapNode[K,E]]
	end

        redef fun keys: ArrayMapKeys[K] do return new ArrayMapKeys[K](self)
        redef fun values: ArrayMapValues[E] do return new ArrayMapValues[E](self)

end

# Two objects in a simple structure.
class ArrayMapNode[K, E]

	# The first element of the couple.
	var key: K writable

	# The second element of the couple.
	var value: E writable

	# Create a new instance with a first and a second object.
	init(k: K, v: E)
	do
		self.key = k
		self.value = v
	end
end

# ArrayMapIterator for ArrayMap
class ArrayMapIterator[K, E]
        super MapIterator[K, E]

        type N: ArrayMapNode[K, E]

        private var iterator: ArrayIterator[N]

        redef fun current do return iterator.current.value

        redef fun current_key do return iterator.current.key

	redef fun has_next do return iterator.has_next

        redef fun next
	do 
		assert has_next: has_next		
		iterator.next
	end

        redef fun rewind do iterator.rewind
end

# ArrayMapValues
class ArrayMapValues[E]
        super ReadOnlyCollection[E]

        private var map: ArrayMap[Object, E]

	init(map: ArrayMap[Object, E])
	do
		self.map = map
	end

        redef fun length do return map.length

        redef fun get do return map.items.get.value

        redef fun iterator: ArrayMapValuesIterator[E] do return new ArrayMapValuesIterator[E](map.iterator)
end

# ArrayMapKeys
class ArrayMapKeys[K]
        super ReadOnlyCollection[K]

        private var map: ArrayMap[K, nullable Object]

	init(map: ArrayMap[K, nullable Object])
	do
		self.map = map
	end

        redef fun length do return map.length

        redef fun get do return map.items.get.key

        redef fun iterator: ArrayMapKeysIterator[K] do return new ArrayMapKeysIterator[K](map.iterator)
end

# Iterator for ArrayMapValues
protected class ArrayMapKeysIterator[K: Object]
	super ReadOnlyIterator[K]

        var iterator: ArrayMapIterator[K, nullable Object]

	init(iterator: ArrayMapIterator[K, nullable Object])
	do
		self.iterator = iterator
	end
	
        redef fun has_next do return iterator.has_next

        redef fun next
	do 
		assert has_next: has_next		
		iterator.next
	end

        redef fun current: K do return iterator.current_key

        redef fun rewind do iterator.rewind
end

protected class ArrayMapValuesIterator[E]
	super ReadOnlyIterator[E]

        var iterator: ArrayMapIterator[Object, E]

	init(iterator: ArrayMapIterator[Object, E])
	do
		self.iterator = iterator
	end
	
        redef fun has_next do return iterator.has_next

        redef fun next
	do 
		assert has_next: has_next		
		iterator.next
	end

        redef fun current do return iterator.current

        redef fun rewind do iterator.rewind
end	
