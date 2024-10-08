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

import opts

import benitlux_model
import benitlux_db
import correct

# Sort beers by their availability
class BeerComparator
	super Comparator

	# 1st sorting priority
	var map1: HashMap[COMPARED, Comparable]

	# 2nd sorting priority
	var map2: HashMap[COMPARED, Comparable]

	# Key compare
	redef fun compare(a, b) do return if map1[a] == map1[b] then
	                                      map2[a] <=> map2[b]
	                                  else map1[a] <=> map1[b]
end

redef class Text

	# Get the background for the date `self` of format `yyyy-mm-dd`
	private fun date_to_back: String
	do
		assert length == 10

		var m = substring(5, 2)
		var month = m.to_i
		if [4..9].has(month) then return " "
		return "-"
	end
end

var opts = new OptionContext
var opt_columns = new OptionInt("Number of columns for the graph", 70, "-c")
opts.add_option(opt_columns)

opts.parse(args)
var rest = opts.rest

# Use the local DB
var db_path = "benitlux_sherbrooke.db"
if rest.not_empty then db_path = rest.first
var db = new BenitluxDB.open(db_path)

# All known beers
var beers = db.beers
assert beers != null
print "{beers.length} known beers"

# All days
var all_days = db.days
assert all_days != null
print "{all_days.length} days, from {all_days.first} to {all_days.last}"

# Beers availability by days
var beer2days = new HashMap[Beer, Array[String]]
for beer in beers do
	var days = db.days(beer)
	assert days != null
	default_comparator.sort days
	beer2days[beer] = days
end

# Sort beers by their availability and first date of appearance
var availability = new HashMap[Beer, Int]
var appearances = new HashMap[Beer, String]
for beer in beers do
	var days = beer2days[beer]
	if days.not_empty then
		appearances[beer] = days.first
		availability[beer] = -days.length # Opposite for inverse sort
	else
		appearances[beer] = "err"
		availability[beer] = 1
	end
end

# Sort by availability then appearance
var sorter: Comparator = new BeerComparator(availability, appearances)
sorter.sort beers

# List all beers
print "\nBeers:"
for beer in beers do
	var days = beer2days[beer]

	# Skip never-available beers, usually name errors
	if days.is_empty then continue

	var from = days.first
	if from == all_days.first then from = "      ... "

	var to = days.last
	if to == all_days.last then to = " ...      "

	print "- {days.length}\t{from} {to}\t{beer.name}: {beer.desc}"
end

# Sort by appearance then availability
sorter = new BeerComparator(appearances, availability)
sorter.sort beers

# Display the batch graph
print "\nAvailability graph:"

# Compute `column_width` days from all the known days
var column_width = opt_columns.value
var days_sample = [for i in [1..column_width[ do all_days[i*all_days.length/column_width]]
var weeks_sample = new Array[Array[String]]

# Gather columns headers for each month
var headers = new Array[nullable String]
var iter = all_days.iterator
iter.start
var pre = ""
for day in days_sample do
	# Prepare headers
	var new_pre = day.substring(0, 7)

	if not day.has_prefix(pre) then
		headers.add new_pre
	else headers.add null

	pre = new_pre

	# Fill weeks
	var week = new Array[String]
	weeks_sample.add week
	while iter.is_ok do
		var item = iter.item
		if item == day then break
		week.add item
		iter.next
	end
end

# Draw the headers from top to bottom so they look like:
#
# ~~~
# 2
# 0
# 1
# 5
# -
# 0
# 1
# ~~~
for l in 7.times do
	for header in headers do
		if header != null then
			printn header[l]
		else printn " "
	end
	print ""
end

for beer in beers do
	var days = beer2days[beer]

	# Skip never-available beers, usually name errors
	if days.is_empty then continue

	# Print a line looking like: "  ############ ######    -----########- Beer"
	var last = null
	#var iter = days.iterator
	for week in weeks_sample do
		printn if days.has_all(week) then
		           "#"
		       else if days.has_any(week) then
		           ":"
		       else week.first.date_to_back
	end
	print " {beer.name}"
end

db.close
