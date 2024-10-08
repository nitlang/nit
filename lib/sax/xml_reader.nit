# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Interface for reading an XML document using callbacks.
module sax::xml_reader

import entity_resolver
import dtd_handler
import content_handler
import error_handler

# Interface for reading an XML document using callbacks.
#
# `XMLReader` is the interface that an XML parser's SAX2 driver must
# implement. This interface allows an application to set and
# query features and properties in the parser, to register
# event handlers for document processing, and to initiate
# a document parse.
#
# All SAX interfaces are assumed to be synchronous: the
# `parse` methods must not return until parsing
# is complete, and readers must wait for an event-handler callback
# to return before reporting the next event.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
interface XMLReader

	# Is the specified feature flag recognized by this parser?
	#
	# Parameter:
	#
	# * `name`: feature name, which is a fully-qualified URI.
	fun feature_recognized(name: String): Bool is abstract

	# Is the retrieval of the specified feature flag supported given the current context?
	#
	# Parameter:
	#
	# * `name`: feature name, which is a fully-qualified URI.
	fun feature_readable(name: String): Bool is abstract

	# Is the modification of the specified feature flag supported given the current context?
	#
	# Parameter:
	#
	# * `name`: feature name, which is a fully-qualified URI.
	fun feature_writable(name: String): Bool is abstract

	# Look up the value of a feature flag.
	#
	# The feature name is any fully-qualified URI. It is
	# possible for an `XMLReader` to recognize a feature name but
	# temporarily be unable to return its value.
	# Some feature values may be available only in specific
	# contexts, such as before, during, or after a parse.
	# Also, some feature values may not be programmatically accessible.
	#
	# All XMLReaders are required to recognize the
	# `http://xml.org/sax/features/namespaces` and the
	# `http://xml.org/sax/features/namespace-prefixes` feature names.
	#
	# Implementors are free (and encouraged) to invent their own features,
	# using names built on their own URIs.
	#
	# Parameter:
	#
	# * `name`: feature name, which is a fully-qualified URI.
	#
	# Returns:
	#
	# The current value of the feature.
	#
	# SEE: `feature_recognized`
	#
	# SEE: `feature_readable`
	fun feature(name: String): Bool is abstract

	# Set the value of a feature flag.
	#
	# The feature name is any fully-qualified URI. It is
	# possible for an XMLReader to expose a feature value but
	# to be unable to change the current value.
	# Some feature values may be immutable or mutable only
	# in specific contexts, such as before, during, or after
	# a parse.
	#
	# All XMLReaders are required to support setting
	# http://xml.org/sax/features/namespaces to true and
	# http://xml.org/sax/features/namespace-prefixes to false.
	#
	# Parameters:
	#
	# * `name`: feature name, which is a fully-qualified URI.
	# * `value`: requested value of the feature.
	#
	# SEE: `feature_recognized`
	#
	# SEE: `feature_writable`
	fun feature=(name: String, value: Bool) is abstract

	# Is the specified property recognized by this parser?
	#
	# Parameter:
	#
	# * `name`: property name, which is a fully-qualified URI.
	fun property_recognized(name: String): Bool is abstract

	# Is the retrieval of the specified property supported given the current context?
	#
	# Parameter:
	#
	# * `name`: property name, which is a fully-qualified URI.
	fun property_readable(name: String): Bool is abstract

	# Is the modification of the specified property supported given the current context?
	#
	# Parameter:
	#
	# * `name`: property name, which is a fully-qualified URI.
	fun property_writable(name: String): Bool is abstract

	# Look up the value of a property.
	#
	# The property name is any fully-qualified URI. It is
	# possible for an `XMLReader` to recognize a property name but
	# temporarily be unable to return its value.
	# Some property values may be available only in specific
	# contexts, such as before, during, or after a parse.
	#
	# XMLReaders are not required to recognize any specific
	# property names, though an initial core set is documented for
	# SAX2.
	#
	# Implementors are free (and encouraged) to invent their own properties,
	# using names built on their own URIs.
	#
	# Parameter:
	#
	# * `name`: property name, which is a fully-qualified URI.
	#
	# Returns:
	#
	# The current value of the property.
	#
	# SEE: `property_recognized`
	#
	# SEE: `property_supported`
	fun property(name: String): nullable Object is abstract

	# Set the value of a property.
	#
	# The property name is any fully-qualified URI. It is
	# possible for an `XMLReader` to recognize a property name but
	# to be unable to change the current value.
	# Some property values may be immutable or mutable only
	# in specific contexts, such as before, during, or after
	# a parse.
	#
	# XMLReaders are not required to recognize setting
	# any specific property names, though a core set is defined by
	# SAX2.
	#
	# This method is also the standard mechanism for setting
	# extended handlers.
	#
	# Parameters:
	#
	# * `name`: property name, which is a fully-qualified URI.
	# * `value`: requested value for the property.
	#
	# SEE: `property_recognized`
	#
	# SEE: `property_writable`
	fun property=(name: String, value: nullable Object) is abstract

	# Allow an application to register an entity resolver.
	#
	# If the application does not register an entity resolver,
	# the XMLReader will perform its own default resolution.
	#
	# Applications may register a new or different resolver in the
	# middle of a parse, and the SAX parser must begin using the new
	# resolver immediately.
	fun entity_resolver=(resolver: nullable EntityResolver) is abstract

	# Return the current entity resolver.
	#
	# Return `null` if none has been registered.
	fun entity_resolver: nullable EntityResolver is abstract

	# Allow an application to register a DTD event handler.
	#
	# If the application does not register a DTD handler, all DTD
	# events reported by the SAX parser will be silently ignored.
	#
	# Applications may register a new or different handler in the
	# middle of a parse, and the SAX parser must begin using the new
	# handler immediately.
	fun dtd_handler=(handler: nullable DTDHandler) is abstract

	# Return the current DTD handler.
	#
	# Return `null` if none has been registered.
	fun dtd_handler: nullable DTDHandler is abstract

	# Allow an application to register a content event handler.
	#
	# If the application does not register a content handler, all
	# content events reported by the SAX parser will be silently
	# ignored.
	#
	# Applications may register a new or different handler in the
	# middle of a parse, and the SAX parser must begin using the new
	# handler immediately.
	fun content_handler=(handler: nullable ContentHandler) is abstract

	# Return the current content handler.
	#
	# Return `null` if none has been registered.
	fun content_handler: nullable ContentHandler is abstract

	# Allow an application to register an error event handler.
	#
	# If the application does not register an error handler, all
	# error events reported by the SAX parser will be silently
	# ignored; however, normal processing may not continue. It is
	# highly recommended that all SAX applications implement an
	# error handler to avoid unexpected bugs.
	#
	# Applications may register a new or different handler in the
	# middle of a parse, and the SAX parser must begin using the new
	# handler immediately.
	fun error_handler=(handler: nullable ErrorHandler) is abstract

	# Return the current error handler.
	#
	# Return `null` if none has been registered.
	fun error_handler: nullable ErrorHandler is abstract

	# Parse an XML document.
	#
	# The application can use this method to instruct the XML
	# reader to begin parsing an XML document from any valid input
	# source (a byte stream or an URI).
	#
	# Applications may not invoke this method while a parse is in
	# progress (they should create a new `XMLReader` instead for each
	# nested XML document). Once a parse is complete, an
	# application may reuse the same `XMLReader` object, possibly with a
	# different input source.
	#
	# During the parse, the `XMLReader` will provide information
	# about the XML document through the registered event
	# handlers.
	#
	# This method is synchronous: it will not return until parsing
	# has ended. If a client application wants to terminate
	# parsing early, it should throw an exception.
	#
	# Parameters:
	#
	# * `source`: input source for the top-level of the XML document.
	fun parse(input: InputSource) is abstract

	# Parse an XML document from a system identifier (URI).
	#
	# This method is a shortcut for the common case of reading a
	# document from a system identifier. It is the exact
	# equivalent of the following:
	#
	# ~~~nitish
	# var source = new InputSouce
	# source.system_id = system_id
	# parse(source)
	# ~~~
	#
	# If the system identifier is a URL, it must be fully resolved
	# by the application before it is passed to the parser.
	#
	# Parameters:
	#
	# * `systemId`: The system identifier (URI).
	fun parse_file(system_id: String) is abstract
end
