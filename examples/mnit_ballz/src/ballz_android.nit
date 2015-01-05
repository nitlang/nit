# this file is part of NIT ( http://www.nitlanguage.org ).
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

module ballz_android is
	app_version(1, 0, git_revision)
	app_name("Ballz")
end

import android::portrait

import game_logic

redef class App

	var screen: nullable Screen

	redef fun run
	do
		sensors_support_enabled = true
		accelerometer.enabled = true
		accelerometer.event_rate = 10000
		magnetic_field.enabled = true
		gyroscope.enabled = true
		light.enabled = true
		proximity.enabled = true
		maximum_fps = 50

		super
	end

	redef fun window_created
	do
		super
		screen = new Screen(self, display.as(Display))
	end

	redef fun frame_core(display)
	do
		var screen = self.screen
		if screen != null then
			screen.game.do_turn
			screen.do_frame(display)
		end
	end

	redef fun input(ie)
	do	
		if ie isa QuitEvent then 
			quit = true
			return true
		end
		if screen != null then
			return screen.input(ie)
		end
		return false
	end
end
