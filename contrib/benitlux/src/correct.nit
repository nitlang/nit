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

# Correct errors in beer names before using data from the DB
#
# Reads corrections from the file at `DB::corrections_path` which must be formatted like so:
#
# ~~~raw
# Wrong name -> Correct name
# Name with typo -> Clean name
# ~~~
module correct

import benitlux_db

redef class BenitluxDB
	# Path to file with the corrections
	private var corrections_path = "benitlux_corrections.txt"

	# Corrections of beer name: wrong name to corrected name
	private var corrections: Map[String, String] is lazy do
		var map = new HashMap[String, String]

		# Read from file
		if corrections_path.file_exists then
			var lines = corrections_path.to_path.read_lines
			for line in lines do
				var parts = line.split("->")
				assert parts.length == 2 else print_error "Error: wrong format in '{corrections_path}'"
				map[parts[0].trim] = parts[1].trim
			end
		end

		return map
	end

	redef fun beers
	do
		var beers = super
		if beers == null then return null

		# Skip corrected beers
		for beer in beers.reverse_iterator do
			if corrections.keys.has(beer.name) then
				beers.remove beer
			end
		end

		return beers
	end

	redef fun days(beer)
	do
		var days = super(beer)
		if beer == null or days == null then return days

		# Merge days of `corrections` to `beer`
		for from, to in corrections do
			if to == beer.name then
				var missing_days = super(new Beer(0, from, ""))
				if missing_days != null then days.add_all missing_days
			end
		end

		return days
	end
end
