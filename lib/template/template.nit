# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Basic template system
#
# The recommended usage of this framework is to define specific subclasses of
# Template to provide structural elements on the final document
module template

# Templates are simple hierarchical pieces of text used for efficient stream writing.
#
# # Efficient stream writing
#
# Templates are more efficient than ever-growing buffers with useless concatenation
# and more usable and maintainable than manual arrays of strings.
#
# The `add` method (and its variations) is used to append new content (like string or
# other templates) to a template object.
#
# Eventually, the `write_to` method (and its variations) is used to write the complete
# content of a template in streams (and files, and strings).
#
#     var tmpl = new Template
#     tmpl.add("A")
#     tmpl.add("B")
#     tmpl.add("C")
#     assert tmpl.write_to_string == "ABC"
#
# # Non-linear system with sub-templates.
#
# A template is made of a mix of string, sub-templates and other `Writable` objects.
# A sub-template can be constructed independently of its usages, thus simplifying
# the high-level logic.
# A single sub-template can be used more than once.
#
#     var main = new Template
#     var sub = new Template
#     sub.add("1")
#     main.add("A")
#     main.add(sub)
#     main.add("B")
#     main.add(sub)
#     main.add("C")
#     sub.add("2")
#     assert main.write_to_string == "A12B12C"
#
# See also the `new_sub` method.
#
# # Specific high-level templates
#
# The advanced, and recommended way, is to subclass Template and provide an autonomous
# structural template with its specific attributes and templating logic.
#
# In such a subclass, the full logic is provided by the `rendering` method that will
# be automatically and lazily invoked.
#
#     class LnkTmpl
#         super Template
#         var text: Writable
#         var title: nullable String
#         var href: String
#         redef fun rendering do
#             add """<a href="{{{href.html_escape}}}""""
#             if title != null then add """ title="{{{title.html_escape}}}""""
#             add ">"
#             add text
#             add "</a>"
#         end
#         # ...
#     end
#     var l = new LnkTmpl("hello world", null, "hello.png")
#     assert l.write_to_string == """<a href="hello.png">hello world</a>"""
#
class Template
	super Writable

	# Service used to render the content of the template.
	#
	# Do nothing by default but subclasses should put all their specific
	# templating code in this method to regroup and simplify their logic
	#
	# Note: to avoid inconsistencies, the template is automatically frozen
	# (see `freeze`) after the invocation of `rendering`.
	protected fun rendering do end

	# Append an element (`String`, other `Template`, etc.) at the end of the template.
	#
	# Should be either used externally to act on basic templates,
	# or internally in the `rendering` method of specific templates.
	#
	# Mixing the internal and external uses should be avoided because
	# the final behavior will depend on the lazy invocation of `rendering`.
	#
	#     var t = new Template
	#     t.add("1")
	#     t.add("2")
	#     assert t.write_to_string == "12"
	fun add(element: Writable) do
		assert not is_frozen
		content.add element
	end

	# Append `element` and the end of the template then append a "\n".
	#
	#     var t = new Template
	#     t.addn("1")
	#     t.addn("2")
	#     assert t.write_to_string == "1\n2\n"
	fun addn(element: Writable) do
		add element
		add "\n"
	end

	# Append a bunch of elements at the end of the template.
	# See `add`.
	#
	#     var t = new Template
	#     t.add_all(["1", "2"])
	#     assert t.write_to_string == "12"
	fun add_all(elements: Collection[Writable]) do content.add_all elements

	# Append a bunch of elements at the end of the template with separations.
	# see `add`.
	#
	#     var t = new Template
	#     t.add_list(["1", "2", "3"], ", ", " and ")
	#     assert t.write_to_string == "1, 2 and 3"
	fun add_list(elements: Collection[Writable], sep, last_sep: Writable) do
		var last = elements.length - 2
		var i = 0
		for e in elements do
			content.add e
			if i < last then
				content.add sep
			else if i == last then
				content.add last_sep
			end
			i += 1
		end
	end

	# Is the template allowing more modification (`add`)
	var is_frozen = false

	# Disable further modification: no more `add` is allowed
	fun freeze
	do
		if is_frozen then return
		is_frozen = true
	end

	# Return a new basic template that is automatically added in `self` (using `add`)
	#
	# This is an easy way to provide a free insertion point in an existing template.
	#
	#     var t = new Template
	#     t.add("""void main(void) {""")
	#     var tdecl = t.new_sub # used to group declarations
	#     tdecl.add("int i; ")
	#     t.add("i = 1; ")
	#     tdecl.add("int j; ")
	#     t.add("j = i + 1; ")
	#     t.add("\}")
	#     assert t.write_to_string == """void main(void) {int i; int j; i = 1; j = i + 1; }"""
	fun new_sub: Template
	do
		var res = new Template
		add res
		return res
	end

	# Each sub-elements
	private var content = new Array[Writable]

	# Flag to avoid multiple rendering
	private var render_done = false

	# Call rendering, if not already done
	# Then freeze the template
	#
	# This method is only required in corner-cases since
	# `rendering` is automatically called when needed.
	fun force_render
	do
		if render_done then return
		render_done = true
		rendering
		freeze
	end

	# Do the full rendering and write the final content to a stream
	redef fun write_to(stream)
	do
		assert not is_writing
		is_writing = true
		force_render
		for e in content do
			e.write_to(stream)
		end
		is_writing = false
	end

	# Flag to avoid infinite recursivity if a template contains itself
	private var is_writing = false
end
