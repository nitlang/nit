# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Frame-rate control for applications
module mnit_fps

import mnit_app
private import realtime

redef class App
	# Limit the frame-rate to a given frequency
	# This basically limits how much `frame_core` is called per second.
	# Zero (or a negative value) means no limit.
	#
	# Applications can modify this value even during the main-loop.
	var maximum_fps writable = 60

	# Current frame-rate
	# Updated each 5 seconds.
	var current_fps = 0.0

	redef fun full_frame
	do
		super
		limit_fps
	end

	# The clock for limit_fps
	private var clock = new Clock

	# Number of frames since the last deadline
	# Used tocompute `current_fps`.
	private var frame_count = 0

	# Deadline used to compute `current_fps`
	private var frame_count_deadline = 0

	# Check and sleep to maitain a frame-rate bellow `maximum_fps`
	# Also periodically uptate `current_fps`
	# Is automatically called at the end of `full_frame`.
	fun limit_fps
	do
		var t = clock.total.sec
		if t >= frame_count_deadline then
			var cfps = frame_count_deadline.to_f / 5.0
			self.current_fps = cfps
			frame_count = 0
			frame_count_deadline = t + 5
		end
		frame_count += 1

		var mfps = maximum_fps
		if mfps <= 0 then return
		var dt = clock.lapse
		var target_dt = 1000000000 / mfps
		var sec = dt.sec
		var nanosec = dt.nanosec
		if sec == 0 and nanosec < target_dt then
			var sleep_t = target_dt - nanosec
			sys.nanosleep(0, sleep_t)
			dt = clock.lapse
		end
	end
end
