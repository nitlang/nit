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

#  Module for range of discrete objects.
package range

import abstract_collection

# Range of 'Discrete' elements
class Range[E: Discrete]
        super Traversable[E]

        # The first element of the range
        var first: E

        # The last item of the range
        var last: E

        # Get the element after the last one
        var after: E

        redef fun iterate
        	!each(e: E)
        do
                var c = first
                var l = last
                while c <= l do
                        each(c)
                        c = c.succ
                end
        end

        redef fun iterator: RangeIterator[E] do return new RangeIterator[E](self)

        redef fun length
        do
                var nb = first.distance(after)
                if nb > 0 then
                        return nb
                else
                        return 0
                end
        end

        redef fun is_empty do return first >= after

        redef fun get do return first

        redef fun has(item) do return item >= first and item <= last

        redef fun count(item)
        do
                if has(item) then
                        return 1
                else
                        return 0
                end
        end

        # Create a range ['from', 'to']
        # Syntax range = ['from'..'to'] is equivalent
        init(from: E, to: E)
        do
                first = from
                last = to
                after = to.succ
        end

        # Create a range ['from', 'to'[
        # Syntax range = ['from'..'to'[ is equivalent
        init without_last(from: E, to: E)
        do
                first = from
                last = to.prec
                after = to
        end
end

# Iterator for 'Range'
class RangeIterator[E : Discrete]
        super Iterator[E]

        private var range: Range[E]
        
        redef var current: E

        init(r: Range[E])
        do
                range = r
                current = r.first
        end

        redef fun has_next do return current < range.after

        redef fun next
	do 
		assert has_next: has_next
		current = current.succ
	end

	redef fun rewind do current = range.first
end
