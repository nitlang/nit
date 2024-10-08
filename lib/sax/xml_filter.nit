# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Interface for an XML filter.
module sax::xml_filter

import xml_reader

# Interface for an XML filter.
#
# An XML filter is like an XML reader, except that it obtains its
# events from another XML reader rather than a primary source like
# an XML document or database. Filters can modify a stream of
# events as they pass on to the final application.
#
# The `XMLFilterImpl` helper class provides a convenient base
# for creating SAX2 filters, by passing on all `EntityResolver`,
# `DTDHandler`, `ContentHandler` and `ErrorHandler` events automatically.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::helpers::XMLFilterImpl`
interface XMLFilter super XMLReader

	# Set the parent reader.
	#
	# This method allows the application to link the filter to
	# a parent reader (which may be another filter).
	fun parent=(parent: nullable XMLReader) is abstract

	# Get the parent reader.
	#
	# This method allows the application to query the parent
	# reader (which may be another filter). It is generally a
	# bad idea to perform any operations on the parent reader
	# directly: they should all pass through this filter.
	#
	# Return null if no parent has been set.
	fun parent: nullable XMLReader is abstract
end
