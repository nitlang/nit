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

# Load textures, create subtextures and manage their life-cycle
module textures

import display

# Texture composed of pixels, loaded from the assets folder by default
#
# Most textures should be created with `App` (as attributes)
# for the method `create_scene` to load them.
#
# ~~~
# import gamnit::flat
#
# redef class App
#     # Create the texture object, it will be loaded automatically
#     var texture = new Texture("path/in/assets.png")
#
#     redef fun create_scene()
#     do
#         # Let `create_scene` load the texture
#         super
#
#         # Use the texture
#         var sprite = new Sprite(texture, new Point3d[Float](0.0, 0.0, 0.0))
#         app.sprites.add sprite
#     end
# end
# ~~~
#
# Otherwise, they can be loaded and error checked explicitly after `create_scene`.
#
# ~~~nitish
# var texture = new Texture("path/in/assets.png")
# texture.load
# var error = texture.error
# if error != null then print_error error
# ~~~
#
# A texture may also be created programmatically, like `CheckerTexture`,
# or derived from another texture, using `subtexture`.
# Textures with actual pixel data (not `Subtexture`) are `RootTexture`.
# Texture loaded from the assets folder may in the PNG or JPG formats.
abstract class Texture

	# Prepare a texture located at `path` within the `assets` folder
	new (path: Text) do return new TextureAsset(path.to_s)

	# Root texture from which `self` is derived
	fun root: RootTexture is abstract

	# Width in pixels of this texture
	var width = 0.0

	# Height in pixels of this texture
	var height = 0.0

	# Load this texture, force reloading it if `force`
	fun load(force: nullable Bool) do end

	# Last error on this texture
	var error: nullable Error = null

	# OpenGL handle to this texture
	fun gl_texture: Int do return root.gl_texture

	# Prepare a subtexture from this texture, from the given pixel offsets
	fun subtexture(left, top, width, height: Numeric): Subtexture
	do
		return new AbsoluteSubtexture(self, left.to_f, top.to_f, width.to_f, height.to_f)
	end

	# Offset of the left border on `root` from 0.0 to 1.0
	fun offset_left: Float do return 0.0

	# Offset of the top border on `root` from 0.0 to 1.0
	fun offset_top: Float do return 0.0

	# Offset of the right border on `root` from 0.0 to 1.0
	fun offset_right: Float do return 1.0

	# Offset of the bottom border on `root` from 0.0 to 1.0
	fun offset_bottom: Float do return 1.0

	# Should this texture be drawn pixelated when magnified? otherwise it is interpolated
	#
	# This setting affects all the textures based on the same pixel data, or `root`.
	#
	# Must be set after a successful call to `load`.
	fun pixelated=(pixelated: Bool)
	do
		if root.gl_texture == -1 then return

		# TODO do not modify `root` by using *sampler objects* in glesv3
		glBindTexture(gl_TEXTURE_2D, root.gl_texture)

		var param = if pixelated then gl_NEAREST else gl_LINEAR
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, param)
	end
end

# Colorful small texture of 32x32 pixels by default
class CheckerTexture
	super RootTexture

	# Width and height in pixels, defaults to 32
	var size = 32 is optional

	redef fun load(force)
	do
		if gl_texture != -1 then return
		load_checker size
		loaded = true
	end
end

# Custom texture with pixel values filled programmatically
#
# At creation, the texture is composed of `width` by `height` (rounded down)
# transparent pixels. The pixels value can be set using `[]=`.
#
# ~~~
# # Build a texture with 4 colors
# var tex = new CustomTexture(2.0, 2.0)
# tex[0, 0] = [1.0, 0.0, 0.0] # Red
# tex[0, 1] = [0.0, 1.0, 0.0] # Green
# tex[1, 0] = [0.0, 0.0, 1.0] # Blue
# tex[1, 1] = [1.0, 1.0, 1.0, 0.5] # Transparent white
# tex.load
# ~~~
class CustomTexture
	super RootTexture

	redef var width
	redef var height

	private var cpixels = new CByteArray(4*width.to_i*height.to_i) is lazy

	# Set the `color` of the pixel at `x`, `y` (from the top-left corner)
	#
	# The argument `color` should be an array of up to 4 floats (RGBA).
	# If `color` has less than 4 items, the missing items are replaced by 1.0.
	#
	# Require: `x < width.to_i and y < height.to_i`
	fun []=(x, y: Int, color: Array[Float])
	do
		assert x < width.to_i and y < height.to_i else print_error "{class_name}::[] out of bounds"

		# Simple conversion from [0.0..1.0] to [0..255]
		var bytes = [for c in color do (c*255.0).round.to_i.clamp(0, 255).to_bytes.last]
		while bytes.length < 4 do bytes.add 255

		var offset = 4*(x + y*width.to_i)
		for i in [0..4[ do cpixels[offset+i] = bytes[i].to_b

		loaded = false
	end

	# Overwrite all pixels with `color`, return `self`
	#
	# The argument `color` should be an array of up to 4 floats (RGBA).
	# If `color` has less than 4 items, the missing items are replaced by 1.0.
	fun fill(color: Array[Float]): SELF
	do
		# Simple conversion from [0.0..1.0] to [0..255]
		var bytes = [for c in color do (c*255.0).round.to_i.clamp(0, 255).to_bytes.last]
		while bytes.length < 4 do bytes.add 255

		var i = 0
		for x in [0..width.to_i[ do
			for y in [0..height.to_i[ do
				for j in [0..4[ do cpixels[i+j] = bytes[j].to_b
				i += 4
			end
		end

		loaded = false
		return self
	end

	redef fun load(force)
	do
		force = force or else false
		if loaded and not force then return

		if force and glIsTexture(gl_texture) then
			# Was already loaded, free the previous GL name
			glDeleteTextures([gl_texture])
		end
		gl_texture = -1

		# Round down the desired dimension
		var width = width.to_i
		var height = height.to_i
		self.width = width.to_f
		self.height = height.to_f

		load_from_pixels(cpixels.native_array, width, height, gl_RGBA)

		loaded = true
	end
end

# Texture with its own pixel data
class RootTexture
	super Texture

	redef fun root do return self

	# Has this texture been loaded yet?
	var loaded = false

	redef var gl_texture = -1

	init do all_root_textures.add self

	# Should the pixels RGB values be premultiplied by their alpha value at loading?
	#
	# All gamnit textures must have premultiplied alpha, it provides a better
	# alpha blending, avoids artifacts and allows for additive blending.
	#
	# When at `true`, the default, pixels RGB values are premultiplied
	# at loading. Set to `false` if pixels RGB values are already
	# premultiplied in the source data.
	#
	# This value must be set before calling `load`.
	var premultiply_alpha = true is writable

	private fun load_from_pixels(pixels: Pointer, width, height: Int, format: GLPixelFormat)
	do
		var max_texture_size = glGetIntegerv(gl_MAX_TEXTURE_SIZE, 0)
		if width > max_texture_size then
			error = new Error("Texture width larger than gl_MAX_TEXTURE_SIZE ({max_texture_size}) in {self} at {width}")
			return
		else if height > max_texture_size then
			error = new Error("Texture height larger than gl_MAX_TEXTURE_SIZE ({max_texture_size}) in {self} at {height}")
			return
		end

		# Premultiply alpha?
		if premultiply_alpha and format == gl_RGBA then
			pixels.premultiply_alpha(width, height)
		end

		glPixelStorei(gl_UNPACK_ALIGNEMENT, 1)
		var tex = glGenTextures(1)[0]
		gl_texture = tex

		glBindTexture(gl_TEXTURE_2D, tex)
		glTexImage2D(gl_TEXTURE_2D, 0, format, width, height, 0, format, gl_UNSIGNED_BYTE, pixels)

		glHint(gl_GENERATE_MIPMAP_HINT, gl_NICEST)
		glGenerateMipmap(gl_TEXTURE_2D)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR_MIPMAP_LINEAR)

		glBindTexture(gl_TEXTURE_2D, 0)
	end

	private fun load_checker(size: Int)
	do
		var cpixels = new CByteArray(3*size*size)

		var i = 0
		for x in [0..size[ do
			var quadrant_x = if x < size/2 then 0 else 1
			for y in [0..size[ do
				var quadrant_y = if y < size/2 then 0 else 1
				var color = if quadrant_x == quadrant_y then
					[0u8, 0u8, 0u8, 255u8]
				else [255u8, 255u8, 255u8, 255u8]

				for j in [0..3[ do cpixels[i+j] = color[j]
				i += 3
			end
		end

		width = size.to_f
		height = size.to_f
		load_from_pixels(cpixels.native_array, size, size, gl_RGB)

		cpixels.destroy
	end

	# Has this resource been deleted?
	var deleted = false

	# Delete this texture and free all its resources
	#
	# Use caution with this service as the subtextures may rely on the deleted data.
	fun delete
	do
		if deleted or not loaded then return

		deleted = true
	end
end

# Texture loaded from the assets folder
class TextureAsset
	super RootTexture

	# Path to this texture within the `assets` folder
	var path: String

	redef fun load(force)
	do
		if loaded and force != true then return

		load_from_platform

		# If no pixel data was loaded, load the pixel default texture
		if gl_texture == -1 then load_checker 32

		loaded = true
	end

	# Partially load this texture from platform-specific features
	#
	# This method should fill `width`, `height` and `pixels`.
	private fun load_from_platform is abstract

	redef fun to_s do return "<{class_name} path:{path}>"
end

# Texture derived from another texture, does not own its pixels
abstract class Subtexture
	super Texture

	# Parent texture, from which this texture was created
	var parent: Texture

	redef fun root do return parent.root

	redef fun load(force) do root.load(force)
end

# Subtexture created from pixel coordinates within `parent`
class AbsoluteSubtexture
	super Subtexture

	# Left border of this texture relative to `parent`
	var left: Float

	# Top border of this texture relative to `parent`
	var top: Float

	private fun set_wh(width, height: Float)
	is autoinit do
		self.width = width
		self.height = height
	end

	redef var offset_left = parent.offset_left + left / root.width is lazy
	redef var offset_top = parent.offset_top + top / root.height is lazy
	redef var offset_right = offset_left + width / root.width is lazy
	redef var offset_bottom = offset_top + height / root.height is lazy
end

# Subtexture created from relative coordinates ([0..1]) out of the `root` texture
class RelativeSubtexture
	super Subtexture

	redef var offset_left
	redef var offset_top
	redef var offset_right
	redef var offset_bottom

	redef fun width do return root.width * (offset_right - offset_left)
	redef fun height do return root.height * (offset_bottom - offset_top)
end

redef class Sys
	# All declared root textures
	var all_root_textures = new TextureSet
end

# Group of `Texture`
class TextureSet
	super HashSet[Texture]

	# Load all texture of this set
	fun load_all do for t in self do t.load
end

redef class Pointer
	# Multiply RGB values by their alpha value
	private fun premultiply_alpha(width, height: Int) `{
		uint8_t *bytes = (uint8_t *)self;
		int x, y, i = 0;
		for(y = 0; y < height; y ++) {
			for(x = 0; x < width; x ++) {
				int a = bytes[i+3];
				bytes[i  ] = bytes[i  ] * a / 255;
				bytes[i+1] = bytes[i+1] * a / 255;
				bytes[i+2] = bytes[i+2] * a / 255;
				i += 4;
			}
		}
	`}
end
