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
	protected var prim_curl: CCurl

	init
	do
		self.prim_curl = new CCurl.easy_init
		assert curlInstance:self.prim_curl.is_init else
			print "Curl must be instancied to be used"
		end
	end

	# Check for correct initialization
	fun is_ok: Bool do return self.prim_curl.is_init

	# Get an HTTP Request object to perform your own
	fun http_request(url: String): nullable CurlRequest
	do
		var err: CURLCode
		err = self.prim_curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return null

		err = self.prim_curl.easy_setopt(new CURLOption.url, url)
		if not err.is_ok then return null

		return new CurlHTTPRequest(url, self)
	end

	# Release Curl instance
	fun destroy do self.prim_curl.easy_clean
end

# CURL Request
class CurlRequest
	super CCurlCallbacks

	var url: String
	var headers: nullable HeaderMap writable = null
	var datas: nullable HeaderMap writable = null
	var delegate: nullable CurlCallbacks writable = null
	var verbose: Bool writable = false
	private var curl: nullable Curl

	# Launch request method
	fun execute: CurlResponse is abstract

	# Intern perform method, lowest level of request launching
	private fun perform: nullable CurlResponse
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var err: CURLCode

		if self.datas != null then
			var postdatas = self.datas.to_url_encoded(self.curl.prim_curl)
			err = self.curl.prim_curl.easy_setopt(new CURLOption.postfields, postdatas)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		if self.headers != null then
			var headers_joined = self.headers.join_pairs(": ")
			err = self.curl.prim_curl.easy_setopt(new CURLOption.httpheader, headers_joined.to_curlslist)
			if not err.is_ok then return answer_failure(err.to_i, err.to_s)
		end

		err = self.curl.prim_curl.easy_setopt(new CURLOption.verbose, self.verbose)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.easy_perform
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		return null
	end

	# Intern method with return a failed answer with given code and message
	private fun answer_failure(error_code: Int, error_msg: String): CurlResponse
	do
		return new CurlResponseFailed(error_code, error_msg)
	end
end

# CURL HTTP Request
class CurlHTTPRequest
	super CurlRequest

	# Execute HTTP request with settings configured through attribute
	redef fun execute: CurlResponse
	do
		if not self.curl.is_ok then return answer_failure(0, "Curl instance is not correctly initialized")

		var success_response: CurlResponseSuccess = new CurlResponseSuccess

		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err: CURLCode

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.header)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.body)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var err_resp = perform
		if err_resp != null then return err_resp

		var st_code = self.curl.prim_curl.easy_getinfo_long(new CURLInfoLong.response_code)
		if not st_code == null then success_response.status_code = st_code.response

		return success_response
	end

	# Download to file given resource
	fun download_to_file(output_file_name: nullable String): CurlResponse
	do
		var success_response: CurlFileResponseSuccess = new CurlFileResponseSuccess

		var callback_receiver: CurlCallbacks = success_response
		if self.delegate != null then callback_receiver = self.delegate.as(not null)

		var err: CURLCode
		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.header)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		err = self.curl.prim_curl.register_callback(callback_receiver, new CURLCallbackType.stream)
		if not err.is_ok then return answer_failure(err.to_i, err.to_s)

		var opt_name:nullable String
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

# Callbacks Interface, allow you to manage in your way the different streams
interface CurlCallbacks
	super CCurlCallbacks
end

# Abstract Curl request response
abstract class CurlResponse
end

# Failed Response Class returned when errors during configuration are raised
class CurlResponseFailed
	super CurlResponse

	var error_code: Int
	var error_msg: String

	init (err_code: Int, err_msg: String)
	do
		self.error_code = err_code
		self.error_msg = err_msg
	end
end

# Success Abstract Response Success Class
abstract class CurlResponseSuccessIntern
	super CurlCallbacks
	super CurlResponse

	var headers: HashMap[String, String] = new HashMap[String, String]
	var status_code: Int = 0

	# Receive headers from request due to headers callback registering
	redef fun header_callback(line: String)
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

	var body_str: String = ""

	# Receive body from request due to body callback registering
	redef fun body_callback(line: String)
	do
		self.body_str = "{self.body_str}{line}"
	end
end

# Success Response Class of a downloaded File
class CurlFileResponseSuccess
	super CurlResponseSuccessIntern

	var speed_download: Int = 0
	var size_download: Int = 0
	var total_time: Int = 0
	private var i_file: nullable OFile = null

	# Receive bytes stream from request due to stream callback registering
	redef fun stream_callback(buffer: String, size: Int, count: Int)
	do
		self.i_file.write(buffer, size, count)
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

	fun iterate !each(k, v: String)
	do
		var i = arr.iterator
		while i.is_ok do
			var item = i.item
			each(item.first, item.second)
			i.next
		end
	end

	# Convert Self to a single string used to post http fields
	fun to_url_encoded(curl: CCurl): String
	do
		assert curlNotInitialized: curl.is_init else
			print "to_url_encoded required a valid instance of CCurl Object."
		end
		var str: String = ""
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
