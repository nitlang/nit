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

# Run the `curl_http_*` examples against the local `nitcorn_hello_world` server
#
# The server answers with the content of the hello world Web site.
# This is mainly used by the tests.
module curl_http_local_server is example

import curl_http_get
import curl_http_post
import curl_http_download
import nitcorn::nitcorn_hello_world
import pthreads

# Port of the local server, unique to each run of the tests
fun local_port: Int
do
	var testing_id = "NIT_TESTING_ID".environ
	if testing_id.is_int then return 20000 + testing_id.to_i % 10000
	return 20000
end

# Thread running the local server
class ServerThread
	super Thread

	redef fun main
	do
		# Hide the testing concept from nitcorn to force it to actually run
		"NIT_TESTING".setenv("false")

		# The file server of the example is not used, only its dynamic pages
		hello_world_server("localhost:{local_port}", ".")
		return null
	end
end

# Print the status of `response`, or its error
fun print_response(response: CurlResponse)
do
	if response isa CurlResponseSuccess then
		print "Status code: {response.status_code}"
	else if response isa CurlFileResponseSuccess then
		print "Status code: {response.status_code}"
	else if response isa CurlResponseFailed then
		print "Error code: {response.error_code}"
		print "Error msg: {response.error_msg}"
	end
end

var host = "http://localhost:{local_port}"

# Launch the server in the background
var server = new ServerThread
server.start
0.1.sleep

print "# GET"

var get_response = http_get(host / "index.html")
print_response get_response
if get_response isa CurlResponseSuccess then
	print "Body: {get_response.body_str}"
end

print "# POST"

print_response http_post(host / "hello/curl")

print "# Download"

var write_dir = "WRITE".environ
if write_dir.is_empty then write_dir = "."
write_dir.mkdir

var download_response = http_download(host / "index.html",
                                      write_dir / "index.html")
print_response download_response
if download_response isa CurlFileResponseSuccess then
	print "Size downloaded: {download_response.size_download}"
end
