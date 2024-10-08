# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Test suite for `attributes_impl`.
module test_attributes_impl is test

import sax::helpers::attributes_impl

class TestAttributesImpl
	test

	private fun sample: AttributesImpl do
		var subject = new AttributesImpl

		# The parser may include everything...
		subject.add("http://example.com/", "bar", "foo:bar", "CDATA", "baz")
		# ... or omit the `qname`...
		subject.add("urn:is:not:often:used", "i-am_ME", "", "ID", "noop")
		# ... or retrieve an attribute with an empty value (that *must* be kept intact)...
		subject.add("http://www.w3.org/XML/1998/namespace", "lang", "xml:lang",
				"NMTOKEN", "")
		# ... or omit to process the namespace.
		subject.add("", "", "xml:space", "NMTOKEN", "default")
		return subject
	end

	fun test_length is test do
		var subject = new AttributesImpl

		assert 0 == subject.length
		subject.add("http://example.com/", "bar", "foo:bar", "CDATA", "baz")
		assert 1 == subject.length
		subject.add("http://example.com/", "bar", "foo:bar", "CDATA", "baz")
		assert 2 == subject.length
		subject.clear
		assert 0 == subject.length
		# Clearing twice must not produce erroneous data.
		subject.clear
		assert 0 == subject.length
	end

	fun test_uri is test do
		var subject = sample

		assert "http://example.com/" == subject.uri(0)
		assert "urn:is:not:often:used" == subject.uri(1)
		assert "http://www.w3.org/XML/1998/namespace" == subject.uri(2)
		assert "" == subject.uri(3)
		assert subject.uri(4) == null
		assert subject.uri(-1) == null
		subject.clear
		assert subject.uri(0) == null
	end

	fun test_local_name is test do
		var subject = sample

		assert "bar" == subject.local_name(0)
		assert "i-am_ME" == subject.local_name(1)
		assert "lang" == subject.local_name(2)
		assert "" == subject.local_name(3)
		assert subject.local_name(4) == null
		assert subject.local_name(-1) == null
		subject.clear
		assert subject.local_name(0) == null
	end

	fun test_qname is test do
		var subject = sample

		assert "foo:bar" == subject.qname(0)
		assert "" == subject.qname(1)
		assert "xml:lang" == subject.qname(2)
		assert "xml:space" == subject.qname(3)
		assert subject.qname(4) == null
		assert subject.qname(-1) == null
		subject.clear
		assert subject.qname(0) == null
	end

	fun test_type_of is test do
		var subject = sample

		assert "CDATA" == subject.type_of(0)
		assert "ID" == subject.type_of(1)
		assert "NMTOKEN" == subject.type_of(2)
		assert "NMTOKEN" == subject.type_of(3)
		assert subject.type_of(4) == null
		assert subject.type_of(-1) == null
		subject.clear
		assert subject.type_of(0) == null
	end

	fun test_type_of_qname is test do
		var subject = sample

		assert "CDATA" == subject.type_of("foo:bar")
		assert subject.type_of("") == null
		assert "NMTOKEN" == subject.type_of("xml:lang")
		assert "NMTOKEN" == subject.type_of("xml:space")
		assert subject.type_of("bob") == null
		subject.clear
		assert subject.type_of("xml:lang") == null
	end

	fun test_value_of is test do
		var subject = sample

		assert "baz" == subject.value_of(0)
		assert "noop" == subject.value_of(1)
		assert "" == subject.value_of(2)
		assert "default" == subject.value_of(3)
		assert subject.value_of(4) == null
		assert subject.value_of(-1) == null
		subject.clear
		assert subject.value_of(0) == null
	end

	fun test_value_of_qname is test do
		var subject = sample

		assert "baz" == subject.value_of("foo:bar")
		assert subject.value_of("") == null
		assert "" == subject.value_of("xml:lang")
		assert "default" == subject.value_of("xml:space")
		assert subject.value_of("bob") == null
		subject.clear
		assert subject.value_of("xml:lang") == null
	end

	fun test_index_ns is test do
		var subject = sample

		assert 0 == subject.index_ns("http://example.com/", "bar")
		assert 1 == subject.index_ns("urn:is:not:often:used", "i-am_ME")
		assert 2 == subject.index_ns("http://www.w3.org/XML/1998/namespace", "lang")
		assert -1 == subject.index_ns("", "")
		assert -1 == subject.index_ns("http://www.w3.org/XML/1998/namespace", "space")
		subject.clear
		assert -1 == subject.index_ns("http://example.com/", "bar")
	end

	fun test_index_of is test do
		var subject = sample

		assert 0 == subject.index_of("foo:bar")
		assert -1 == subject.index_of("")
		assert 2 == subject.index_of("xml:lang")
		assert 3 == subject.index_of("xml:space")
		assert -1 == subject.index_of("i-am_ME")
		subject.clear
		assert -1 == subject.index_of("foo:bar")
	end

	fun test_type_ns is test do
		var subject = sample

		assert "CDATA" == subject.type_ns("http://example.com/", "bar")
		assert "ID" == subject.type_ns("urn:is:not:often:used", "i-am_ME")
		assert "NMTOKEN" == subject.type_ns("http://www.w3.org/XML/1998/namespace", "lang")
		assert subject.type_ns("", "") == null
		assert subject.type_ns("http://www.w3.org/XML/1998/namespace", "space") == null
		subject.clear
		assert subject.type_ns("http://example.com/", "bar") == null
	end

	fun test_value_ns is test do
		var subject = sample

		assert "baz" == subject.value_ns("http://example.com/", "bar")
		assert "noop" == subject.value_ns("urn:is:not:often:used", "i-am_ME")
		assert "" == subject.value_ns("http://www.w3.org/XML/1998/namespace", "lang")
		assert subject.value_ns("", "") == null
		assert subject.value_ns("http://www.w3.org/XML/1998/namespace", "space") == null
		subject.clear
		assert subject.value_ns("http://example.com/", "bar") == null
	end

	fun test_attributes_set is test do
		var subject = sample
		var subject2 = new AttributesImpl

		subject.attributes = subject2
		assert subject.length == 0
		subject2 = sample
		subject.attributes = subject2
		assert subject.length == 4
	end

	fun test_set is test do
		var subject = sample

		subject.set(1, "urn:is:not:often:used", "i-am_ME", "i-am_ME", "ID",
				"noop")
		assert "i-am_ME" == subject.qname(1)
		subject.set(0, "http://example.com/", "bar", "foo:bar", "NMTOKENS", "baz")
		assert "NMTOKENS" == subject.type_of(0)
	end

	fun test_remove_at is test do
		var subject = sample

		subject.remove_at(1)
		assert 3 == subject.length
		assert "xml:lang" == subject.qname(1)
	end

	fun test_uri_set is test do
		var subject = sample

		subject.uri(0) = "https://example.org/serious"
		subject.uri(1) = "ftp://wat"
		assert "ftp://wat" == subject.uri(1)
		assert "https://example.org/serious" == subject.uri(0)
	end

	fun test_local_name_set is test do
		var subject = sample

		subject.local_name(0) = "trololol"
		subject.local_name(1) = "ImYou42"
		assert "trololol" == subject.local_name(0)
		assert "ImYou42" == subject.local_name(1)
	end

	fun test_qname_set is test do
		var subject = sample

		subject.qname(0) = "go-to:bar"
		subject.qname(1) = "yo:i-am_ME"
		assert "go-to:bar" == subject.qname(0)
		assert "yo:i-am_ME" == subject.qname(1)
	end

	fun test_type_of_set is test do
		var subject = sample

		subject.type_of(0) = "NMTOKENS"
		subject.type_of(1) = "ENTITY"
		assert "NMTOKENS" == subject.type_of(0)
		assert "ENTITY" == subject.type_of(1)
	end

	fun test_value_of_set is test do
		var subject = sample

		subject.value_of(0) = "buz"
		subject.value_of(1) = "bizzz"
		assert "buz" == subject.value_of(0)
		assert "bizzz" == subject.value_of(1)
	end
end
