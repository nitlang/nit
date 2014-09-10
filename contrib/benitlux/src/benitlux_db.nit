# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Database interface to be used by the Web server and daily program
module benitlux_db

import sqlite3

import benitlux_model

# The database of this project
class DB
	super Sqlite3DB

	redef init open(path)
	do
		super

		create_tables
	end

	# Create all tables for this project (IF NOT EXISTS)
	fun create_tables
	do
		assert create_table("IF NOT EXISTS beers (name TEXT PRIMARY KEY, desc TEXT)") else
			print error or else "?"
		end

		assert create_table("IF NOT EXISTS daily (beer INTEGER, day DATE)") else
			print error or else "?"
		end

		assert create_table("IF NOT EXISTS subscribers (email TEXT UNIQUE PRIMARY KEY, joined DATETIME DEFAULT CURRENT_TIMESTAMP)") else
			print error or else "?"
		end
	end

	# Update the DB with a all the `beers` available today
	#
	# Delete any other previous information for today.
	fun insert_beers_of_the_day(beers: HashSet[Beer])
	do
		# Clean the DB of the previous beers of the day
		assert execute("DELETE FROM daily WHERE day == date('now')") else
			print error or else "?"
		end

		# Add beer info
		for beer in beers do
			# Add meta if not there
			assert execute("INSERT OR IGNORE INTO beers (name, desc) VALUES ({beer.name.to_sql_string}, {beer.desc.to_sql_string})") else
				print error or else "?"
			end

			# Add day
			assert execute("INSERT INTO daily (beer, day) VALUES (" +
			               "(SELECT min(ROWID) FROM beers WHERE lower(name) = lower({beer.name.to_sql_string})), " +
						   "date('now'))") else
				print error or else "?"
			end
		end
	end

	# Build and return a `BeerEvents` for today compared to the last weekday
	fun beer_events_today: BeerEvents
	do
		var tm = new Tm.localtime
		var last_weekday
		if tm.wday == 1 then
			# We're monday! we compare with the last friday
			last_weekday = "date('now', 'weekday 6', '-7 day')"
		else last_weekday = "date('now', '-1 day')"

		return beer_events_since(last_weekday).as(not null) # This is used by daily
	end

	# Build and return a `BeerEvents` for today compared to `prev_day`
	#
	# Return `null` on error
	fun beer_events_since(prev_day: String): nullable BeerEvents
	do
		var events = new BeerEvents

		# New
		var stmt = select("name, desc FROM beers WHERE " +
		                  "ROWID IN (SELECT beer FROM daily WHERE date(day) = date('now')) AND " +
		                  "NOT ROWID IN (SELECT beer FROM daily WHERE date(day) = date({prev_day}))")
		if stmt == null then return null
		for row in stmt do events.new_beers.add row.to_beer

		# Gone
		stmt = select("name, desc FROM beers WHERE " +
		                  "NOT ROWID IN (SELECT beer FROM daily WHERE date(day) = date('now')) AND " +
		                  "ROWID IN (SELECT beer FROM daily WHERE date(day) = date({prev_day}))")
		if stmt == null then return null
		for row in stmt do events.gone_beers.add row.to_beer

		# Fix
		stmt = select("name, desc FROM beers WHERE " +
		                  "ROWID IN (SELECT beer FROM daily WHERE date(day) = date('now')) AND " +
		                  "ROWID IN (SELECT beer FROM daily WHERE date(day) = date({prev_day}))")
		if stmt == null then return null
		for row in stmt do events.fix_beers.add row.to_beer

		return events
	end

	# All the subscribers to the mailing list
	fun subscribers: Array[String]
	do
		var subs = new Array[String]
		for row in select("email FROM subscribers") do subs.add row[0].to_s
		return subs
	end

	# Add `email` to the mailing list subscribers
	fun subscribe(email: String)
	do
		assert insert("OR IGNORE INTO subscribers (email) VALUES (lower({email.to_sql_string}))") else
			print error or else "?"
		end
	end

	# Remove `email` to the mailing list subscribers
	fun unsubscribe(email: String)
	do
		assert execute("DELETE FROM subscribers WHERE email = lower({email.to_sql_string})") else
			print error or else "?"
		end
	end
end

redef class StatementRow
	# Convert this BD row to a `Beer`
	fun to_beer: Beer do return new Beer(self[0].to_s, self[1].to_s)
end
