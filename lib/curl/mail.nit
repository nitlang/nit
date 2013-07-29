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

# Mail functionnalities based on Curl_c module.
module mail

import curl_c

class Mail
	super CCurlCallbacks

	var headers: nullable HashMap[String, String] writable
	var headers_body: nullable HashMap[String, String] writable
	var from: nullable String writable
	var to: nullable Array[String] writable
	var cc: nullable Array[String] writable
	var bcc: nullable Array[String] writable
	var subject: nullable String writable
	var body: nullable String writable
	var verbose: Bool writable
	private var curl: nullable CCurl
	private var supported_outgoing_protocol: Array[String]

	init
	do
		curl = new CCurl.easy_init
		if not curl.is_init then curl = null

		headers = null
		headers_body = null
		from = null
		to = null
		subject = ""
		body = ""
		verbose = false
		supported_outgoing_protocol = once ["smtp", "smtps"]
	end

	# Helper method to add conventional space while building entire mail
	private fun add_conventional_space(str: String):String do return "{str}\n" end

	# Helper method to add pair values to mail content while building it (ex: "To:", "address@mail.com")
	private fun add_pair_to_content(str: String, att: String, val: nullable String):String
	do
		if val != null then return "{str}{att}{val}\n"
		return "{str}{att}\n"
	end

	# Check for host and protocol availability
	private fun is_supported_outgoing_protocol(host: String):CURLCode
	do
		var host_reach = host.split_with("://")
		if host_reach.length > 1 and supported_outgoing_protocol.has(host_reach[0]) then return once new CURLCode.ok
		return once new CURLCode.unsupported_protocol
	end

	# Send mail with configured options (Headers, Headers_body To, Cc, Bcc, Subject, Body etc.)
	fun send:Bool
	do
		# Check Curl initialisation
		if self.curl == null then return false

		var err: CURLCode
		var content = ""

		# Headers
		if self.headers != null then
			for h_key, h_val in self.headers.as(not null) do
				content = add_pair_to_content(content, h_key, h_val)
			end
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

		if g_rec.length < 1 then return false
		err = self.curl.easy_setopt(new CURLOption.mail_rcpt, g_rec.to_curlslist)
		if not err.is_ok then return false

		# From
		if not self.from == null then
			content = add_pair_to_content(content, "From:", self.from)
			err = curl.easy_setopt(new CURLOption.mail_from, self.from.as(not null))
			if not err.is_ok then return false
		end

		# Subject
		content = add_pair_to_content(content, "Subject:", self.subject)

		# Headers body
		if self.headers_body != null then
			for h_key, h_val in self.headers_body.as(not null) do
				content = add_pair_to_content(content, h_key, h_val)
			end
		end

		# Body
		content = add_conventional_space(content)
		content = add_pair_to_content(content, "", self.body)
		content = add_conventional_space(content)
		err = self.curl.register_callback(self, once new CURLCallbackType.read)
		if not err.is_ok then return false
		err = self.curl.register_read_datas_callback(self, content)
		if not err.is_ok then return false

		# Verbose
		err = self.curl.easy_setopt(new CURLOption.verbose, self.verbose)
		if not err.is_ok then return false

		# Send
		return self.curl.easy_perform.is_ok
	end

	# Configure server host and user credentials if needed.
	fun set_outgoing_server(host: String, user: nullable String, pwd: nullable String):nullable CURLCode
	do
		# Check Curl initialisation
		if self.curl == null then return new CURLCode.failed_init

		var err: CURLCode

		# Redirection
		err = curl.easy_setopt(new CURLOption.follow_location, 1)
		if not err.is_ok then return err

		# Host & Protocol
		err = is_supported_outgoing_protocol(host)
		if not err.is_ok then return err
		err = self.curl.easy_setopt(new CURLOption.url, host)
		if not err.is_ok then return err

		# Credentials
		if not user == null and not pwd == null then
			err = self.curl.easy_setopt(new CURLOption.username, user)
			if not err.is_ok then return err
			err = self.curl.easy_setopt(new CURLOption.password, pwd)
			if not err.is_ok then return err
		end

		return null
	end

	# Releasing CURL instance
	fun destroy
	do
		if self.curl != null then self.curl.easy_clean
	end
end
