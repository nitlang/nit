# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# SAX2 extension handler for DTD declaration events.
module sax::ext::decl_handler

# SAX2 extension handler for DTD declaration events.
#
# This is an optional extension handler for SAX2 to provide more
# complete information about DTD declarations in an XML document.
# XML readers are not required to recognize this handler, and it
# is not part of core-only SAX2 distributions.
#
# Note that data-related DTD declarations (unparsed entities and
# notations) are already reported through the `DTDHandler` interface.
#
# If you are using the declaration handler together with a lexical
# handler, all of the events will occur between the `start_dtd` and the
# `end_dtd` events.
#
# To set the `DeclHandler` for an XML reader, use the
# `set_property` method with the property name
# `http://xml.org/sax/properties/declaration-handler`
# and an object implementing this interface (or `null`) as the value.
abstract class DeclHandler
	# Report an element type declaration.
	#
	# The content model will consist of the string `EMPTY`, the
	# string `ANY`, or a parenthesised group, optionally followed
	# by an occurrence indicator. The model will be normalized so
	# that all parameter entities are fully resolved and all whitespace
	# is removed,and will include the enclosing parentheses. Other
	# normalization (such as removing redundant parentheses or
	# simplifying occurrence indicators) is at the discretion of the
	# parser.
	#
	# Parameters:
	#
	# * `name`: element type name.
	# * `model`: content model as a normalized string.
	fun element_decl(name: String, model: String) do end

	# Report an attribute type declaration.
	#
	# Only the effective (first) declaration for an attribute will
	# be reported. The type will be one of the strings `CDATA`,
	# `ID`, `IDREF`, `IDREFS`, `NMTOKEN`, `NMTOKENS`, `ENTITY`,
	# `ENTITIES`, a parenthesized token group with
	# the separator `|` and all whitespace removed, or the word
	# `NOTATION` followed by a space followed by a parenthesized
	# token group with all whitespace removed.
	#
	# The value will be the value as reported to applications,
	# appropriately normalized and with entity and character
	# references expanded.
	#
	# Parameters:
	#
	# * `element_name`: name of the associated element.
	# * `attribute_name`: name of the attribute.
	# * `attribute_type`: string representing the attribute type.
	# * `mode`: string representing the attribute defaulting mode (`#IMPLIED`,
	# `#REQUIRED`, or `#FIXED`) or `null` if none of these applies.
	# * `value`: string representing the attribute's default value,
	# or `null` if there is none.
	fun attribute_decl(element_name: String,
			attribute_name: String,
			attribute_type: String,
			mode: nullable String,
			value: nullable String) do end

	# Report an internal entity declaration.
	#
	# Only the effective (first) declaration for each entity
	# will be reported. All parameter entities in the value
	# will be expanded, but general entities will not.
	#
	# Parameters:
	#
	# * `name`: name of the entity. If it is a parameter entity, the name will
	# begin with `%`.
	# * `value`: replacement text of the entity.
	#
	# SEE: `external_entity_decl`
	#
	# SEE: `sax::DTDHandler.unparsed_entity_decl`
	fun internal_entity_decl(name: String, value: String) do end

	# Report a parsed external entity declaration.
	#
	# Only the effective (first) declaration for each entity
	# will be reported.
	#
	# Parameters:
	#
	# * `name`: name of the entity. If it is a parameter entity, the name will
	# begin with `%`.
	# * `public_id`: declared public identifier of the entity, or `null` if
	# none was declared.
	# * `system_id`: declared system identifier of the entity.
	#
	# SEE: `internal_entity_decl`
	#
	# SEE: `sax::DTDHandler.unparsed_entity_decl`
	fun external_entity_decl(name: String, value: String) do end
end
