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

# Portable services to load resources from the assets folder
module assets

# Resource from the assets folder
#
# At compilation, the asset folder should be at the root of the package.
# In practice, this is usually next to the folders `src` and `bin`.
#
# These assets are packaged with the application.
abstract class Asset

	# Path to this asset within the assets folder
	var path: String
end

# Text file from the assets folder
#
# Use `to_s` to get the content of this asset.
class TextAsset
	super Asset

	# Text content of this asset
	redef var to_s = load is lazy

	# Load this asset
	fun load: String do return ""

	# Error on the last call to `load`, if any
	var error: nullable Error = null
end
