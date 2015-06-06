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

import curl_c

# Top level of Curl
class Curl
	protected var prim_curl = new CCurl.easy_init

	init
	do
		assert curlInstance:self.prim_curl.is_init else
			print "Curl must be instancied to be used"
		end
	end

	# Check for correct initialization
	fun is_ok: Bool do return self.prim_curl.is_init

	# Release Curl instance
	fun destroy do self.prim_curl.easy_clean
end

# CURL Request
class CurlRequest

	var verbose: Bool = false is writable
	private var curl: nullable Curl = null

	# Launch request method
	fun execute: CurlResponse is abstract

	# Intern perform method, lowest level of request launching
	private fun perform: nullable CurlResponseFailed
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var err

		err = self.curl.prim_curl.easy_setopt(new CURLOption.verbose, self.verbose)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_perform
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		return null
	end

	# Intern method with return a failed answer with given code and message
	private fun answer_failure(error_code: Int, error_msg: String): CurlResponseFailed
	do
		return new CurlResponseFailed(error_code, error_msg)
	end
end

# CURL HTTP Request
class CurlHTTPRequest
	super CurlRequest
	super CCurlCallbacks
	super CurlCallbacksRegisterIntern

	var url: String
	var datas: nullable HeaderMap = null is writable
	var headers: nullable HeaderMap = null is writable

	# Set the user agent for all following HTTP requests
	fun user_agent=(name: String)
	do
		curl.prim_curl.easy_setopt(new CURLOption.user_agent, name)
	end

	init (url: String, curl: nullable Curl) is old_style_init do
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
		err = self.curl.prim_curl.register_callback_header(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback_body(callback_receiver)
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

		err = self.curl.prim_curl.register_callback_header(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback_stream(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var opt_name
		if not output_file_name == null then
			opt_name = output_file_name
		else if not self.url.substring(self.url.length-1, self.url.length) == "/" then
			opt_name = self.url.basename("")
		else
			return answer_failure(0, "Unable to extract file name, please specify one")
		end

		success_response.i_file = new FileWriter.open(opt_name)
		if not success_response.i_file.is_writable then
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

	var headers: nullable HeaderMap = null is writable
	var headers_body: nullable HeaderMap = null is writable
	var from: nullable String = null is writable
	var to: nullable Array[String] = null is writable
	var cc: nullable Array[String] = null is writable
	var bcc: nullable Array[String] = null is writable
	var subject: nullable String = "" is writable
	var body: nullable String = "" is writable
	private var supported_outgoing_protocol: Array[String] = ["smtp", "smtps"]

	init (curl: nullable Curl) is old_style_init do
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
	fun set_outgoing_server(host: String, user: nullable String, pwd: nullable String): nullable CurlResponseFailed
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
		err = self.curl.prim_curl.register_callback_read(self)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		err = self.curl.prim_curl.register_read_datas_callback(self, content)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var err_resp = perform
		if err_resp != null then return err_resp

		return success_response
	end
end

# Callbacks Interface, allow you to manage in your way the different streams
interface CurlCallbacks
	super CCurlCallbacks
end

# Callbacks attributes
abstract class CurlCallbacksRegisterIntern
	var delegate: nullable CurlCallbacks = null is writable
end

# Abstract Curl request response
abstract class CurlResponse
end

# Failed Response Class returned when errors during configuration are raised
class CurlResponseFailed
	super CurlResponse

	var error_code: Int
	var error_msg: String
end

# Success Abstract Response Success Class
abstract class CurlResponseSuccessIntern
	super CurlCallbacks
	super CurlResponse

	var headers = new HashMap[String, String]

	# Receive headers from request due to headers callback registering
	redef fun header_callback(line)
	do
		var splitted = line.split_with(':')
		if splitted.length > 1 then
			var key = splitted.shift
			self.headers[key] = splitted.to_s
		end
	end
end

# Success Response Class of a basic response
class CurlResponseSuccess
	super CurlResponseSuccessIntern

	var body_str = ""
	var status_code = 0

	# Receive body from request due to body callback registering
	redef fun body_callback(line) do
		self.body_str = "{self.body_str}{line}"
	end
end

# Success Response Class of mail request
class CurlMailResponseSuccess
	super CurlResponseSuccessIntern
end

# Success Response Class of a downloaded File
class CurlFileResponseSuccess
	super CurlResponseSuccessIntern

	var status_code = 0
	var speed_download = 0
	var size_download = 0
	var total_time = 0
	private var i_file: nullable FileWriter = null

	# Receive bytes stream from request due to stream callback registering
	redef fun stream_callback(buffer)
	do
		i_file.write buffer
	end
end

# Pseudo map associating Strings to Strings,
# each key can have multiple associations
# and the order of insertion is important.
class HeaderMap
	private var arr = new Array[Couple[String, String]]

	fun []=(k, v: String) do arr.add(new Couple[String, String](k, v))

	fun [](k: String): Array[String]
	do
		var res = new Array[String]
		for c in arr do if c.first == k then res.add(c.second)
		return res
	end

	fun iterator: MapIterator[String, String] do return new HeaderMapIterator(self)

	# Convert Self to a single string used to post http fields
	fun to_url_encoded(curl: CCurl): String
	do
		assert curlNotInitialized: curl.is_init else
			print "to_url_encoded required a valid instance of CCurl Object."
		end
		var str = ""
		var length = self.length
		var i = 0
		for k, v in self do
			if k.length > 0 then
				k = curl.escape(k)
				v = curl.escape(v)
				str = "{str}{k}={v}"
				if i < length-1 then str = "{str}&"
			end
			i += 1
		end
		return str
	end

	# Concatenate couple of 'key value' separated by 'sep' in Array
	fun join_pairs(sep: String): Array[String]
	do
		var col = new Array[String]
		for k, v in self do col.add("{k}{sep}{v}")
		return col
	end

	fun length: Int do return arr.length
	fun is_empty: Bool do return arr.is_empty
end

class HeaderMapIterator
	super MapIterator[String, String]

	private var iterator: Iterator[Couple[String, String]]
	init(map: HeaderMap) is old_style_init do self.iterator = map.arr.iterator

	redef fun is_ok do return self.iterator.is_ok
	redef fun next do self.iterator.next
	redef fun item do return self.iterator.item.second
	redef fun key do return self.iterator.item.first
end
