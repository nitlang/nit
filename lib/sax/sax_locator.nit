# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Interface for associating a SAX event with a document location.
module sax::sax_locator

# Interface for associating a SAX event with a document location.
#
# If a SAX parser provides location information to the SAX
# application, it does so by implementing this interface and then
# passing an instance to the application using the
# `ContentHandler.document_locator=` method. The application can use
# the object to obtain the location of any other SAX event
# in the XML source document.
#
# Note that the results returned by the object will be valid only
# during the scope of each callback method: the application
# will receive unpredictable results if it attempts to use the
# locator at any other time, or after parsing completes.
#
# SAX parsers are not required to supply a locator, but they are
# very strongly encouraged to do so. If the parser supplies a
# locator, it must do so before reporting any other document events.
# If no locator has been set by the time the application receives
# the `ContentHandler.start_document` event, the application should
# assume that a locator is not available.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::ContentHandler.document_locator`
public interface SAXLocator

	# Return the public identifier for the current document event.
	#
	# Return the public identifier of the document
	# entity or of the external parsed entity in which the markup
	# triggering the event appears.
	# Return `null` if no public identifier is available.
	fun public_id: nullable String is abstract

	# Return the system identifier for the current document event.
	#
	# Return the system identifier of the document
	# entity or of the external parsed entity in which the markup
	# triggering the event appears.
	# Return `null` if no system identifier is available.
	#
	# If the system identifier is a URL, the parser must resolve it
	# fully before passing it to the application. For example, a file
	# name must always be provided as a `file:` URL, and other
	# kinds of relative URI are also resolved against their bases.
	fun system_id: nullable String is abstract

	# Return the line number where the current document event ends.
	#
	# Lines are delimited by line ends, which are defined in
	# the XML specification.
	#
	# **Warning:** The return value from this method
	# is intended only as an approximation for the sake of diagnostics;
	# it is not intended to provide sufficient information
	# to edit the character content of the original XML document.
	# In some cases, these "line" numbers match what would be displayed
	# as columns, and in others they may not match the source text
	# due to internal entity expansion.
	#
	# Return an approximation of the line number
	# in the document entity or external parsed entity where the
	# markup triggering the event appears.
	#
	# If possible, the SAX driver should provide the line position
	# of the first character after the text associated with the document
	# event. The first line is line 1.
	#
	# Return -1 in absence of line number.
	fun line_number: Int is abstract

	# Return the column number where the current document event ends.
	#
	# The number is one-based.
	#
	# **Warning:** The return value from this method
	# is intended only as an approximation for the sake of diagnostics;
	# it is not intended to provide sufficient information
	# to edit the character content of the original XML document.
	# For example, when lines contain combining character sequences, wide
	# characters, surrogate pairs, or bi-directional text, the value may
	# not correspond to the column in a text editor's display.
	#
	# The return value is an approximation of the column number
	# in the document entity or external parsed entity where the
	# markup triggering the event appears.
	#
	# If possible, the SAX driver should provide the line position
	# of the first character after the text associated with the document
	# event. The first column in each line is column 1.
	#
	# Return -1 in absence of column number.
	fun column_number: Int is abstract
end
