# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# A `Set` that contains only integers.
class DummyArray
	super Set[Int]
	private var capacity: Int
	redef var length: Int
	private var keys: NativeArray[Int]
	private var values: NativeArray[Int]

	redef fun add(value: Int)
	do
		assert full: _length < (_capacity-1)
		var l = _length
		_values[l] = value
		_keys[value] = l
		_length = l + 1
	end

	redef fun remove(value)
	do
		assert not is_empty
		if not value isa Int then return
		var l = _length
		if l > 1 then
			var last = _values[l - 1]
			var pos = _keys[value]
			_keys[last] = pos
			_values[pos] = last
		end
		_length = l - 1
	end

	redef fun has(value)
	do
		if not value isa Int then return false
		assert value < _capacity
		var pos = _keys[value]
		if pos < _length then
			return _values[pos] == value
		end
		return false
	end

	redef fun first: Int
	do
		assert _length > 0
		return _values[0]
	end

	redef fun is_empty: Bool
	do
		return not (_length > 0)
	end

	redef fun clear
	do
		_length = 0
	end

	redef fun iterator: DummyIterator
	do
		return new DummyIterator(self)
	end

	private fun value_at(pos: Int): Int
	do
		return _values[pos]
	end

	# initialize a new DummyArray with `capacity`.
	init(capacity: Int) is old_style_init do
		_capacity = capacity
		_keys = new NativeArray[Int](capacity)
		_values = new NativeArray[Int](capacity)
	end
end

# An iterator over a `DummyArray`.
class DummyIterator
	super Iterator[Int]
	private var array: DummyArray
	private var pos: Int

	redef fun item: Int
	do
		assert is_ok
		return _array.value_at(_pos)
	end

	redef fun is_ok: Bool
	do
		return _pos < _array.length
	end

	redef fun next do _pos = _pos + 1 end

	# Initialize an iterator for `array`.
	init(array: DummyArray) is old_style_init do
		_pos = 0
		_array = array
	end
end
