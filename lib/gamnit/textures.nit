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
# for the method `on_create` to load them.
#
# ~~~
# import gamnit::flat
#
# redef class App
#     # Create the texture object, it will be loaded automatically
#     var texture = new Texture("path/in/assets.png")
#
#     redef fun on_create()
#     do
#         # Let `on_create` load the texture
#         super
#
#         # Use the texture
#         var sprite = new Sprite(texture, new Point3d[Float](0.0, 0.0, 0.0))
#         app.sprites.add sprite
#     end
# end
# ~~~
#
# Otherwise, they can be loaded and error checked explicitly after `on_create`.
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
		# Setup the subtexture
		var subtex = new Subtexture(root, self, left.to_f, top.to_f, width.to_f, height.to_f)
		return subtex
	end

	# Offset of the left border on `root` from 0.0 to 1.0
	fun offset_left: Float do return 0.0

	# Offset of the top border on `root` from 0.0 to 1.0
	fun offset_top: Float do return 0.0

	# Offset of the right border on `root` from 0.0 to 1.0
	fun offset_right: Float do return 1.0

	# Offset of the bottom border on `root` from 0.0 to 1.0
	fun offset_bottom: Float do return 1.0
end

# Colorful small texture of 2x2 pixels
class CheckerTexture
	super RootTexture

	redef fun load(force)
	do
		var pixels = [0xFFu8, 0x00u8, 0x00u8,
		              0x00u8, 0xFFu8, 0x00u8,
		              0x00u8, 0x00u8, 0xFFu8,
		              0xFFu8, 0xFFu8, 0xFFu8]

		var cpixels = new CByteArray.from(pixels)

		width = 2.0
		height = 2.0
		load_from_pixels(cpixels.native_array, 2, 2, gl_RGB)

		cpixels.destroy
	end
end

# Texture with its own pixels
class RootTexture
	super Texture

	redef fun root do return self

	# Has this texture been loaded yet?
	var loaded = false

	redef var gl_texture = -1

	init do all_root_textures.add self

	private fun load_from_pixels(pixels: Pointer, width, height: Int, format: GLPixelFormat)
	do
		var max_texture_size = glGetIntegerv(gl_MAX_TEXTURE_SIZE, 0)
		if width > max_texture_size or height > max_texture_size then
			error = new Error("Texture {self} width or height is over the GL_MAX_TEXTURE_SIZE of {max_texture_size}")
			return
		end

		glPixelStorei(gl_UNPACK_ALIGNEMENT, 1)
		var tex = glGenTextures(1)[0]
		gl_texture = tex

		glBindTexture(gl_TEXTURE_2D, tex)
		glTexImage2D(gl_TEXTURE_2D, 0, format, width, height, 0, format, gl_UNSIGNED_BYTE, pixels)

		glHint(gl_GENERATE_MIPMAP_HINT, gl_NICEST)
		glGenerateMipmap(gl_TEXTURE_2D)
	end

	# Set whether this texture should be pixelated when drawn, otherwise it is interpolated
	fun pixelated=(pixelated: Bool)
	do
		# TODO this service could be made available in `Texture` when using
		# the kind of texture wrapper of gles v2 or maybe 3

		glBindTexture(gl_TEXTURE_2D, gl_texture)

		var param = if pixelated then gl_NEAREST else gl_LINEAR
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, param)
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

		loaded = true
	end

	# Partially load this texture from platform-specific features
	#
	# This method should fill `width`, `height` and `pixels`.
	private fun load_from_platform is abstract

	redef fun to_s do return "<{class_name} path:{path}>"
end

# Texture derived from another texture, does not own its pixels
class Subtexture
	super Texture

	redef var root

	# Parent texture, from which this texture was created
	var parent: Texture

	# Left border of this texture compared to `parent`
	var left: Float

	# Top border of this texture compared to `parent`
	var top: Float

	private fun set_wh(width, height: Float)
	is autoinit do
		self.width = width
		self.height = height
	end

	redef fun load(force) do root.load(force)

	redef var offset_left = parent.offset_left + left / root.width is lazy
	redef var offset_top = parent.offset_top + top / root.height is lazy
	redef var offset_right = offset_left + width / root.width is lazy
	redef var offset_bottom = offset_top + height / root.height is lazy
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
