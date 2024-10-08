# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Philippe Pépos Petitclerc <ppeposp@gmail.com>
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

# Provides the `ProxyAction` action, which redirects requests to another interface
module proxy

import curl
import reactor

# A request proxy. All requests received by this action will be redirected to
# its target. All headers are forwarded including User-Agent.
#
# Please note: Requests passed to this action are blocking.
class ProxyAction
	super Action

	# Target interface where to dispatch proxied requests
	var target: Interface

	redef fun answer(http_request, turi) do

		var request = new CurlHTTPRequest("http://{self.target}{turi}")

		var curl_headers = new HeaderMap

		for k, v in http_request.header do
			if k == "User-Agent" then
				request.user_agent = v
			else
				curl_headers[k] = v
			end
		end

		var curl_response = request.execute
		var response: HttpResponse

		if curl_response isa CurlResponseSuccess then
			response = new HttpResponse(curl_response.status_code)
			response.body = curl_response.body_str
		else if curl_response isa CurlResponseFailed then
			response = new HttpResponse(500)

			# CURLE_COULDNT_RESOLVE_HOST
			if curl_response.error_code == 6 then
				response.status_code = 502 # Bad Gateway
			# CURLE_URL_MALFORMAT
			else if curl_response.error_code == 3 then
				response.status_code = 520 # Unknown Error
			# CURLE_COULDNT_CONNECT
			else if curl_response.error_code == 7 then
				response.status_code = 502 # Bad Gateway
			end
		else abort

		return response

	end
end
