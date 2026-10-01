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

# Example of downloading a file with the Curl module
module curl_http_download is example

import curl

# Download `url` to the local file `file_path`
fun http_download(url, file_path: String): CurlResponse
do
	var request = new CurlHTTPRequest(url)
	request.verbose = false # Set to `true` to debug

	# Custom header
	var headers = new HeaderMap
	headers["Accept"] = "Moo"
	request.headers = headers

	return request.download_to_file(file_path)
end

if args.length != 2 then
	print "Usage: curl_http_download url file"
	exit 1
end

var response = http_download(args[0], args[1])
if response isa CurlFileResponseSuccess then
	print "Status code: {response.status_code}"
	print "Size downloaded: {response.size_download}"
else if response isa CurlResponseFailed then
	print "Error code: {response.error_code}"
	print "Error msg: {response.error_msg}"
end
