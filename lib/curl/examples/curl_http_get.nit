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

# Example of an HTTP GET request with the Curl module
module curl_http_get is example

import curl

# Execute an HTTP GET request on `url`
fun http_get(url: String): CurlResponse
do
	var request = new CurlHTTPRequest(url)
	request.verbose = false # Set to `true` to debug
	return request.execute
end

if args.length != 1 then
	print "Usage: curl_http_get url"
	exit 1
end

var response = http_get(args.first)
if response isa CurlResponseSuccess then
	print "Status code: {response.status_code}"
	print "Body: {response.body_str}"
else if response isa CurlResponseFailed then
	print "Error code: {response.error_code}"
	print "Error msg: {response.error_msg}"
end
