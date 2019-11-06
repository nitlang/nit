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

# Daily program to fetch and parse the Web site, update the database and email subscribers
module benitlux_daily

import curl
import sendmail
import opts

import benitlux_model
import benitlux_db

redef class Text
	# Return a `String` without any HTML tags (such as `<br />`) from `recv`
	fun strip_tags: String
	do
		var str = to_s
		var new_str = ""

		var from = 0
		loop
			var at = str.index_of_from('<', from)
			if at == -1 then break

			new_str += str.substring(from, at-from)

			at = str.index_of_from('>', at)
			assert at != -1

			from = at+1
		end

		return new_str
	end

	# Return an `Array` of the non-empty lines in `self`
	#
	#     assert ["a", "asdf", "", "  ", "&nbsp;", "b"].join("\n").to_clean_lines == ["a", "asdf", "b"]
	fun to_clean_lines: Array[String]
	do
		var orig_lines = split_with("\n")
		var new_lines = new Array[String]

		for line in orig_lines do
			line = line.trim

			# remove empty lines
			if line == "&nbsp;" then continue
			if line.is_empty then continue

			new_lines.add line.to_s
		end

		return new_lines
	end
end

# Main logic of the program to be executed daily
class Benitlux
	# The street on which is the Benelux
	var street: String

	# The url of this precise Benelux
	var url = "www.brasseriebenelux.com/{street}" is lazy

	# Path to the database
	var db_path = "benitlux_{street}.db" is lazy

	# Where to save the sample email
	var sample_email_path = "benitlux_{street}.email" is lazy

	# Execute the main program logic
	fun run(send_emails: Bool)
	do
		# Get the web page
		var body = download_html_page

		if opts.verbose.value > 1 then
			print " # Body"
			print body
		end

		# Parse the Web page and get the available beers
		var beers = parse_beers_from_html(body)

		if opts.verbose.value > 0 then
			print " # Beers"
			print beers
		end

		var db = new BenitluxDB.open(db_path)

		# Update the database with the beers of the day
		db.insert_beers_of_the_day beers

		# Query the beer-related events of today
		var beer_events = db.beer_events_today

		if beer_events == null then
			print_error "Failed to read beer events from the DB"
			db.close
			return
		end

		# Generate the email title and content, store them in attributes
		generate_email beer_events

		# Save as sample email to file
		var f = new FileWriter.open(sample_email_path)
		f.write email_title + "\n"
		for line in email_content do f.write line + "\n"
		f.close

		# Set the email if desired
		if send_emails then
			var subs = db.subscribers
			if opts.verbose.value > 0 then
				print " # Subscribers"
				print subs
			end
			send_emails_to subs
		end

		db.close
	end

	# Fetch the Web page at `url`
	fun download_html_page: String
	do
		var request = new CurlHTTPRequest(url)
		var response = request.execute

		if response isa CurlResponseSuccess then
			var body = response.body_str
			return body
		else if response isa CurlResponseFailed then
			print "Failed downloading URL '{url}' with: {response.error_msg} ({response.error_code})"
			exit 1
		end
		abort
	end

	# Extract the beers of the day information from the HTML if `body`
	fun parse_beers_from_html(body: String): HashSet[Beer]
	do
		# Parts of the HTML page expected to encapsulate the interesting section
		var header = "<h1>Bières<br /></h1>"
		var ender = "</div></div></div>"

		var match = body.search(header)
		assert match != null else print body
		var start = match.after

		match = body.search_from(ender, start)
		assert match != null
		var finish = match.from

		var of_interest = body.substring(start, finish-start)
		var lines = of_interest.strip_tags.to_clean_lines

		if opts.verbose.value > 0 then
			print " # Lines"
			print lines
		end

		var beers = new HashSet[Beer]
		for line in lines do
			var parts = line.split("- ")
			if parts.length >= 2 then
				# Let the DB set the id, use 0 temporary
				beers.add new Beer(0, parts[0].trim, parts[1].trim)
			end
		end
		return beers
	end

	# Content lines of the email
	var email_content: Array[String] is noautoinit

	# Title of the email
	var email_title: String is noautoinit

	# Generate email and fill the attributes `email_content` and `email_title`
	fun generate_email(beer_events: BeerEvents)
	do
		email_title = "Benitlux {street.capitalized}{beer_events.to_email_title}"
		email_content = beer_events.to_email_content
	end

	# Send the email to all the addresses in `subs`
	fun send_emails_to(subs: Array[String])
	do
		for email in subs do
			var unsub_link = "http://benitlux.xymus.net/?unsub=&email={email}"
			var content = """
{{{email_content.join("<br />\n")}}}
<br /><br />
To unsubscribe, go to <a href="{{{unsub_link}}}">{{{unsub_link}}}</a>
"""

			var mail = new Mail("Benitlux <benitlux@xymus.net>", email_title, content)
			mail.to.add email
			mail.header["Content-Type"] = "text/html; charset=\"UTF-8\""
			mail.header["List-Unsubscribe"] = unsub_link
			mail.header["Precedence"] = "bulk"
			mail.encrypt_with_base64

			mail.send
		end
	end
end

redef class OptionContext
	# Shall we mail the mailing list?
	var send_emails = new OptionBool("Send emails to subscribers", "-e", "--email")

	# Display more debug messages
	var verbose = new OptionCount("Display extra debug messages", "-v")

	# Print the usage message
	var help = new OptionBool("Print this help message", "-h", "--help")

	redef init do add_option(send_emails, verbose, help)
end

redef class Sys
	# Command line options
	var opts = new OptionContext
end

# Avoid executing when running tests
if "NIT_TESTING".environ == "true" then exit 0

opts.parse args
if not opts.errors.is_empty or opts.help.value then
	print opts.errors.join("\n")
	print "Usage: benitlux_daily [Options]"
	opts.usage
	exit 1
end

var ben = new Benitlux("sherbrooke")
ben.run(opts.send_emails.value)

# The parsing logic for the wellington location is active (to gather data)
# but the web interface do not allow to subscribe to its mailing list.
#
# TODO revamp mailing list Web interface
ben = new Benitlux("wellington")
ben.run(opts.send_emails.value)
