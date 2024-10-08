# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Basic interface for SAX error handlers.
module sax::error_handler

import sax_parse_exception

# Basic interface for SAX error handlers.
#
# If a SAX application needs to implement customized error
# handling, it must implement this interface and then register an
# instance with the XML reader using the `sax::XMLReader.error_handler
# property. The parser will then report all errors and warnings
# through this interface.
#
# **WARNING:** If an application does *not* register an `ErrorHandler`,
# XML parsing errors will go unreported and bizarre behaviour may result.
#
# For XML processing errors, a SAX driver must use this interface
# instead of throwing an exception: it is up to the application
# to decide whether to throw an exception for different types of
# errors and warnings. Note, however, that there is no requirement that
# the parser continue to provide useful information after a call to
# `fatal_error` (in other words, a SAX driver class
# could catch an exception and report a `fatal_error`).
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::XMLReader.error_handler`
abstract class ErrorHandler

	# Receive notification of a warning.
	#
	# SAX parsers will use this method to report conditions that
	# are not errors or fatal errors as defined by the XML 1.0
	# recommendation. The default behaviour is to take no action.
	#
	# The SAX parser must continue to provide normal parsing events
	# after invoking this method: it should still be possible for the
	# application to process the document through to the end.
	#
	# Filters may use this method to report other, non-XML warnings
	# as well.
	#
	# Parameter:
	#
	# * `exception`: warning information encapsulated in a SAX parse
	# exception.
	fun warning(exception: SAXParseException) do end

	# Receive notification of a recoverable error.
	#
	# This corresponds to the definition of "error" in section 1.2
	# of the W3C XML 1.0 Recommendation. For example, a validating
	# parser would use this callback to report the violation of a
	# validity constraint. The default behaviour is to take no
	# action.
	#
	# The SAX parser must continue to provide normal parsing events
	# after invoking this method: it should still be possible for the
	# application to process the document through to the end. If the
	# application cannot do so, then the parser should report a fatal
	# error even if the XML 1.0 recommendation does not require it to
	# do so.
	#
	# Filters may use this method to report other, non-XML errors
	# as well.
	#
	# Parameter:
	#
	# * `exception`: error information encapsulated in a SAX parse
	# exception.
	fun error(exception: SAXParseException) do end

	# Receive notification of a non-recoverable error.
	#
	# This corresponds to the definition of "fatal error" in
	# section 1.2 of the W3C XML 1.0 Recommendation. For example, a
	# parser would use this callback to report the violation of a
	# well-formedness constraint.
	#
	# The application must assume that the document is unusable
	# after the parser has invoked this method, and should continue
	# (if at all) only for the sake of collecting additional error
	# messages: in fact, SAX parsers are free to stop reporting any
	# other events once this method has been invoked.
	#
	# Parameter:
	#
	# * `exception`: error information encapsulated in a SAX parse
	# exception.
	fun fatal_error(exception: SAXParseException) do
		exception.throw
	end
end
