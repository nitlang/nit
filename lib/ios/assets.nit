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
module assets

import cocoa
import app::assets

redef class TextAsset
	redef fun load
	do
		# Find file
		var ns_path = ("assets"/path).to_nsstring
		var path_in_bundle = asset_path(ns_path)
		if path_in_bundle.address_is_null then
			self.error = new Error("TextAsset at '{path}' not found")
			self.to_s = ""
			return ""
		end

		# Load content
		var text = asset_content(path_in_bundle)
		if text.address_is_null then
			self.error = new Error("Failed to read content of TextAsset at '{path}'")
			self.to_s = ""
			return ""
		end

		return text.to_s
	end
end

private fun asset_path(path: NSString): NSString in "ObjC" `{
	return [[NSBundle mainBundle] pathForResource:path ofType:nil];
`}

private fun asset_url(path: NSString): NSObject in "ObjC" `{
	return [[NSBundle mainBundle] URLForResource:path withExtension:nil];
`}

private fun asset_content(path: NSString): NSString in "ObjC" `{
	return [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
`}
