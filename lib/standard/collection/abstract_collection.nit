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

module abstract_collection

import kernel

# Iterable is the root of all iterable class on a single element.
# Iterable of a couple of element may specializee MapIterator
#
# Instances of this class offers an iterator method.
# 
# Iterable instances can use the "for" structure:
#         var x: Iterable[U]
#                  ...
#                  for u in x do
#                          #  u is a U
#                          ...
#                  end
#  that is equivalent with
#                  var x: Iterable[U]
#                  ...
#                  var i = x.iterator
#                  while i.has_next do
#                          var u = i.current #  u is a U
#                          ...
#                          i.next
#                  end
# 
# Iterable can be iterated on all elements of the class using en closure thanks to an iterator.
interface Iterable[E]

	# Get a new iterator of the class
	fun iterator: Iterator[E] is abstract

	# Iterate over each element of the collection using a closure thanks to iterator
	fun iterate 
	        !each(e: E)
	do
		var i = iterator
		while i.has_next do
			each(i.current)
			i.next
		end
	end

end

# Instances of the Iterator class generates a series of elements, one at a time.
# They are mainly used with collections.
interface Iterator[E]
        
        # Is there a next item ?
        fun has_next: Bool is abstract

        # Jump to the next item
        # Require has_next
        fun next is abstract

        # The current item
        # Require has_next
        fun current: E is abstract

        # Restart from begin
        fun rewind is abstract

end    

abstract class ReadOnlyIterator[E]
        super Iterator[E]
end    
        
# ReadOnly iterator provide a Proxy to CollectionIterator hidding modification methods
class ReadOnlyIteratorProxy[E]
        super ReadOnlyIterator[E]

        type N: E

        protected var iterator: Iterator[N]

        init(iterator: Iterator[N]) 
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

# Traversable provides common methods (with naive implentation based on iterator)
# To make your own collection class you have only to implement Iterator
# You can redefine other methods with a more efficient implementation
interface Traversable[E]
	super Iterable[E]

        # Number of item in the collection
        fun length: Int
        do
                var nb = 0
                for i in self do nb += 1
                return nb
        end

        # Is there no item in the collection ?
        fun is_empty: Bool do return length == 0

        # Return an element from the collection
        # Element returned depends on the collection implementation
        # NOTE AT : undefined
        fun get: E 
        do 
                for i in self do return i
                abort
        end

        # Is 'item' in the collection ?
        # Comparisons are done using ==
        fun has(item: E): Bool
        do
                for i in self do if i == item then return true
                return false
        end

        # Is the collection contains all 'items' ?
        # Comparisons are done using ==
        fun has_all(items: Iterable[E]): Bool
        do
                for i in items do if not has(i) then return false
                return true
        end

        # Is the collection contains all 'items' and only 'items'
        # Comparisons are done using ==
        fun has_only(items: Iterable[E]): Bool
        do
		var size = 0
		for i in items do
			size += 1
		end
				
		if size != length then return false
		if not has_all(items) then return false
		return true
        end

        # How many occurences of 'items' are in the collection ?
        fun count(item: E): Int
        do
                var nb = 0
                for i in self do if i == item then nb+=1
                return nb
        end

end

# ReadOnlyCollection, unmodifiable collections
abstract class ReadOnlyCollection[E]
        super Traversable[E]
end

# ReadOnlyCollectionProxy provides a proxy to Collection hidding modification methods
class ReadOnlyCollectionProxy[E]
        super ReadOnlyCollection[E]

        type C: Collection[E]

        protected var collection: C

        # Initialize the proxy with the encapsulated class
        init(collection: C)
        do
                self.collection = collection
        end

        redef fun length do return collection.length

        redef fun is_empty do return collection.is_empty

        redef fun get do return collection.get

        redef fun has(item) do return collection.has(item)
        
        redef fun has_all(items) do return collection.has_all(items)

        redef fun has_only(items) do return collection.has_only(items)

        redef fun iterator: ReadOnlyIterator[E] do return new ReadOnlyIteratorProxy[E](collection.iterator)
end

# Collection is mutable
# To implement your own Collection you have to redefine add and remove methods
interface Collection[E]
        super Traversable[E]

        # Add 'item' to the collection
        fun add(item: E) is abstract

        # Add all 'items' to collection
        fun add_all(items: Iterable[E]) do for i in items do add(i)

        # Clear the collection
        fun clear do remove_all(self)

        # Return and remove an item from the collection
        fun pick(): E
        do
                var item = get
                remove(item)
                return item
        end

        # Remove the first occurence of 'item' from the collection
        fun remove_first(item: E) is abstract

        # Remove all occurences of 'item' from the collection
        fun remove(item: E) do while has(item) do remove_first(item)
                
        # Remove all first occurences of 'items' from the collection
        fun remove_all_first(items: Iterable[E]) do for i in items do remove_first(i)

        # Remove all occurences of 'items' from the collection
        fun remove_all(items: Iterable[E]) do for i in items do remove(i)

        # Return a read only proxy of the collection
        fun to_read_only: ReadOnlyCollection[E] do return new ReadOnlyCollectionProxy[E](self)

	# Get a new iterator of the class
	redef fun iterator: CollectionIterator[E] is abstract

end

# Iterator for Collection
# Allow modification of the Collection
class CollectionIterator[E]
        super Iterator[E]

        # Delete the current item
        fun delete() is abstract

        # Replace the current 'item'
	fun current=(item: E) is abstract
end

# Interface for implementing Bag
interface Bag[E]
        super Collection[E]
end

# Interface for implementing Set
interface Set[E]
        super Bag[E]
end

# Sequences are indexed collections
interface Sequence[E]
        super Collection[E]

        # Get element at specified index
        fun [](index: Int): E is abstract

        # Set element at specified index
        # If an item exists at index it will be overwritted by the new item
        fun[]=(index: Int, item: E) is abstract

        # Append 'item' to sequence
        fun append(item: E) is abstract

        # Appen all 'items' to sequence
        fun append_all(items: Iterable[E]) do
                for item in items do
                        append(item)
                end
        end
        
        # Prepend 'item' to sequence
        # Following items will be shifted to left
        fun prepend(itm: E) is abstract

        # Prepend all 'items' to sequence
        fun prepend_all(items: Iterable[E]) do
                for item in items do
                        prepend(item)
                end
        end

        # Get the first element of sequence
        fun first: E
        do
                assert not_empty: not is_empty
                return self[0]
        end

        # Set the first 'item' of sequence
        fun first=(item: E) do self[0] = item end

        # Get the last element of sequence
        fun last: E
        do 
                assert not_empty: not is_empty
                return self[length-1]
        end

        # Set the last 'item' of sequence
        fun last=(item: E)
        do
                var l = length

                if l > 0 then
                        self[l-1] = item
                else
                        first = item
                end
        end

        # Get index of the first occurence of 'item'
        # Return -1 if 'item' not found
        fun index_of(item: E): Int
        do
                var index = 0
                var i = iterator
                while i.has_next do
                        if i.current == item then return index
                        index += 1
                        i.next
                end
                return -1
        end

        # Get index of the last occurence of 'item'
        # Return -1 if 'item' not found
        fun last_index_of(item: E): Int
        do
                var index = 0
                var last = -1
                var i = iterator
                while i.has_next do
                        if i.current == item then last = index
                        index += 1
                        i.next
                end
                return last
        end

        # Get the first index of 'item' from 'pos'
        # Return -1 if 'item' not found
        fun index_of_from(item: E, pos: Int): Int
        do
                var i = pos
                var len = length
                while i < len do
                        if self[i] == item then
                                return i
                        end
                        i += 1
                end
                return -1
        end

        # Get the last index of 'item' from 'pos'
        # Return -1 if 'item' not found
        fun last_index_of_from(item: E, pos: Int): Int
        do
                var i = pos
                while i >= 0 do
                        if self[i] == item then
                                return i
                        else          
                                i -= 1
                        end
                end
                return -1
        end

        # Return and remove the first element of the sequence
        fun pick_first: E
        do
                var first = self.first
                remove(first)
                return first
        end

        # Return and remove the last element of the sequence
        fun pick_last: E
        do
                var last = self.last
                remove(last)
                return last
        end

        # Insert 'item' at 'index' position and shift following elements to right
        fun insert_at(index: Int, item: E) is abstract

        # Remove the element at 'index'
        fun remove_at(index: Int) is abstract

        # Sort the Sequence using the !cmp closure
        fun sort 
                !cmp(e1, e2: E): Int
        is abstract

	# Get a new initerator of the class
	redef fun iterator: SequenceIterator[E] is abstract

	# Return an iterator that iterate 'from' index to end
        fun iterator_from(from: Int): SequenceIterator[E] is abstract

	# Return an iterator that iterate 'from' index 'to' index
	fun iterator_within(from: Int, to: Int): SequenceIterator[E] is abstract
end

# Sequence iterator
class SequenceIterator[E]
	super CollectionIterator[E]

	# Delete the next item
	fun delete_after() is abstract

	# Delete the previous item
	fun delete_before() is abstract

	# Insert 'item' after the current
	fun insert_after(item: E) is abstract

	# Inster 'item' before the current
	fun insert_before(item: E) is abstract

	# Return the current index
	fun index: Int is abstract
end        

# Stack interface
interface Stack[E]

	# Get 'item' on the top of the Stack
	fun pop: E is abstract

	# Push 'item' on the top of the Stack
	fun push(item: E) is abstract

	# See the the item on the top of the Stack but without removing him
	fun peek: E is abstract

	# Check if Stack is empty
	fun is_empty: Bool do return length == 0

	# Get the length of the Stack
	fun length: Int is abstract
end

# Queue interface
interface Queue[E]

	# Dequeue the first enqueued item
	fun dequeue(): E is abstract

	# Enqueue 'item'
	fun enqueue(item: E) is abstract

	# See the the item on the top of the Queue but without removing him
	fun peek(): E is abstract

	# Check if Queue is empty
	fun is_empty: Bool do return length == 0

	# Get the length of the Queue
	fun length: Int is abstract
end

