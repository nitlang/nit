# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# A single input source for an XML entity.
module sax::input_source

# A single input source for an XML entity.
#
# This class allows a SAX application to encapsulate information
# about an input source in a single object, which may include
# a public identifier, a system identifier and a stream (possibly
# with a specified encoding).
#
# There are two places that the application can deliver an
# input source to the parser: as the argument to the `XMLReader.parse`
# method, or as the return value of the `EntityResolver.resolve_entity`
# method.
#
# The SAX parser will use the `InputSource` object to determine how to read XML
# input. If there is a byte stream, the parser will use that byte stream, using
# the encoding specified in the InputSource or else (if no encoding is
# specified) autodetecting the character encoding using an algorithm
# such as the one in the XML specification. If no byte stream is available, the
# parser will attempt to open a URI connection to the resource identified by
# the system identifier.
#
# An InputSource object belongs to the application: the SAX parser
# shall never modify it in any way (it may modify a copy if
# necessary). However, standard processing of the stream is to close it on as
# part of end-of-parse cleanup, so applications should not attempt to re-use
# such streams after they have been handed to a parser.
#
# Note: The original documentation comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
class InputSource

	# Create a new input source with the specified system identifier.
	#
	# Applications may use `public_id=` to include a public identifier as well,
	# or `encoding=` to specify the character encoding, if known.
	#
	# If the system identifier is a URL, it must be fully resolved (it may not
	# be a relative URL).
	init with_system_id(system_id: String) do
		self.system_id = system_id
	end

	# Create a new input source with the specified stream.
	#
	# Application writers should use `system_id=` to provide a base for
	# resolving relative URIs, may use `public_id=` to include a public
	# identifier, and may use `encoding=` to specify the object's character
	# encoding.
	init with_stream(stream: Reader) do
		self.stream = stream
	end

	# The public identifier as a string.
	#
	# The public identifier is always optional: if the application
	# writer includes one, it will be provided as part of the
	# location information.
	var public_id: nullable String = null is writable

	# The system identifier as a string.
	#
	# If its an URL, it must be fully resolved (it may not be a relative URL).
	#
	# Applications may set `public_id` to include a
	# public identifier as well, or set `encoding` to specify
	# the character encoding, if known.
	var system_id: nullable String = null is writable

	# The stream containing the document.
	#
	# Application writers should set `system_id` to provide a base
	# for resolving relative URIs, may set `public_id` to include a
	# public identifier, and may set `encoding` to specify the object's
	# character encoding.
	var stream: nullable Reader = null is writable

	# The character encoding, if known.
	#
	# The encoding must be a string acceptable for an
	# XML encoding declaration (see section 4.3.3 of the XML 1.0
	# recommendation).
	var encoding: nullable String = null is writable
end
