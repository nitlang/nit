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

# Gamnit display implementation for iOS
module display_ios

import ios
import ios::glkit
intrude import ios::assets
intrude import textures

in "ObjC" `{
	#import <GLKit/GLKit.h>
	#import <OpenGLES/ES2/gl.h>
`}

redef class GamnitDisplay

	redef var width = 200
	redef var height = 300

	# Underlying GLKit game controller and view
	var glk_view: NitGLKView is noautoinit

	redef fun setup
	do
		var view = new GamnitGLKView
		view.multiple_touch_enabled = true
		self.glk_view = view
		self.width = view.drawable_width
		self.height = view.drawable_height
	end
end

# View controller implemented by gamnit
class GamnitGLKView
	super NitGLKView
end

redef class TextureAsset
	redef fun load_from_platform
	do
		var error = glGetError
		assert error == gl_NO_ERROR else print_error error

		# Find file
		var ns_path = ("assets"/path).to_nsstring
		var path_in_bundle = asset_path(ns_path)
		if path_in_bundle.address_is_null then
			self.error = new Error("Texture at '{path}' not found")
			return
		end

		# Load texture
		var glk_texture = glkit_load(path_in_bundle, premultiply_alpha)
		if glk_texture.address_is_null then
			self.error = new Error("Failed to load texture at '{self.path}'")
			return
		end

		gl_texture = glk_texture.name
		width = glk_texture.width.to_f
		height = glk_texture.height.to_f
		loaded = true

		error = glGetError
		assert error == gl_NO_ERROR
	end

	# Load image at `path` with GLKit services
	private fun glkit_load(path: NSString, premultiply: Bool): GLKTextureInfo
	in "ObjC" `{

		// The premultiplication flag has been inverted between iOS 9 and 10
		NSNumber *premultiply_opt;
		NSComparisonResult order = [[UIDevice currentDevice].systemVersion compare: @"10.0.0" options: NSNumericSearch];
		if (order == NSOrderedSame || order == NSOrderedDescending) {
			// >= 10
			premultiply_opt = premultiply? @NO: @YES;
		} else {
			// < 10
			premultiply_opt = premultiply? @YES: @NO;
		}

		NSDictionary *options = @{GLKTextureLoaderApplyPremultiplication: premultiply_opt};
		NSError *error;
		GLKTextureInfo *spriteTexture = [GLKTextureLoader textureWithContentsOfFile: path options: options error: &error];
		if (error != nil) NSLog(@"Failed to load texture: %@", [error localizedDescription]); // TODO return details to Nit

		return spriteTexture;
	`}
end

private extern class GLKTextureInfo in "ObjC" `{ GLKTextureInfo * `}
	super NSObject

	fun name: Int in "ObjC" `{ return self.name; `}
	fun width: Int in "ObjC" `{ return self.width; `}
	fun height: Int in "ObjC" `{ return self.height; `}
end
