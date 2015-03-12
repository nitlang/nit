# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Helper services to draw numbers on screen
module numbers

import assets

# A set of images to draw numbers
class NumberImages

	# Images from 0 to 9
	var imgs: Array[Image]
end

redef class App
	# Load a `NumberImages` from the assets
	fun load_numbers(path: String): NumberImages
	do
		var imgs = new Array[Image]
		for d in [0..9] do imgs.add(load_image(path.replace("#", d.to_s)))
		return new NumberImages(imgs)
	end
end

redef class Display
	fun blit_number(imgs: NumberImages, number: Int, x, y: Int)
	do
		var str = number.to_s
		for c in str.chars do
			var d = c.ascii-'0'.ascii
			assert d >= 0 and d <= 9
			var img = imgs.imgs[d]
			blit(img, x, y)
			x += (img.width.to_f * img.scale).to_i
		end
	end
end
