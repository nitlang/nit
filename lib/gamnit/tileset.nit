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

# Support for `TileSet`, `TileSetFont` and drawing text with `TextSprites`
module tileset

import font

# Efficiently retrieve tiles in a big texture
class TileSet
	# Texture containing the tileset
	var texture: Texture

	# Width of a tile
	var width: Numeric

	# Height of a tile
	var height: Numeric

	# Number of columns of tiles in the texture
	var nb_cols: Int = (texture.width / width.to_f).to_i is lazy

	# Number of rows of tiles in the texture
	var nb_rows: Int = (texture.height / height.to_f).to_i is lazy

	# Cache of the subtextures of tiles
	var subtextures: Array[Texture] is lazy do
		var subtextures = new Array[Texture]
		for j in [0..nb_rows[ do
			for i in [0..nb_cols[ do
				subtextures.add texture.subtexture(
					i.to_f*width.to_f, j.to_f*height.to_f, width.to_f, height.to_f)
			end
		end
		return subtextures
	end

	# Subtexture for the tile at `x, y`
	#
	# Require: `x < nb_cols and y < nb_rows`
	fun [](x,y: Int): Texture
	do
		assert x >= 0 and x < nb_cols and y >= 0 and y <= nb_rows else print "{x}x{y}<?{nb_cols}x{nb_rows}"
		var idx = x + y * nb_cols
		return subtextures[idx]
	end
end

# A monospace bitmap font where glyphs are stored in a tileset
#
# This `Font` does not implement all settings of `TextSprites`.
class TileSetFont
	super TileSet
	super Font

	# Set the characters present in `texture`
	#
	# Last all characters from left to right, then top to bottom.
	# Line skip `\n`, are ignored and space ' ' skips holes in the tileset.
	fun chars=(chars: Text)
	is autoinit do
		chars_cleaned = chars.replace("\n", "")
	end

	# Character present in the texture, set by `chars=`
	private var chars_cleaned: Text is noautoinit

	# Additional space to insert horizontally between characters
	#
	# A negative value may display overlapped tiles.
	var hspace: Numeric = 0.0 is writable

	# Additional space to insert vertically between characters
	#
	# A negative value may display overlapped tiles.
	var vspace: Numeric = 0.0 is writable

	# The glyph/tile/texture associated to `char`
	#
	# Returns null if `char` is not in `chars`.
	fun char(char: Char): nullable Texture
	do
		var i = chars_cleaned.index_of(char)
		if i == -1 then return null
		return subtextures[i]
	end

	# Distance between the beginning of a letter tile and the beginning of the next letter tile
	fun advance: Float do return width.to_f + hspace.to_f

	# Distance between the beginning and the end of the longest line of `text`
	fun text_width(text: Text): Numeric
	do
		var lines = text.split('\n')
		if lines.is_empty then return 0

		var longest = 0
		for line in lines do longest = longest.max(line.length)

		return longest.mul(advance)
	end

	# Distance between the top of the first line to the bottom of the last line in `text`
	fun text_height(text: Text): Numeric
	do
		if text.is_empty then return 0

		var n_lines = text.chars.count('\n')
		return (n_lines+1).mul(height.add(vspace)).sub(vspace)
	end

	redef fun write_into(text_sprites, text)
	do
		# Build new sprites
		var dx = advance/2.0
		var dy = hspace.to_f/2.0
		for c in text do
			if c == '\n' then
				dy -= height.to_f + vspace.to_f
				dx = advance/2.0
				continue
			else if c == pld then
				dy -= (height.to_f + vspace.to_f) * partial_line_mod.to_f
				continue
			else if c == plu then
				dy += (height.to_f + vspace.to_f) * partial_line_mod.to_f
				continue
			else if c.is_whitespace then
				dx += advance
				continue
			end

			var tex = char(c)
			if tex == null then
				# Try to fallback to '?'
				tex = char('?')
				if tex == null then continue
			end

			text_sprites.sprites.add new Sprite(tex, text_sprites.anchor.offset(dx, dy, 0))
			dx += advance
		end
	end
end
