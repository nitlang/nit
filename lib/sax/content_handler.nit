# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Receives notification of the logical content of a document.
module sax::content_handler

import attributes
import sax_locator

# Receives notification of the logical content of a document.
#
# This is the main interface that most SAX applications
# implement: if the application needs to be informed of basic parsing
# events, it implements this interface and registers an instance with
# the SAX parser using the `sax::XMLReader.content_handler`
# attribute. The parser uses the instance to report
# basic document-related events like the start and end of elements
# and character data.
#
# The order of events in this interface is very important, and
# mirrors the order of information in the document itself. For
# example, all of an element's content (character data, processing
# instructions, and/or subelements) will appear, in order, between
# the startElement event and the corresponding endElement event.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::XMLReader`
#
# SEE: `sax::DTDHandler`
#
# SEE: `sax::ErrorHandler`
abstract class ContentHandler

	# Receive an object for locating the origin of SAX document events.
	#
	# SAX parsers are strongly encouraged (though not absolutely
	# required) to supply a locator: if it does so, it must supply
	# the locator to the application by invoking this method before
	# invoking any of the other methods in the ContentHandler
	# interface.
	#
	# The locator allows the application to determine the end
	# position of any document-related event, even if the parser is
	# not reporting an error. Typically, the application will
	# use this information for reporting its own errors (such as
	# character content that does not match an application's
	# business rules). The information returned by the locator
	# is probably not sufficient for use with a search engine.
	#
	# Note that the locator will return correct information only
	# during the invocation of the events in this interface. The
	# application should not attempt to use it at any other time.
	#
	# Parameter:
	#
	# * `locator`: object that can return the location of
	# any SAX document event.
	#
	# SEE: `sax::SAXLocator`
	fun document_locator=(locator: SAXLocator) do end


	# Receive notification of the beginning of a document.
	#
	# The SAX parser will invoke this method only once, before any
	# other event callbacks (except for `document_locator`).
	#
	# SEE: `end_document`
	fun start_document do end


	# Receive notification of the end of a document.
	#
	# The SAX parser will invoke this method only once, and it will
	# be the last method invoked during the parse. The parser shall
	# not invoke this method until it has either abandoned parsing
	# (because of an unrecoverable error) or reached the end of
	# input.
	#
	# SEE: `start_document`
	fun end_document do end


	# Begin the scope of a prefix-URI Namespace mapping.
	#
	# The information from this event is not necessary for
	# normal Namespace processing: the SAX XML reader will
	# automatically replace prefixes for element and attribute
	# names when the `http://xml.org/sax/features/namespaces`
	# feature is `true` (the default).
	#
	# There are cases, however, when applications need to
	# use prefixes in character data or in attribute values,
	# where they cannot safely be expanded automatically; the
	# `start/end_prefix_mapping` event supplies the information
	# to the application to expand prefixes in those contexts
	# itself, if necessary.
	#
	# Note that `start/end_prefix_mapping` events are not
	# guaranteed to be properly nested relative to each other:
	# all `start/end_prefix_mapping` events will occur immediately before the
	# corresponding `start_element` event,
	# and all `end_prefix_mapping`
	# events will occur immediately after the corresponding
	# `end_element` event, but their order is not otherwise
	# guaranteed.
	#
	# There should never be `start/end_prefix_mapping` events for the
	# `xml` prefix, since it is predeclared and immutable.
	#
	# Parameters:
	#
	# * `prefix`: Namespace prefix being declared.
	#An empty string is used for the default element namespace,
	#which has no prefix.
	# * `uri`: Namespace URI the prefix is mapped to.
	#
	# SEE: `end_prefix_mapping`
	# SEE: `start_element`
	fun start_prefix_mapping(prefix: String, uri: String) do end


	# End the scope of a prefix-URI mapping.
	#
	# See `start_prefix_mapping` for
	# details. These events will always occur immediately after the
	# corresponding `end_prefix_mapping` event, but the order of
	# `end_prefix_mapping` events is not otherwise
	# guaranteed.
	#
	# Parameter:
	#
	# * `prefix`: prefix that was being mapping.
	# This is the empty string when a default mapping scope ends.
	#
	# SEE: `start_prefix_mapping`
	# SEE: `end_element`
	fun end_prefix_mapping(prefix: String) do end

	# Receive notification of the beginning of an element.
	#
	# The Parser will invoke this method at the beginning of every
	# element in the XML document; there will be a corresponding
	# `end_element` event for every startElement event
	# (even when the element is empty). All of the element's content will be
	# reported, in order, before the corresponding `end_element`
	# event.
	#
	# This event allows up to three name components for each
	# element:
	#
	# 1. the Namespace URI;
	# 2. the local name; and
	# 3. the qualified (prefixed) name.
	#
	# Any or all of these may be provided, depending on the
	# values of the `http://xml.org/sax/features/namespaces`
	# and the `http://xml.org/sax/features/namespace-prefixes`
	# properties:
	#
	# * the Namespace URI and local name are required when
	# the namespaces property is `true` (the default), and are
	# optional when the namespaces property is `false` (if one is
	# specified, both must be);
	# * the qualified name is required when the namespace-prefixes property
	# is `true`, and is optional when the namespace-prefixes property
	# is `false` (the default).
	#
	# Note that the attribute list provided will contain only
	# attributes with explicit values (specified or defaulted):
	# `#IMPLIED` attributes will be omitted. The attribute list
	# will contain attributes used for Namespace declarations
	# (`xmlns*` attributes) only if the
	# `http://xml.org/sax/features/namespace-prefixes`
	# property is true (it is `false` by default, and support for a
	# `true` value is optional).
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if the
	# element has no Namespace URI or if Namespace
	# processing is not being performed.
	# * `localName`: local name (without prefix), or the
	# empty string if Namespace processing is not being
	# performed.
	# * `qname`: The qualified XML 1.0 name (with prefix), or the
	# empty string if qualified names are not available.
	# * `atts`: attributes attached to the element.
	#
	# SEE: `end_element`
	# SEE: `sax::Attributes`
	fun start_element(uri: String, local_name: String, qname: String,
			atts: Attributes) do end

	# Receive notification of the end of an element.
	#
	# The SAX parser will invoke this method at the end of every
	# element in the XML document; there will be a corresponding
	# `start_element` event for every `end_element`
	# event (even when the element is empty).
	#
	# For information on the names, see `start_element`.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if the
	# element has no Namespace URI or if Namespace
	# processing is not being performed.
	# * `localName`: local name (without prefix), or the
	# empty string if Namespace processing is not being
	# performed.
	# * `qname`: The qualified XML 1.0 name (with prefix), or the
	# empty string if qualified names are not available.
	fun end_element(uri: String, local_name: String, qname: String) do end

	# Receive notification of character data.
	#
	# The Parser will call this method to report each chunk of
	# character data. SAX parsers may return all contiguous character
	# data in a single chunk, or they may split it into several
	# chunks; however, all of the characters in any single event
	# must come from the same external entity so that the `SAXLocator`
	# provides useful information.
	#
	# Note that some parsers will report whitespace in element
	# content using the `ignorable_whitespace`
	# method rather than this one (validating parsers *must* do so).
	#
	# Parameter:
	#
	# * `str`: characters from the XML document.
	#
	# SEE: `ignorable_whitespace`
	# SEE: `sax::SAXLocator`
	fun characters(str: String) do end

	# Receive notification of ignorable whitespace in element content.
	#
	# Validating Parsers must use this method to report each chunk
	# of whitespace in element content (see the W3C XML 1.0 recommendation,
	# section 2.10): non-validating parsers may also use this method
	# if they are capable of parsing and using content models.
	#
	# SAX parsers may return all contiguous whitespace in a single
	# chunk, or they may split it into several chunks; however, all of
	# the characters in any single event must come from the same
	# external entity, so that the `SAXLocator` provides useful
	# information.
	#
	# Parameter:
	#
	# * `str`: characters from the XML document.
	#
	# SEE: `characters`
	fun ignorable_whitespace(str: String) do end

	# Receive notification of a processing instruction.
	#
	# The Parser will invoke this method once for each processing
	# instruction found: note that processing instructions may occur
	# before or after the main document element.
	#
	# A SAX parser must never report an XML declaration (XML 1.0,
	# section 2.8) or a text declaration (XML 1.0, section 4.3.1)
	# using this method.
	#
	# Parameters:
	#
	# * `target`: processing instruction target.
	# * `data`: processing instruction data, or `null` if
	# none was supplied. The data does not include any
	# whitespace separating it from the target.
	fun processing_instruction(target: String, data: nullable String) do end

	# Receive notification of a skipped entity.
	#
	# This is not called for entity references within markup constructs
	# such as element start tags or markup declarations. (The XML
	# recommendation requires reporting skipped external entities.
	# SAX also reports internal entity expansion/non-expansion, except
	# within markup constructs.)
	#
	# The Parser will invoke this method each time the entity is
	# skipped. Non-validating processors may skip entities if they
	# have not seen the declarations (because, for example, the
	# entity was declared in an external DTD subset). All processors
	# may skip external entities, depending on the values of the
	# `http://xml.org/sax/features/external-general-entities`
	# and the
	# `http://xml.org/sax/features/external-parameter-entities`
	# properties.
	#
	# Parameter:
	#
	# * `name`: The name of the skipped entity. If it is a
	# parameter entity, the name will begin with `%`, and if
	# it is the external DTD subset, it will be the string
	# `[dtd]`.
	fun skipped_entity(name: String) do end
end
