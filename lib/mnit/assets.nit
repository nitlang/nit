# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Manages all assets usable by an Mnit app
module assets

import mnit_app
import mnit_display

# General asset
interface Asset
end

# An String is an asset, returned from a text file
redef class String
	super Asset
end

# An Image is an asset
redef interface Image
	super Asset
end

redef class App
	# Load a genereal asset from file name
	# Will find the file within the assets/ directory
	# Crashes if file not found
	fun load_asset( id: String ): Asset
	do
		var asset = try_loading_asset( id )
		if asset == null then # error
			print_error "asset <{id}> could not be loaded."
			abort
		else
			return asset
		end
	end

	# Load an Image assets
	# Crashes if file not found or not an image
	fun load_image( id: String ): Image
	do
		var asset = load_asset( id )
		if asset isa Image then
			return asset
		else
			print_error "asset <{id}> is not an image."
			abort
		end
	end

	# Load an assets without error if not found
	fun try_loading_asset( id: String ): nullable Asset is abstract
end
