# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Core SAX APIs.
#
# This is a (partial) port of the original SAX API. See
# [http://www.saxproject.org](http://www.saxproject.org) for more information
# about SAX.
#
# SAX2 Standard Feature Flags:
#
# One of the essential characteristics of SAX2 is that it added
# feature flags which can be used to examine and perhaps modify
# parser modes, in particular modes such as validation.
# Since features are identified by (absolute) URIs, anyone
# can define such features.
#
# For default values not specified by SAX2,
# each `XMLReader` implementation specifies its default,
# or may choose not to expose the feature flag.
# Unless otherwise specified here,
# implementations may support changing current values
# of these standard feature flags, but not while parsing.
#
# Currently defined standard feature URIs have the prefix
# `http://xml.org/sax/features/` before an identifier such as
# `validation`. Support for the default values of the
# `namespaces` and `namespace-prefixes`
# properties is required. Turn features on or off using
# `feature=`. Those standard identifiers are:
#
# `external-general-entities`:
#
# * Access: read/write
# * Default: unspecified
# * Description: Reports whether this parser processes external general
# entities; always `true` if validating.
#
# `external-parameter-entities`:
#
# * Access: read/write
# * Default: unspecified
# * Description: Reports whether this parser processes external parameter
# entities; always `true` if validating.
#
# `is-standalone`:
#
# * Access: read-only while parsing, none while not parsing
# * Default: not applicable
# * Description: May be examined only during a parse, after the `start_document`
# callback has been completed; read-only. The value is `true` if the document
# specified `standalone="yes"` in its XML declaration, and otherwise is `false`.
#
# `lexical-handler/parameter-entities`:
#
# * Access: read/write
# * Default: unspecified
# * Description: `true` indicates that the LexicalHandler will report the
# beginning and end of parameter entities.
#
# `namespaces`:
#
# * Access: read/write
# * Default: `true`
# * Description: `true` indicates namespace URIs and unprefixed local names
# for element and attribute names will be available.
#
# `namespace-prefixes`:
#
# * Access: read/write
# * Default: `false`
# * Description: `true` indicates XML 1.0 names (with prefixes) and attributes
# (including `xmlns*` attributes) will be available.
#
# `resolve-dtd-uris`:
#
# * Access: read/write
# * Default: `true`
# * Description: `true` indicates that system IDs in declarations will be
# absolutized (relative to their base URIs) before reporting. (That is the
# default behavior for all SAX2 XML parsers.) A value of "false" indicates those
# IDs will not be absolutized; parsers will provide the base URI from
# `SAXLocator.system_id`. This applies to system IDs passed in
# `DTDHandler.notation_decl`, DTDHandler.unparsed_entity_decl`, and
# `DeclHandler.external_entity_decl`. It does not apply to
# `EntityResolver.resolve_entity`, which is not used to report declarations, or
# to `LexicalHandler.start_dtd`, which already provides the non-absolutized URI.
#
# `string-interning`:
#
# * Access: read-only
# * Default: `false`
# * Description: (Java-specific. Not supported in Nit.)
#
# `unicode-normalization-checking`:
#
# * Access: read/write
# * Default: `false`
# * Description: Controls whether the parser reports Unicode normalization
# errors as described in section 2.13 and Appendix B of the XML 1.1
# Recommendation. If `true`, Unicode normalization errors are reported using
# the `ErrorHandler.error` callback. Such errors are not fatal in themselves
# (though, obviously, other Unicode-related encoding errors may be).
#
# `use-attributes2`:
#
# * Access: read-only
# * Default: not applicable
# * Description: Returns `true` if the `Attributes` objects passed by this
# parser in `ContentHandler.start_element` implement the
# `sax::ext::Attributes2` interface. That interface exposes additional
# DTD-related information, such as whether the attribute was specified in the
# source text rather than defaulted.
#
# TODO: interface not yet available in Nit.
#
# `use-locator2`:
#
# * Access: read-only
# * Default: not applicable
# * Description: Returns `true` if the `SAXLocator` objects passed by this
# parser in `ContentHandler.document_locator=` implement the
# `sax::ext::SAXLocator2` interface. That interface exposes additional
# entity information, such as the character encoding and XML version used.
#
# TODO: interface not yet available in Nit.
#
# `use-entity-resolver2`:
#
# * Access: read/write
# * Default: true
# * Description: Returns `true` if, when `entity_resolver` is given an object
# implementing the `sax::ext::EntityResolver2` interface, those new methods
# will be used. Returns `false` to indicate that those methods will not be used.
#
# `validation`:
#
# * Access: read/write
# * Default: unspecified
# * Description: controls whether the parser is reporting all validity errors;
# if true, all external entities will be read.
#
# `xmlns-uris`:
#
# * Access: read/write
# * Default: `false`
# * Description: Controls whether, when the `namespace-prefixes` feature is set,
# the parser treats namespace declaration attributes as being in the
# `http://www.w3.org/2000/xmlns/` namespace. By default, SAX2 conforms to the
# original "Namespaces in XML" Recommendation, which explicitly states that such
# attributes are not in any namespace. Setting this optional flag to `true`
# makes the SAX2 events conform to a later backwards-incompatible revision of
# that recommendation, placing those attributes in a namespace.
#
# `xml-1.1`:
#
# * Access: read-only
# * Default: not applicable
# * Description: Returns `true` if the parser supports both XML 1.1 and XML 1.0.
# Returns "false" if the parser supports only XML 1.0.
#
#
# SAX2 Standard Handler and Property IDs:
#
# For parser interface characteristics that are described as objects, a
# separate namespace is defined. The objects in this namespace are again
# identified by URI, and the standard property URIs have the prefix
# `http://xml.org/sax/properties/` before an identifier such as
# `lexical-handler` or `dom-node`. All of these standard properties are
# optional; `XMLReader` implementations need not support them. Manage those
# properties using `property=`. Those identifiers are:
#
# `declaration-handler`:
#
# Used to see most DTD declarations except those treated as lexical (“document
# element name is...”) or which are mandatory for all SAX parsers
# (`DTDHandler`). The object must implement `sax::ext::DeclHandler`.
#
# `document-xml-version`:
#
# May be examined only during a parse, after the `start_document` callback
# has been completed; read-only. This property is a literal string describing
# the actual XML version of the document, such as `"1.0"` or `"1.1"`.
#
# `dom-node`:
#
# For “DOM Walker” style parsers, which ignore their `parser.parse` parameters,
# this is used to specify the DOM (sub)tree being walked by the parser. The
# object must implement the `xml.dom.Node` interface.
#
# TODO: interface not yet available in Nit.
#
# `lexical-handler`:
#
# Used to see some syntax events that are essential in some applications:
# comments, `CDATA` delimeters, selected general entity inclusions, and the
# start and end of the DTD (and declaration of document element name).
# The object must implement `sax::ext::LexicalHandler`.
#
# `xml-string`:
#
# Readable only during a parser callback, this exposes a **TBS** chunk of
# characters responsible for the current event.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
module sax

import attributes
import content_handler
import dtd_handler
import entity_resolver
import error_handler
import input_source
import sax_locator
import sax_parse_exception
import xml_filter
import xml_reader
