# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Default implementation of the Attributes interface.
module sax::attributes_impl

import sax::attributes

# Default implementation of the Attributes interface.
#
# This class provides a default implementation of the SAX2
# `Attributes` interface, with the addition of manipulators so that the list
# can be modified or reused.
#
# There are two typical uses of this class:
#
# * to take a persistent snapshot of an Attributes object in a `start_element`
# event; or
# * to construct or modify an Attributes object in a SAX2 driver or filter.
#
# Note: The original source code and documentation of this class comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
class AttributesImpl
	super Attributes

	private var data = new Array[String]
	redef var length = 0

	redef fun uri(index) do
		if index >= 0 and index < length then
			return data[index * 5]
		else
			return null
		end
	end

	redef fun local_name(index) do
		if index >= 0 and index < length then
			return data[index * 5 + 1]
		else
			return null
		end
	end

	redef fun qname(index) do
		if index >= 0 and index < length then
			return data[index * 5 + 2]
		else
			return null
		end
	end

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
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
	#
	# Returns:
	#
	# The attribute's type as a string, or `null` if the specified
	# attribute is not in the list or if qualified names
	# are not available.
	#
	# SEE: `length`
	redef fun type_of(index) do
		if index isa Int then
			if index >= 0 and index < length then
				return data[index * 5 + 3]
			end
		else if index isa String and "" != index then
			var i = 0

			while i < data.length do
				if data[i + 2] == index then
					return data[i + 3]
				end
				i += 5
			end
		end
		return null
	end

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
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
	#
	# Returns:
	#
	# The attribute's value as a string, or `null` if the specified
	# attribute is not in the list or if qualified names
	# are not available.
	#
	# SEE: `length`
	redef fun value_of(index) do
		if index isa Int then
			if index >= 0 and index < length then
				return data[index * 5 + 4]
			end
		else if index isa String and "" != index then
			var i = 0

			while i < data.length do
				if data[i + 2] == index then
					return data[i + 4]
				end
				i += 5
			end
		end
		return null
	end

	# Look up the index of an attribute by Namespace name.
	#
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
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
	redef fun index_ns(uri, local_name) do
		var i = 0

		if "" != local_name then
			while i < data.length do
				if data[i] == uri and data[i + 1] == local_name then
					return i / 5
				end
				i += 5
			end
		end
		return -1
	end

	# Look up the index of an attribute by XML 1.0 qualified name.
	#
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
	#
	# Parameters:
	#
	# * `qname`: XML 1.0 qualified (prefixed) name.
	#
	# Returns:
	#
	# The index of the attribute, or -1 if it does not
	# appear in the list.
	redef fun index_of(qname) do
		var i = 0

		if "" != qname then
			while i < data.length do
				if data[i + 2] == qname then
					return i / 5
				end
				i += 5
			end
		end
		return -1
	end

	# Look up an attribute's type by Namespace name.
	#
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
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
	redef fun type_ns(uri, local_name) do
		var i = 0

		if "" != local_name then
			while i < data.length do
				if data[i] == uri and data[i + 1] == local_name then
					return data[i + 3]
				end
				i += 5
			end
		end
		return null
	end

	# Look up an attribute's value by Namespace name.
	#
	# In many cases, it will be more efficient to look up the name once and
	# query by `Int` index rather than quering by name repeatedly.
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
	redef fun value_ns(uri, local_name) do
		var i = 0

		if "" != local_name then
			while i < data.length do
				if data[i] == uri and data[i + 1] == local_name then
					return data[i + 4]
				end
				i += 5
			end
		end
		return null
	end

	# Clear the attribute list for reuse.
	fun clear do
		data.clear
		length = 0
	end

	# Copy an entire Attributes object.
	#
	# It may be more efficient to reuse an existing object
	# rather than constantly allocating new ones.
	#
	# Parameters:
	#
	# * `atts`: attributes to copy.
	fun attributes=(atts: Attributes) do
		var i = 0

		clear
		length = atts.length
		data.enlarge(length * 5)
		while i < length do
			data.push(atts.uri(i).as(not null))
			data.push(atts.local_name(i).as(not null))
			data.push(atts.qname(i).as(not null))
			data.push(atts.type_of(i).as(not null))
			data.push(atts.value_of(i).as(not null))
			i += 1
		end
	end

	# Add an attribute to the end of the list.
	#
	# For the sake of speed, this method does no checking
	# to see if the attribute is already in the list: that is
	# the responsibility of the application.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI, or the empty string if
	# none is available or Namespace processing is not being performed.
	# * `local_name`: local name, or the empty string if
	# Namespace processing is not being performed.
	# * `qname`: qualified (prefixed) name, or the empty string
	# if qualified names are not available.
	# * `attribute_type`: attribute type as a string.
	# * `value`: attribute value.
	fun add(uri: String, local_name: String, qname: String,
			attribute_type: String, value: String) do
		ensure_capacity(length + 1)
		data.push(uri)
		data.push(local_name)
		data.push(qname)
		data.push(attribute_type)
		data.push(value)
		length += 1
	end

	# Set an attribute in the list.
	#
	# For the sake of speed, this method does no checking
	# for name conflicts or well-formedness: such checks are the
	# responsibility of the application.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `uri`: Namespace URI, or the empty string if
	# none is available or Namespace processing is not being performed.
	# * `local_name`: local name, or the empty string if
	# Namespace processing is not being performed.
	# * `qname`: qualified (prefixed) name, or the empty string
	# if qualified names are not available.
	# * `attribute_type`: attribute type as a string.
	# * `value`: attribute value.
	fun set(index: Int, uri: String, local_name: String, qname: String,
			attribute_type: String, value: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5] = uri
		data[index * 5 + 1] = local_name
		data[index * 5 + 2] = qname
		data[index * 5 + 3] = attribute_type
		data[index * 5 + 4] = value
	end

	# Remove an attribute from the list.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	fun remove_at(index: Int) do
		assert index_in_bounds: index >= 0 and index < length
		index = index * 5
		for i in [1..5] do
			data.remove_at(index)
		end
		length -= 1
	end

	# Set the Namespace URI of a specific attribute.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `uri`: attribute's Namespace URI, or the empty string for none.
	fun uri=(index: Int, uri: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5] = uri
	end

	# Set the local name of a specific attribute.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `local_name`: attribute's local name, or the empty string for none.
	fun local_name=(index: Int, local_name: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5 + 1] = local_name
	end

	# Set the qualified name of a specific attribute.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `qname`: attribute's qualified name, or the empty string for none.
	fun qname=(index: Int, qname: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5 + 2] = qname
	end

	# Set the type of a specific attribute.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `attribute_type`: attribute's type.
	fun type_of=(index: Int, attribute_type: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5 + 3] = attribute_type
	end

	# Set the value of a specific attribute.
	#
	# Parameters:
	#
	# * `index`: index of the attribute (zero-based).
	# * `value`: attribute's value.
	fun value_of=(index: Int, value: String) do
		assert index_in_bounds: index >= 0 and index < length
		data[index * 5 + 4] = value
	end

	# Ensure the internal array's capacity.
	#
	# Parameters:
	#
	# * `n`: minimum number of attributes that the array must be able to hold.
	private fun ensure_capacity(n: Int) do
		data.enlarge(n * 5)
	end
end
