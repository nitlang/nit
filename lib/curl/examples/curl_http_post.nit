# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Example of an HTTP POST request with the Curl module
module curl_http_post is example

import curl

# Callbacks printing the body of the answer as it is received
class PrintBodyCallbacks
	super CurlCallbacks

	redef fun body_callback(line) do print "Received: {line}"
end

# Execute an HTTP POST request on `url` with sample data
#
# The body of the answer is passed to `PrintBodyCallbacks` instead of
# being stored in the response.
fun http_post(url: String): CurlResponse
do
	var request = new CurlHTTPRequest(url)
	request.verbose = false # Set to `true` to debug
	request.delegate = new PrintBodyCallbacks

	var data = new HeaderMap
	data["Bugs Bunny"] = "Daffy Duck"
	data["Batman"] = "Robin likes special characters @#ùà!è§'(\"é&://,;<>∞~*"
	data["Batman"] = "Yes you can set multiple identical keys, but APACHE will consider only one, the last one"
	request.data = data

	return request.execute
end

if args.length != 1 then
	print "Usage: curl_http_post url"
	exit 1
end

var response = http_post(args.first)
if response isa CurlResponseSuccess then
	print "Status code: {response.status_code}"
else if response isa CurlResponseFailed then
	print "Error code: {response.error_code}"
	print "Error msg: {response.error_msg}"
end
