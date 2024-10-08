# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# SAX2 extension handler for lexical events.
module sax::ext::lexical_handler

# SAX2 extension handler for lexical events.
#
#
# This is an optional extension handler for SAX2 to provide
# lexical information about an XML document, such as comments
# and `CDATA` section boundaries.
# XML readers are not required to recognize this handler, and it
# is not part of core-only SAX2 distributions.
#
# The events in the lexical handler apply to the entire document,
# not just to the document element, and all lexical handler events
# must appear between the content handler's startDocument and
# endDocument events.
#
# To set the LexicalHandler for an XML reader, use the
# `setProperty` method
# with the property name
# `http://xml.org/sax/properties/lexical-handler`
# and an object implementing this interface (or `null`) as the value.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
abstract class LexicalHandler

	# Report the start of DTD declarations, if any.
	#
	# This method is intended to report the beginning of the
	# `DOCTYPE` declaration; if the document has no `DOCTYPE` declaration,
	# this method will not be invoked.
	#
	# All declarations reported through `DTDHandler` or `DeclHandler` events
	# must appear between the `start_dtd` and `end_dtd` events.
	# Declarations are assumed to belong to the internal DTD subset
	# unless they appear between `start_entity` and `end_entity` events.
	# Comments and processing instructions from the DTD should also be reported
	# between the `start_dtd` and `end_dtd` events, in their original
	# order of (logical) occurrence; they are not required to
	# appear in their correct locations relative to `DTDHandler`
	# or `DeclHandler` events, however.
	#
	# Note that the `start_dtd`/`end_dtd` events will appear within
	# the `start_document` and `end_document` events from `ContentHandler` and
	# before the first `start_element` event.
	#
	# Parameters:
	#
	# * `name`: document type name.
	# * `public_id`: declared public identifier for the
	# external DTD subset, or `null` if none was declared.
	# * `system_id`: declared system identifier for the
	# external DTD subset, or `null` if none was declared.
	# (Note that this is not resolved against the document
	# base URI.)
	#
	# SEE: `end_dtd`
	#
	# SEE: `start_entity`
	fun start_dtd(name: String, public_id: nullable String,
			system_id: nullable String) do end

	# Report the end of DTD declarations.
	#
	# This method is intended to report the end of the
	# `DOCTYPE` declaration; if the document has no `DOCTYPE` declaration,
	# this method will not be invoked.
	#
	# SEE: `start_dtd`
	fun end_dtd do end

	# Report the beginning of some internal and external XML entities.
	#
	# The reporting of parameter entities (including
	# the external DTD subset) is optional, and SAX2 drivers that
	# report `LexicalHandler` events may not implement it; you can use the
	# `http://xml.org/sax/features/lexical-handler/parameter-entities`
	# feature to query or control the reporting of parameter entities.
	#
	# General entities are reported with their regular names,
	# parameter entities have `%` prepended to their names, and
	# the external DTD subset has the pseudo-entity name `[dtd]`.
	#
	# When a SAX2 driver is providing these events, all other
	# events must be properly nested within start/end entity
	# events. There is no additional requirement that events from
	# `DeclHandler` or `org.xml.sax.DTDHandler DTDHandler` be properly ordered.
	#
	# Note that skipped entities will be reported through the
	# `skippedEntity` event, which is part of the `ContentHandler` interface.
	#
	# Because of the streaming event model that SAX uses, some
	# entity boundaries cannot be reported under any
	# circumstances:
	#
	# * general entities within attribute values
	# * parameter entities within declarations
	#
	# These will be silently expanded, with no indication of where
	# the original entity boundaries were.
	#
	# Note also that the boundaries of character references (which
	# are not really entities anyway) are not reported.
	#
	# All `start_entity` and `end_entity` events must be properly nested.
	#
	# Parameter:
	#
	# * `name`: name of the entity. If it is a parameter
	# entity, the name will begin with `%`, and if it is the
	# external DTD subset, it will be `[dtd]`.
	#
	# SEE: `end_entity`
	#
	# SEE: `sax::ext::DeclHandler.internal_entity_decl`
	#
	# SEE: `sax::ext::DeclHandler.external_entity_decl`
	fun start_entity(name: String) do end

	# Report the end of an entity.
	#
	# * `name`: name of the entity that is ending.
	#
	# SEE: `start_entity`
	fun end_entity(name: String) do end

	# Report the start of a `CDATA` section.
	#
	# The contents of the `CDATA` section will be reported through
	# the regular `characters` event; this event is intended only to report
	# the boundary.
	#
	# SEE: `end_cdata`
	fun start_cdata do end

	# Report the end of a CDATA section.
	#
	# SEE: `start_cdata`
	fun end_cdata do end

	# Report an XML comment anywhere in the document.
	#
	# This callback will be used for comments inside or outside the
	# document element, including comments in the external DTD
	# subset (if read). Comments in the DTD must be properly
	# nested inside `start/end_dtd` and `start/end_entity` events (if
	# used).
	#
	# Parameters:
	#
	# * `str`: characters in the comment.
	fun comment(str: String) do end
end
