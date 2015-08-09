# This file is part of NIT ( http://www.nitlanguage.org ).
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

module moles_android

import mnit_android
import android::portrait

import moles

redef class Game
	redef fun columns do return 3
	redef fun rows do return 5
end

redef class App
	redef fun on_start
	do
		# We use as a reference the Moto X
		var tw = 720
		var th = 1184

		# Calculate the scale to fit a Moto X screen in this device screen
		var xs = display.width.to_f/tw.to_f*0.4
		var ys = display.height.to_f/th.to_f*0.4

		# Use the smaller scale so everything fits
		# FIXME replace these conditions with xs.min(ys) when Float isa Comparable
		if xs < ys then
			display_scale_container.item = xs
		else display_scale_container.item = ys

		super
	end
end

fun display_scale_container: Ref[Float] do return once new Ref[Float](0.1)
redef fun display_scale do return display_scale_container.item
redef fun display_offset_x: Int do return (300.0*display_scale).to_i
redef fun display_offset_y: Int do return (800.0*display_scale).to_i
