# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

class DummyArray
special Set[Int]
special ArrayCapable[Int]
	attr _capacity: Int 
	redef readable attr _length: Int 
	attr _keys: NativeArray[Int]
	attr _values: NativeArray[Int]

	redef meth add(value: Int)
	do
		assert full: _length < (_capacity-1)
		var l = _length
		_values[l] = value
		_keys[value] = l
		_length = l + 1
	end

	redef meth remove(value: Int)
	do
		assert not is_empty
		var l = _length
		if l > 1 then
			var last = _values[l - 1]
			var pos = _keys[value]
			_keys[last] = pos
			_values[pos] = last
		end
		_length = l - 1
	end

	redef meth has(value: Int): Bool
	do
		assert value < _capacity
		var pos = _keys[value]
		if pos < _length then
			return _values[pos] == value
		end
		return false
	end

	redef meth first: Int
	do
		assert _length > 0
		return _values[0]
	end

	redef meth is_empty: Bool
	do
		return not (_length > 0)
	end

	redef meth clear
	do
		_length = 0
	end

	redef meth iterator: DummyIterator
	do
		return new DummyIterator(self)
	end

	private meth value_at(pos: Int): Int
	do
		return _values[pos]
	end

	init(capacity: Int)
	do
		_capacity = capacity
		_keys = calloc_array(capacity)
		_values = calloc_array(capacity)
	end
end

class DummyIterator
special Iterator[Int]
	attr _array: DummyArray
	attr _pos: Int

	redef meth item: Int
	do
		assert is_ok
		return _array.value_at(_pos)
	end

	redef meth is_ok: Bool
	do
		return _pos < _array.length
	end

	redef meth next do _pos = _pos + 1 end

	init(array: DummyArray)
	do
		_pos = 0
		_array = array
	end
end
