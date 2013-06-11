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
# class MyPage
#	super HTMLPage
#	redef body do add("p").text("Hello World!")
# end
#
# HTMLPage use fluent interface so you can chain calls as:
#	add("div").attr("id", "mydiv").text("My Div")
class HTMLPage

	# Define head content
	fun head do end
	# Define body content
	fun body do end

	private var root = new HTMLTag("html")
	private var current: HTMLTag = root
	private var stack = new List[HTMLTag]

	# Render the page as a html string
	fun render: String do
		open("head")
		head
		close("head")
		open("body")
		body
		close("body")
		return "<!DOCTYPE html>{root.html}"
	end

	# Add a html tag to the current element
	# add("div").attr("id", "mydiv").text("My Div")
	fun add(tag: String): HTMLTag do
		var node = new HTMLTag(tag)
		current.add(node)
		return node
	end

	# Add a raw html string
	# add_html("<a href='#top'>top</a>")
	fun add_html(html: String) do current.add(new HTMLRaw(html))

	# Open a html tag
	# open("ul")
	# add("li").text("item1")
	# add("li").text("item2")
	# close("ul")
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

	# Save html page in the specified file
	fun save(file: String) do
		var out = new OFStream.open(file)
		out.write(self.render)
		out.close
	end
end

class HTMLTag
	# HTML tagname: 'div' for <div></div>
	var tag: String
	init(tag: String) do self.tag = tag

	init with_attrs(tag: String, attrs: Map[String, String]) do
		self.tag = tag
		self.attrs = attrs
	end

	# Tag attributes map
	var attrs: Map[String, String] = new HashMap[String, String]

	# Get the attributed value of 'prop' or null if 'prop' is undifened
	fun get_attr(key: String): nullable String do
		if not attrs.has_key(key) then return null
		return attrs[key]
	end

	# Set a 'value' for 'key'
	# var img = new HTMLTag("img")
	# img.attr("src", "./image.png").attr("alt", "image")
	fun attr(key: String, value: String): HTMLTag do
		attrs[key] = value
		return self
	end

	# Add a CSS class to the HTML tag
	# var img = new HTMLTag("img")
	# img.add_class("logo").add_class("fullpage")
	fun add_class(klass: String): HTMLTag do
		classes.add(klass)
		return self
	end
	private var classes: Set[String] = new HashSet[String]

	# Set a CSS 'value' for 'prop'
	# var img = new HTMLTag("img")
	# img.css("border", "2px solid black").css("position", "absolute")
	fun css(prop: String, value: String): HTMLTag do
		css_props[prop] = value
		return self
	end
	private var css_props: Map[String, String] = new HashMap[String, String]

	# Get CSS value for 'prop'
	fun get_css(prop: String): nullable String do
		if not css_props.has_key(prop) then return null
		return css_props[prop]
	end

	# Add a HTML 'child' to self
	# var ul = new HTMLTag("ul")
	# ul.add(new HTMLTag("li"))
	fun add(child: HTMLTag) do children.add(child)

	# List of children HTML elements
	var children: Set[HTMLTag] = new HashSet[HTMLTag]

	# Set text of element
	# var p = new HTMLTag("p")
	# p.text("Hello World!")
	# Text is escaped see: standard::String::html_escape
	fun text(txt: String): HTMLTag do
		content = txt
		return self
	end
	private var content: String = ""

	# Append text to element
	# var p = new HTMLTag("p")
	# p.append("Hello").append("<br/>").append("World!")
	# Text is escaped see: standard::String::html_escape
	fun append(txt: String): HTMLTag do
		text("{content}{txt}")
		return self
	end

	# Render the element as HTML string
	fun html: String do
		var content = render_content
		if tag != "script" and content.is_empty then return "<{tag}{render_attrs}/>"
		return "<{tag}{render_attrs}>{content}</{tag}>"
	end

	private fun render_attrs: String do
		var str = "{render_classes}{render_css}"
		for key, value in attrs do
			if key == "class" or key == "style" then continue
			str = "{str} {key}='{value}'"
		end
		return str
	end

	private fun render_css: String do
		var css = ""
		if attrs.has_key("style") then css = attrs["style"]
		for key, value in self.css_props do
			css = "{css}; {key}: {value}"
		end
		if css.is_empty then return ""
		return " style='{css}'"
	end

	private fun render_classes: String do
		var cls = ""
		if attrs.has_key("class") then cls = attrs["class"]
		if not classes.is_empty then cls = " class='{cls} {classes.join(" ")}'"
		if cls.is_empty then return ""
		return cls
	end

	private fun render_content: String do
		var str = content.html_escape
		for child in children do
			str += child.html
		end
		return str
	end
end

private class HTMLRaw
	super HTMLTag

	init(content: String) do self.content = content
	redef fun html do return content
end
