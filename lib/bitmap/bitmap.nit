# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Budi Kurniawan <budi2020@gmail.com>
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

# The Bitmap class represents a 24-bit bitmap image. An instance can be constructed
# by calling load or with_size:
#
# ~~~nitish
# var bm1 = new Bitmap.load(path_to_a_bmp_file)
# var bm2 = new Bitmap.with_size(400, 300)
# ~~~
#
# The width and height attributes contain the image's width and height,
# respectively.
#
# Individual pixels can be manipulated by calling the set_pixel function:
#
# ~~~nitish
#	set_pixel(x, y, color)
# ~~~
#
# The no-argument grayscale function converts the bitmap to grayscale and is an
# implementation of this Rossetacode task:
# http://rosettacode.org/wiki/Grayscale_image
#
# Finally, the bitmap can be saved to a file by calling save:
#
# ~~~nitish
#	save(path_to_a_file)
# ~~~
#
# For information on the bitmap format, see
# http://en.wikipedia.org/wiki/BMP_file_format
#
# A module containing classes for manipulating bitmap images
module bitmap
#
# A class that represents a Bitmap image
class Bitmap
	# The file path if this Bitmap is created by loading a bitmap file
	var file_path: String is noinit

	# The file extension if this Bitmap is created by loading a bitmap file
	var file_extension: String is noinit

	# The file size if this Bitmap is created by loading a bitmap file
	var file_size: Int is noinit

	# The image width in pixels
	var width: Int is noinit

	# The image height in pixels
	var height: Int is noinit

	# The offset of image data. Typically, 54
	private var data_offset: Int is noinit

	# The number of bits representing a pixel. Currently only 24-bit bitmaps are supported
	private var bits_per_pixel: Int is noinit

	# The size of images. For a 24-bit bitmap, this is equal to (3*width*height)
	private var image_size: Int is noinit

	# 14-byte bitmap header
	private var bitmap_header = [66, 77, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0]

	# 40-byte dib header
	private var dib_header = [40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 1, 0, 24, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

	# The image data, each cell contains a pixel.
	# The first 8 least-significant bits represent the red component,
	# the next 8 least-significant bits represent the green component,
	# and the next 8 bit represent the blue component.
	# The last 8 most-significant bits are not used
	private var data = new Array[Array[Int]]

	# Constructs a Bitmap object by passing the image's width and height (in pixels)
	init with_size(width: Int, height: Int)
	do
		self.width = width
		self.height = height
		self.bits_per_pixel = 24
		self.data_offset = 54
		#set width and height

		self.set_value(dib_header, 4, width)
		self.set_value(dib_header, 8, height)
		#set file size
		var file_size = 3 * width * height + 54
		self.set_value(bitmap_header, 2, file_size)

		#init pixel data
		self.data = new Array[Array[Int]].with_capacity(height)
		for x in [0..height[ do
			var row = new Array[Int].with_capacity(width)
			for y in [0..width[ do
				row.add(0x00FFFFFF)
			end
			self.data[x] = row
		end
	end

	# Creates an instance of Bitmap by loading an existing image file
	init load(path: String)
	do
		self.file_path = path
		var temp = path.file_extension
		if temp != null then
			self.file_extension = temp
		else
			self.file_extension = ""
		end
		var fileReader = new FileReader.open(path)

		# =============== Bitmap header ================
		for x in [0..13] do
			var b = fileReader.read_byte
			if b < 0 then return
			bitmap_header[x] = b
		end
		self.file_size = get_value(bitmap_header.subarray(2, 4))
		self.data_offset = get_value(bitmap_header.subarray(10, 4))

		# =============== DIB header ================
		for x in [0..39] do
			var b = fileReader.read_byte
			if b < 0 then return
			dib_header[x] = b
		end
		var dib_size = get_value(dib_header.subarray(0, 4))
		# only support BITMAPINFOHEADER
		if dib_size != 40 then
			print "This type of bitmap is not supported"
			fileReader.close
			return
		end

		self.width = get_value(dib_header.subarray(4, 4))
		self.height = get_value(dib_header.subarray(8, 4))
		self.bits_per_pixel = get_value(dib_header.subarray(14, 2))
		self.image_size = get_value(dib_header.subarray(20, 4))

		if self.bits_per_pixel != 24 then
			print "Only full color bitmaps are supported"
			fileReader.close
			return
		end

		if self.bits_per_pixel == 24 then
			# assert self.image_size + 54 <= self.file_size
			# start loading image data, for now assume no padding
			for x in [0..self.height[
			do
				var row = new Array[Int].with_capacity(self.width)
				var rgb_str = new CString(3)
				for y in [0..self.width[
				do
					var bts = fileReader.read_bytes_to_cstring(rgb_str, 3)
					if bts < 3 then return
					var red = rgb_str[0] << 16
					var green = rgb_str[1] << 8
					var blue = rgb_str[2]
					row.add(red.to_i + green.to_i + blue.to_i)
				end
				self.data.add(row)
			end
		end
		fileReader.close
	end #end of load_from_file method

	# Converts the value contained in two or four bytes into an Int. Since Nit
	# does not have a byte type, Int is used
	private fun get_value(array: Array[Int]): Int
	do
		var value = 0
		for x in [0..array.length[ do
			value += array[x] * 256.to_f.pow(x.to_f).to_i
		end
		return value
	end

	# Converts the value in an Int to four bytes. Since Nit does not have a byte
	# type, Int is used.
	private fun set_value(array: Array[Int], start_index: Int, value: Int)
	do
		array[start_index] = value & 0x000000FF
		array[start_index + 1] = (value >> 8) & 0x000000FF
		array[start_index + 2] = (value >> 16) & 0x000000FF
		array[start_index + 3] = (value >> 24) & 0x000000FF
	end

	# Saves the bitmap into a file
	fun save(path: String)
	do
		var fw = new FileWriter.open(path)
		# Write bitmap header
		for x in [0..self.bitmap_header.length[ do
			fw.write(self.bitmap_header[x].code_point.to_s)
		end
		# Write dib header
		for x in [0..self.dib_header.length[ do
			fw.write(self.dib_header[x].code_point.to_s)
		end
		# Write color table (if any)
		# Write data (no padding for now)
		for x in [0..self.height[ do
			var row = self.data[x]
			for y in [0..self.width[ do
				var pixel = row[y]
				var red = pixel >> 16
				var green = (pixel & 0x00FF00) >> 8
				var blue = pixel & 0x000000FF
				fw.write(red.code_point.to_s)
				fw.write(green.code_point.to_s)
				fw.write(blue.code_point.to_s)
			end
		end
		fw.close
	end #end of save

	# Converts the bitmap to grayscale by manipulating each individual pixel
	fun grayscale
	do
		for x in [0..self.height[ do
			var row = self.data[x]
			for y in [0..self.width[ do
				var pixel = row[y]
				var red = pixel >> 16
				var green = (pixel & 0x00FF00) >> 8
				var blue = pixel & 0x000000FF
				var lum = (0.2126 * red.to_f + 0.7152 * green.to_f + 0.0722 * blue.to_f).to_i
				pixel = lum * 256 * 256 + lum * 256 + lum
				self.data[x][y] = pixel
			end
		end
	end

	# Sets an individual pixel, where position (0, 0) represents the top-left pixel.
	fun set_pixel(x: Int, y: Int, color: Int)
	do
		if x >= 0 and y >= 0 and x < self.width and y < self.height then
			# Since a bitmap stores its rows of pixels upside-down, y is mapped to
			# height - 1 - y to make (0, 0) the top-left pixel
			self.data[self.height - 1 - y][x] = color
		end
	end
end #end of class Bitmap
