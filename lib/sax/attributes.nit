# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Interface for a list of XML attributes.
module sax::attributes

# Interface for a list of XML attributes.
#
# This interface allows access to a list of attributes in
# three different ways:
#
# * by attribute index;
# * by Namespace-qualified name; or
# * by qualified (prefixed) name.
#
# The list will not contain attributes that were declared
# `#IMPLIED` but not specified in the start tag. It will also not
# contain attributes used as Namespace declarations (`xmlns*`) unless
# the `http://xml.org/sax/features/namespace-prefixes`
# feature is set to `true` (it is `false` by default).
# Because SAX2 conforms to the "Namespaces in XML" specification,
# it does not give namespace declaration attributes a namespace URI.
# Some other W3C specifications are in conflict with that, expecting
# these declarations to be in a namespace.
# Handler code may need to resolve that conflict.
#
# If the namespace-prefixes feature (see above) is `false`,
# access by qualified name may not be available; if the
# `http://xml.org/sax/features/namespaces`
# feature is `false`, access by Namespace-qualified names
# may not be available.
#
# The order of attributes in the list is unspecified, and will
# vary from implementation to implementation.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
#
# SEE: `sax::helpers::AttributesImpl`
#
# SEE: `sax::ext::DeclHandler.attribute_decl`
interface Attributes

	# Return the number of attributes in the list.
	fun length: Int is abstract

	# Look up an attribute's Namespace URI by index.
	#
	# Parameters:
	#
	# * `index`: attribute index.
	#
	# Returns:
	#
	# The Namespace URI, or the empty string if none
	# is available, or `null` if the index is out of
	# range.
	#
	# SEE: `length`
	fun uri(index: Int): nullable String is abstract

	# Look up an attribute's local name by index.
	#
	# Parameters:
	#
	# * `index`: attribute index.
	#
	# Returns:
	#
	# The local name, or the empty string if Namespace
	# processing is not being performed, or `null`
	# if the index is out of range.
	#
	# SEE: `length`
	fun local_name(index: Int): nullable String is abstract

	# Look up an attribute's XML 1.0 qualified name by index.
	#
	# Parameters:
	#
	# * `index`: attribute index.
	#
	# Returns:
	#
	# The XML 1.0 qualified name, or the empty string
	# if none is available, or `null` if the index
	# is out of range.
	#
	# SEE: `length`
	fun qname(index: Int): nullable String is abstract

	# Look up an attribute's type by index.
	#
	# The attribute type is one of the strings `CDATA`, `ID`,
	# `IDREF`, `IDREFS`, `NMTOKEN`, `NMTOKENS`, `ENTITY`, `ENTITIES`,
	# or `NOTATION` (always in upper case).
	#
	# If the parser has not read a declaration for the attribute,
	# or if the parser does not report attribute types, then it must
	# return the value `CDATA` as stated in the XML 1.0 Recommentation
	# (clause 3.3.3, "Attribute-Value Normalization").
	#
	# For an enumerated attribute that is not a notation, the
	# parser will report the type as `NMTOKEN`.
	#
	# Parameters:
	#
	# * `index: Int`: attribute index.
	# * `index: String`: XML 1.0 qualified (prefixed) name.
	#
	# Returns:
	#
	# The attribute's type as a string, or `null` if the specified
	# attribute is not in the list or if qualified names
	# are not available.
	#
	# SEE: `length`
	fun type_of(index: Object): nullable String is abstract

	# Look up an attribute's value by index.
	#
	# If the attribute value is a list of tokens (`IDREFS`,
	# `ENTITIES`, or `NMTOKENS`), the tokens will be concatenated
	# into a single string with each token separated by a
	# single space.
	#
	# Parameters:
	#
	# * `index: Int`: attribute index.
	# * `index: String`: XML 1.0 qualified (prefixed) name.
	#
	# Returns:
	#
	# The attribute's value as a string, or `null` if the specified
	# attribute is not in the list or if qualified names
	# are not available.
	#
	# SEE: `length`
	fun value_of(index: Object): nullable String is abstract

	# Look up the index of an attribute by Namespace name.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if
	# the name has no Namespace URI.
	# * `local_name`: attribute's local name.
	#
	# Returns:
	#
	# The index of the attribute, or -1 if it does not
	# appear in the list.
	fun index_ns(uri: String, local_name: String): Int is abstract

	# Look up the index of an attribute by XML 1.0 qualified name.
	#
	# Parameters:
	#
	# * `qname`: XML 1.0 qualified (prefixed) name.
	#
	# Returns:
	#
	# The index of the attribute, or -1 if it does not
	# appear in the list.
	fun index_of(qname: String): Int is abstract

	# Look up an attribute's type by Namespace name.
	#
	# See `type_of` for a description
	# of the possible types.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if
	# the name has no Namespace URI.
	#
	# * `local_name`: attribute's local name.
	#
	# Returns:
	#
	# The attribute type as a string, or `null` if the
	# attribute is not in the list or if Namespace
	# processing is not being performed.
	fun type_ns(uri: String, local_name: String): nullable String is abstract

	# Look up an attribute's value by Namespace name.
	#
	# See `value_of` for a description
	# of the possible values.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if
	# the name has no Namespace URI.
	#
	# * `local_name`: attribute's local name.
	#
	# Returns:
	#
	# The attribute value as a string, or `null` if the
	# attribute is not in the list or if Namespace
	# processing is not being performed.
	fun value_ns(uri: String, local_name: String): nullable String is abstract
end
