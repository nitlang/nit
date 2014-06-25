# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Manage images that are tileset or glyphset (for bitmap fonts)
module tileset

import mnit_display

# Efficienly retrieve tiles in a big image
class TileSet
	# The image containing the tileset
	var image: Image

	# The witdh of a tile
	var width: Int

	# The height of a tile
	var height: Int

	init(image: Image, width: Int, height: Int)
	do
		self.image = image
		self.width = width
		self.height = height

		self.nb_cols = image.width / width
		self.nb_rows = image.height / height

		for j in [0..nb_rows[ do
			for i in [0..nb_cols[ do
				subimages.add image.subimage(i*width,j*height,width,height)
			end
		end
	end

	# The number of columns of tiles in the image
	var nb_cols: Int

	# The number of rows of tiles in the image
	var nb_rows: Int

	# Cache for images of tiles
	var subimages = new Array[Image]

	# The subimage of given tile
	# Aborts if x or y are out of bound
	fun [](x,y: Int): Image
	do
		assert x >= 0 and x < nb_cols and y >= 0 and y <= nb_rows else print "{x}x{y}<?{nb_cols}x{nb_rows}"
		var idx = x + y * nb_cols
		return subimages[idx]
	end
end

# A monospace bitmap font where glyphs are stored in a tileset
class TileSetFont
	super TileSet

	# Each caracter in the image
	# in left->right, then top->bottom order
	# Use space (' ') for holes in the tileset
	var chars: String

	init(image: Image, width: Int, height: Int, chars: String)
	do
		super
		self.chars = chars
	end

	# Additional space to insert horizontally between characters
	# A negave value will display tile overlaped
	var hspace: Int = 0 is writable

	# Additional space to insert vertically between characters
	# A negave value will display tile overlaped
	var vspace: Int = 0 is writable

	# The glyph (tile) associated to the caracter `c` according to `chars`
	# Returns null if `c` is not in `chars`
	fun char(c: Char): nullable Image
	do
		var i = chars.index_of(c)
		if i == -1 then return null
		return subimages[i]
	end
end

redef class Display
	# Blit the text using a monospace bitmap font
	# '\n' are rendered as carriage return
	fun text(text: String, font: TileSetFont, x, y: Int)
	do
		var cx = x
		var cy = y
		var sw = font.width + font.hspace
		var sh = font.height + font.vspace
		for c in text.chars do
			if c == '\n' then
				cx = x
				cy += sh
				continue
			end
			if c == ' ' then
				cx += sw
				continue
			end
			var image = font.char(c)
			if image != null then
				blit(image, cx, cy)
			end
			cx += sw
		end
	end
end
