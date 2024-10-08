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

# Variation using features from Android API 19
#
# Add support for `TextureAsset::premultiply_alpha = false` on Android.
module android19 is
	android_api_min 19
	android_api_target 22
end

import android
intrude import display_android
intrude import gamnit_android
intrude import android::load_image

in "Java" `{
	import android.graphics.Bitmap;
	import android.graphics.BitmapFactory;
`}

redef class TextureAsset

	redef fun load_bitmap(asset_manager, path)
	do
		var stream = asset_manager.native_assets_manager.open(path.to_java_string)
		return new NativeBitmap.from_stream_ex(stream, premultiply_alpha)
	end
end

redef class NativeCByteArray

	# The data was not premultiplied, don't unmultiply it
	redef fun unmultiply(w, h) do end
end

redef class NativeBitmap

	# Load from `input_stream` with optional `premultiply_alpha`
	new from_stream_ex(input_stream: NativeInputStream, premultiply_alpha: Bool) in "Java" `{
		BitmapFactory.Options opts = new BitmapFactory.Options();
		opts.inPremultiplied = premultiply_alpha; // API 19
		return BitmapFactory.decodeStream(input_stream, null, opts);
	`}
end
