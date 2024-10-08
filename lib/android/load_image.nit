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

# Low-level services to load pixel data from the assets
module load_image

intrude import android::assets_and_resources
import c

redef class CByteArray
	# Get a `Java_nio_ByteBuffer` wrapping `native_array`
	fun to_java_nio_buffer: Java_nio_ByteBuffer
	do
		return jni_env.new_direct_byte_buffer(native_array, length)
	end
end

redef extern class NativeBitmap

	# Copy the pixel data into a new `CByteArray`
	#
	# If `pad_to_pow2` the new buffer contains artificial pixels used to make
	# the width and the height powers of 2 for compatibility with older OpenGL.
	#
	# If `unmultiply`, extra work is done to revert the multiplication of color
	# values per the alpha channel applied by the Android system.
	fun copy_pixels(pad_to_pow2, unmultiply: nullable Bool): CByteArray
	do
		var height = height
		var row_bytes = row_bytes
		var bytes = row_bytes * height

		var w2 = width.next_pow(2)
		var h2 = height.next_pow(2)
		var row_bytes2 = row_bytes * w2 / width

		var capacity = bytes
		if pad_to_pow2 == true then capacity = row_bytes2 * h2

		var buf = new CByteArray(capacity)
		var java_buf = buf.to_java_nio_buffer
		copy_pixels_to_buffer java_buf

		if has_alpha and unmultiply == true then buf.native_array.unmultiply(width, height)

		if pad_to_pow2 == true then
			for r in [height-1..0[.step(-1) do
				var src_offset = row_bytes*r
				var dst_offset = row_bytes2*r
				buf.move(dst_offset, src_offset, row_bytes)
			end
		end

		return buf
	end

	# Copy raw pixel data to `buffer`
	#
	# Wraps Java: `void android.graphics.Bitmap.copyPixelsToBuffer(java.nio.Buffer)`
	fun copy_pixels_to_buffer(buffer: Java_nio_Buffer) in "Java" `{
		self.copyPixelsToBuffer(buffer);
	`}
end

redef universal Int
	# The first power of `exp` greater or equal to `self`
	private fun next_pow(exp: Int): Int
	do
		var p = 1
		while p < self do p = p*exp
		return p
	end
end

redef class NativeCByteArray
	# Reverse Android multiplication of color values per the alpha channel
	private fun unmultiply(w, h: Int) `{
		int offset = 0;
		int x, y;
		for (x = 0; x < w; x ++)
			for (y = 0; y < h; y ++) {
				unsigned char a = self[offset+3];
				if (a != 0 && a != 0xFF) {
					self[offset] = self[offset] * 256 / a;
					self[offset+1] = self[offset+1] * 256 / a;
					self[offset+2] = self[offset+2] * 256 / a;
				}
				offset += 4;
			}
	`}
end
