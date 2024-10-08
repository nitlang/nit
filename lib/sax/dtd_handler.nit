# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Receives notification of basic DTD-related events.
module sax::dtd_handler

# Receives notification of basic DTD-related events.
#
# If a SAX application needs information about notations and
# unparsed entities, then the application implements this
# interface and registers an instance with the SAX parser using
# the parser's `dtd_handler` property. The parser uses the
# instance to report notation and unparsed entity declarations to
# the application.
#
# Note that this interface includes only those DTD events that
# the XML recommendation *requires* processors to report:
# notation and unparsed entity declarations.
#
# The SAX parser may report these events in any order, regardless
# of the order in which the notations and unparsed entities were
# declared; however, all DTD events must be reported after the
# document handler's `start_document` event, and before the first
# `start_element` event.
# (If the `sax::ext::LexicalHandler` is
# used, these events must also be reported before the `end_dtd` event.)
#
# It is up to the application to store the information for
# future use (perhaps in a hash table or object tree).
# If the application encounters attributes of type `NOTATION`,
# `ENTITY`, or `ENTITIES`, it can use the information that it
# obtained through this interface to find the entity and/or
# notation corresponding with the attribute value.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::XMLReader.dtd_handler`
abstract class DTDHandler

	# Receive notification of a notation declaration event.
	#
	# It is up to the application to record the notation for later
	# reference, if necessary;
	# notations may appear as attribute values and in unparsed entity
	# declarations, and are sometime used with processing instruction
	# target names.
	#
	# At least one of `public_id` and `system_id` must be non-null.
	# If a system identifier is present, and it is a URL, the SAX
	# parser must resolve it fully before passing it to the
	# application through this event.
	#
	# There is no guarantee that the notation declaration will be
	# reported before any unparsed entities that use it.
	#
	# Parameters:
	#
	# * `name`: notation name.
	# * `public_id`: notation's public identifier, or null if none was given.
	# * `system_id`: notation's system identifier, or null if none was given.
	#
	# SEE: `sax::Attributes`
	fun notation_decl(name: String, public_id: String, system_id: String) do end

	# Receive notification of an unparsed entity declaration event.
	#
	# Note that the notation name corresponds to a notation
	# reported by the `notation_decl` event.
	# It is up to the application to record the entity for later
	# reference, if necessary;
	# unparsed entities may appear as attribute values.
	#
	# If the system identifier is a URL, the parser must resolve it
	# fully before passing it to the application.
	#
	# Parameters:
	#
	# * `name`: unparsed entity's name.
	# * `public_id`: entity's public identifier, or null if none was given.
	# * `system_id`: entity's system identifier, or null if none was given.
	#
	# SEE: `sax::Attributes`
	fun unparsed_entity_decl(name: String, public_id: String,
			system_id: String) do end
end
