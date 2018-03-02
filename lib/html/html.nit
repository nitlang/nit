# This file is part of NIT ( http://www.nitlanguage.org ).
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

# HTML output facilities
module html

# A html page
#
# You can define subclass and override methods head and body
#
# ~~~nitish
# class MyPage
#	super HTMLPage
#	redef body do add("p").text("Hello World!")
# end
# ~~~
#
# HTMLPage use fluent interface so you can chain calls as:
#
# ~~~nitish
# add("div").attr("id", "mydiv").text("My Div")
# ~~~
class HTMLPage
	super Writable

	# Define head content
	fun head do end
	# Define body content
	fun body do end

	private var root = new HTMLTag("html")
	private var current: HTMLTag = root
	private var stack = new List[HTMLTag]

	redef fun write_to(stream) do
		root.children.clear
		open("head")
		head
		close("head")
		open("body")
		body
		close("body")
		stream.write "<!DOCTYPE html>"
		root.write_to(stream)
	end

	# Add a html tag to the current element
	#
	# ~~~nitish
	# add("div").attr("id", "mydiv").text("My Div")
	# ~~~
	fun add(tag: String): HTMLTag do
		var node = new HTMLTag(tag)
		current.add(node)
		return node
	end

	# Add a raw html string
	#
	# ~~~nitish
	# add_html("<a href='#top'>top</a>")
	# ~~~
	fun add_html(html: String) do current.add(new HTMLRaw("", html))

	# Open a html tag
	#
	# ~~~nitish
	# open("ul")
	# add("li").text("item1")
	# add("li").text("item2")
	# close("ul")
	# ~~~
	fun open(tag: String): HTMLTag do
		stack.push(current)
		current = add(tag)
		return current
	end

	# Close previously opened tag
	# Ensure: tag = previous.tag
	fun close(tag: String) do
		if not tag == current.tag then
			print "Error: Trying to close '{tag}', last opened tag was '{current.tag}'."
			abort
		end
		current = stack.pop
	end
end

# An HTML element.
class HTMLTag
	super Writable

	# HTML element type.
	#
	# `"div"` for `<div></div>`.
	var tag: String
	init do
		self.is_void = (once void_list).has(tag)
	end

	private fun void_list: Set[String]
	do
		return new HashSet[String].from(["area", "base", "br", "col", "command", "embed", "hr", "img", "input", "keygen", "link", "meta", "param", "source", "track", "wbr"])
	end

	# Is the HTML element a void element?
	#
	#     assert (new HTMLTag("img")).is_void    == true
	#     assert (new HTMLTag("p")).is_void      == false
	var is_void: Bool is noinit

	# Create a HTML elements with the specifed type and attributes.
	init with_attrs(tag: String, attrs: Map[String, String]) do
		init(tag)
		self.attrs = attrs
	end

	# Tag attributes map
	var attrs: Map[String, String] = new ArrayMap[String, String] is lazy

	# Get the attributed value of 'prop' or null if 'prop' is undifened
	#
	#     var img = new HTMLTag("img")
	#     img.attr("src", "./image.png").attr("alt", "image")
	#     assert img.get_attr("src")     == "./image.png"
	fun get_attr(key: String): nullable String do
		if not attrs.has_key(key) then return null
		return attrs[key]
	end

	# Set a 'value' for 'key'
	#
	#     var img = new HTMLTag("img")
	#     img.attr("src", "./image.png").attr("alt", "image")
	#     assert img.write_to_string      == """<img src=".&#47;image.png" alt="image"/>"""
	fun attr(key: String, value: String): HTMLTag do
		attrs[key] = value
		return self
	end

	# Add a CSS class to the HTML tag
	#
	#     var img = new HTMLTag("img")
	#     img.add_class("logo").add_class("fullpage")
	#     assert img.write_to_string      == """<img class="logo fullpage"/>"""
	fun add_class(klass: String): HTMLTag do
		classes.add(klass)
		return self
	end

	# CSS classes
	var classes: Set[String] = new ArraySet[String] is lazy

	# Add multiple CSS classes
	#
	#     var img = new HTMLTag("img")
	#     img.add_classes(["logo", "fullpage"])
	#     assert img.write_to_string      == """<img class="logo fullpage"/>"""
	fun add_classes(classes: Collection[String]): HTMLTag do
		self.classes.add_all(classes)
		return self
	end

	# Set a CSS 'value' for 'prop'
	#
	#     var img = new HTMLTag("img")
	#     img.css("border", "2px solid black").css("position", "absolute")
	#     assert img.write_to_string      == """<img style="border: 2px solid black; position: absolute"/>"""
	fun css(prop: String, value: String): HTMLTag do
		css_props[prop] = value
		return self
	end
	private var css_props: Map[String, String] = new HashMap[String, String] is lazy

	# Get CSS value for 'prop'
	#
	#     var img = new HTMLTag("img")
	#     img.css("border", "2px solid black").css("position", "absolute")
	#     assert img.get_css("border")    == "2px solid black"
	#     assert img.get_css("color")     == null
	fun get_css(prop: String): nullable String do
		if not css_props.has_key(prop) then return null
		return css_props[prop]
	end

	# Replace `self` by `parent`.
	#
	#     var elem = new HTMLTag("li")
	#     elem.add_outer(new HTMLTag("ul"))
	#     assert elem.write_to_string == "<ul><li></li></ul>"
	fun add_outer(parent: HTMLTag) do
		# copy self in new object
                var child = new HTMLTag(self.tag)
                child.attrs = self.attrs
                child.classes = self.classes
                child.css_props = self.css_props
                child.children = self.children
                # add copy in parent children elements
                parent.children.add(child)
                # replace self by parent
                self.tag = parent.tag
                self.attrs = parent.attrs
                self.classes = parent.classes
                self.css_props = parent.css_props
                self.is_void = parent.is_void
                self.children = parent.children
        end

	# Add a HTML 'child' to self
	#
	#     var ul = new HTMLTag("ul")
	#     ul.add(new HTMLTag("li"))
	#     assert ul.write_to_string    == "<ul><li></li></ul>"
	# returns `self` for fluent programming
	fun add(child: HTMLTag): HTMLTag
	do
		children.add(child)
		return self
	end

	# Create a new HTMLTag child and return it
	#
	#     var ul = new HTMLTag("ul")
	#     ul.open("li").append("1").append("2")
	#     ul.open("li").append("3").append("4")
	#     assert ul.write_to_string    == "<ul><li>12</li><li>34</li></ul>"
	fun open(tag: String): HTMLTag
	do
		var res = new HTMLTag(tag)
		add(res)
		return res
	end

	# List of children HTML elements
	var children: Array[HTMLTag] = new Array[HTMLTag] is lazy

	# Clear all child and set the text of element
	#
	#     var p = new HTMLTag("p")
	#     p.text("Hello World!")
	#     assert p.write_to_string      ==  "<p>Hello World!</p>"
	# Text is escaped see: `core::String::html_escape`
	fun text(txt: String): HTMLTag do

		if isset _children then children.clear
		append(txt)
		return self
	end

	# Append text to element
	#
	#     var p = new HTMLTag("p")
	#     p.append("Hello")
	#     p.add(new HTMLTag("br"))
	#     p.append("World!")
	#     assert p.write_to_string      ==  "<p>Hello<br/>World!</p>"
	# Text is escaped see: core::String::html_escape
	fun append(txt: String): HTMLTag do
		add(new HTMLRaw("", txt.html_escape))
		return self
	end

	# Append raw HTML to element
	#
	#     var p = new HTMLTag("p")
	#     p.append("Hello")
	#     p.add_raw_html("<bla/>foo")
	#     assert p.write_to_string   == "<p>Hello<bla/>foo</p>"
	#
	# Note: the HTML in insered as it, no verification is done.
	fun add_raw_html(txt: String): HTMLTag do
		add(new HTMLRaw("", txt))
		return self
	end

	redef fun write_to(stream) do
		stream.write "<"
		stream.write tag
		render_attrs_in(stream)
		if is_void and (not isset _children or children.is_empty) then
			stream.write "/>"
		else
			stream.write ">"
			if isset _children then for child in children do child.write_to(stream)
			stream.write "</"
			stream.write tag
			stream.write ">"
		end
	end

	private fun render_attrs_in(stream: Writer) do
		if not isset _attrs and not isset _classes and not isset _css_props then return
		if attrs.has_key("class") or not classes.is_empty then
			stream.write " class=\""
			var first = true
			for cls in classes do
				if not first then stream.write " " else first = false
				stream.write cls.html_escape
			end
			if attrs.has_key("class") then
				if not first then stream.write " " else first = false
				stream.write attrs["class"].html_escape
			end
			stream.write "\""
		end

		if attrs.has_key("style") or not css_props.is_empty then
			stream.write " style=\""
			var first = true
			for k, v in css_props do
				if not first then stream.write "; " else first = false
				stream.write k.html_escape
				stream.write ": "
				stream.write v.html_escape
			end
			if attrs.has_key("style") then
				if not first then stream.write "; " else first = false
				stream.write(attrs["style"].html_escape)
			end
			stream.write "\""
		end

		if attrs.is_empty then return

		for key, value in attrs do
			if key == "class" or key == "style" then continue
			stream.write " "
			stream.write key.html_escape
			stream.write "=\""
			stream.write value.html_escape
			stream.write "\""
		end
	end
end

private class HTMLRaw
	super HTMLTag

	var content: String
	redef fun write_to(stream) do stream.write content
end
