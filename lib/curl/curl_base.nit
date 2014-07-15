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

# Base network functionnalities based on Curl_c module.
module curl_base

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

	# Release Curl instance
	fun destroy do self.prim_curl.easy_clean
end

# CURL Request
class CurlRequest

	var verbose: Bool writable = false
	protected var curl: nullable Curl protected writable = null

	# Launch request method
	fun execute: CurlResponse is abstract

	# Intern perform method, lowest level of request launching
	protected fun perform: nullable CurlResponse
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
	protected fun answer_failure(error_code: Int, error_msg: String): CurlResponse
	do
		return new CurlResponseFailed(error_code, error_msg)
	end
end

# Callbacks Interface, allow you to manage in your way the different streams
interface CurlCallbacks
	super CCurlCallbacks
end

# Callbacks attributes
abstract class CurlCallbacksRegisterIntern
	var delegate: nullable CurlCallbacks writable = null
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
	redef fun body_callback(line: String)
	do
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
	private var i_file: nullable OFile = null

	# Receive bytes stream from request due to stream callback registering
	redef fun stream_callback(buffer, size, count)
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
	init(map: HeaderMap) do self.iterator = map.arr.iterator

	redef fun is_ok do return self.iterator.is_ok
	redef fun next do self.iterator.next
	redef fun item do return self.iterator.item.second
	redef fun key do return self.iterator.item.first
end
