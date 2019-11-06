# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Send emails using the `sendmail` program
#
# Usage example:
# ~~~~
# if sendmail_is_available then
#     var mail = new Mail("from@example.com", "Title", "Content")
#     mail.to.add "to@example.org"
#     mail.send
# else print "please install sendmail"
# ~~~~
module sendmail

import base64

# Can we find the external program `sendmail`?
fun sendmail_is_available: Bool do return "sendmail".program_is_in_path

# An email to be sent using `sendmail`
class Mail

	# Sender of this email
	var from: String is writable

	# Recipients of the message
	var to = new Array[String]

	# Recipients of a carbon copy of the message
	var cc = new Array[String]

	# Recipients of a blind carbon copy of the message
	var bcc = new Array[String]

	# Subject of this mail
	var subject: String is writable

	# Content of this mail
	var content: String is writable

	# Metadata in the header of this mail
	var header = new HashMap[String, String]

	# Should the content of this email be encrypted using base64?
	#
	# This will also set the header `Content-Transfer-Encoding` to base64.
	# By default, the encoding is 8bit.
	var encrypt_with_base64 = false

	# Send this mail using the `sendmail` command
	#
	# require: `sendmail_is_available`
	fun send: Bool
	do
		assert sendmail_is_available

		# All recipients
		var all = new Array[String]
		all.add_all to
		all.add_all cc
		all.add_all bcc

		var proc = new ProcessWriter("sendmail", all.join(","))
		if proc.is_writable then proc.write to_s
		proc.close
		proc.wait
		var status = proc.status
		return status == 0
	end

	redef fun to_s
	do
		# Set encoding (and encode if needed)
		var content = content
		var encoding
		if encrypt_with_base64 then
			content = content.encode_base64
			encoding = "base64"
		else
			encoding = "8bit"
		end
		header["Content-Transfer-Encoding"] = encoding

		# Generate expected format
		return """
From: {{{from}}}\r
To: {{{to.join(",")}}}\r
CC: {{{cc.join(",")}}}\r
BCC: {{{bcc.join(",")}}}\r
Subject: {{{subject}}}\r
{{{header.join("\r\n", ": ")}}}\r\n\r
{{{content}}}"""
	end
end
