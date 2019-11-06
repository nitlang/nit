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

# Shortcut services for scripts: `http_get` and `http_download`
module extra

import curl

redef class Text

	# Execute a simple HTTP GET request to the URL `self`
	#
	# Set `accept_status_code` to the expected response HTTP code, defaults to 200.
	# If a different status code is received, the return code is printed to stderr.
	#
	# Returns the response body on success and `null` on error. Prints the error
	# message to stderr.
	#
	# For more control, set HTTP request headers, keep the response status code
	# and much more, use `CurlHTTPRequest`.
	#
	# ~~~nitish
	# assert "http://example.com/".http_get != null
	# ~~~
	fun http_get(accept_status_code: nullable Int): nullable String
	do
		var req = new CurlHTTPRequest(self.to_s)
		var resp = req.execute
		req.close

		if resp isa CurlResponseSuccess then
			if resp.status_code == (accept_status_code or else 200) then
				return resp.body_str
			else
				print_error "HTTP request failed: server returned {resp.status_code}"
			end
		else if resp isa CurlResponseFailed then
			print_error "HTTP request failed: {resp.error_msg}"
		else abort
		return null
	end

	# Download the file at URL `self` to `output_path` with a simple HTTP request
	#
	# If not set, `output_path` defaults to `self.basename`.
	#
	# Set `accept_status_code` to the expected response HTTP code, defaults to 200.
	# If a different status code is received, the return code is printed to stderr.
	#
	# Returns the path to the downloaded file on success and `null` on errors.
	# Prints the error message to stderr.
	#
	# For more control, set HTTP request headers, keep the response status code
	# and much more, use `CurlHTTPRequest`.
	#
	# ~~~nitish
	# assert "http://example.com/".http_download("index.html") == "example.com"
	# ~~~
	fun http_download(output_path: nullable Text, accept_status_code: nullable Int): nullable String
	do
		var path = (output_path or else self.basename).to_s

		var req = new CurlHTTPRequest(self.to_s)
		var resp = req.download_to_file(path)
		req.close

		if resp isa CurlFileResponseSuccess then
			if resp.status_code == (accept_status_code or else 200) then
				return path
			else
				print_error "HTTP request failed: server returned {resp.status_code}"
			end
		else if resp isa CurlResponseFailed then
			print_error "HTTP request failed: {resp.error_msg}"
		else abort
		return null
	end
end
