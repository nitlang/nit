# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

import drawing

redef class App

	var img_set: DrawingImages

	init do super

	redef fun on_create
	do
		super

		img_set = new DrawingImages
		img_set.load_all(self)
	end

	redef fun frame_core( display )
	do
		display.clear(0.2, 0.2, 0.2)

		display.blit(img_set.square, 0, 0 )
		display.blit(img_set.circle, 100, 100 )
		display.blit(img_set.circles[0], 0, 100 )
		display.blit(img_set.circles[1], 0, 200 )
		display.blit(img_set.circles[2], 0, 300 )
	end

	redef fun input( ie )
	do
		if ie isa QuitEvent then
			quit = true
			return true
		end

		return false
	end
end
