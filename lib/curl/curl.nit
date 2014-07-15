# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Network functionnalities based on Curl_c module.
module curl

intrude import curl::curl_base
import curl::curl_json

# CURL HTTP Request
class CurlHTTPRequest
	super CurlRequest
	super CCurlCallbacks
	super CurlCallbacksRegisterIntern

	var url: String
	var datas: nullable HeaderMap writable = null
	var headers: nullable HeaderMap writable = null

	# Set the user agent for all following HTTP requests
	fun user_agent=(name: String)
	do
		curl.prim_curl.easy_setopt(new CURLOption.user_agent, name)
	end

	init (url: String, curl: nullable Curl)
	do
		self.url = url
		self.curl = curl
	end

	# Execute HTTP request with settings configured through attribute
	redef fun execute
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var success_response = new CurlResponseSuccess
		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err

		err = self.curl.prim_curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# Callbacks
		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.header)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.body)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# HTTP Header
		if self.headers != null then
			var headers_joined = self.headers.join_pairs(": ")
			err = self.curl.prim_curl.easy_setopt(new CURLOption.httpheader, headers_joined.to_curlslist)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		# Datas
		if self.datas != null then
			var postdatas = self.datas.to_url_encoded(self.curl.prim_curl)
			err = self.curl.prim_curl.easy_setopt(new CURLOption.postfields, postdatas)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.prim_curl.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code.response

		return success_response
	end

	# Download to file given resource
	fun download_to_file(output_file_name: nullable String): CurlResponse
	do
		var success_response = new CurlFileResponseSuccess

		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err

		err = self.curl.prim_curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.header)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.stream)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var opt_name
		if not output_file_name == null then
			opt_name = output_file_name
		else if not self.url.substring(self.url.length-1, self.url.length) == "/" then
			opt_name = self.url.basename("")
		else
			return answer_failure(0, "Unable to extract file name, please specify one")
		end

		success_response.i_file = new OFile.open(opt_name.to_cstring)
		if not success_response.i_file.is_valid then
			success_response.i_file.close
			return answer_failure(0, "Unable to create associated file")
		end

		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.prim_curl.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code.response

		var speed = self.curl.prim_curl.easy_getinfo_double(new CURLInfoDouble.speed_download)
		if not speed == null then success_response.speed_download = speed.response

		var size = self.curl.prim_curl.easy_getinfo_double(new CURLInfoDouble.size_download)
		if not size == null then success_response.size_download = size.response

		var time = self.curl.prim_curl.easy_getinfo_double(new CURLInfoDouble.total_time)
		if not time == null then success_response.total_time = time.response

		success_response.i_file.close

		return success_response
	end
end

# CURL Mail Request
class CurlMailRequest
	super CurlRequest
	super CCurlCallbacks

	var headers: nullable HeaderMap writable = null
	var headers_body: nullable HeaderMap writable = null
	var from: nullable String writable = null
	var to: nullable Array[String] writable = null
	var cc: nullable Array[String] writable = null
	var bcc: nullable Array[String] writable = null
	var subject: nullable String writable = ""
	var body: nullable String writable = ""
	private var supported_outgoing_protocol: Array[String] = ["smtp", "smtps"]

	init (curl: nullable Curl)
	do
		self.curl = curl
	end

	# Helper method to add conventional space while building entire mail
	private fun add_conventional_space(str: String):String do return "{str}\n" end

	# Helper method to add pair values to mail content while building it (ex: "To:", "address@mail.com")
	private fun add_pair_to_content(str: String, att: String, val: nullable String):String
	do
		if val != null then return "{str}{att}{val}\n"
		return "{str}{att}\n"
	end

	# Helper method to add entire list of pairs to mail content
	private fun add_pairs_to_content(content: String, pairs: HeaderMap):String
	do
		for h_key, h_val in pairs do content = add_pair_to_content(content, h_key, h_val)
		return content
	end

	# Check for host and protocol availability
	private fun is_supported_outgoing_protocol(host: String):CURLCode
	do
		var host_reach = host.split_with("://")
		if host_reach.length > 1 and supported_outgoing_protocol.has(host_reach[0]) then return once new CURLCode.ok
		return once new CURLCode.unsupported_protocol
	end

	# Configure server host and user credentials if needed.
	fun set_outgoing_server(host: String, user: nullable String, pwd: nullable String):nullable CurlResponse
	do
		# Check Curl initialisation
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var err

		# Host & Protocol
		err = is_supported_outgoing_protocol(host)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		err = self.curl.prim_curl.easy_setopt(new CURLOption.url, host)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# Credentials
		if not user == null and not pwd == null then
			err = self.curl.prim_curl.easy_setopt(new CURLOption.username, user)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
			err = self.curl.prim_curl.easy_setopt(new CURLOption.password, pwd)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		return null
	end

	# Execute Mail request with settings configured through attribute
	redef fun execute
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var success_response = new CurlMailResponseSuccess
		var content = ""
		# Headers
		if self.headers != null then
			content = add_pairs_to_content(content, self.headers.as(not null))
		end

		# Recipients
		var g_rec = new Array[String]
		if self.to != null and self.to.length > 0 then
			content = add_pair_to_content(content, "To:", self.to.join(","))
			g_rec.append(self.to.as(not null))
		end
		if self.cc != null and self.cc.length > 0 then
			content = add_pair_to_content(content, "Cc:", self.cc.join(","))
			g_rec.append(self.cc.as(not null))
		end
		if self.bcc != null and self.bcc.length > 0 then g_rec.append(self.bcc.as(not null))

		if g_rec.length < 1 then return answer_failure(0, "The mail recipients can not be empty")

		var err

		err = self.curl.prim_curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_setopt(new CURLOption.mail_rcpt, g_rec.to_curlslist)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# From
		if not self.from == null then
			content = add_pair_to_content(content, "From:", self.from)
			err = self.curl.prim_curl.easy_setopt(new CURLOption.mail_from, self.from.as(not null))
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		# Subject
		content = add_pair_to_content(content, "Subject:", self.subject)

		# Headers body
		if self.headers_body != null then
			content = add_pairs_to_content(content, self.headers_body.as(not null))
		end

		# Body
		content = add_conventional_space(content)
		content = add_pair_to_content(content, "", self.body)
		content = add_conventional_space(content)
		err = self.curl.prim_curl.register_callback(self, once new CURLCallbackType.read)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		err = self.curl.prim_curl.register_read_datas_callback(self, content)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var err_resp = perform
		if err_resp != null then return err_resp

		return success_response
	end
end

