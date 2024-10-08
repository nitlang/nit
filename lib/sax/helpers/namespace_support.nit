# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Encapsulates Namespace logic for use by applications using SAX, or internally by SAX drivers.
module sax::helpers::namespace_support

# Encapsulates Namespace logic for use by applications using SAX, or internally by SAX drivers.
#
# This class encapsulates the logic of Namespace processing:
# it tracks the declarations currently in force for each context
# and automatically processes qualified XML names into their
# Namespace parts; it can also be used in reverse for generating
# XML qualified names from Namespaces.
#
# Namespace support objects are reusable, but the reset method
# must be invoked between each session.
#
# Here is a simple session:
#
#     var parts: Array[String] = new Array[String].with_capacity(3)
#     var support = new NamespaceSupport
#     #
#     support.push_context
#     support.declare_prefix("", "http://www.w3.org/1999/xhtml")
#     support.declare_prefix("dc", "http://www.purl.org/dc#")
#     #
#     parts = support.process_name("p", parts, false).as(not null)
#     assert parts[0] == "http://www.w3.org/1999/xhtml"
#     assert parts[1] == "p"
#     assert parts[2] == "p"
#     #
#     parts = support.process_name("dc:title", parts, false).as(not null)
#     assert parts[0] == "http://www.purl.org/dc#"
#     assert parts[1] == "title"
#     assert parts[2] == "dc:title"
#     #
#     support.pop_context
#
# Note that this class is optimized for the use case where most
# elements do not contain Namespace declarations: if the same
# prefix/URI mapping is repeated for each context (for example), this
# class will be somewhat less efficient.
#
# Although SAX drivers (parsers) may choose to use this class to
# implement namespace handling, they are not required to do so.
# Applications must track namespace information themselves if they
# want to use namespace information.
#
# Note: The original source code and documentation of this class comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
class NamespaceSupport
	# The XML Namespace URI as a constant.
	#
	# The value is `http://www.w3.org/XML/1998/namespace`
	# as defined in the “Namespaces in XML” specification.
	#
	# This is the Namespace URI that is automatically mapped
	# to the `xml` prefix.
	var xmlns = "http://www.w3.org/XML/1998/namespace"

	# The namespace declaration URI as a constant.
	#
	# The value is `http://www.w3.org/xmlns/2000/`, as defined
	# in a erratum to the “Namespaces in XML” recommendation.
	#
	# This is the Namespace URI that is automatically mapped
	# to the `xmlns` prefix.
	var nsdecl = "http://www.w3.org/xmlns/2000/"

	private var contexts = new Array[Context].with_capacity(32)
	private var current_context = new Context
	private var context_position: Int = 0

	init do
		contexts.push(current_context)
		current_context.declare_prefix("xml", xmlns)
		current_context.declare_prefix("xmlns", nsdecl)
	end

	# Reset this Namespace support object for reuse.
	#
	# It is necessary to invoke this method before reusing the
	# Namespace support object for a new session.
	fun reset do
		contexts.clear
		contexts.enlarge(32)
		context_position = 0
		current_context = new Context
		contexts.push(current_context)
		current_context.declare_prefix("xml", xmlns)
		current_context.declare_prefix("xmlns", nsdecl)
	end

	# Start a new Namespace context.
	#
	# The new context will automatically inherit
	# the declarations of its parent context, but it will also keep
	# track of which declarations were made within this context.
	#
	# Event callback code should start a new context once per element.
	# This means being ready to call this in either of two places.
	# For elements that don't include namespace declarations, the
	# `ContentHandler.start_element` callback is the right place.
	# For elements with such a declaration, it'd done in the first
	# `ContentHandler.start_prefix_mapping` callback.
	# A boolean flag can be used to
	# track whether a context has been started yet. When either of
	# those methods is called, it checks the flag to see if a new context
	# needs to be started. If so, it starts the context and sets the
	# flag. After `ContentHandler.start_element` does that, it always clears
	# the flag.
	#
	# Normally, SAX drivers would push a new context at the beginning
	# of each XML element. Then they perform a first pass over the
	# attributes to process all namespace declarations, making
	# `ContentHandler.start_prefix_mapping` callbacks.
	# Then a second pass is made, to determine the namespace-qualified
	# names for all attributes and for the element name.
	# Finally all the information for the
	# `ContentHandler.start_element` callback is available,
	# so it can then be made.
	#
	# The Namespace support object always starts with a base context
	# already in force: in this context, only the `xml` prefix is
	# declared.
	#
	# SEE: `sax::ContentHandler`
	#
	# SEE: `pop_context`
	fun push_context do
		current_context.decls_ok = false
		context_position += 1

		# Extend the array if necessary.
		if context_position >= contexts.length then
			current_context = new Context
			contexts.push(current_context)
		else
			current_context = contexts[context_position]
		end

		# Set the parent, if any.
		if context_position > 0 then
			current_context.parent = contexts[context_position - 1]
		end
	end

	# Revert to the previous Namespace context.
	#
	# Normally, you should pop the context at the end of each
	# XML element. After popping the context, all Namespace prefix
	# mappings that were previously in force are restored.
	#
	# You must not attempt to declare additional Namespace
	# prefixes after popping a context, unless you push another
	# context first.
	#
	# SEE: `push_context`
	fun pop_context do
		assert stack_not_empty: context_position > 0
		current_context.clear
		context_position -= 1
		current_context = contexts[context_position]
	end

	# Declare a Namespace prefix.
	#
	# All prefixes must be declared before they are referenced.
	# For example, a SAX driver (parser)
	# would scan an element's attributes
	# in two passes: first for namespace declarations,
	# then a second pass using `process_name` to
	# interpret prefixes against (potentially redefined) prefixes.
	#
	# This method declares a prefix in the current Namespace
	# context; the prefix will remain in force until this context
	# is popped, unless it is shadowed in a descendant context.
	#
	# To declare the default element Namespace, use the empty string as
	# the prefix.
	#
	# Note that you must *not* declare a prefix after
	# you've pushed and popped another Namespace context, or
	# treated the declarations phase as complete by processing
	# a prefixed name.
	#
	# Note that there is an asymmetry in this library:
	# `prefix` will not return the `""` prefix,
	# even if you have declared a default element namespace.
	# To check for a default namespace,
	# you have to look it up explicitly using `uri`.
	# This asymmetry exists to make it easier to look up prefixes
	# for attribute names, where the default prefix is not allowed.
	#
	# Parameters:
	#
	# * `prefix`: prefix to declare, or the empty string to
	# indicate the default element namespace. This may never have
	# the value `xml` or `xmlns`.
	# * `uri`: The Namespace URI to associate with the prefix.
	#
	#
	# Returns:
	#
	# `true` if the prefix and the URI are legal, `false` otherwise.
	#
	# SEE: `process_name`
	#
	# SEE: `uri`
	#
	# SEE: `prefix`
	fun declare_prefix(prefix: String, uri: String): Bool do
		if prefix == "xml" or prefix == "xmlns" or
					uri == xmlns or uri == nsdecl then
			return false
		else
			current_context.declare_prefix(prefix, uri)
			return true
		end
	end

	# Process a raw XML qualified name, after all declarations in the current context have been handled by `declare_prefix`.
	#
	# This method processes a raw XML qualified name in the current
	# context by removing the prefix and looking it up among the
	# prefixes currently declared. The return value will be the
	# array supplied by the caller, filled in as follows:
	#
	# * `parts[0]`: Namespace URI, or an empty string if none is in use.
	# * `parts[1]`: local name (without prefix).
	# * `parts[2]`: original raw name.
	#
	# If the raw name has a prefix that has not been declared, then
	# the return value will be `null`.
	#
	# Note that attribute names are processed differently than
	# element names: an unprefixed element name will receive the
	# default Namespace (if any), while an unprefixed attribute name
	# will not.
	#
	# Parameters:
	#
	# * `qname`: raw XML qualified name to be processed.
	# * `parts`: array supplied by the caller. Will be enlarged to 3 elements if
	# needed. If the specified array contains more than 3 elements, its length
	# will be kept intact.
	# * `is_attribute`: flag indicating whether this is an attribute name
	# (`true`) or an element name (`false`).
	#
	# SEE: `declare_prefix`
	fun process_name(qname: String, parts: Array[String], is_attribute: Bool):
			nullable Array[String] do
		var my_parts = current_context.process_name(qname, is_attribute)

		if my_parts == null then
			return null
		else
			parts[0] = my_parts[0]
			parts[1] = my_parts[1]
			parts[2] = my_parts[2]
			if parts[0] == "" and qname == "xmlns" and is_attribute then
				parts[0] = nsdecl
				parts[1] = ""
			end
			return parts
		end
	end

	# Look up a prefix and get the currently-mapped Namespace URI.
	#
	# This method looks up the prefix in the current context.
	# Use the empty string (`""`) for the default Namespace.
	#
	# Parameters:
	#
	# * `prefix`: The prefix to look up.
	#
	# Returns:
	#
	# The associated Namespace URI, or `null` if the prefix
	# is undeclared in this context.
	#
	# SEE: `prefix`
	#
	# SEE: `prefixes_of`
	fun uri(prefix: String): nullable String do
		return current_context.uri(prefix)
	end

	# Return all prefixes currently declared.
	#
	# Note: if there is a default prefix, it will not be
	# returned in this enumeration; check for the default prefix
	# using the `uri` with an argument of `""` or use `declared_prefixes`.
	#
	# Returns:
	#
	# All prefixes declared in the current context except
	# for the empty (default) prefix.
	#
	# SEE: `declared_prefixes`
	#
	# SEE: `uri`
	fun prefixes: Collection[String] do return current_context.prefixes

	# Return one of the prefixes mapped to a Namespace URI.
	#
	# If more than one prefix is currently mapped to the same
	# URI, this method will make an arbitrary selection; if you
	# want all of the prefixes, use the `prefixes_of` method instead.
	#
	# Note: this will never return the empty (default) prefix;
	# to check for a default prefix, use the `uri`
	# method with an argument of `""`.
	#
	# Parameters:
	#
	# * `uri`: Namespace URI.
	#
	# Returns:
	#
	# One of the prefixes currently mapped to the URI supplied,
	# or `null` if none is mapped or if the URI is assigned to
	# the default Namespace.
	#
	# SEE: `prefixes_of`
	#
	# SEE: `uri`
	fun prefix(uri: String): nullable String do
		return current_context.prefix(uri)
	end

	# Return all prefixes currently declared for an URI.
	#
	# This method returns prefixes mapped to a specific Namespace
	# URI. The `xml` prefix will be included. If you want only one
	# prefix that's mapped to the Namespace URI, and you don't care
	# which one you get, use the `prefix` method instead.
	#
	# Note: the empty (default) prefix is *never* included
	# in this enumeration; to check for the presence of a default
	# Namespace, use the `uri` method with an argument of `""`.
	#
	# Parameters:
	#
	# * `uri`: The Namespace URI.
	#
	# SEE: `prefix`
	#
	# SEE: `declared_prefixes`
	#
	# SEE: `uri`
	fun prefixes_of(uri: String): Collection[String] do
		var prefixes = new Array[String]
		var all_prefixes = self.prefixes

		for prefix in all_prefixes do
			if uri == self.uri(prefix) then
				prefixes.push(prefix)
			end
		end
		return prefixes
	end

	# Return all prefixes declared (and undeclared) in this context.
	#
	# The empty (default) prefix will be included in this
	# enumeration; note that this behaviour differs from that of
	# `prefix`, `prefixes` and `prefixes_of`.
	#
	# SEE: `prefixes`
	#
	# SEE: `uri`
	fun declared_prefixes: Collection[String] do
		return current_context.declared_prefixes
	end
end


# Internal class for a single Namespace context.
#
# This module caches and reuses Namespace contexts,
# so the number allocated
# will be equal to the element depth of the document, not to the total
# number of elements (i.e. 5-10 rather than tens of thousands).
# Also, data structures used to represent contexts are shared when
# possible (child contexts without declarations) to further reduce
# the amount of memory that's consumed.
#
# Note: The original source code and documentation of this class comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
private class Context

	var empty: Collection[String] = new Array[String].with_capacity(0)

	# `prefix` -> `uri`
	var prefix_table: nullable Map[String, String] = null

	# Cache of `process_name` for elements.
	#
	# `qname -> [uri, local_name, qname]`
	var element_name_table: nullable Map[String, Array[String]] = null

	# Cache of `process_name` for attributes.
	#
	# `qname -> [uri, local_name, qname]`
	var attribute_name_table: nullable Map[String, Array[String]] = null

	# Namespace in absence of prefix.
	var default_ns: nullable String = null

	# Can we currently declare prefixes in this context?
	var decls_ok: Bool = true is writable

	# All prefixes declared in this context.
	var declarations: nullable Array[String] = null

	# Was `copy_tables` called since the last call to `parent=`?
	var decl_seen: Bool = false

	# Parent context.
	var p_parent: nullable Context = null

	# (Re)set the parent of this Namespace context.
	#
	# The context must either have been freshly constructed,
	# or must have been cleared.
	#
	# Parameters:
	#
	# * `context`: parent Namespace context object.
	fun parent=(parent: Context) do
		p_parent = parent
		declarations = null
		prefix_table = parent.prefix_table
		element_name_table = parent.element_name_table
		attribute_name_table = parent.attribute_name_table
		default_ns = parent.default_ns
		decl_seen = false
		decls_ok = true
	end

	# Makes associated state become collectible, invalidating this context.
	#
	# `parent=` must be called before this context may be used again.
	fun clear do
		p_parent = null
		prefix_table = null
		element_name_table = null
		attribute_name_table = null
		default_ns = null
		declarations = null
	end

	# Declare a Namespace prefix for this context.
	#
	# Parameters:
	#
	# * `prefix`: prefix to declare.
	# * `uri`: associated Namespace URI.
	#
	# SEE: `NamespaceSupport.declare_prefix`
	fun declare_prefix(prefix: String, uri: String) do
		assert legal_state: decls_ok else
			sys.stderr.write("Can't declare any more prefixes in this context.\n")
		end

		# Lazy processing...
		if not decl_seen then
			copy_tables
		end

		if "" == prefix then
			if "" == uri then
				default_ns = null
			else
				default_ns = uri
			end
		else if "" == uri then
			prefix_table.keys.remove(prefix)
		else
			prefix_table[prefix] = uri
		end
		declarations.push(prefix)
	end

	# Process a raw XML qualified name in this context.
	#
	# Parameters:
	#
	# * `qname`: raw XML qualified name.
	# * `is_attribute`: `true` if this is an attribute name.
	#
	# Returns:
	#
	# An array of three strings containing the URI part (or empty string),
	# the local part and the raw name, or `null` if there is an undeclared
	# prefix.
	#
	# SEE: `NamespaceSupport.process_name`
	fun process_name(qname: String, is_attribute: Bool):
			nullable Array[String] do
		var name: Array[String]
		var table: Map[String, Array[String]]
		var match: nullable Match

		# Detect errors in call sequence.
		decls_ok = false
		# Select the appropriate table.
		if is_attribute then
			table = attribute_name_table.as(not null)
		else
			table = element_name_table.as(not null)
		end

		# Start by looking in the cache, and
		# return immediately if the name
		# is already known in this content.
		if table.keys.has(qname) then
			return table[qname]
		end

		# We haven't seen this name in this
		# context before. Maybe in the parent
		# context, but we can't assume prefix
		# bindings are the same.
		name = new Array[String].with_capacity(3)
		match = qname.search(':')

		if match == null then
			# No prefix
			if is_attribute then
				name.push("")
			else
				name.push(default_ns or else "")
			end
			name.push(qname)
			name.push(qname)
		else
			# Prefix
			var prefix = qname.substring(0, match.from)

			if prefix == "" then
				if is_attribute then
					name.push("")
				else
					name.push(default_ns or else "")
				end
				name.push(qname.substring_from(match.after))
				name.push(qname)
			else if (not is_attribute) and "xmlns" == prefix then
				return null
			else if prefix_table.keys.has(prefix) then
				name.push(prefix_table[prefix])
				name.push(qname.substring_from(match.after))
				name.push(qname)
			else
				return null
			end
		end

		# Save in the cache for future use.
		# (Could be shared with parent context...)
		table[qname] = name
		return name
	end

	# Look up the URI associated with a prefix in this context.
	#
	# Return `null` if no URI is associated with a specified prefix.
	#
	# Parameters:
	#
	# * `prefix`: prefix to look up.
	#
	# SEE: `NamespaceSupport.uri`
	fun uri(prefix: String): nullable String do
		if "" == prefix then
			return default_ns
		else if prefix_table == null then
			return null
		else
			return prefix_table.get_or_null(prefix)
		end
	end

	# Look up one of the prefixes associated with a URI in this context.
	#
	# Since many prefixes may be mapped to the same URI,
	# the return value may be unreliable.
	#
	# Parameters:
	#
	# * `uri`: URI to look up.
	#
	# Returns:
	#
	# The associated prefix, or `null` if none is declared.
	#
	# SEE: `NamespaceSupport.prefix`
	fun prefix(uri: String): nullable String do
		# Note: We do not use the original code from SAX 2.0.1 because it is
		# buggy with redefined prefixes. For example, with
		# `<x xmlns:y="1"><z xmlns:y="2" /></x>`, when in `z`, `uri("1")`
		# returns `"y"` in the original code while it should return `null`.
		# Our code is slower, but it works.
		var all_prefixes = prefixes

		for prefix in all_prefixes do
			if uri == self.uri(prefix) then
				return prefix
			end
		end
		return null
	end

	# Return all prefixes declared in this context (possibly empty).
	#
	# SEE: `NamespaceSupport.declared_prefixes`
	fun declared_prefixes: Collection[String] do
		return declarations or else empty
	end

	# Return all prefixes currently in force.
	#
	# The default prefix, if in force, is *not*
	# returned, and will have to be checked for separately.
	#
	# SEE: `NamespaceSupport.prefixes`
	fun prefixes: Collection[String] do
		if prefix_table == null then
			return empty
		else
			return prefix_table.keys
		end
	end

	# Copy on write for the internal tables in this context.
	#
	# This class is optimized for the normal case where most
	# elements do not contain Namespace declarations.
	fun copy_tables do
		if prefix_table != null then
			var old_prefix_table = prefix_table.as(not null)
			prefix_table = new HashMap[String, String]
			prefix_table.add_all(old_prefix_table)
		else
			prefix_table = new HashMap[String, String]
		end
		element_name_table = new HashMap[String, Array[String]]
		attribute_name_table = new HashMap[String, Array[String]]
		declarations = new Array[String]
		decl_seen = true
	end
end
