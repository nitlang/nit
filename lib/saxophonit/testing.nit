# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Various utilities to help testing SAXophoNit (and SAX parsers in general).
module saxophonit::testing

import sax::xml_reader
import sax::input_source
import sax::helpers::xml_filter_impl
import sax::ext::decl_handler
import sax::ext::lexical_handler
import console

# A filter that internally log events it recieves.
#
# Usually, when testing, 2 `SAXEventLogger` are used: one on which methods are
# manually called to simulate expected results, and another on which we attach
# the tested `XMLReader`. Then, we can compare logs using `diff`.
#
# Note: In order to test the `XMLReader` behaviour with ill-formed documents,
# fatal errors are not thrown by default.
#
# SEE: SAXTestSuite
class SAXEventLogger
	super XMLFilterImpl
	super DeclHandler
	super LexicalHandler

	# The logged events.
	#
	# Each entry begins with the name of the event. Entries are sorted in the
	# order they fired (the oldest first). Two event loggers have equivalent
	# logs if and only if they received the same events in the same order and
	# with equivalent arguments.
	private var log = new Array[Array[String]]

	# http://xml.org/sax/properties/declaration-handler
	private var decl_handler: nullable DeclHandler = null
	private var decl_handler_uri = "http://xml.org/sax/properties/declaration-handler"

	# http://xml.org/sax/properties/lexical-handler
	private var lexical_handler: nullable LexicalHandler = null
	private var lexical_handler_uri = "http://xml.org/sax/properties/declaration-handler"


	# Constants for diff formatting.

	# Treminal’s default formatting.
	var term_default: String = (new TermCharFormat).to_s

	# Formatting for insertions.
	var term_insertion: String =
			(new TermCharFormat).green_fg.normal_weight.to_s

	# Formatting for emphased insertions.
	var term_insertion_emphasis: String =
			(new TermCharFormat).green_fg.bold.to_s

	# Formatting for deletions.
	var term_deletion: String =
			(new TermCharFormat).red_fg.normal_weight.to_s

	# Formatting for emphased deletions
	var term_deletion_emphasis: String =
			(new TermCharFormat).red_fg.bold.to_s


	# Clear the internal log.
	fun clear_log do
		log.clear
	end

	# Show the differences between the internal logs of `self` and `expected`.
	#
	# If there is no differences, return an empty string. Else, return a string
	# designed to be printed in the terminal. In this case, `=` means “in both”,
	# `<` means “in `self`” and `>` means “in `expected`”.
	fun diff(expected: SAXEventLogger): Text do
		var buf = new FlatBuffer
		var sub_diff: Array[Int]
		var equal: Bool
		var i = 0
		var min: Int
		var max: Int

		if log.length < expected.log.length then
			equal = false
			min = log.length
			max = expected.log.length
		else if expected.log.length < log.length then
			equal = false
			min = expected.log.length
			max = log.length
		else
			equal = true
			min = log.length
			max = log.length
		end

		while i < min do
			sub_diff = diff_entry(log[i], expected.log[i])
			if sub_diff.length > 0 then
				if equal then
					diff_append_matches(buf, log, [0..i[)
					equal = false
				end
				diff_append_deletion(buf, log, i, sub_diff)
				diff_append_insertion(buf, expected.log, i, sub_diff)
			else if not equal then
				diff_append_matches(buf, log, [i..i])
			end
			i += 1
		end
		if log.length < expected.log.length then
			while i < max do
				diff_append_insertion(buf, expected.log, i,
						[0..(expected.log[i].length)[)
				i += 1
			end
		else
			while i < max do
				diff_append_deletion(buf, log, i, [0..(log[i].length)[)
				i += 1
			end
		end
		return buf
	end

	# Return the list of positions where `actual` and `expected` mismatch.
	#
	# Indexes are in ascending order.
	private fun diff_entry(actual: Array[String], expected: Array[String]):
			Array[Int] do
		var result = new Array[Int]
		var i = 0
		var min: Int
		var max: Int

		if actual.length < expected.length then
			min = actual.length
			max = expected.length
		else if expected.length < actual.length then
			min = expected.length
			max = actual.length
		else
			min = actual.length
			max = actual.length
		end

		while i < min do
			if expected[i] != actual[i] then
				result.push(i)
			end
			i += 1
		end
		result.insert_all([i..max[, result.length)
		return result
	end

	# Append matches to the diff.
	#
	# Parameters:
	#
	# * `buf`: buffer for the diff.
	# * `log`: original log.
	# * `range`: range to append to the diff.
	private fun diff_append_matches(buf: Buffer, log: Array[Array[String]],
			range: Range[Int]) do
		for i in range do
			buf.append("= {i}|{log[i].join("; ")}\n")
		end
	end

	# Append a deletion to the diff.
	#
	# Parameters:
	#
	# * `buf`: buffer for the diff.
	# * `log`: log that contains the deleted entry.
	# * `entry_index`: index of the deleted entry in `log`.
	# * `sorted_mismatches`: sorted list of indexes of the items to emphasize
	# in the specified entry.
	private fun diff_append_deletion(buf: Buffer, log: Array[Array[String]],
			entry_index: Int, sorted_mismatches: Collection[Int]) do
		buf.append(term_deletion)
		buf.append("< {entry_index}|")
		diff_append_mismatch_entry(buf, log[entry_index], sorted_mismatches,
			term_deletion, term_deletion_emphasis)
		buf.append(term_default)
		buf.append("\n")
	end

	# Append a insertion to the diff.
	#
	# Parameters:
	#
	# * `buf`: buffer for the diff.
	# * `log`: log that contains the inserted entry.
	# * `entry_index`: index of the inserted entry in `log`.
	# * `sorted_mismatches`: sorted list of indexes of the items to emphasize
	# in the specified entry.
	private fun diff_append_insertion(buf: Buffer, log: Array[Array[String]],
			entry_index: Int, sorted_mismatches: Collection[Int]) do
		buf.append(term_insertion)
		buf.append("> {entry_index}|")
		diff_append_mismatch_entry(buf, log[entry_index], sorted_mismatches,
			term_insertion, term_insertion_emphasis)
		buf.append(term_default)
		buf.append("\n")
	end

	# Show an entry of a mismatch (without the margin).
	#
	# Append the string designed to be printed in the terminal to the
	# specified buffer.
	#
	# Parameters:
	#
	# * `buf`: output buffer.
	# * `entry`: entry to format.
	# * `sorted_mismatches`: sorted list of indexes of the items to emphasize.
	# * `term_normal`: terminal control code to re-apply the formatting that was
	# in force prior calling this method.
	# * `term_emphasis`: terminal control code to apply to items listed in
	# `sorted_mismatches`.
	private fun diff_append_mismatch_entry(buf: Buffer, entry: Array[String],
			sorted_mismatches: Collection[Int], term_normal: String,
			term_emphasis: String) do
		var i = 0
		var j = sorted_mismatches.iterator
		var length = entry.length

		while i < length do
			while j.is_ok and j.item < i do
				j.next
			end
			if j.is_ok and j.item == i then
				buf.append(term_emphasis)
				buf.append(entry[i])
				buf.append(term_normal)
			else
				buf.append(entry[i])
			end
			i += 1
			if i < length then
				buf.append("; ")
			end
		end
	end

	############################################################################
	# XMLReader

	redef fun property(name) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Property: {name}\n")
		end
		if decl_handler_uri == name then
			assert property_readable: property_readable(name) else
				sys.stderr.write("Property: {name}\n")
			end
			return decl_handler
		else if lexical_handler_uri == name then
			assert property_readable: property_readable(name) else
				sys.stderr.write("Property: {name}\n")
			end
			return lexical_handler
		else
			return parent.property(name)
		end
	end

	redef fun property=(name, value) do
		assert sax_recognized: parent != null else
			sys.stderr.write("Property: {name}\n")
		end
		if decl_handler_uri == name then
			assert property_readable: property_writable(name) else
				sys.stderr.write("Property: {name}\n")
			end
			decl_handler = value.as(nullable DeclHandler)
		else if lexical_handler_uri == name then
			assert property_readable: property_writable(name) else
				sys.stderr.write("Property: {name}\n")
			end
			lexical_handler = value.as(nullable LexicalHandler)
		else
			parent.property(name) = value
		end
	end

	redef fun parse(input) do
		assert parent_is_not_null: parent != 0 else
			sys.stderr.write("No parent for filter.")
		end
		if parent.feature_writable(decl_handler_uri) then
			parent.property(decl_handler_uri) = self
		end
		if parent.feature_writable(lexical_handler_uri) then
			parent.property(lexical_handler_uri) = self
		end
		super
	end


	############################################################################
	# EntityResolver

	redef fun resolve_entity(public_id, system_id) do
		log.push(["resolve_entity",
				public_id or else "^NULL",
				system_id or else "^NULL"])
		return super
	end


	############################################################################
	# DTDHandler

	redef fun notation_decl(name, public_id, system_id) do
		log.push(["notation_decl", name, public_id, system_id])
		super
	end

	redef fun unparsed_entity_decl(name, public_id, system_id) do
		log.push(["unparsed_entity_decl", name, public_id, system_id])
		super
	end


	############################################################################
	# ContentHandler

	redef fun document_locator=(locator) do
		log.push(["document_locator=",
				locator.public_id or else "^NULL",
				locator.system_id or else "^NULL",
				locator.line_number.to_s,
				locator.column_number.to_s])
		super
	end

	redef fun start_document do
		log.push(["start_document"])
		super
	end

	redef fun end_document do
		log.push(["end_document"])
		super
	end

	redef fun start_prefix_mapping(prefix, uri) do
		log.push(["start_prefix_mapping", prefix, uri])
		super
	end

	redef fun end_prefix_mapping(prefix) do
		log.push(["end_prefix_mapping", prefix])
		super
	end

	redef fun start_element(uri, local_name, qname, atts) do
		var entry = new Array[String]
		var i = 0
		var length = atts.length

		entry.push("start_element")
		entry.push(uri)
		entry.push(local_name)
		entry.push(qname)
		while i < length do
			entry.push(atts.uri(i) or else "^NULL")
			entry.push(atts.local_name(i) or else "^NULL")
			entry.push(atts.qname(i) or else "^NULL")
			entry.push(atts.type_of(i) or else "^NULL")
			entry.push(atts.value_of(i) or else "^NULL")
			i += 1
		end
		log.push(entry)
		super
	end

	redef fun end_element(uri, local_name, qname) do
		log.push(["end_element", uri, local_name, qname])
		super
	end

	redef fun characters(str) do
		log.push(["characters", str])
		super
	end

	redef fun ignorable_whitespace(str) do
		log.push(["ignorable_witespace", str])
		super
	end

	redef fun processing_instruction(target, data) do
		log.push(["processing_instruction", target, data or else "^NULL"])
		super
	end

	redef fun skipped_entity(name) do
		log.push(["skipped_entity", name])
		super
	end


	############################################################################
	# ErrorHandler

	redef fun warning(exception) do
		log.push(["warning", exception.full_message])
		super
	end

	redef fun error(exception) do
		log.push(["error", exception.full_message])
		super
	end

	redef fun fatal_error(exception) do
		log.push(["fatal_error", exception.full_message])
		if error_handler != null then
			error_handler.fatal_error(exception)
		end
	end


	############################################################################
	# DeclHandler

	redef fun element_decl(name, model) do
		log.push(["element_decl", name, model])
		if decl_handler != null then
			decl_handler.element_decl(name, model)
		end
	end

	redef fun attribute_decl(element_name, attribute_name, attribute_type, mode, value) do
		log.push(["attribute_decl",
				element_name,
				attribute_name,
				attribute_type,
				mode or else "^NULL",
				value or else "^NULL"])
		if decl_handler != null then
			decl_handler.attribute_decl(element_name, attribute_name,
					attribute_type, mode, value)
		end
	end

	redef fun internal_entity_decl(name, value) do
		log.push(["internal_entity_decl", name, value])
		if decl_handler != null then
			decl_handler.internal_entity_decl(name, value)
		end
	end

	redef fun external_entity_decl(name, value) do
		log.push(["external_entity_decl", name, value])
		if decl_handler != null then
			decl_handler.external_entity_decl(name, value)
		end
	end


	############################################################################
	# LexicalHandler

	redef fun start_dtd(name, public_id, system_id) do
		log.push(["start_dtd", name,
				public_id or else "^NULL",
				system_id or else "^NULL"])
		if lexical_handler != null then
			lexical_handler.start_dtd(name, public_id, system_id)
		end
	end

	redef fun end_dtd do
		log.push(["end_dtd"])
		if lexical_handler != null then
			lexical_handler.end_dtd
		end
	end

	redef fun start_entity(name) do
		log.push(["start_entity", name])
		if lexical_handler != null then
			lexical_handler.start_entity(name)
		end
	end

	redef fun end_entity(name) do
		log.push(["end_entity", name])
		if lexical_handler != null then
			lexical_handler.end_entity(name)
		end
	end

	redef fun start_cdata do
		log.push(["start_cdata"])
		if lexical_handler != null then
			lexical_handler.start_cdata
		end
	end

	redef fun end_cdata do
		log.push(["end_cdata"])
		if lexical_handler != null then
			lexical_handler.end_cdata
		end
	end

	redef fun comment(str) do
		log.push(["comment", str])
		if lexical_handler != null then
			lexical_handler.comment(str)
		end
	end
end


# Base class for test suites on a SAX reader.
abstract class SAXTestSuite

	# Logger of the expected event sequence.
	var expected = new SAXEventLogger

	# Logger of the actual event sequence.
	var actual = new SAXEventLogger

	# The tested SAX reader.
	var reader: XMLReader is noinit

	private var init_done: Bool = false

	fun before_test is before do
		if not init_done then
			reader = create_reader
			actual.parent = reader
			init_done = true
		end
		reader.feature("http://xml.org/sax/features/namespaces") = true
		reader.feature("http://xml.org/sax/features/namespace-prefixes") = false
		expected.clear_log
		actual.clear_log
	end

	# Create a new SAX reader.
	#
	# This method is called at initialization to set `reader`.
	fun create_reader: XMLReader is abstract

	# Assert logs are equal.
	fun assert_equals do
		var diff = actual.diff(expected)

		assert equals: diff.length <= 0 else
			sys.stderr.write("\n")
			sys.stderr.write("# {actual.term_deletion}< Actual{actual.term_default}\n")
			sys.stderr.write("# {actual.term_insertion}> Expected{actual.term_default}\n")
			sys.stderr.write(diff)
			sys.stderr.write("\n")
		end
	end

	# Make the reader parse the specified string
	fun parse_string(str: String) do
		actual.parse(new InputSource.with_stream(new StringReader(str)))
	end
end
