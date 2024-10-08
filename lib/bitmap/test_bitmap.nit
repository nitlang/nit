# This file is part of NIT ( https://nitlanguage.org ).
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

# This file tests the Bitmap class in the bitmap module
# It has to be called by passing two arguments:
#
#   - An input bitmap file
#   - An output bitmap file
#
# It converts the input bitmap to grayscale and save it to the specified
# output file. In addition, it creates a blank.bmp file in the current directory.
#
#
# A module for testing the classes in the bitmap module
module test_bitmap is test

import bitmap

class TestBitmap
	test

	fun test_grayscale is test do
		var bitmap = new Bitmap.with_size(400, 300)
		for y in [0..300] do
			for x in [0..200] do bitmap.set_pixel(x, y, 0x0077AAAA)
		end
		bitmap.grayscale
		bitmap.save("./blank.bmp")
	end
end
