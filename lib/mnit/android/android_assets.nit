# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Implements the `mnit::assets` services with a wraper around the filesystem
# API provided by the Android ndk.
#
# This module relies heavily on 3 C libraries:
# * The Android ndk
# * zlib (which is included in the Android ndk)
# * libpng which must be provided by the Nit compilation framework
module android_assets

import mnit
import android_app
intrude import android::assets_and_resources
intrude import android::load_image

extern class AndroidAsset in "C" `{struct AAsset*`}

	fun read(count: Int): nullable String import String.as nullable, NativeString.to_s `{
		char *buffer = malloc(sizeof(char) * (count+1));
		int read = AAsset_read(self, buffer, count);
		if (read != count)
			return null_String();
		else
		{
			buffer[count] = '\0';
			return String_as_nullable(NativeString_to_s(buffer));
		}
	`}

	fun length: Int `{
		return AAsset_getLength(self);
	`}

	fun to_fd: Int `{
		off_t start;
		off_t length;
		int fd = AAsset_openFileDescriptor(self, &start, &length);
		return fd;
	`}

	fun close `{
		AAsset_close(self);
	`}
end

redef class App
	redef fun try_loading_asset(path)
	do
		# Load images with the Java API
		var ext = path.file_extension
		if ext == "png" or ext == "jpg" or ext == "jpeg" then
			jni_env.push_local_frame 4

			var bmp = asset_manager.bitmap(path)
			var buf = bmp.copy_pixels(true)
			var w2 = bmp.width.next_pow(2)
			var h2 = bmp.height.next_pow(2)
			var png = new Opengles1Image.from_data(buf.native_array, bmp.width, bmp.height, w2, h2, true)

			buf.destroy
			jni_env.pop_local_frame
			return png
		end

		var a = load_asset_from_apk(path)
		if a != null then
			if ext == "txt" then
				var len = a.length
				var txt = a.read(len)
				return txt
			end
		else
			print "didn't get asset {path}"
		end

		return null
	end

	protected fun load_asset_from_apk(path: String): nullable AndroidAsset import String.to_cstring, AndroidAsset.as nullable, native_app_glue  `{
		struct android_app *native_app_glue = App_native_app_glue(self);
		struct AAsset* a = AAssetManager_open(native_app_glue->activity->assetManager, String_to_cstring(path), AASSET_MODE_BUFFER);
		if (a == NULL)
		{
			LOGW("nit d g a");
			return null_AndroidAsset();
		}
		else
		{
			return AndroidAsset_as_nullable(a);
		}
	`}
end

redef class Opengles1Image
	private new from_data(pixels: Pointer, width, height, width_pow2, height_pow2: Int, has_alpha: Bool) `{
		return mnit_opengles_load_image((const uint_least32_t *)pixels,
			width, height, width_pow2, height_pow2, has_alpha);
	`}
end
