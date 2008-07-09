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
package range

import abstract_collection

# Range of discrete objects. 
class Range[E: Discrete]
special Collection[E]

	redef readable attr _first: E

	# Get the last element.
	readable attr _last: E

	# Get the element after the last one.
	readable attr _after: E

	redef meth has(item) do return item >= _first and item <= _last

	redef meth has_only(item) do return _first == item and item == _last

	redef meth count(item)
	do
		if has(item) then
			return 1
		else
			return 0
		end
	end

	redef meth iterator do return new IteratorRange[E](self)

	redef meth length
	do
		var nb = _first.distance(_after)
		if nb > 0 then
			return nb
		else
			return 0
		end
	end

	redef meth is_empty do return _first >= _after

	# Create a range [`from', `to'].
	# The syntax [`from'..`to'[ is equivalent.
	init(from: E, to: E)
	do
		_first = from
		_last = to
		_after = to.succ
	end

	# Create a range [`from', `to'[.
	# The syntax [`from'..`to'[ is equivalent.
	init without_last(from: E, to: E)
	do
		_first = from
		_last = to.prec
		_after = to
	end
end

class IteratorRange[E: Discrete]
	# Iterator on ranges.
special Iterator[E]
	attr _range: Range[E]	
	redef readable attr _item: E

	redef meth is_ok do return _item < _range.after
	
	redef meth next do _item = _item.succ
	
	init(r: Range[E])
	do
		_range = r
		_item = r.first
	end
end
