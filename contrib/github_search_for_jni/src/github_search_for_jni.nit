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

# Script to scan Github for repositories possibly using JNI.
module github_search_for_jni

import curl
import simple_json_reader

# The proprieties introduced by this redef are to be used only on HashMap
# representing a Github repository.
#
# REQUIRE `assert self isa HashMap[String, nullable Object]`
# REQUIRE `for v in self.values do assert v isa Int
redef class HashMap[K, V]
	# The repository has at least 50% Java code
	fun has_lots_of_java: Bool
	do
		var java_count = 0
		if keys.has("Java") then java_count = self["Java"].as(Int)

		if java_count == 0 then return false

		var total = 0
		for k, v in self do
			assert k isa String
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

redef class Curl
	# Headers to use on all requests
	var header: HeaderMap

	# OAuth token
	fun auth: String do return "OAUTH TOKEN (replace with your own)"

	# User agent (is used by github to contact devs in case of problems)
	var user_agent = "JNI project finder (nitlanguage.org)"

	redef init
	do
		super

		header = new HeaderMap
		header["Authorization"] = "token {auth}"
	end

	# Get the requested URI, and check the HTTP response. Then convert to JSON
	# and check for Github errors.
	fun get_and_check(uri: String): HashMap[String, nullable Object]
	do
		var request = new CurlHTTPRequest(uri, self)
		request.user_agent = user_agent
		request.headers = header
		var response = request.execute

		if response isa CurlResponseSuccess then
			var obj = response.body_str.json_to_nit_object
			assert obj isa HashMap[String, nullable Object]

			if obj.keys.has("message") then
				print "Message from Github API: {obj["message"]}"
				print "Requested URI: {uri}"
				abort
			end

			return obj
		else if response isa CurlResponseFailed then
			print "Request to Github API failed"
			print "Requested URI: {uri}"
			print "Error code: {response.error_code}"
			print "Error msg: {response.error_msg}"
			abort
		else abort
	end
end

# Query sent to Github
var main_query = "language:java"

# Curl instance use for all requests
var curl = new Curl

if "NIT_TESTING".environ == "true" then exit 0

# Current requested page
var page = 0
var per_page = 100
loop
	# Get a page of the main query
	var uri = "https://api.github.com/search/repositories?q={main_query}&page={page}&per_page={per_page}&sort=stars"
	var obj = curl.get_and_check(uri)

	# Main object has "total_count" and "items"
	var items = obj["items"].as(Array[nullable Object])

	# "items" is an array of Json objects
	for item in items do
		assert item isa HashMap[String, nullable Object]

		# Each item has "name" and "languages_url"
		assert item.keys.has("name")
		assert item.keys.has("languages_url")

		# Download the language list
		var lang_url = item["languages_url"].as(String)
		var langs = curl.get_and_check(lang_url)

		# The project is of interest if it has lots of Java and at least some C
		var may_be_of_interest = langs.has_lots_of_java and langs.has_some_c
		if may_be_of_interest then print "{item["name"]}: {item["forks"]}; {langs.keys.join(", ")}; {item["html_url"]}"
	end

	# If we got less pages than asked for, we are done!
	if items.length < per_page then break

	page += 1
end
