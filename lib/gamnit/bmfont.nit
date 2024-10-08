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

# Parse Angel Code BMFont format and draw text
#
# The BMFont format supports packed textures, varying advance per character and
# even kernings. It can be generated with a number of tools, inluding:
# * BMFont, free software Windows app, http://www.angelcode.com/products/bmfont/
# * Littera, a web app, http://kvazars.com/littera/
#
# Format reference: http://www.angelcode.com/products/bmfont/doc/file_format.html
module bmfont

private import dom

intrude import font

# BMFont description, parsed with `Text::parse_bmfont` or loaded as a `BMFontAsset`
#
# This class flattens all the `info` and `common` data.
class BMFont

	# ---
	# info part
	#
	# How the font was generated.

	# Name of the source true type font
	var face: Text

	# Size of the source true type font
	var size: Float

	# Is the font bold?
	var bold: Bool

	# Is the font italic?
	var italic: Bool

	# Does the font uses the Unicode charset?
	var unicode: Bool

	# Padding for each character
	#
	# In the format `up,right,down,left`
	var padding: String

	# Spacing for each character
	#
	# In the format `horizontal,vertical`.
	var spacing: String

	# ---
	# common part
	#
	# Information common to all characters

	# Distance in pixels between each line of text
	var line_height: Float

	# Pixels from the top of the line to the base of the characters
	var base: Float

	# Width of the texture
	var scale_w: Float

	# Height of the texture
	var scale_h: Float

	# Textures
	var pages = new Map[String, TextureAsset]

	# Characters in the font
	var chars = new Map[Char, BMFontChar]

	# Distance between certain characters
	var kernings = new HashMap2[Char, Char, Float]

	# Additional distance between `prev_char` and `char`
	fun kerning(prev_char: nullable Char, char: Char): Float
	do
		if prev_char == null then return 0.0
		return kernings[prev_char, char] or else 0.0
	end

	redef fun to_s do return "<{class_name} {face} at {size} pt, "+
	                         "{pages.length} pages, {chars.length} chars>"

	# TODO
	#
	# # From info
	# charset
	# stretchH
	# smooth
	# aa
	# outline
	#
	# # From common
	# packed
	# alphaChnl
	# redChnl
	# greenChnl
	# blueChnl
end

# Description of a character in a `BMFont`
class BMFontChar

	# Subtexture left coordinate
	var x: Float

	# Subtexture top coordinate
	var y: Float

	# Subtexture width
	var width: Float

	# Subtexture height
	var height: Float

	# Drawing offset on X
	var xoffset: Float

	# Drawing offset on Y
	var yoffset: Float

	# Cursor advance after drawing this character
	var xadvance: Float

	# Full texture contaning this character and others
	var page: RootTexture

	# TODO Channel where the image is found
	#var chnl: Int

	# Subtexture with this character image only
	var subtexture: Texture = page.subtexture(x, y, width, height) is lazy, writable

	# Scale to apply to this char only
	var scale = 1.0 is writable
end

redef class Text

	# Parse `self` as an XML BMFont description file
	#
	# Reports only basic XML format errors, other errors may be ignored or
	# cause a crash.
	#
	# ~~~
	# var desc = """
	# <font>
	#   <info face="arial" size="72" bold="0" italic="0" charset=""
	#         unicode="1" stretchH="100" smooth="1" aa="1" padding="2,2,2,2"
	#         spacing="0,0" outline="0"/>
	#   <common lineHeight="80" base="65" scaleW="4030" scaleH="231"
	#           pages="1" packed="0"/>
	#   <pages>
	#     <page id="0" file="arial.png"/>
	#   </pages>
	#   <chars count="3">
	#     <char id="65" x="2519" y="10" width="55" height="59" xoffset="0"
	#           yoffset="13" xadvance="48" page="0" chnl="15"/>
	#     <char id="66" x="2600" y="10" width="46" height="58" xoffset="5"
	#           yoffset="13" xadvance="48" page="0" chnl="15"/>
	#     <char id="67" x="2673" y="9" width="52" height="60" xoffset="4"
	#           yoffset="12" xadvance="52" page="0" chnl="15"/>
	#   </chars>
	#   <kernings count="1">
	#     <kerning first="65" second="67" amount="-1"/>
	#   </kernings>
	# </font>
	# """
	#
	# var fnt = desc.parse_bmfont("dir_in_assets").value
	# assert fnt.to_s == "<BMFont arial at 72.0 pt, 1 pages, 3 chars>"
	# assert fnt.line_height == 80.0
	# assert fnt.kernings['A', 'C'] == -1.0
	# assert fnt.chars['A'].page.as(TextureAsset).path == "dir_in_assets/arial.png"
	# ~~~
	fun parse_bmfont(dir: String): MaybeError[BMFont, Error]
	do
		# Parse XML
		var xml = to_xml
		if xml isa XMLError then
			var msg = "XML Parse Error: {xml.message}:{xml.location or else 0}"
			return new MaybeError[BMFont, Error](maybe_error=new Error(msg))
		end

		# Basic sanity check
		var roots = xml["font"]
		if roots.is_empty then
			var msg = "Error: the XML document doesn't declare the expected `font` root"
			return new MaybeError[BMFont, Error](maybe_error=new Error(msg))
		end

		# Expect the rest of the document to be well formatted
		var root = roots.first

		var info = root["info"].first
		assert info isa XMLAttrTag
		var info_map = info.attributes_to_map

		var common = root["common"].first
		assert common isa XMLAttrTag
		var common_map = common.attributes_to_map

		var fnt = new BMFont(
			info_map["face"],
			info_map["size"].to_f,
			info_map["bold"] == "1",
			info_map["italic"] == "1",
			info_map["unicode"] == "1",
			info_map["padding"],
			info_map["spacing"],
			common_map["lineHeight"].to_f,
			common_map["base"].to_f,
			common_map["scaleW"].to_f,
			common_map["scaleH"].to_f
		)

		# Pages / pixel data files
		var xml_pages = root["pages"].first
		for page in xml_pages["page"] do
			if not page isa XMLAttrTag then continue

			var attributes = page.attributes_to_map
			var file = dir / attributes["file"]
			fnt.pages[attributes["id"]] = new TextureAsset(file)
		end

		# Char description
		for item in root["chars"].first["char"] do
			if not item isa XMLAttrTag then continue

			var attributes = item.attributes_to_map
			var id = attributes["id"].to_i.code_point

			var c = new BMFontChar(
				attributes["x"].to_f, attributes["y"].to_f,
				attributes["width"].to_f, attributes["height"].to_f,
				attributes["xoffset"].to_f, attributes["yoffset"].to_f,
				attributes["xadvance"].to_f,
				fnt.pages[attributes["page"]])

			fnt.chars[id] = c
		end

		# Kerning between two characters
		var kernings = root["kernings"]
		if kernings.not_empty then
			for item in kernings.first["kerning"] do
				if not item isa XMLAttrTag then continue

				var attributes = item.attributes_to_map
				var first = attributes["first"].to_i.code_point
				var second = attributes["second"].to_i.code_point
				var amount = attributes["amount"].to_f
				fnt.kernings[first, second] = amount
			end
		end

		return new MaybeError[BMFont, Error](fnt)
	end
end

# BMFont from the assets folder
#
# ~~~
# redef class App
#     var font = new BMFontAsset("arial.fnt")
#     var pos: Point3d[Float] = ui_camera.top_left.offset(128.0, -128.0, 0.0)
#     var ui_text = new TextSprites(font, pos)
#
#     redef fun create_scene
#     do
#         super
#
#         font.load
#         assert font.error == null
#
#         ui_text.text = "Hello world!"
#     end
# end
# ~~~
class BMFontAsset
	super Asset
	super Font

	# Font description
	#
	# Require: `error == null`
	fun desc: BMFont
	do
		# Cached results
		var cache = desc_cache
		if cache != null then return cache
		var error = error
		assert error == null else print_error error

		# Load on first access
		load
		error = self.error
		assert error == null else print_error error

		return desc_cache.as(not null)
	end

	private var desc_cache: nullable BMFont = null

	# Error at loading
	var error: nullable Error = null

	# XML description in the assets folder
	private var text_asset = new TextAsset(path) is lateinit

	# Load font description and textures from the assets folder
	#
	# Sets `error` if an error occurred, otherwise
	# the font description can be accessed via `desc`.
	fun load
	do
		var text_asset = text_asset
		text_asset.load
		var error = text_asset.error
		if error != null then
			self.error = error
			return
		end

		var desc = text_asset.to_s
		var fnt_or_error = desc.parse_bmfont(path.dirname)
		if fnt_or_error.is_error then
			self.error = fnt_or_error.error
			return
		end

		var fnt = fnt_or_error.value
		self.desc_cache = fnt

		# Load textures too
		for page_name, texture in fnt.pages do
			texture.load

			# Move up any texture loading error.
			# This algo keeps only the latest error,
			# but this isn't a problem on single page fonts.
			error = texture.error
			if error != null then self.error = error
		end
	end

	redef fun write_into(text_sprites, text)
	do
		var dx = 0.0
		var dy = 0.0
		var text_width = 0.0
		var line_sprites = new Array[Sprite]
		var height = 0.0

		# Has the current line height been added to `height`?
		var line_height_counted = false

		# TextSprite customization
		var max_width = text_sprites.max_width
		var max_height = text_sprites.max_height
		var scale = text_sprites.scale

		# Font customization
		var line_height = desc.line_height * scale
		var partial_line_skip = line_height * partial_line_mod.to_f

		# Links data
		text_sprites.links.clear
		var in_link = false
		var link_sprites = new Array[Sprite]
		var link_name = ""

		# Loop over all characters
		var prev_char = null
		var i = -1
		while i < text.length - 1 do
			i += 1
			var c = text[i]

			# Special characters
			var word_break = false
			if c == '\n' then
				justify(line_sprites, text_sprites.align, dx)
				dy -= line_height
				if max_height != null and max_height < -dy + line_height then break
				dx = 0.0
				if not line_height_counted then
					# Force to account for empty lines
					height += line_height
				end
				line_height_counted = false
				prev_char = null
				continue
			else if c == pld then
				dy -= partial_line_skip
				height += partial_line_skip
				word_break = true
				continue
			else if c == plu then
				dy += partial_line_skip
				height -= partial_line_skip # We could keep two heights and return the max
				word_break = true
				continue
			else if c.is_whitespace then
				var space_advance = if desc.chars.keys.has(' ') then
						desc.chars[' '].xadvance
					else if desc.chars.keys.has('f') then
						desc.chars['f'].xadvance
					else 16.0
				dx += space_advance * scale
				word_break = true
			else if c == '[' then
				# Open link?
				if i + 1 < text.length and text[i+1] == '[' then
					# Escape if duplicated
					i += 1
				else
					in_link = true
					continue
				end
			else if c == ']' then
				# Close link?
				if i + 1 < text.length and text[i+1] == ']' then
					# Escape if duplicated
					i += 1
				else
					# If there's a () use it as link_name
					var j = i + 1
					if j < text.length and text[j] == '(' then
						var new_name
						new_name = ""
						loop
							j += 1
							if j > text.length then
								# No closing ), abort
								new_name = null
								break
							end

							var l = text[j]
							if l == ')' then break
							new_name += l.to_s
						end
						if new_name != null then
							link_name = new_name
							i = j
						end
					end

					# Register the link for the clients
					text_sprites.links[link_name] = link_sprites

					# Prepare next link
					in_link = false
					link_sprites = new Array[Sprite]
					link_name = ""
					continue
				end
			end

			if in_link then link_name += c.to_s

			# End of a word?
			if word_break then
				# If we care about line width, check for overflow
				if max_width != null then
					# Calculate the length of the next word
					var prev_w = null
					var word_len = 0.0
					for wi in [i+1..text.length[ do
						var w = text[wi]

						if w == '\n' or w == pld or w == plu or w.is_whitespace or (in_link and w == ']') then break

						if not desc.chars.keys.has(w) then
							var rc = replacement_char
							if rc == null then continue
							w = rc
						end

						word_len += advance(prev_w, w) * scale
						prev_w = w
					end

					# Would the line be too long?
					if dx + word_len > max_width then
						justify(line_sprites, text_sprites.align, dx)
						dy -= line_height
						if max_height != null and max_height < -dy + line_height then break
						dx = 0.0
						line_height_counted = false

						if not text_sprites.wrap then
							# Cut short, skip everything until the next new line
							while c != '\n' and i < text.length - 1 do
								i += 1
								c = text[i]
							end
						end
					end
				end

				prev_char = null
				continue
			end

			# Replace or skip unknown characters
			if not desc.chars.keys.has(c) then
				var rc = replacement_char
				if rc == null then continue
				c = rc
			end

			var char_info = desc.chars[c]
			var advance = char_info.xadvance
			var kerning = desc.kerning(prev_char, c)

			var x = dx + (char_info.width/2.0  + char_info.xoffset + kerning) * scale
			var y = dy - (char_info.height/2.0 + char_info.yoffset) * scale
			var pos = text_sprites.anchor.offset(x, y, 0.0)
			var s = new Sprite(char_info.subtexture, pos)
			s.scale = scale * char_info.scale
			text_sprites.sprites.add s
			line_sprites.add s
			if in_link then link_sprites.add s

			dx += (advance + kerning) * scale
			prev_char = c

			text_width = text_width.max(dx)

			if not line_height_counted then
				# Increase `height` only once per line iff there's a caracter
				line_height_counted = true
				height += line_height
			end
		end

		justify(line_sprites, text_sprites.align, dx)

		# valign
		if text_sprites.valign != 0.0 then
			var d = (-dy+line_height) * text_sprites.valign
			for s in text_sprites.sprites do s.center.y += d
		end

		text_sprites.width = text_width.max(dx)
		text_sprites.height = height
	end

	# Character replacing other characters missing from the font
	private var replacement_char: nullable Char is lazy do
		for c in  "�?".chars do
			if desc.chars.keys.has(c) then return c
		end
		return null
	end

	private fun advance(prev_char: nullable Char, char: Char): Float
	do
		var char_info = desc.chars[char]
		var kerning = desc.kerning(prev_char, char)
		return char_info.xadvance + kerning
	end

	private fun justify(line_sprites: Array[Sprite], align: Float, line_width: Float)
	do
		var dx = -line_width*align
		for s in line_sprites do s.center.x += dx
		line_sprites.clear
	end
end
