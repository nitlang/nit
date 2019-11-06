# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Test suite for `namespace_support`.
module test_namespace_support is test

import sax::helpers::namespace_support

class TestNamespaceSupport
	test

	private fun sample: NamespaceSupport do
		var subject = new NamespaceSupport

		subject.push_context
		subject.declare_prefix("", "http://www.w3.org/1999/xhtml")
		subject.declare_prefix("dc", "http://www.purl.org/dc#")
		return subject
	end

	fun test_reset is test do
		var subject = sample

		subject.reset
		assert subject.xmlns == subject.uri("xml")
		assert subject.nsdecl == subject.uri("xmlns")
		assert subject.prefix("http://www.w3.org/1999/xhtml") == null
		assert 2 == subject.declared_prefixes.length
		assert 2 == subject.prefixes.length
	end

	fun test_push_context_override_default is test do
		var subject = sample

		subject.push_context
		subject.declare_prefix("", "this:is:a:test")
		assert "this:is:a:test" == subject.uri("")
		assert "http://www.purl.org/dc#" == subject.uri("dc")
		assert subject.xmlns == subject.uri("xml")
		assert subject.nsdecl == subject.uri("xmlns")
		assert subject.prefix("http://www.w3.org/1999/xhtml") == null
		assert 1 == subject.declared_prefixes.length
		assert 3 == subject.prefixes.length
	end

	fun test_push_context_override_dc is test do
		var subject = sample

		subject.push_context
		subject.declare_prefix("dc", "this:is:a:test")
		assert "this:is:a:test" == subject.uri("dc")
		assert "http://www.w3.org/1999/xhtml" == subject.uri("")
		assert subject.xmlns == subject.uri("xml")
		assert subject.prefix("http://www.purl.org/dc#") == null
		assert 1 == subject.declared_prefixes.length
		assert 3 == subject.prefixes.length
	end

	fun test_push_context_undeclare is test do
		var subject = sample

		subject.push_context
		subject.declare_prefix("dc", "")
		assert subject.uri("dc") == null
		assert 1 == subject.declared_prefixes.length
		assert 2 == subject.prefixes.length
	end

	fun test_pop_context is test do
		var subject = sample

		subject.pop_context
		assert subject.xmlns == subject.uri("xml")
		assert subject.prefix("http://www.w3.org/1999/xhtml") == null
		assert 2 == subject.declared_prefixes.length
		assert 2 == subject.prefixes.length
	end

	#fun test_declare_prefix # SEE: test_push_context_*

	fun test_process_name is test do
		var subject = sample
		var parts = new Array[String]

		assert ["http://www.w3.org/1999/xhtml", "p", "p"] == subject.process_name("p", parts, false)
		assert ["", "p", "p"] == subject.process_name("p", parts, true)
		assert ["http://www.purl.org/dc#", "title", "dc:title"] == subject.process_name("dc:title", parts, false)
		assert ["http://www.purl.org/dc#", "title", "dc:title"] == subject.process_name("dc:title", parts, true)
		assert [subject.xmlns, "lang", "xml:lang"] == subject.process_name("xml:lang", parts, false)
		assert ["http://www.w3.org/1999/xhtml", "p", ":p"] == subject.process_name(":p", parts, false)
		assert ["", "p", ":p"] == subject.process_name(":p", parts, true)
		assert subject.process_name("foo:bar", parts, false) == null
		assert subject.process_name("foo:bar", parts, true) == null
		subject.pop_context
		assert ["", "p", "p"] == subject.process_name("p", parts, false)
		assert ["", "p", "p"] == subject.process_name("p", parts, true)
	end

	fun test_process_name_xmlns is test do
		var subject = sample
		var parts = new Array[String].with_capacity(3)

		assert [subject.nsdecl, "", "xmlns"] == subject.process_name("xmlns", parts, true)
		assert ["http://www.w3.org/1999/xhtml", "xmlns", "xmlns"] == subject.process_name("xmlns", parts, false)
	end

	fun test_declare_prefix_illegal is test do
		var subject = sample

		assert not subject.declare_prefix("xml", "http://example.org")
		assert not subject.declare_prefix("xmlns", "http://www2.example.org")
		assert not subject.declare_prefix("foo", subject.xmlns)
		assert not subject.declare_prefix("bar", subject.nsdecl)
		assert 2 == subject.declared_prefixes.length
	end

	fun test_uri is test do
		var subject = sample

		assert "http://www.w3.org/1999/xhtml" == subject.uri("")
		assert "http://www.purl.org/dc#" == subject.uri("dc")
		assert subject.xmlns == subject.uri("xml")
		assert subject.uri("foo") == null
	end

	fun test_prefixes is test do
		var res = sample.prefixes

		assert 3 == res.length else
			sys.stderr.write("Expected 3; got {res.length}.\n")
		end
		assert res.has("dc")
		assert res.has("xml")
		assert res.has("xmlns")
	end

	fun test_prefix is test do
		var subject = sample

		assert subject.prefix("http://www.w3.org/1999/xhtml") == null
		assert "dc" == subject.prefix("http://www.purl.org/dc#")
		assert "xml" == subject.prefix(subject.xmlns)
		assert subject.prefix("https://example.org/serious") == null
	end

	fun test_prefixes_of is test do
		var subject = sample
		var res: Collection[String]

		assert new Array[String] == subject.prefixes_of("http://www.w3.org/1999/xhtml")
		assert ["dc"] == subject.prefixes_of("http://www.purl.org/dc#")
		assert ["xml"] == subject.prefixes_of(subject.xmlns)
		assert new Array[String] == subject.prefixes_of("https://example.org/serious")
		subject.declare_prefix("html", "http://www.w3.org/1999/xhtml")
		assert ["html"] == subject.prefixes_of("http://www.w3.org/1999/xhtml")
		subject.declare_prefix("dc2", "http://www.purl.org/dc#")
		res = subject.prefixes_of("http://www.purl.org/dc#")
		assert 2 == res.length else
			sys.stderr.write("Expected 2; got {res.length}.\n")
		end
		assert res.has_all(["dc", "dc2"])
	end

	fun test_declared_prefixes is test do
		var res = sample.declared_prefixes

		assert 2 == res.length else
			sys.stderr.write("Expected 2; got {res.length}.\n")
		end
		assert res.has("")
		assert res.has("dc")
	end
end
