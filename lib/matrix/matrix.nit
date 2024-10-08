# This file is part of NIT ( https://nitlanguage.org ).
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

# Services for matrices of `Float` values
module matrix

# A rectangular array of `Float`
#
# Require: `width > 0 and height > 0`
class Matrix
	super Cloneable

	# Number of columns
	var width: Int

	# Number of rows
	var height: Int

	# Items of this matrix, rows by rows
	private var items = new NativeDoubleArray(width*height) is lazy

	# Create a matrix from nested sequences
	#
	# Require: all rows are of the same length
	#
	# ~~~
	# var matrix = new Matrix.from([[1.0, 2.0],
	#                               [3.0, 4.0]])
	# assert matrix.to_s == """
	# 1.0 2.0
	# 3.0 4.0"""
	# ~~~
	init from(items: SequenceRead[SequenceRead[Float]])
	do
		if items.is_empty then
			init(0, 0)
			return
		end

		init(items.first.length, items.length)

		for j in height.times do assert items[j].length == width

		for j in [0..height[ do
			for i in [0..width[ do
				self[j, i] = items[j][i]
			end
		end
	end

	# Get each row of this matrix in nested arrays
	#
	# ~~~
	# var items = [[1.0, 2.0],
	#              [3.0, 4.0]]
	# var matrix = new Matrix.from(items)
	# assert matrix.to_a == items
	# ~~~
	fun to_a: Array[Array[Float]]
	do
		var a = new Array[Array[Float]]
		for j in height.times do
			var row = new Array[Float]
			for i in width.times do
				row.add self[j, i]
			end
			a.add row
		end
		return a
	end

	# Create a matrix from an `Array[Float]` composed of rows after rows
	#
	# Require: `width > 0 and height > 0`
	# Require: `array.length >= width*height`
	#
	# ~~~
	# var matrix = new Matrix.from_array(2, 2, [1.0, 2.0,
	#                                           3.0, 4.0])
	# assert matrix.to_s == """
	# 1.0 2.0
	# 3.0 4.0"""
	# ~~~
	init from_array(width, height: Int, array: SequenceRead[Float])
	do
		assert width > 0
		assert height > 0
		assert array.length >= width*height

		init(width, height)

		for i in height.times do
			for j in width.times do
				self[j, i] = array[i + j*width]
			end
		end
	end

	# Create an identity matrix
	#
	# Require: `size >= 0`
	#
	# ~~~
	# var i = new Matrix.identity(3)
	# assert i.to_s == """
	# 1.0 0.0 0.0
	# 0.0 1.0 0.0
	# 0.0 0.0 1.0"""
	# ~~~
	new identity(size: Int)
	do
		assert size >= 0

		var matrix = new Matrix(size, size)
		for i in [0..size[ do
			for j in [0..size[ do
				matrix[j, i] = if i == j then 1.0 else 0.0
			end
		end
		return matrix
	end

	# Create a new clone of this matrix
	redef fun clone
	do
		var c = new Matrix(width, height)
		for i in [0..width*height[ do c.items[i] = items[i]
		return c
	end

	# Get the value at column `y` and row `x`
	#
	# Require: `x >= 0 and x <= width and y >= 0 and y <= height`
	#
	# ~~~
	# var matrix = new Matrix.from([[0.0, 0.1],
	#                               [1.0, 1.1]])
	#
	# assert matrix[0, 0] == 0.0
	# assert matrix[0, 1] == 0.1
	# assert matrix[1, 0] == 1.0
	# assert matrix[1, 1] == 1.1
	# ~~~
	fun [](y, x: Int): Float
	do
		assert x >= 0 and x < width
		assert y >= 0 and y < height

		return items[x + y*width]
	end

	# Set the `value` at row `y` and column `x`
	#
	# Require: `x >= 0 and x <= width and y >= 0 and y <= height`
	#
	# ~~~
	# var matrix = new Matrix.identity(2)
	#
	# matrix[0, 0] = 0.0
	# matrix[0, 1] = 0.1
	# matrix[1, 0] = 1.0
	# matrix[1, 1] = 1.1
	#
	# assert matrix.to_s == """
	# 0.0 0.1
	# 1.0 1.1"""
	# ~~~
	fun []=(y, x: Int, value: Float)
	do
		assert x >= 0 and x < width
		assert y >= 0 and y < height

		items[x + y*width] = value
	end

	# Matrix product (×)
	#
	# Require: `self.width == other.height`
	#
	# ~~~
	# var m = new Matrix.from([[3.0, 4.0],
	#                          [5.0, 6.0]])
	# var i = new Matrix.identity(2)
	#
	# assert m * i == m
	# assert (m * m).to_s == """
	# 29.0 36.0
	# 45.0 56.0"""
	#
	# var a = new Matrix.from([[1.0, 2.0, 3.0],
	#                          [4.0, 5.0, 6.0]])
	# var b = new Matrix.from([[1.0],
	#                          [2.0],
	#                          [3.0]])
	# var c = a * b
	# assert c.to_s == """
	# 14.0
	# 32.0"""
	# ~~~
	fun *(other: Matrix): Matrix
	do
		assert self.width == other.height

		var out = new Matrix(other.width, self.height)
		out.items.mul(items, other.items, self.width, self.height, other.width)
		return out
	end

	# Get the transpose of this matrix
	#
	# ~~~
	# var matrix = new Matrix.from([[1.0, 2.0, 3.0],
	#                               [4.0, 5.0, 6.0]])
	# assert matrix.transposed.to_a == [[1.0, 4.0],
	#                                   [2.0, 5.0],
	#                                   [3.0, 6.0]]
	#
	# var i = new Matrix.identity(3)
	# assert i.transposed == i
	# ~~~
	fun transposed: Matrix
	do
		var out = new Matrix(height, width)
		for k, v in self do out[k.x, k.y] = v
		return out
	end

	# Iterate over the values in this matrix
	fun iterator: MapIterator[MatrixCoordinate, Float] do return new MatrixIndexIterator(self)

	redef fun to_s
	do
		var s = new FlatBuffer
		for y in [0..height[ do
			for x in [0..width[ do
				s.append items[y*width+x].to_s
				if x < width-1 then s.add ' '
			end
			if y < height-1 then s.add '\n'
		end
		return s.to_s
	end

	redef fun ==(other) do return other isa Matrix and
		width == other.width and height == other.height and
		items.equal_items(items, width*height)

	redef fun hash do return items.hash_items(width*height)
end

private class MatrixIndexIterator
	super MapIterator[MatrixCoordinate, Float]

	var matrix: Matrix

	redef var key = new MatrixCoordinate(0, 0)

	redef fun is_ok do return key.y < matrix.height

	redef fun item
	do
		assert is_ok
		return matrix[key.y, key.x]
	end

	redef fun next
	do
		assert is_ok
		var key = key
		if key.x == matrix.width - 1 then
			key.x = 0
			key.y += 1
		else
			key.x += 1
		end
	end
end

# Position key when iterating over the values of a matrix
class MatrixCoordinate
	# Index of the current column
	var x: Int

	# Index of the current row
	var y: Int

	redef fun to_s do return "({x},{y})"
end

# Specialized native structure to store matrix items and avoid boxing cost
private extern class NativeDoubleArray `{ double* `}

	new(size: Int) do
		var sizeof_double = 8
		var buf = new CString(sizeof_double*size)
		return new NativeDoubleArray.in_buffer(buf)
	end

	new in_buffer(buffer: CString) `{ return (double*)buffer; `}

	fun [](i: Int): Float `{ return self[i]; `}

	fun []=(i: Int, value: Float) `{ self[i] = value; `}

	fun equal_items(other: NativeDoubleArray, len: Int): Bool `{
		int i;
		for (i = 0; i < len; i ++)
			if (self[i] != other[i])
				return 0;
		return 1;
	`}

	fun hash_items(len: Int): Int `{
		// Adapted from `SequenceRead::hash`
		long r = 17+len;
		int i;
		for (i = 0; i < len; i ++)
			r = r * 3 / 2 + (long)(i*1024.0);
		return r;
	`}

	fun mul(a, b: NativeDoubleArray, a_width, a_height, b_width: Int) `{
		int i, j, k;
		for (j = 0; j < a_height; j ++)
			for (i = 0; i < b_width; i ++) {
				float sum = 0.0;
				for (k = 0; k < a_width; k ++) sum += a[j*a_width + k] * b[k*b_width + i];
				self[j*b_width + i] = sum;
			}
	`}
end
