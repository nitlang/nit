# This file is part of NIT (https://nitlanguage.org).
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
# assert sys.perfs["sleep 1ms"].avg.is_approx(0.001, 0.001)
# assert sys.perfs["sleep 5ms"].avg.is_approx(0.005, 0.005)
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

	# Number of digits to the right of the decimal points in reports created by `to_s`
	#
	# Defaults to 4.
	var precision = 4 is writable

	redef fun to_s
	do
		var prec = precision

		var table = new Map[String, Array[String]]
		for event, stats in self do
			table[event] = [event,
				stats.min.to_precision(prec),
				stats.max.to_precision(prec),
				stats.avg.to_precision(prec),
				stats.sum.to_precision(prec),
				stats.count.to_s]
		end

		var widths = [0] * 6
		for event, row in table do
			for i in row.length.times do
				widths[i] = widths[i].max(row[i].length)
			end
		end

		var s = "# {"Event".justify(widths[0], 0.0)} {"min".justify(widths[1], 0.5)} {"max".justify(widths[2], 0.5)} {"avg".justify(widths[3], 0.5)} {"sum".justify(widths[4], 0.5)} {"count".justify(widths[5], 0.5)}\n"

		var sorted_events = table.keys.to_a
		alpha_comparator.sort sorted_events
		for event in sorted_events do
			var row = table[event]
			s += "*"
			for c in row.length.times do
				var cell = row[c]
				s += " "
				if c == 0 then
					s += cell.justify(widths[c], 0.0, '.')
				else s += cell.justify(widths[c], 1.0)
			end
			s += "\n"
		end
		return s
	end
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

	# Total execution time of this event
	var sum = 0.0

	# Register a new event execution time in seconds
	fun add(time: Float)
	do
		if time.to_f < min.to_f or count == 0 then min = time
		if time.to_f > max.to_f then max = time

		sum += time
		count += 1
		avg = sum / count.to_f
	end

	redef fun to_s do return "min {min}, max {max}, avg {avg}, sum {sum}, count {count}"
end
