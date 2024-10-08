# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Provides an optional convenience implementation of `Locator`.
module sax::helpers::sax_locator_impl

import sax::sax_locator

# Provides an optional convenience implementation of `Locator`.
#
# This class is available mainly for application writers, who
# can use it to make a persistent snapshot of a locator at any
# point during a document parse:
#
# ~~~nitish
# import sax::helpers::sax_locator_impl
# import sax::content_handler
#
# class Example super ContentHandler
#     private var locator: SAXLocator
#     private var start_loc: nullable SAXLocator = null
#
#     redef fun start_document do
#         # save the location of the start of the document
#         # for future use.
#         start_loc = new SAXLocatorImpl.from(locator)
#     end
# end
# ~~~
#
# Normally, parser writers will not use this class, since it
# is more efficient to provide location information only when
# requested, rather than constantly updating a `Locator` object.
#
# Note: The original source code and documentation of this class comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
class SAXLocatorImpl super SAXLocator
	redef var public_id = null is writable
	redef var system_id = null is writable
	redef var line_number = -1 is writable
	redef var column_number = -1 is writable

	# Zero-argument constructor.
	#
	# This will not normally be useful, since the main purpose
	# of this class is to make a snapshot of an existing Locator.
	init do
	end

	# Copy constructor.
	#
	# Create a persistent copy of the current state of a locator.
	# When the original locator changes, this copy will still keep
	# the original values (and it can be used outside the scope of
	# `ContentHandler` methods).
	#
	# Parameters:
	#
	# * `locator`: locator to copy.
	init from(locator: SAXLocator) do
		public_id = locator.public_id
		system_id = locator.system_id
		line_number = locator.line_number
		column_number = locator.column_number
	end
end
