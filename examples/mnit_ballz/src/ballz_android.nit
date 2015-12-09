# this file is part of NIT ( http://www.nitlanguage.org ).
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


# Android part of mnit_ballz
module ballz_android is
	app_version(0, 2, git_revision)
	app_name("Ballz")
	app_namespace "org.nitlanguage.ballz"
	android_api_target 19
end

import android::portrait
import android::sensors
import display
import mnit::android

redef class App

	# The game
	var game: nullable Game is noautoinit

	redef fun run do
		accelerometer.enabled = true
		accelerometer.event_rate = 10000
		magnetic_field.enabled = true
		gyroscope.enabled = true
		light.enabled = true
		proximity.enabled = true
		maximum_fps = 50.0
		sensors_support_enabled = true
		super
	end

	redef fun on_create
	do
		super
		game = new Game(display.width.to_f, display.height.to_f)
	end

	redef fun frame_core(display)
	do
		var game = game
		if game != null then
			game.do_turn
			game.draw(display, assets)
		end
	end

	redef fun input(ie)
	do
		if paused then return false
		if ie isa QuitEvent then
			quit = true
			return true
		end
		var game = game
		if game != null then
			return game.input(ie)
		end
		return false
	end
end

redef class Ball

	redef fun intercepts(event)
	do
		if event isa ASensorAccelerometer then
			acceleration(event.x, event.y)
		else if event isa ASensorMagneticField then
			#deal with Magnetic field sensor
			#print "ASensorMagneticField : x = " + event.x.to_s + " y = " + event.y.to_s + " z = " + event.z.to_s
		else if event isa ASensorGyroscope then
			#deal with Gyroscope sensor
			#print "ASensorGyroscope : x = " + event.x.to_s + " y = " + event.y.to_s + " z = " + event.z.to_s
		else if event isa ASensorLight then
			#deal with light sensor
			#print "ASensorLight : light = " + event.light.to_s
		else if event isa ASensorProximity then
			#deal with proximity sensor
			#print "ASensorProximity : distance = " + event.distance.to_s
		else if event isa MotionEvent then
		end
		return true
	end
end


redef class Game

	redef fun input(ie)
	do
		if ie isa ASensorAccelerometer or ie isa MotionEvent then
			ball.intercepts(ie)
			return true
		end
		return false
	end
end
