# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Tests for SAXophoNit
module test_saxophonit is test

import sax::helpers::sax_locator_impl
import sax::helpers::attributes_impl
import saxophonit
import saxophonit::testing

class TestSaxophonit
	super SAXTestSuite
	test

	redef fun create_reader do return new XophonReader

	fun test_empty is test do
		before_test
		parse_string("<foo />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_simple_element is test do
		before_test
		parse_string("<foo>bar</foo>")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.characters("bar")
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_type_mismatch is test do
		before_test
		parse_string("<a></b>")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "a", "a", new AttributesImpl)
		expected.fatal_error(new SAXParseException.with_info(
				"The type in the closing tag (`b`) does not match the type " +
				"in the opening tag (`a`).", null, null, 1, 8))
		expected.end_document
		assert_equals
	end

	fun test_attributes is test do
		var atts = new AttributesImpl

		before_test
		parse_string("<foo bar=\"baz\" answer='&amp;42' />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		atts.add("", "bar", "bar", "CDATA", "baz")
		atts.add("", "answer", "answer", "CDATA", "&42")
		expected.start_element("", "foo", "foo", atts)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_nested is test do
		var atts = new AttributesImpl

		before_test
		parse_string("<foo><bar /><a>b</a></foo>")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", atts)
		expected.start_element("", "bar", "bar", atts)
		expected.end_element("", "bar", "bar")
		expected.start_element("", "a", "a", atts)
		expected.characters("b")
		expected.end_element("", "a", "a")
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_xmldecl is test do
		before_test
		parse_string("<?xml version='1.0'?><foo />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_xmldecl_encoding is test do
		before_test
		parse_string("<?xml version=\"1.0\" encoding='utf-8'?><foo />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_xmldecl_standalone is test do
		before_test
		parse_string("<?xml version='1.0' standalone=\"yes\"?><foo />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_xmldecl_both is test do
		before_test
		parse_string("<?xml version='1.0' encoding='utf-8' standalone=\"yes\"?><foo />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_reference_builtin is test do
		before_test
		parse_string("<foo>&amp;&quot;&apos;&lt;&gt;&#48;&#x30;&#x03A;</foo>")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.characters("&")
		expected.characters("\"")
		expected.characters("'")
		expected.characters("<")
		expected.characters(">")
		expected.characters("0")
		expected.characters("0")
		expected.characters(":")
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_comments is test do
		# TODO For the moment, comments are simply ignored.
		before_test
		parse_string("<!-- I--><foo>bar<!--l-i-k-e--></foo><!--comments    -->")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", new AttributesImpl)
		expected.characters("bar")
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end

	fun test_ns_simple is test do
		before_test
		parse_string("<foo:bar xmlns:foo='https://s.exemple.org' />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_prefix_mapping("foo", "https://s.exemple.org")
		expected.start_element("https://s.exemple.org", "bar", "foo:bar", new AttributesImpl)
		expected.end_element("https://s.exemple.org", "bar", "foo:bar")
		expected.end_document
		assert_equals
	end

	fun test_ns_prefix is test do
		var atts = new AttributesImpl

		before_test
		actual.feature("http://xml.org/sax/features/namespace-prefixes") = true
		parse_string("<foo:bar xmlns:foo='https://s.exemple.org' />")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_prefix_mapping("foo", "https://s.exemple.org")
		atts.add("http://www.w3.org/xmlns/2000/", "foo", "xmlns:foo", "CDATA", "https://s.exemple.org")
		expected.start_element("https://s.exemple.org", "bar", "foo:bar", atts)
		expected.end_element("https://s.exemple.org", "bar", "foo:bar")
		expected.end_document
		assert_equals
	end

	fun test_mixed is test do
		var atts = new AttributesImpl

		# TODO For the moment, ignorable white space is not detected.
		before_test
		parse_string("<foo>  \r\n\n<bar>  baz  </bar></foo>")
		expected.document_locator = new SAXLocatorImpl
		expected.start_document
		expected.start_element("", "foo", "foo", atts)
		expected.characters("  \n\n")
		expected.start_element("", "bar", "bar", atts)
		expected.characters("  baz  ")
		expected.end_element("", "bar", "bar")
		expected.end_element("", "foo", "foo")
		expected.end_document
		assert_equals
	end
end
