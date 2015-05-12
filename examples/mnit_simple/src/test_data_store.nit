# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Test for the shared_preferences module of App.nit framework
module test_data_store

import simple
import app::data_store

redef class App
	redef fun on_create
	do
		super

		# load colors from data store
		var r = data_store["r"]
		if r isa Float then
			self.r = r
			print "r {r}"
		else assert r == null

		var g = data_store["g"]
		if g isa Float then
			self.g = g
			print "g {g}"
		else assert g == null
	end

	redef fun input(ie)
	do
		if ie isa PointerEvent then
			# save color for next execution
			data_store["r"] = r
			data_store["g"] = g
		end

		return super
	end
end
