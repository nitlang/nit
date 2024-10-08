# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Reader’s model.
module saxophonit::reader_model

import sax
import sax::helpers::sax_locator_impl
import sax::helpers::attributes_impl
import sax::helpers::namespace_support

# Reader’s model.
#
# Handle event dispatching, settings and internal state.
class XophonReaderModel

	# Stack of the current element type qname and of the qnames of the ancestors.
	#
	# Current element is at the peek, the root element is at the bottom.
	# Used to check if end tags match start tags.
	private var element_path = new Array[XmlName]

	# Current element’s attributes
	private var atts = new AttributesImpl

	private var ns = new NamespaceSupport

	# Regular expression to match a `Name` against the `QName` production of
	# “Namespaces in XML”.
	private var qname_re: Regex = "^[^:]+(:[^:]+)?$".to_re

	# The locator that is used to indicate the current location.
	var locator: nullable SAXLocatorImpl = null is writable


	# TODO: Handle these features.

	private var features: Map[String, Bool] = new HashMap[String, Bool]

	# SEE: `sax`
	var feature_namespaces_uri =
			"http://xml.org/sax/features/namespaces"

	# SEE: `sax`
	var feature_namespace_prefixes_uri =
			"http://xml.org/sax/features/namespace-prefixes"


	# SEE: `sax::XMLReader.entity_resolver`
	var entity_resolver: nullable EntityResolver = null is writable

	# SEE: `sax::XMLReader.dtd_handler`
	var dtd_handler: nullable DTDHandler = null is writable

	# SEE: `sax::XMLReader.content_handler`
	var content_handler: nullable ContentHandler = null is writable

	# SEE: `sax::XMLReader.error_handler`
	var error_handler: nullable ErrorHandler = null is writable


	init do
		qname_re.optimize_has = true
		features[feature_namespaces_uri] = true
		features[feature_namespace_prefixes_uri] = false
	end

	# SEE: `sax::XMLReader.feature_recognized`
	fun feature_recognized(name: String): Bool do
		return features.keys.has(name)
	end

	# SEE: `sax::XMLReader.feature_readable`
	fun feature_readable(name: String): Bool do
		return features.keys.has(name)
	end

	# SEE: `sax::XMLReader.feature_writable`
	fun feature_writable(name: String): Bool do
		return features.keys.has(name)
	end

	# SEE: `sax::XMLReader.feature`
	fun feature(name: String): Bool do
		assert feature_recognized: feature_recognized(name)
		return features[name]
	end

	# SEE: `sax::XMLReader.feature=`
	fun feature=(name: String, value: Bool) do
		assert feature_recognized: feature_recognized(name)
		if name == feature_namespaces_uri then
			assert legal_state: value or features[feature_namespace_prefixes_uri] else
				sys.stderr.write("At least one of <{feature_namespaces_uri}> or <{feature_namespace_prefixes_uri}> must be true.\n")
			end
		else if name == feature_namespace_prefixes_uri then
			assert legal_state: value or features[feature_namespaces_uri] else
				sys.stderr.write("At least one of <{feature_namespaces_uri}> or <{feature_namespace_prefixes_uri}> must be true.\n")
			end
		end
		features[name] = value
	end

	# SEE: `sax::XMLReader.property_recognized`
	fun property_recognized(name: String): Bool do return false

	# SEE: `sax::XMLReader.property_readable`
	fun property_readable(name: String): Bool do return false

	# SEE: `sax::XMLReader.property_writable`
	fun property_writable(name: String): Bool do return false

	# SEE: `sax::XMLReader.property`
	fun property(name: String): nullable Object do
		assert property_recognized: false
		return null
	end

	# SEE: `sax::XMLReader.property=`
	fun property=(name: String, value: nullable Object) do
		assert property_recognized: false
	end

	# Is the root element closed?
	fun root_closed: Bool do return element_path.length <= 0

	# Expect the root element is closed.
	fun expect_root_closed: Bool do
		if root_closed then
			return true
		else if element_path.length > 1 then
			return fire_fatal_error("Reached the end of the file with " +
					"{element_path.length.to_s} open elements.", null)
		else
			return fire_fatal_error("Reached the end of the file with an " +
					"open element.", null)
		end
	end


	###########################################################################
	# Dispatching

	# Set the document locator of the content handler, if needed.
	fun fire_document_locator do
		if content_handler != null then
			content_handler.document_locator = locator.as(not null)
		end
	end

	# Fire the start of the document.
	fun fire_start_document do
		if content_handler != null then
			content_handler.start_document
		end
		ns.reset
	end

	# Fire the end of the document.
	fun fire_end_document do
		if content_handler != null then
			content_handler.end_document
		end
	end

	# Fire the start of an attribute list.
	fun fire_start_attributes do
		atts.clear
		ns.push_context
	end

	# Fire the appearance of an attribute.
	fun fire_attribute(qname: String, value: String) do
		if "xmlns" == qname or qname.has_prefix("xmlns:") then
			var prefix = qname.substring_from("xmlns:".length)

			if not prefix.has(":") then
				fire_start_prefix_mapping(prefix, value)
				if not feature(feature_namespace_prefixes_uri) then return
			end
		end
		# TODO: Types.
		atts.add("", "", qname, "CDATA", value)
	end

	# Fire the start of an element.
	fun fire_start_element(name: String) do
		var parts = ["", "", ""]

		for i in [0..atts.length[ do
			set_attribute_ns(i)
		end
		process_name(name, parts, false)
		element_path.push(new XmlName(parts[0], parts[1], parts[2]))
		if content_handler != null then
			content_handler.start_element(parts[0], parts[1], parts[2], atts)
		end
	end

	# Now prefixes are mapped, set the expanded name of the attribute at `index`.
	private fun set_attribute_ns(index: Int) do
		var name = ["", "", ""]

		process_name(atts.qname(index).as(not null), name, true)
		atts.uri(index) = name[0]
		atts.local_name(index) = name[1]
	end

	# Like `ns.process_name`, but with error handling.
	private fun process_name(qname: String, parts: Array[String],
			is_attribute: Bool) do
		if qname.has(qname_re) then
			if ns.process_name(qname, parts, is_attribute) == null then
				fire_error("The namespace IRI of `{qname}` was not found in " +
						"this scope. Passing the original name as the local " +
						"name.", null)
				parts = ["", qname, qname]
			end
		else
			fire_error("The name `{qname}` contains more than one colon. " +
					"Passing the original name as the local name.", null)
			parts = ["", qname, qname]
		end
	end

	# Fire the end of an element.
	#
	# Return `true` on success.
	fun fire_end_element(name: String):Bool do
		var peek_name = element_path.last

		if peek_name.qname == name then
			element_path.pop
			if content_handler != null then
				content_handler.end_element(peek_name.uri,
						peek_name.local_name, peek_name.qname)
			end
			return true
		else
			fire_fatal_error("The type in the closing tag (`{name}`) does " +
					"not match the type in the opening tag " +
					"(`{element_path.last.qname}`).", null)
			return false
		end
	end

	# Fire the start of a mapping between `prefix` and `uri`.
	private fun fire_start_prefix_mapping(prefix: String, uri: String) do
		if not ns.declare_prefix(prefix, uri) then
			fire_error("The mapping between the prefix `{prefix}` and " +
					"the namespace IRI `{uri}` breaks a built-in " +
					"mapping. Ignoring the declaration.", null)
		end
		if content_handler != null then
			content_handler.start_prefix_mapping(prefix, uri)
		end
	end

	# Fire the end of the current mapping of `prefix`.
	private fun end_prefix_mapping(prefix: String) do
		if content_handler != null then
			content_handler.end_prefix_mapping(prefix)
		end
	end

	# Fire the appearance of a comment.
	fun fire_comment(content: String) do
		# TODO
	end

	# Fire the appearance of a processing instruction.
	fun fire_processing_instruction(target: String, data: nullable String) do
		if content_handler != null then
			content_handler.processing_instruction(target, data)
		end
	end

	# Fire the start of a `CDATA` section.
	fun fire_start_cdata do
		# TODO
	end

	# Fire the end of a `CDATA` section.
	fun fire_end_cdata do
		# TODO
	end

	# Fire the appearance of a text node.
	fun fire_characters(str: String) do
		if content_handler != null then
			content_handler.characters(str)
		end
	end

	private fun exception(message: String, cause: nullable Error):
			SAXParseException do
		var e: SAXParseException

		if locator == null then
			e = new SAXParseException(message)
		else
			e = new SAXParseException.with_locator(message, locator.as(not null))
		end
		e.cause = cause
		return e
	end

	# Fire a fatal error with the specified message and cause.
	#
	# Return `false`.
	fun fire_fatal_error(message: String, cause: nullable Error):Bool do
		var e = exception(message, cause)

		if error_handler == null then
			e.throw
		else
			error_handler.fatal_error(e)
		end
		return false
	end

	# Fire an error with the specified message and cause.
	fun fire_error(message: String, cause: nullable Error) do
		var e = exception(message, cause)

		if error_handler != null then
			error_handler.error(e)
		end
	end

	# Fire a warning with the specified message and cause.
	fun fire_warning(message: String, cause: nullable Error) do
		var e = exception(message, cause)

		if error_handler != null then
			error_handler.warning(e)
		end
	end
end

# An XML expanded name.
private class XmlName
	# Namespace IRI or `""`.
	var uri: String

	# Local name or `""`.
	var local_name: String

	# Original qualified name.
	var qname: String
end
