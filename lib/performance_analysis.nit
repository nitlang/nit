# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Services to gather information on the performance of events by categories
#
# Provides `PerfMap` to manage all the categories and
# `PerfEntry` for per-category statistics.
#
# ~~~
# for i in 100.times do
#     var clock = new Clock
#
#     # Do some "work" here
#     nanosleep(0, 1000000)
#
#     # Register the perf
#     sys.perfs["sleep 1ms"].add clock.lapse
#
#     # Do some other "work" here
#     nanosleep(0, 5000000)
#
#     # Register the perf
#     sys.perfs["sleep 5ms"].add clock.lapse
# end
#
# assert sys.perfs["sleep 1ms"].count == 100
# assert sys.perfs["sleep 1ms"].avg.is_approx(0.001, 0.0001)
# assert sys.perfs["sleep 5ms"].avg.is_approx(0.005, 0.0005)
# ~~~
module performance_analysis

import realtime

redef class Sys
	# Main `PerfMap` available by default
	var perfs = new PerfMap
end

# Collection of statistics on many events
class PerfMap
	super HashMap[String, PerfEntry]

	redef fun provide_default_value(key)
	do
		if not key isa String then return super

		var ts = new PerfEntry(key)
		self[key] = ts
		return ts
	end

	redef fun to_s do return "* " + join(": ", "\n* ")
end

# Statistics on wall clock execution time of a category of events by `name`
class PerfEntry

	# Name of the category
	var name: String

	# Shortest execution time of registered events
	var min = 0.0

	# Longest execution time of registered events
	var max = 0.0

	# Average execution time of registered events
	var avg = 0.0

	# Number of registered events
	var count = 0

	# Register a new event execution time with a `Timespec`
	fun add(lapse: Timespec) do add_float lapse.to_f

	# Register a new event execution time in seconds using a `Float`
	fun add_float(time: Float)
	do
		if time.to_f < min.to_f or count == 0 then min = time
		if time.to_f > max.to_f then max = time

		avg = (avg * count.to_f + time) / (count+1).to_f
		count += 1
	end

	redef fun to_s do return "min {min}, max {max}, avg {avg}, count {count}"
end
