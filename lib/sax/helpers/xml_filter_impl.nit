# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Base class for deriving an XML filter.
module sax::helpers::xml_filter_impl

import sax::xml_reader
import sax::xml_filter
import sax::input_source
import sax::sax_locator
import sax::attributes
import sax::entity_resolver
import sax::dtd_handler
import sax::content_handler
import sax::error_handler
import sax::sax_parse_exception

# Base class for deriving an XML filter.
#
# This class is designed to sit between an `XMLReader`
# and the client application's event handlers. By default, it
# does nothing but pass requests up to the reader and events
# on to the handlers unmodified, but subclasses can override
# specific methods to modify the event stream or the configuration
# requests as they pass through.
#
# Note: The original source code and documentation of this class comes, in part,
# from [SAX 2.0](http://www.saxproject.org).
class XMLFilterImpl
	super XMLFilter
	super EntityResolver
	super DTDHandler
	super ContentHandler
	super ErrorHandler

	# XMLFilter

	redef var parent = null is writable

	# XMLReader

	redef var entity_resolver = null is writable
	redef var dtd_handler = null is writable
	redef var content_handler = null is writable
	redef var error_handler = null is writable


	############################################################################
	# XMLReader

	# Construct an empty XML filter, with no parent.
	#
	# This filter will have no parent: you must assign a parent
	# before you start a parse or do any configuration with
	# `feature=` or `property=`, unless you use this as
	# a pure event consumer rather than as an `XMLReader`.
	#
	# SEE: `parent`
	init do
	end

	# Construct an XML filter with the specified parent.
	#
	# SEE: `parent`
	init with_parent(parent_reader: XMLReader) do
		parent = parent_reader
	end

	redef fun feature_recognized(name) do
		if parent == null then
			return false
		else
			return parent.feature_recognized(name)
		end
	end

	redef fun feature_readable(name) do
		if parent == null then
			return false
		else
			return parent.feature_readable(name)
		end
	end

	redef fun feature_writable(name) do
		if parent == null then
			return false
		else
			return parent.feature_writable(name)
		end
	end

	# Look up the value of a feature.
	#
	# This will always fail if the parent is `null`.
	#
	# Parameters:
	#
	# * `name`: The feature name.
	#
	# Returns:
	#
	# The current value of the feature.
	#
	# SEE: `feature_recognized`
	#
	# SEE: `feature_readable`
	redef fun feature(name) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Feature: {name}\n")
		end
		return parent.feature(name)
	end

	# Set the value of a feature.
	#
	# This will always fail if the parent is `null`.
	#
	# Parameters:
	#
	# * `name`: feature name.
	# * `value`: requested feature value.
	#
	# Returns:
	#
	# `true` if the feature is set; `false` if the feature can not be set given
	# the current context.
	#
	# SEE: `feature_recognized`
	#
	# SEE: `feature_writable`
	redef fun feature=(name, value) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Feature: {name}\n")
		end
		parent.feature(name) = value
	end

	redef fun property_recognized(name) do
		if parent == null then
			return false
		else
			return parent.property_recognized(name)
		end
	end

	redef fun property_readable(name) do
		if parent == null then
			return false
		else
			return parent.property_readable(name)
		end
	end

	redef fun property_writable(name) do
		if parent == null then
			return false
		else
			return parent.property_writable(name)
		end
	end

	# Look up the value of a property.
	#
	# Parameters:
	#
	# * `name`: The property name.
	#
	# Returns:
	#
	# The current value of the property.
	#
	# SEE: `property_recognized`
	#
	# SEE: `property_readable`
	redef fun property(name) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Property: {name}\n")
		end
		return parent.property(name)
	end

	# Set the value of a property.
	#
	# This will always fail if the parent is `null`.
	#
	# Parameters:
	#
	# * `name`: property name.
	# * `value`: requested feature value.
	#
	# Returns:
	#
	# `true` if the property is set; `false` if the property can not be set
	# given the current context.
	#
	# SEE: `property_recognized`
	#
	# SEE: `property_writable`
	redef fun property=(name, value) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Property: {name}\n")
		end
		parent.property(name) = value
	end

	redef fun parse(input) do
		setup_parse
		parent.parse(input)
	end

	redef fun parse_file(system_id) do
		var source = new InputSource

		source.system_id = system_id
		parse(source)
	end


	############################################################################
	# EntityResolver

	redef fun resolve_entity(public_id, system_id) do
		if entity_resolver == null then
			return null
		else
			return entity_resolver.resolve_entity(public_id, system_id)
		end
	end


	############################################################################
	# DTDHandler

	redef fun notation_decl(name, public_id, system_id) do
		if dtd_handler != null then
			dtd_handler.notation_decl(name, public_id, system_id)
		end
	end

	redef fun unparsed_entity_decl(name, public_id, system_id) do
		if dtd_handler != null then
			dtd_handler.unparsed_entity_decl(name, public_id, system_id)
		end
	end


	############################################################################
	# ContentHandler

	redef fun document_locator=(locator) do
		if content_handler != null then
			content_handler.document_locator = locator
		end
	end

	redef fun start_document do
		if content_handler != null then
			content_handler.start_document
		end
	end

	redef fun end_document do
		if content_handler != null then
			content_handler.end_document
		end
	end

	redef fun start_prefix_mapping(prefix, uri) do
		if content_handler != null then
			content_handler.start_prefix_mapping(prefix, uri)
		end
	end

	redef fun end_prefix_mapping(prefix) do
		if content_handler != null then
			content_handler.end_prefix_mapping(prefix)
		end
	end

	redef fun start_element(uri, local_name, qname, atts) do
		if content_handler != null then
			content_handler.start_element(uri, local_name, qname, atts)
		end
	end

	redef fun end_element(uri, local_name, qname) do
		if content_handler != null then
			content_handler.end_element(uri, local_name, qname)
		end
	end

	redef fun characters(str) do
		if content_handler != null then
			content_handler.characters(str)
		end
	end

	redef fun ignorable_whitespace(str) do
		if content_handler != null then
			content_handler.ignorable_whitespace(str)
		end
	end

	redef fun processing_instruction(target, data) do
		if content_handler != null then
			content_handler.processing_instruction(target, data)
		end
	end

	redef fun skipped_entity(name) do
		if content_handler != null then
			content_handler.skipped_entity(name)
		end
	end


	############################################################################
	# ErrorHandler

	redef fun warning(exception) do
		if error_handler != null then
			error_handler.warning(exception)
		end
	end

	redef fun error(exception) do
		if error_handler != null then
			error_handler.error(exception)
		end
	end

	redef fun fatal_error(exception) do
		if error_handler != null then
			error_handler.fatal_error(exception)
		else
			exception.throw
		end
	end

	############################################################################
	# private

	# Set up before a parse.
	#
	# Before every parse, check whether the parent is
	# non-null, and re-register the filter for all of the
	# events.
	private fun setup_parse do
		assert parent_is_not_null: parent != 0 else
			sys.stderr.write("No parent for filter.")
		end
		parent.entity_resolver = self
		parent.dtd_handler = self
		parent.content_handler = self
		parent.error_handler = self
	end
end
