# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
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

# Test for the asserts_and_resources module of App.nit framework
module test_assets_and_resources

import simple_android
import android::assets_and_resources

redef class App
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			test_assets
			test_resources
		end
		return super
	end

	# Testing the assets manager
	fun test_assets
	do
		assert asset_manager.bitmap("fighter.png").width == 32
	end

	# Testing the resources manager
	fun test_resources do
		assert resource_manager.string("string_test") == "string test"
		assert resource_manager.boolean("test_bool") == true
		assert resource_manager.dimension("test_dimen_1") == 25
		assert resource_manager.dimension("test_dimen_2") == 150
	end
end
