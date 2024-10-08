# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Popcorn web tracker
#
# Easy and ready to use web tracker you can apply to your popcorn application.
#
# The only thing you have to do is to use the tracker in your app routes:

# ~~~nitish
# var config = new AppConfig
# var app = new App
# app.use("/", new HomeHandler)
# app.use("/products", new ProductsHandler)
# app.use("customers/", new CustomersHandler)
#
# app.use_after("/*", new PopTracker(config)) # tracker listens to /*
# ~~~
#
# You can also use multiple tracker at once on different route.
# All the data will be aggregated for you.

# ~~~nitish
# app.use_after("/api/*", new PopTracker(config))
# app.use_after("/admin/*", new PopTracker(config))
# ~~~
#
# To retrieve your tracker data use the `PopTrackerAPI` which serves the tracker
# data in JSON format.
#
# ~~~nitish
# app.use("/api/tracker_data", new PopTrackerAPI(config))
# ~~~
module pop_tracker

import popcorn
import popcorn::pop_config
import popcorn::pop_json
import popcorn::pop_repos

redef class AppConfig

	# Logs collection
	var tracker_logs = new TrackerRepo(db.collection("tracker_logs"))

	# Tracker handler
	var tracker = new PopTracker(self)
end

# JSON API of the PopTracker
#
# Serves the collected data in JSON format.
class PopTrackerAPI
	super Router

	# Config used to access tracker db
	var config: AppConfig

	init do
		use("/entries", new PopTrackerEntries(config))
		use("/queries", new PopTrackerQueries(config))
		use("/browsers", new PopTrackerBrowsers(config))
		use("/times", new PopTrackerResponseTime(config))
	end
end

# Base tracker handler
abstract class TrackerHandler
	super Handler

	# Config used to access tracker db
	var config: AppConfig

	# Get the `limit` GET argument from `req`
	#
	# Return `10` by default.
	fun limit(req: HttpRequest): Int do return req.int_arg("limit") or else 10
end

# Saves logs into a MongoDB collection
class PopTracker
	super TrackerHandler

	redef fun all(req, res) do
		config.tracker_logs.save new LogEntry(req, res)
	end
end

# List all tracker log entries
class PopTrackerEntries
	super TrackerHandler

	redef fun get(req, res) do
		res.json new JsonArray.from(config.tracker_logs.find_all)
	end
end

# Group and count entries by query string
class PopTrackerQueries
	super TrackerHandler

	redef fun get(req, res) do
		var pipe = new MongoPipeline
		pipe.group((new MongoGroup("$request.uri")).
			sum("visits", 1).
			avg("response_time", "$response_time").
			addToSet("uniq", "$session"))
		pipe.sort((new MongoMatch).eq("visits", -1))
		pipe.limit(limit(req))
		res.json new JsonArray.from(config.tracker_logs.collection.aggregate(pipe))
	end
end

# Group and count entries by browser
class PopTrackerBrowsers
	super TrackerHandler

	# MongoMatch query used for each browser key
	#
	# Because parsing user agent string is a pain in the nit, we go lazy on this
	# one. We associate each broswer key like `Chromium` to the query that allows
	# us to count the number of visits.
	var browser_queries: HashMap[String, MongoMatch] do
		var map = new HashMap[String, MongoMatch]
		map["Chromium"] = (new MongoMatch).regex("user_agent", "Chromium")
		map["Edge"] = (new MongoMatch).regex("user_agent", "Edge")
		map["Firefox"] = (new MongoMatch).regex("user_agent", "Firefox")
		map["IE"] = (new MongoMatch).regex("user_agent", "(MSIE)|(Trident)")
		map["Netscape"] = (new MongoMatch).regex("user_agent", "Netscape")
		map["Opera"] = (new MongoMatch).regex("user_agent", "Opera")
		map["Safari"] = (new MongoMatch).land(null, [
				(new MongoMatch).regex("user_agent", "Safari"),
				(new MongoMatch).regex("user_agent", "^((?!Chrome).)*$")])
		map["Chrome"] = (new MongoMatch).land(null, [
				(new MongoMatch).regex("user_agent", "Chrome"),
				(new MongoMatch).regex("user_agent", "^((?!Edge).)*$")])

		return map
	end

	# Apply the `query` on `TrackerRepo::count`
	fun browser_count(query: MongoMatch): Int do return config.tracker_logs.count(query)

	redef fun get(req, res) do
		var browsers = new Array[BrowserCount]
		for browser, query in self.browser_queries do
			var count = new BrowserCount(browser, browser_count(query))
			if count.count > 0 then browsers.add count
		end
		var sum = 0
		for browser in browsers do sum += browser.count
		var other = config.tracker_logs.count - sum
		if other > 0 then browsers.add new BrowserCount("Other", other)
		default_comparator.sort(browsers)
		res.json new JsonArray.from(browsers)
	end
end

# Associate each browser to its count.
#
# Only used to serialize the results.
private class BrowserCount
	super Comparable
	super RepoObject
	serialize

	redef type OTHER: SELF

	var browser: String
	var count: Int

	redef fun <=>(o) do return o.count <=> count
end

# Return last month response time
class PopTrackerResponseTime
	super TrackerHandler

	redef fun get(req, res) do
		var limit = get_time - (3600 * 24 * 30)
		var pipe = new MongoPipeline
		pipe.match((new MongoMatch).gte("timestamp", limit))
		pipe.group((new MongoGroup("$timestamp")).
			sum("visits", 1).
			avg("response_time", "$response_time"))
		pipe.sort((new MongoMatch).eq("_id", -1))
		res.json new JsonArray.from(config.tracker_logs.collection.aggregate(pipe))
	end
end

# A tracker log entry used to store HTTP requests and their given HTTP responses
class LogEntry
	super RepoObject
	serialize

	# HTTP request that triggered that log entry
	var request: HttpRequest

	# HTTP response returned by the serveur
	var response: HttpResponse

	# Request user-agent shortcut (easier for db requests
	var user_agent: nullable String is lazy do return request.header["User-Agent"]

	# Processing time in miliseconds (or null if no clock was found in request)
	var response_time: nullable Int is lazy do
		var clock = request.clock
		if clock == null then return null
		return (clock.total * 1000.0).to_i
	end

	# Log entry timestamp
	var timestamp: Int = get_time

	# Session ID associated to this entry
	var session: nullable String is lazy do
		var session = request.session
		if session == null then return null
		return session.id_hash
	end
end

# Repository to store track logs.
class TrackerRepo
	super MongoRepository[LogEntry]
end
