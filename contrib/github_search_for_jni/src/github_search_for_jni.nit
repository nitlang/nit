# This file is part of NIT ( https://nitlanguage.org ).
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

# Script to scan Github for repositories possibly using JNI.
module github_search_for_jni

import github::api
import json::static

# The proprieties introduced by this redef are to be used only on a JSON object
# representing a Github repository.
redef class JsonObject
	# The repository has at least 50% Java code
	fun has_lots_of_java: Bool
	do
		var java_count = 0
		if keys.has("Java") then java_count = self["Java"].as(Int)

		if java_count == 0 then return false

		var total = 0
		for k, v in self do
			assert v isa Int
			total += v
		end

		return java_count * 100 / total > 50
	end

	# The repository has at least 100 lines of C code
	fun has_some_c: Bool
	do
		var c_count = 0
		if keys.has("C") then c_count = self["C"].as(Int)
		return c_count > 100
	end
end

# Query sent to Github
var main_query = "language:java"

# API client instance use for all requests
var api = new GithubAPI("OAUTH TOKEN (replace with your own)", "JNI project finder (nitlanguage.org)")

if "NIT_TESTING".environ == "true" then exit 0

# Current requested page
var page = 0
var per_page = 100
loop
	# Get a page of the main query
	var uri = "/search/repositories?q={main_query}&page={page}&per_page={per_page}&sort=stars"
	var obj = api.send("GET", uri).parse_json.as(JsonObject)

	# Main object has "total_count" and "items"
	var items = obj["items"].as(JsonArray)

	# "items" is an array of Json objects
	for item in items do
		assert item isa JsonObject

		# Each item has "name" and "languages_url"
		assert item.keys.has("name")
		assert item.keys.has("languages_url")

		# Download the language list
		var lang_url = item["languages_url"].as(String)
		var langs = api.send("GET", lang_url).parse_json.as(JsonObject)

		# The project is of interest if it has lots of Java and at least some C
		var may_be_of_interest = langs.has_lots_of_java and langs.has_some_c
		if may_be_of_interest then print "{item["name"].to_s}: {item["forks"].to_s}; {langs.keys.join(", ")}; {item["html_url"].to_s}"
	end

	# If we got less pages than asked for, we are done!
	if items.length < per_page then break

	page += 1
end
