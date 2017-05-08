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

# Support for `TileSet`, `TileSetFont` and drawing text with `TextSprites`
module tileset

import flat

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
class TileSetFont
	super TileSet

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

	# Line spacing modifier for `pld` and `plu`
	#
	# This value acts as multiplier to `height + vspace`.
	# Defaults to 0.4, so a `pld` moves chars down by about half a line.
	var partial_line_mod: Numeric = 0.4 is writable

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
end

# Manage a set of sprites to display some text
class TextSprites

	# Font used to draw text
	var font: TileSetFont

	# Top left of the first character in UI coordinates
	var anchor: Point3d[Float]

	# Last set of sprites generated to display `text=`
	var sprites = new Array[Sprite]

	# Sprite set where to put created sprites
	#
	# Defaults to `app::ui_sprites`, but it could also be set to a
	# `app::sprites` or a custom collection.
	var target_sprite_set: Set[Sprite] = app.ui_sprites is lazy, writable

	private var cached_text: nullable Text = ""

	# Last text drawn
	fun text: nullable Text do return cached_text

	# Update the text displayed by inserting new sprites into `app.ui_sprites`
	#
	# Does not redraw if `text` has not changed.
	fun text=(text: nullable Text)
	is autoinit do
		# Don't redraw if text hasn't changed
		if text == cached_text then return
		cached_text = text

		# Clean up last used sprites
		for s in sprites do if target_sprite_set.has(s) then target_sprite_set.remove s
		sprites.clear

		if text == null then return

		# Build new sprites
		var dx = font.advance/2.0
		var dy = font.hspace.to_f/2.0
		for c in text do
			if c == '\n' then
				dy -= font.height.to_f + font.vspace.to_f
				dx = font.advance/2.0
				continue
			else if c == pld then
				dy -= (font.height.to_f + font.vspace.to_f) * font.partial_line_mod.to_f
				continue
			else if c == plu then
				dy += (font.height.to_f + font.vspace.to_f) * font.partial_line_mod.to_f
				continue
			else if c.is_whitespace then
				dx += font.advance
				continue
			end

			var tex = font.char(c)
			if tex == null then
				# Try to fallback to '?'
				tex = font.char('?')
				if tex == null then continue
			end

			sprites.add new Sprite(tex, anchor.offset(dx, dy, 0))
			dx += font.advance
		end

		# Register sprites to be drawn by `app.ui_camera`
		target_sprite_set.add_all sprites
	end
end

# Partial line forward (U+008B)
fun pld: Char do return ''

# Partial line backward (U+008C)
fun plu: Char do return ''
