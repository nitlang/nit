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

class HTMLPage
	fun head do end
	fun body do end

	var root = new HTMLTag("html")

	fun render: String do
		open("head")
		head
		close("head")
		open("body")
		body
		close("body")
		return "<!DOCTYPE html>{root.html}"
	end

	private var current: HTMLTag = root
	private var stack = new List[HTMLTag]

	fun add(tag: String): HTMLTag do
		var node = new HTMLTag(tag)
		current.add(node)
		return node
	end

	fun add_html(html: String) do current.add(new HTMLRaw(html))

	fun open(tag: String): HTMLTag do
		stack.push(current)
		current = add(tag)
		return current
	end

	fun close(tag: String) do
		if not tag == current.tag then
			print "Error: Trying to close '{tag}', last opened tag was '{current.tag}'."
			abort
		end
		current = stack.pop
	end

	fun save(file: String) do
		var out = new OFStream.open(file)
		out.write(self.render)
		out.close
	end
end

class HTMLTag

	var tag: String

	init(tag: String) do self.tag = tag

	init with_attrs(tag: String, attrs: Map[String, String]) do
		self.tag = tag
		self.attrs = attrs
	end
	var attrs: Map[String, String] = new HashMap[String, String]

	fun get_attr(key: String): nullable String do
		if not attrs.has_key(key) then return null
		return attrs[key]
	end

	fun attr(key: String, value: String): HTMLTag do
		attrs[key] = value
		return self
	end

	fun add_class(klass: String): HTMLTag do
		classes.add(klass)
		return self
	end
	private var classes: Set[String] = new HashSet[String]

	fun css(prop: String, value: String): HTMLTag do
		css_props[prop] = value
		return self
	end
	private var css_props: Map[String, String] = new HashMap[String, String]

	fun get_css(prop: String): nullable String do
		if not css_props.has_key(prop) then return null
		return css_props[prop]
	end

	fun add(child: HTMLTag) do children.add(child)
	var children: Set[HTMLTag] = new HashSet[HTMLTag]

	fun text(txt: String): HTMLTag do
		content = txt
		return self
	end
	private var content: String = ""

	fun append(txt: String): HTMLTag do
		text("{content}txt")
		return self
	end

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
		for child in children do
			content = "{content}{child.html}"
		end
		return content
	end
end

private class HTMLRaw
	super HTMLTag

	init(content: String) do self.content = content
	redef fun html do return content
end
