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

# Implementation of `app::assets`
#
# This module is a client of `assets_and_resources` as the latter
# covers the services of Android.
module assets

intrude import assets_and_resources

redef class TextAsset
	redef fun load
	do
		jni_env.push_local_frame 8

		var manager = app.asset_manager
		var stream = manager.open(path)
		if stream.is_java_null then
			self.error = new Error("Failed to open asset at '{path}'")
			jni_env.pop_local_frame
			self.to_s = ""
			return ""
		end

		var text = stream.read_all
		stream.close
		if text.is_java_null then
			self.error = new Error("Failed to read content of asset file at '{path}'")
			jni_env.pop_local_frame
			self.to_s = ""
			return ""
		end

		var content = text.to_s
		jni_env.pop_local_frame
		self.to_s = content
		return content
	end
end

redef class NativeInputStream

	# Read and return all the content of this stream
	private fun read_all: JavaString in "Java" `{
		// `available` returns the n of bytes currently available, not the total.
		// This may cause problems in the future with large asset files.
		try {
			int size = self.available();
			byte[] bytes = new byte[size];
			self.read(bytes, 0, size);

			return new String(bytes);
		} catch (java.lang.Exception exception) {
			exception.printStackTrace();
			return null;
		}
	`}
end
