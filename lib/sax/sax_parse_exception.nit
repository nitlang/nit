# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Encapsulates an XML parse error or warning.
module sax::sax_parse_exception

import sax_locator

# Encapsulates an XML parse error or warning.
#
# This exception may include information for locating the error
# in the original XML document, as if it came from a `Locator`
# object. Note that although the application
# will receive a `SAXParseException` as the argument to the handlers
# in the `ErrorHandler` interface,
# the application is not actually required to throw the exception;
# instead, it can simply read the information in it and take a
# different action.
#
# Note: The original documentation comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::SAXLocator`
#
# SEE: `sax::ErrorHandler`
class SAXParseException
	super Error

	# The public identifer of the entity that generated
	# the error or warning.
	var public_id: nullable String = null

	# The system identifer of the entity that generated
	# the error or warning.
	#
	# If its an URL, it must be fully resolved.
	var system_id: nullable String = null

	# The line number of the end of the text that
	# caused the error or warning, or -1.
	var line_number = -1

	# The column number of the end of the text that
	# caused the error or warning, or -1.
	var column_number = -1

	# Create a new SAXParseException from a message and a Locator.
	#
	# This constructor is especially useful when an application is
	# creating its own exception from within a `ContentHandler` callback.
	#
	# Parameters:
	#
	# * `message`: error or warning message.
	# * `locator`: locator object for the error or warning.
	init with_locator(message: String, locator: SAXLocator) do
		init(message)
		public_id = locator.public_id
		system_id = locator.system_id
		line_number = locator.line_number
		column_number = locator.column_number
	end

	# Create a new SAXParseException.
	#
	# This constructor is most useful for parser writers.
	#
	# All parameters except the message are as if they were provided by a
	# `Locator`. For example, if the system identifier is a URL (including
	# relative filename), the caller must resolve it fully before creating the
	# exception.
	#
	# Parameters:
	#
	# * `message`: error or warning message.
	# * `public_id`: public identifer of the entity that generated
	# the error or warning.
	# * `system_id`: system identifer of the entity that generated
	# the error or warning.
	# * `line_number`: line number of the end of the text that
	# caused the error or warning.
	# * `column_number`: column number of the end of the text that
	# caused the error or warning.
	init with_info(message: String, public_id: nullable String,
			system_id: nullable String, line_number: Int, column_number: Int) do
		init(message)
		self.public_id = public_id
		self.system_id = system_id
		self.line_number = line_number
		self.column_number = column_number
	end

	# Generate a complete message from the exception’s attributes.
	fun full_message: String do
		var location = ""

		if public_id != null then
			location = "PUBLIC \"{public_id.as(not null)}\""
		end
		if system_id != null then
			if location != "" then
				location += " "
			end
			location += "SYSTEM \"{system_id.as(not null)}\""
		end
		if line_number >= 0 or column_number >= 0 then
			if location != "" then
				location += " at "
			end
			location += "{line_number};{column_number}"
		end
		if location == "" then
			return "{message}"
		else
			return "[{location}] {message}"
		end
	end

	redef fun to_s do
		return "sax::SAXParseException: {full_message}"
	end

	# Display `full_message` with a stack trace, then abort.
	fun throw do
		assert sax_parse: false else
			sys.stderr.write "{full_message}\n"
		end
	end
end
