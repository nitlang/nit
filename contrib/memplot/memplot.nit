# This file is part of NIT ( https://nitlanguage.org ).
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

# Program to transform `memory.log` files produced by `nitc --trace-memory` into a csv file
module memplot

import counter
import template

# An aggregated time-slice
class Aggreg
	# The start time of the slice
	var time: Float

	# Number of allocations
	var acpt = new Counter[String]

	# Number of allocated bytes
	var asiz = new Counter[String]

	# Number of deallocations
	var dcpt = new Counter[String]

	# Number of deallocated bytes
	var dsiz = new Counter[String]

	# Total number of allocations since the beginning
	var cpttot = new Counter[String]

	# Total number of allocated bytes since the beginning
	var siztot = new Counter[String]

	# Map of all the various counters.
	var fields = new Map[String, Counter[String]]

	init do
		fields["acpt"] = acpt
		fields["asiz"] = asiz
		fields["dcpt"] = dcpt
		fields["dsiz"] = dsiz
		fields["cpttot"] = cpttot
		fields["siztot"] = siztot
	end
end

# Main class that does the job
class MemProg
	# The `memory.log` file.
	var filepath: String

	# The delay of an aggregation
	var time_slice: Float

	# Total number of events
	var events = 0

	# List a all time aggregations
	var aggregs = new Array[Aggreg]

	# Total number of allocations
	var cpttot = new Counter[String]

	# Total number of allocated bytes
	var siztot = new Counter[String]

	# Parse the log file `filepath` and fill `aggregs`.
	fun parse do
		# Current lines (not yet put in an aggreg)
		var lines = new Counter[String]

		var time = 0.0
		var dt = 100.0
		dt = 100.0
		for l in "memory.log".to_path.each_line do
			if l[0] == '#' then
				var t = l.substring_from(2).to_f

				while t > time + dt do
					aggreg(lines, time)
					time += dt
				end
				#if time > 1000.0 then break
				continue
			end
			events += 1
			lines.inc(l)
		end
		aggreg(lines, time)
	end

	# Create and register a new aggregation
	fun aggreg(lines: Counter[String], t1: Float) do
		var aggreg = new Aggreg(t1)
		aggregs.add aggreg
		print "events:{events} aggregs:{aggregs.length} {t1}ms"

		# Process each distinct line
		for l, v in lines do
			var a = l.split('\t')
			if a.length != 3 then
				print "Error {a.length}. {l}"
				continue
			end
			var c = a[0]
			var s = a[1].to_i
			var e = a[2]
			if c == "+" then
				aggreg.acpt[e] += v
				aggreg.asiz[e] += v * s
			else if c == "-" then
				aggreg.dcpt[e] += v
				aggreg.dsiz[e] += v * s
			else abort
		end
		lines.clear

		# Sum all information
		for e, v in aggreg.acpt do cpttot[e] += v
		for e, v in aggreg.asiz do siztot[e] += v
		for e, v in aggreg.dcpt do cpttot[e] -= v
		for e, v in aggreg.dsiz do siztot[e] -= v

		# Copy current total
		aggreg.cpttot.add_all cpttot
		aggreg.siztot.add_all siztot

		cpttot.print_elements(2)
	end

	# Generate a *long* CVS file, to use with statistical tools
	fun tolong: Writable
	do
		var res = new Template

		# Write the header
		res.add "time, class"
		for f, c in aggregs.first.fields do
			res.add ", "
			res.add f
		end
		res.add "\n"

		# Collect the largest tags, add add an `other` tag.
		var elts = siztot.sort.reversed.sub(0,10).reversed
		elts.add "other"

		for a in aggregs do
			var t = a.time.to_s

			# For each field compute the value of `other`
			for f, c in a.fields do
				var o = c.sum
				for e in elts do
					if e == "other" then continue
					o -= c[e]
				end
				c["other"] = o
			end

			# For each tag (incl. other) produce a line
			for e in elts do
				res.add t
				res.add ", "
				res.add e

				for f, v in a.fields do
					res.add ", "
					res.add v[e].to_s
				end
				res.add "\n"
			end
		end
		return res
	end
end

var m = new MemProg("memory.log", 100.0)
m.parse

m.cpttot.print_summary
m.siztot.print_summary

m.tolong.write_to_file "memory.csv"

if "memplot.r".file_exists then
	system("r memplot.r")
end
