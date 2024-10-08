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

# Data transfer powered by the native curl library
#
# Download or upload data over HTTP with `CurlHTTPRequest` and send emails
# with `CurlMail`. Scripts can use the easier (but limited) services on `Text`,
# `http_get` and `http_download`, provided by `curl::extra`.
module curl

import native_curl

# Curl library handle
private class Curl
	super FinalizableOnce

	var native = new NativeCurl.easy_init

	# Is this instance correctly initialized?
	fun is_ok: Bool do return self.native.is_init

	redef fun finalize_once do if is_ok then native.easy_clean
end

# CURL Request
class CurlRequest

	private var curl = new Curl

	# Shall this request be verbose?
	var verbose: Bool = false is writable

	# Intern perform method, lowest level of request launching
	private fun perform: nullable CurlResponseFailed
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var err

		err = self.curl.native.easy_setopt(new CURLOption.verbose, self.verbose)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.native.easy_perform
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		return null
	end

	# Intern method with return a failed answer with given code and message
	private fun answer_failure(error_code: Int, error_msg: String): CurlResponseFailed
	do
		return new CurlResponseFailed(error_code, error_msg)
	end

	# Close low-level resources associated to this request
	#
	# Once closed, this request can't be used again.
	#
	# If this service isn't called explicitly, low-level resources
	# may be freed automatically by the GC.
	fun close do curl.finalize
end

# HTTP request builder
#
# The request itself is sent by either `execute` or `download_to_file`.
# The attributes of this class must be set before calling either of these two methods.
#
# ## Minimal usage example
#
# ~~~
# var request = new CurlHTTPRequest("http://example.org/")
# var response = request.execute
# if response isa CurlResponseSuccess then
#     print "Response status code: {response.status_code}"
#     print response.body_str
# else if response isa CurlResponseFailed then
#     print_error response.error_msg
# end
# ~~~
class CurlHTTPRequest
	super CurlRequest
	super NativeCurlCallbacks

	# Address of the remote resource to request
	var url: String

	# Data for the body of a POST request
	var data: nullable HeaderMap is writable

	# Raw body string
	#
	# Set this value to send raw data instead of the POST formatted `data`.
	#
	# If `data` is set, the body will not be sent.
	var body: nullable String is writable

	# Header content of the request
	var headers: nullable HeaderMap is writable

	# Delegates to customize the behavior when running `execute`
	var delegate: nullable CurlCallbacks is writable

	# Set the user agent for all following HTTP requests
	var user_agent: nullable String is writable

	# Set the Unix domain socket path to use
	#
	# When not null, enables using a Unix domain socket
	# instead of a TCP connection and DNS hostname resolution.
	var unix_socket_path: nullable String is writable

	# The HTTP method, GET by default
	#
	# Must be a capitalized string with request name complying with RFC7231
	var method: String = "GET" is optional, writable

	# Execute HTTP request
	#
	# By default, the response body is returned in an instance of `CurlResponse`.
	# This behavior can be customized by setting a custom `delegate`.
	fun execute: CurlResponse
	do
		# Reset libcurl parameters as the lib is shared and options
		# might affect requests from one another.
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var success_response = new CurlResponseSuccess
		var callback_receiver: CurlCallbacks = success_response
		var err : CURLCode

		# Prepare request
		err = prepare_request(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# Perform request
		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.native.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code

		return success_response
	end

	# Internal function that sets cURL options and request' parameters
	private fun prepare_request(callback_receiver: CurlCallbacks) : CURLCode
	do
		var err

		# cURL options and delegates
		err = set_curl_options
		if not err.is_ok then return err

		# Callbacks
		err = set_curl_callback(callback_receiver)
		if not err.is_ok then return err

		# HTTP Header
		err = set_curl_http_header
		if not err.is_ok then return err

		# Set HTTP method and body
		err = set_method
		if not err.is_ok then return err
		err = set_body

		return err
	end

	# Set cURL parameters according to assigned HTTP method set in method
	# attribute and body if the method allows it according to RFC7231
	private fun set_method : CURLCode
	do
		var err : CURLCode

		if self.method=="GET" then
			err=self.curl.native.easy_setopt(new CURLOption.get, 1)

		else if self.method=="POST" then
			err=self.curl.native.easy_setopt(new CURLOption.post, 1)

		else if self.method=="HEAD" then
			err=self.curl.native.easy_setopt(new CURLOption.no_body,1)

		else
			err=self.curl.native.easy_setopt(new CURLOption.custom_request,self.method)
		end
		return err
	end

	# Set request's body
	private fun set_body : CURLCode
	do
		var err
		var data = self.data
		var body = self.body

		if data != null then
			var postdatas = data.to_url_encoded(self.curl)
			err = self.curl.native.easy_setopt(new CURLOption.postfields, postdatas)
			if not err.is_ok then return err
		else if body != null then
			err = self.curl.native.easy_setopt(new CURLOption.postfields, body)
			if not err.is_ok then return err
		end
		return new CURLCode.ok
	end

	# Set cURL options
	# such as delegate, follow location, URL, user agent and address family
	private fun set_curl_options : CURLCode
	do
		var err

		err = self.curl.native.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return err

		err = self.curl.native.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return err

		var user_agent = user_agent
		if user_agent != null then
			err = curl.native.easy_setopt(new CURLOption.user_agent, user_agent)
			if not err.is_ok then return err
		end

		var unix_socket_path = unix_socket_path
		if unix_socket_path != null then
			err = self.curl.native.easy_setopt(new CURLOption.unix_socket_path, unix_socket_path)
			if not err.is_ok then return err
		end
		return err
	end

	# Set cURL callback
	private fun set_curl_callback(callback_receiver : CurlCallbacks) : CURLCode
	do
		var err

		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		err = self.curl.native.register_callback_header(callback_receiver)
		if not err.is_ok then return err

		err = self.curl.native.register_callback_body(callback_receiver)
		if not err.is_ok then return err

		return err
	end

	# Set cURL request header according to attribute headers
	private fun set_curl_http_header : CURLCode
	do
		var headers = self.headers
		if headers != null then
			var headers_joined = headers.join_pairs(": ")
			var err = self.curl.native.easy_setopt(new CURLOption.httpheader, headers_joined.to_curlslist)
			if not err.is_ok then return err
		end
		return new CURLCode.ok
	end

	# Download to file given resource
	fun download_to_file(output_file_name: nullable String): CurlResponse
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var success_response = new CurlFileResponseSuccess

		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err

		err = self.curl.native.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.native.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.native.register_callback_header(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.native.register_callback_stream(callback_receiver)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var opt_name
		if not output_file_name == null then
			opt_name = output_file_name
		else if not self.url.substring(self.url.length-1, self.url.length) == "/" then
			opt_name = self.url.basename
		else
			return answer_failure(0, "Unable to extract file name, please specify one")
		end

		success_response.file = new FileWriter.open(opt_name)
		if not success_response.file.is_writable then
			return answer_failure(0, "Unable to create associated file")
		end

		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.native.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code

		var speed = self.curl.native.easy_getinfo_double(new CURLInfoDouble.speed_download)
		if not speed == null then success_response.speed_download = speed

		var size = self.curl.native.easy_getinfo_double(new CURLInfoDouble.size_download)
		if not size == null then success_response.size_download = size

		var time = self.curl.native.easy_getinfo_double(new CURLInfoDouble.total_time)
		if not time == null then success_response.total_time = time

		success_response.file.close

		return success_response
	end
end


# CURL Mail Request
#
# ~~~
# # Craft mail
# var mail = new CurlMail("sender@example.org",
#                            to=["to@example.org"], cc=["bob@example.org"])
#
# mail.headers_body["Content-Type:"] = """text/html; charset="UTF-8""""
# mail.headers_body["Content-Transfer-Encoding:"] = "quoted-printable"
#
# mail.body = "<h1>Here you can write HTML stuff.</h1>"
# mail.subject = "Hello From My Nit Program"
#
# # Set mail server
# var error = mail.set_outgoing_server("smtps://smtp.example.org:465",
#                                      "user@example.org", "mypassword")
# if error != null then
#     print "Mail Server Error: {error}"
#     exit 0
# end
#
# # Send
# error = mail.execute
# if error != null then
#     print "Transfer Error: {error}"
#     exit 0
# end
# ~~~
class CurlMail
	super CurlRequest
	super NativeCurlCallbacks

	# Address of the sender
	var from: nullable String is writable

	# Main recipients
	var to: nullable Array[String] is writable

	# Subject line
	var subject: nullable String is writable

	# Text content
	var body: nullable String is writable

	# CC recipients
	var cc: nullable Array[String] is writable

	# BCC recipients (hidden from other recipients)
	var bcc: nullable Array[String] is writable

	# HTTP header
	var headers = new HeaderMap is lazy, writable

	# Content header
	var headers_body = new HeaderMap is lazy, writable

	# Protocols supported to send mail to a server
	#
	# Default value at `["smtp", "smtps"]`
	var supported_outgoing_protocol = ["smtp", "smtps"]

	# Helper method to add pair values to mail content while building it (ex: "To:", "address@mail.com")
	private fun add_pair_to_content(str: String, att: String, val: nullable String): String
	do
		if val != null then return "{str}{att}{val}\n"
		return "{str}{att}\n"
	end

	# Helper method to add entire list of pairs to mail content
	private fun add_pairs_to_content(content: String, pairs: HeaderMap): String
	do
		for h_key, h_val in pairs do content = add_pair_to_content(content, h_key, h_val)
		return content
	end

	# Check for host and protocol availability
	private fun is_supported_outgoing_protocol(host: String): CURLCode
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

		err = self.curl.native.easy_setopt(new CURLOption.url, host)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# Credentials
		if not user == null and not pwd == null then
			err = self.curl.native.easy_setopt(new CURLOption.username, user)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)

			err = self.curl.native.easy_setopt(new CURLOption.password, pwd)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		return null
	end

	# Execute Mail request with settings configured through attribute
	fun execute: nullable CurlResponseFailed
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var lines = new Array[String]

		# Headers
		var headers = self.headers
		if not headers.is_empty then
			for k, v in headers do lines.add "{k}{v}"
		end

		# Recipients
		var all_recipients = new Array[String]
		var to = self.to
		if to != null and to.length > 0 then
			lines.add "To:{to.join(",")}"
			all_recipients.append to
		end

		var cc = self.cc
		if cc != null and cc.length > 0 then
			lines.add "Cc:{cc.join(",")}"
			all_recipients.append cc
		end

		var bcc = self.bcc
		if bcc != null and bcc.length > 0 then all_recipients.append bcc

		if all_recipients.is_empty then return answer_failure(0, "There must be at lease one recipient")

		var err = self.curl.native.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.native.easy_setopt(new CURLOption.mail_rcpt, all_recipients.to_curlslist)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		# From
		var from = self.from
		if not from == null then
			lines.add "From:{from}"

			err = self.curl.native.easy_setopt(new CURLOption.mail_from, from)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		# Subject
		var subject = self.subject
		if subject == null then subject = "" # Default
		lines.add "Subject: {subject}"

		# Headers body
		var headers_body = self.headers_body
		if not headers_body.is_empty then
			for k, v in headers_body do lines.add "{k}{v}"
		end

		# Body
		var body = self.body
		if body == null then body = "" # Default

		lines.add ""
		lines.add body
		lines.add ""

		err = self.curl.native.register_callback_read(self)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var content = lines.join("\n")
		err = self.curl.native.register_read_datas_callback(self, content)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var err_resp = perform
		if err_resp != null then return err_resp

		return null
	end
end

# Callbacks Interface, allow you to manage in your way the different streams
interface CurlCallbacks
	super NativeCurlCallbacks
end

# Abstract Curl request response
abstract class CurlResponse
end

# Failed Response Class returned when errors during configuration are raised
class CurlResponseFailed
	super CurlResponse

	# Curl error code
	var error_code: Int

	# Curl error message
	var error_msg: String

	redef fun to_s do return "{error_msg} ({error_code})"
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

	# Server HTTP response code
	var status_code = 0

	# Response body as a `String`
	var body_str = ""

	# Accept part of the response body
	redef fun body_callback(line) do self.body_str += line
end

# Success Response Class of a downloaded File
class CurlFileResponseSuccess
	super CurlResponseSuccessIntern

	# Server HTTP response code
	var status_code = 0

	var speed_download = 0.0
	var size_download = 0.0
	var total_time = 0.0

	private var file: nullable FileWriter = null

	# Receive bytes stream from request due to stream callback registering
	redef fun stream_callback(buffer)
	do
		file.write buffer
	end
end

# Pseudo map associating `String` to `String` for HTTP exchanges
#
# This structure differs from `Map` as each key can have multiple associations
# and the order of insertion is important to some services.
class HeaderMap
	private var array = new Array[Couple[String, String]]

	# Add a `value` associated to `key`
	fun []=(key, value: String)
	do
		array.add new Couple[String, String](key, value)
	end

	# Get a list of the keys associated to `key`
	fun [](k: String): Array[String]
	do
		var res = new Array[String]
		for c in array do if c.first == k then res.add c.second
		return res
	end

	# Iterate over all the associations in `self`
	fun iterator: MapIterator[String, String] do return new HeaderMapIterator(self)

	# Get `self` as a single string for HTTP POST
	#
	# Require: `curl.is_ok`
	private fun to_url_encoded(curl: Curl): String
	do
		assert curl.is_ok

		var lines = new Array[String]
		for k, v in self do
			if k.length == 0 then continue

			k = curl.native.escape(k)
			v = curl.native.escape(v)
			lines.add "{k}={v}"
		end
		return lines.join("&")
	end

	# Concatenate couple of 'key value' separated by 'sep' in Array
	fun join_pairs(sep: String): Array[String]
	do
		var col = new Array[String]
		for k, v in self do col.add("{k}{sep}{v}")
		return col
	end

	# Number of values in `self`
	fun length: Int do return array.length

	# Is this map empty?
	fun is_empty: Bool do return array.is_empty
end

private class HeaderMapIterator
	super MapIterator[String, String]

	var map: HeaderMap
	var iterator: Iterator[Couple[String, String]] = map.array.iterator is lazy

	redef fun is_ok do return self.iterator.is_ok
	redef fun next do self.iterator.next
	redef fun item do return self.iterator.item.second
	redef fun key do return self.iterator.item.first
end
