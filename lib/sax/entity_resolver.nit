# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Basic interface for resolving entities.
module sax::entity_resolver

import input_source

# Basic interface for resolving entities.
#
# If a SAX application needs to implement customized handling
# for external entities, it must implement this interface and
# register an instance with the SAX driver using the
# `sax::XMLReader.entity_resolver` property.
#
# The XML reader will then allow the application to intercept any
# external entities (including the external DTD subset and external
# parameter entities, if any) before including them.
#
# Many SAX applications will not need to implement this interface,
# but it will be especially useful for applications that build
# XML documents from databases or other specialised input sources,
# or for applications that use URI types other than URLs.
#
# The application can also use this interface to redirect system
# identifiers to local URIs or to look up replacements in a catalog
# (possibly by using the public identifier).
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::XMLReader.entity_resolver`
#
# SEE: `sax::InputSource`
abstract class EntityResolver

	# Allow the application to resolve external entities.
	#
	# The parser will call this method before opening any external
	# entity except the top-level document entity. Such entities include
	# the external DTD subset and external parameter entities referenced
	# within the DTD (in either case, only if the parser reads external
	# parameter entities), and external general entities referenced
	# within the document element (if the parser reads external general
	# entities). The application may request that the parser locate
	# the entity itself, that it use an alternative URI, or that it
	# use data provided by the application (as a character or byte
	# input stream).
	#
	# Application writers can use this method to redirect external
	# system identifiers to secure and/or local URIs, to look up
	# public identifiers in a catalogue, or to read an entity from a
	# database or other input source (including, for example, a dialog
	# box). Neither XML nor SAX specifies a preferred policy for using
	# public or system IDs to resolve resources. However, SAX specifies
	# how to interpret any InputSource returned by this method, and that
	# if none is returned, then the system ID will be dereferenced as
	# a URL.
	#
	# If the system identifier is a URL, the SAX parser must
	# resolve it fully before reporting it to the application.
	#
	# Parameters:
	#
	# * `public_id`: public identifier of the external entity
	# being referenced, or `null` if none was supplied.
	# * `system_id`: system identifier of the external entity
	# being referenced.
	#
	# Returns:
	#
	# An `InputSource` object describing the new input source,
	# or `null` to request that the parser open a regular
	# URI connection to the system identifier.
	fun resolve_entity(public_id: nullable String, system_id: nullable String):
			nullable InputSource do
		return null
	end
end
