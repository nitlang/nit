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

# Abstract font drawing services, implemented by `bmfont` and `tileset`
module font

import gamnit::flat_core

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

	# Reference coordinates of this block of text
	#
	# When left aligned, the default at `align == 0.0`, the anchor is the
	# left coordinate of the first character of the first line.
	# When right aligned, at `align == 1.0`, the anchor is the right
	# coordinate of the last character.
	# When centered, at `align == 0.5`, the anchor is at the center.
	#
	# When top aligned, the default at `valign == 0.0`, the anchor is at the
	# top of this block of text.
	# When bottom aligned, at `valign == 1.0`, the anchor is at the bottom.
	var anchor: Point3d[Float]

	# Last set of sprites generated to display `text=`
	var sprites = new Array[Sprite]

	# Sprite set where to put created sprites
	#
	# Defaults to `app::ui_sprites`, but it could also be set to a
	# `app::sprites` or a custom collection.
	var target_sprite_set: Set[Sprite] = app.ui_sprites is lazy, writable

	private var cached_text: nullable Text = null

	private var init_complete = false

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

		if not init_complete then return

		# Clean up last used sprites
		for s in sprites do if target_sprite_set.has(s) then target_sprite_set.remove s
		sprites.clear

		if text == null then return

		font.write_into(self, text)

		# Register sprites to be drawn by `app.ui_camera`
		target_sprite_set.add_all sprites
	end

	# Horizontal text alignment
	#
	# Use 0.0 to align left (the default), 0.5 to align in the center or
	# 1.0 to align on the right.
	#
	# See: `valign`
	var align = 0.0 is optional, writable

	# Vertical text alignment
	#
	# Use 0.0 for top alignment (the default) where the text is under the `anchor`,
	# 0.5 to vertically center the text on the `anchor` or
	# or 1.0 to bottom align the text above the `anchor`.
	#
	# See: `align`
	var valign = 0.0 is optional, writable

	# Maximum width of each line of text
	#
	# The first word of each line is exempt and may overflow.
	#
	# The behavior when a line overflow depends on `wrap`.
	var max_width: nullable Float is writable

	# Maximum height of this block of text
	#
	# The first line is exempt and may overflow.
	# Overflowing lines are cut.
	var max_height: nullable Float is writable

	# Should overflowing lines wrap to the next line?
	#
	# If `true`, the default, overflowing lines continue on the next line.
	# Otherwise, lines are cut before overflowing.
	var wrap = true is optional, writable

	# Scale applied to all sprites and spacing
	#
	# Defaults to 1.0.
	var scale = 1.0 is optional, writable

	# Links in the currently displayed text
	#
	# Links are declared in a Markdown-like format:
	#
	# * `[my link]` creates a link with the name `my link`.
	# * `[pretty name](internal name)` creates a link with the
	#   name `internal_name` while showing the text `pretty name`.
	#
	# This `Map` lists the sprites composing each link.
	# These sprites can be modified as desired by the clients,
	# by changing their tints or anything else.
	var links = new Map[String, Array[Sprite]] is lazy

	# Width of the currently displayed text
	var width = 0.0

	# Height of the currently displayed text
	var height = 0.0

	# Force drawing of the text sprites
	#
	# This method may be called after changing a setting (`align`, `wrap`, etc.)
	# to update the displayed text.
	fun force_redraw
	do
		var t = cached_text
		cached_text = null
		text = t
	end

	init
	do
		init_complete = true
		force_redraw
	end
end

# Partial line forward (U+008B)
fun pld: Char do return ''

# Partial line backward (U+008C)
fun plu: Char do return ''
