# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Matthieu Lucas <lucasmatthieu@gmail.com>
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

# Example use of the Curl module
module curl_http is example

import curl

# Custom delegate to receive callbacks from a Curl transfer
class MyHttpFetcher
	super CurlCallbacks

	# Body of the downloaded file
	var fetched_body = ""

	redef fun header_callback(line) do
		# We keep this callback silent for testing purposes
		#if not line.has_prefix("Date:") then print "Header_callback: {line}"
	end

	redef fun body_callback(line) do self.fetched_body += line

	redef fun stream_callback(buffer) do print "Stream_callback: {buffer}"
end

private fun print_usage do print "Usage: curl_http [POST|GET|GET_FILE] url"

if args.length < 2 then
	print_usage
	exit 1
end

var url = args[1]
var request = new CurlHTTPRequest(url)
request.verbose = false # Set to `true` to debug

if args[0] == "GET" then
	# HTTP Get Request
	var response = request.execute

	if response isa CurlResponseSuccess then
		print "Status code: {response.status_code}"
		print "Body: {response.body_str}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else if args[0] == "POST" then
	# HTTP Post Request
	var my_http_fetcher = new MyHttpFetcher
	request.delegate = my_http_fetcher

	var post_data = new HeaderMap
	post_data["Bugs Bunny"] = "Daffy Duck"
	post_data["Batman"] = "Robin likes special characters @#ùà!è§'(\"é&://,;<>∞~*"
	post_data["Batman"] = "Yes you can set multiple identical keys, but APACHE will consider only one, the last one"
	request.data = post_data
	var response = request.execute

	print "Our body from the callback: {my_http_fetcher.fetched_body}"

	if response isa CurlResponseSuccess then
		print "*** Answer ***"
		print "Status code: {response.status_code}"
		print "Body should be empty, because we decided to manage callbacks: {response.body_str.length}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else if args[0] == "GET_FILE" then
	# HTTP Get to file Request
	var headers = new HeaderMap
	headers["Accept"] = "Moo"
	request.headers = headers
	var response = request.download_to_file(null)

	if response isa CurlFileResponseSuccess then
		print "*** Answer ***"
		print "Status code: {response.status_code}"
		print "Size downloaded: {response.size_download}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end

else
	print_usage
	exit 1
end
