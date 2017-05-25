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

# Abstract font drawing services, implemented by `bmfont` and `tileset`
module font

import flat

# Abstract font, drawn by a `TextSprites`
abstract class Font

	# Line spacing modifier for `pld` and `plu`
	#
	# This value acts as multiplier to the standard line height.
	# Defaults to 0.4, so a `pld` moves chars down by about half a line.
	var partial_line_mod: Numeric = 0.4 is writable

	# Backend writing service, clients should use `TextSprites.text=`
	protected fun write_into(text_sprites: TextSprites, text: Text) is abstract
end

# Manage a set of sprites to display some text
class TextSprites

	# Font used to draw text
	var font: Font

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

		font.write_into(self, text)

		# Register sprites to be drawn by `app.ui_camera`
		target_sprite_set.add_all sprites
	end
end

# Partial line forward (U+008B)
fun pld: Char do return ''

# Partial line backward (U+008C)
fun plu: Char do return ''
