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

# Highlighting of Nit AST with HTML
module htmlight

import highlight
import html
import pipeline
import serialization

# A standalone highlighted piece of code
class HLCode
	super Serializable

	# The highlighter used
	var hl: HtmlightVisitor

	# The raw code source
	var content: String

	# The pseudo source-file
	var source: SourceFile

	# JavaScript code to update an existing codemirror editor.
	fun code_mirror_update: Template
	do

		var res = new Template
		res.add """
	function nitmessage() {
		editor.operation(function(){
			for (var i = 0; i < widgets.length; ++i)
			      editor.removeLineWidget(widgets[i]);
			widgets.length = 0;
"""

		for m in source.messages do
			res.add """
			var l = document.createElement("div");
			l.className = "lint-error"
			l.innerHTML = "<span class='glyphicon glyphicon-warning-sign lint-error-icon'></span> {{{m.text.html_escape}}}";
			var w = editor.addLineWidget({{{m.location.line_start-1}}}, l);
			widgets.push(w);
"""
		end
		res.add """});}"""
		return res
	end

	redef fun core_serialize_to(v)
	do
		v.serialize_attribute("code", hl.html.write_to_string)
		var msgs = new Array[Map[String, Serializable]]
		for m in source.messages do
			var o = new Map[String, Serializable]
			msgs.add o
			o["line"] = m.location.line_start-1
			o["message"] = m.text
		end
		v.serialize_attribute("messages", msgs)
	end
end

# Visitor used to produce a HTML tree based on a AST on a `Source`
class HtmlightVisitor
	super AbstractHighlightVisitor

	# The root of the HTML hierarchy
	var html = new HTMLTag("span")

	# Should the HTML include a nested `<span class"{type_of_node}">` element for each `ANode` of the AST?
	#
	# Used to have a really huge and verbose HTML (mainly for debug)
	var with_ast = false is writable

	# Prefixes used in generated IDs for line `<span>` elements.
	# Useful if more than one highlighted code is present in the same HTML document.
	#
	# If set to the empty string, id for lines are disabled.
	#
	# Is `"L"` by default.
	var line_id_prefix = "L" is writable

	# When highlighting a node, attach a full popupable infobox, if any.
	#
	# If `false`, only a simple `title` tooltip is used.
	#
	# default: true
	var show_infobox = true is writable

	# A reference to an entity used in generated `<a>` elements.
	#
	# It is used to refer to some specific entities when generating links.
	# If `null` is returned, then no link are generated and `<a>` elements become `<span>`.
	#
	# By default, `null` is returned.
	# Clients are therefore encouraged to redefine the method in a subclass to control where entities should link to.
	fun hrefto(entity: MEntity): nullable String do return null

	init
	do
		html.add_class("nitcode")
	end

	private fun full_tag(anode: ANode): nullable HTMLTag
	do
		var tag = anode.make_tag(self)
		if tag == null then return null
		var infobox = anode.infobox(self)
		if infobox == null and anode isa Token then
			var pa = anode.parent
			if pa != null then
				infobox = pa.decorate_tag(self, tag, anode)
			end
		end
		if infobox != null and not show_infobox then
			var href = infobox.href
			if href != null then
				# If there is an href, we inject a link around
				var tag2 = new HTMLTag("a")
				tag2.add tag
				tag = tag2
				tag.attr("href", href)
			end
			tag.attr("title", infobox.title)
			tag.classes.add "titled"
			infobox = null
		end
		var messages = anode.location.messages
		if messages != null and show_messages then
			tag.css("border-bottom", "solid 2px red")
			if infobox == null then
				infobox = new HInfoBox(self, "Messages")
			end
			var c = infobox.new_dropdown("{messages.length} message(s)", "")
			for m in messages do
				c.open("li").append(m.text)
			end
		end
		if infobox != null then
			tag.attach_infobox(infobox)
		end
		return tag
	end

	# Low-level highlighting between 2 tokens
	redef fun do_highlight(first_token, last_token)
	do
		var stack2 = new Array[HTMLTag]
		var stack = new Array[Prod]
		var line = 0
		var c: nullable Token = first_token
		while c != null do
			var starting

			# Handle start of line
			var cline = c.location.line_start
			if cline != line then
				# Handle starting block productions,
				# Because c could be a detached token, get prods in
				# the first AST token
				var c0 = c.first_token_in_line
				starting = null
				if c0 != null then starting = c0.starting_prods
				if starting != null then for p in starting do
					if not p.is_block then continue
					var tag = full_tag(p)
					if tag == null then continue
					tag.add_class("foldable")
					stack2.add(html)
					html.add tag
					html = tag
					stack.add(p)
				end

				# Add a div for the whole line
				var tag = new HTMLTag("span")
				var p = line_id_prefix
				if p != "" then tag.attrs["id"] = "{p}{cline}"
				tag.classes.add "line"
				stack2.add(html)
				html.add tag
				html = tag
				line = cline
			end

			# Add the blank, verbatim
			html.add_raw_html c.blank_before

			# Handle starting span production
			starting = c.starting_prods
			if starting != null then for p in starting do
				if not p.is_span then continue
				var tag = full_tag(p)
				if tag == null then continue
				stack2.add(html)
				html.add tag
				html = tag
				stack.add(p)
			end

			# Add the token
			if c isa TEol then
				html.append "\n"
			else
				var tag = full_tag(c)
				if tag != null then html.add tag
			end

			# Handle ending span productions
			var ending = c.ending_prods
			if ending != null then for p in ending do
				if not p.is_span then continue
				if stack.is_empty or p != stack.last then continue
				stack.pop
				html = stack2.pop
			end

			# Handle end of line and end of file
			var n = c.next_token
			if c == last_token then n = null
			if n == null or n.location.line_start != line  then
				# closes the line div
				html = stack2.pop

				# close the block production divs
				var c0 = c.last_token_in_line
				ending = null
				if c0 != null then ending = c0.ending_prods
				if ending != null then for p in ending do
					if not p.is_block then continue
					if stack.is_empty or p != stack.last then continue
					stack.pop
					html = stack2.pop
				end
			end

			c = n
		end
		if not stack2.is_empty then html = stack2.first
	end

	# Return a default CSS content related to CSS classes used in the `html` tree.
	# Could be inlined in the `.html` file of saved as a specific `.css` file.
	fun css_content: String
	do
		return """
.nitcode a { color: inherit; cursor:pointer; }
.nitcode .titled:hover { text-decoration: underline; } /* underline titles */
.nitcode .popupable:hover { text-decoration: underline; cursor:help; } /* underline titles */
.nitcode .foldable { display: block } /* for block productions*/
.nitcode .line{ display: block } /* for lines */
.nitcode .line:hover{ background-color: #FFFFE0; } /* current line */
.nitcode :target { background-color: #FFF3C2 } /* target highlight*/
/* lexical raw tokens. independent of usage or semantic: */
.nitcode .nc_c { color: gray; font-style: italic; } /* comment */
.nitcode .nc_d { color: #3D8127; font-style: italic; } /* documentation comments */
.nitcode .nc_k { font-weight: bold; } /* keyword */
.nitcode .nc_o {} /* operator */
.nitcode .nc_i {} /* standard identifier */
.nitcode .nc_t { color: #445588; font-weight: bold; } /* type/class identifier */
.nitcode .nc_a { color: #445588; font-style: italic; } /* old style attribute identifier */
.nitcode .nc_l { color: #009999; } /* char and number literal */
.nitcode .nc_s { color: #8F1546; } /* string literal */
/* syntactic token usage. added because of their position in the AST */
.nitcode .nc_ast { color: blue; } /* assert label */
.nitcode .nc_la { color: blue; } /* break/continue label */
.nitcode .nc_m { color: #445588; } /* module name */
/* syntactic groups */
.nitcode .nc_def { font-weight: bold; color: blue; } /* name used in a definition */
  .nitcode .nc_def.nc_a { color: blue; } /* name used in a attribute definition */
  .nitcode .nc_def.nc_t { color: blue; } /* name used in a class or vt definition */
.nitcode .nc_ss { color: #9E6BEB; } /* superstrings */
.nitcode .nc_cdef {} /* A whole class definition */
.nitcode .nc_pdef {} /* A whole property definition */
/* semantic token usage */
.nitcode .nc_v { font-style: italic; } /* local variable or parameter */
.nitcode .nc_vt { font-style: italic; } /* virtual type or formal type */

.nitcode .nc_error { border: 1px red solid;} /* not used */
.popover { max-width: 800px !important; }
"""
	end

	# Additional content to inject in the <head> tag
	# Note: does not include `css_content`; handle it yourself.
	fun head_content: String
	do
		return """<link rel="stylesheet" href="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">\n"""
	end

	# Additional content to inject just before the closing </body> tag
	fun foot_content: String
	do
		return """
<script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
<script src="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/js/bootstrap.min.js"></script>
<script>$(".popupable").popover({html:true, placement:'top'})/*initialize bootstrap popover*/</script>"""
	end

	# Fully process `content` as a Nit source file.
	#
	# Set `print_errors = true` to print errors in the code to the console.
	fun highlightcode(content: String, print_errors: nullable Bool): HLCode
	do
		# Prepare a stand-alone tool context
		var tc = new ToolContext
		tc.nit_dir = tc.locate_nit_dir # still use the common lib to have core
		tc.keep_going = true # no exit, obviously
		if print_errors != true then tc.opt_warn.value = -1 # no output

		# Prepare an stand-alone model and model builder.
		# Unfortunately, models are enclosing and append-only.
		# There is no way (yet?) to have a shared module `core` with
		# isolated and throwable user modules.
		var model = new Model
		var mb = new ModelBuilder(model, tc)

		# Parse the code
		var source = new SourceFile.from_string("", content + "\n")
		var lexer = new Lexer(source)
		var parser = new Parser(lexer)
		var tree = parser.parse

		var hlcode = new HLCode(self, content, source)

		# Check syntax error
		var eof = tree.n_eof
		if eof isa AError then
			mb.error(eof, eof.message)
			highlight_source(source)
			return hlcode
		end
		var amodule = tree.n_base.as(not null)

		# Load the AST as a module in the model
		# Then process it
		mb.load_rt_module(null, amodule, "")
		mb.run_phases

		# Highlight the processed module
		highlight_node(amodule)
		return hlcode
	end
end

redef class HTMLTag
	# Attach the infobox to the node by using BootStrap popover
	fun attach_infobox(infobox: HInfoBox)
	do
		classes.add("popupable")
		attrs["title"] = infobox.title
		var href = infobox.href
		if href != null then
			attrs["data-title"] = """<a href="{{{href}}}">{{{infobox.title}}}</a>"""
		end
		attrs["data-content"] = infobox.content.write_to_string
		attrs["data-toggle"] = "popover"
	end
end


# A generic information container that can be used to decorate AST entities
class HInfoBox
	# The visitor used for contextualisation, if needed
	var visitor: HtmlightVisitor

	# A short title for the AST element
	var title: String

	# The primary link where the entity points
	# null if no link
	var href: nullable String = null

	# The content of the popuped infobox
	var content = new HTMLTag("div")

	# Append a new field in the popuped infobox
	fun new_field(title: String): HTMLTag
	do
		content.open("b").text(title)
		content.append(" ")
		var res = content.open("span")
		content.open("br")
		return res
	end

	# Append a new dropdown in the popuped content
	fun new_dropdown(title, text: String, text_is_html: nullable Bool): HTMLTag
	do
		content.add_raw_html """<div class="dropdown"> <a data-toggle="dropdown" href="#"><b>"""
		content.append(title)
		content.add_raw_html "</b> "
		if text_is_html == true then
			content.add_raw_html(text)
		else content.append(text)
		content.add_raw_html """<span class="caret"></span></a>"""
		var res = content.open("ul").add_class("dropdown-menu").attr("role", "menu").attr("aria-labelledby", "dLabel")
		content.add_raw_html "</div>"
		return res
	end
end

##

# Model entity or whatever that can produce an infobox
interface HInfoBoxable
	# An new infobox documenting the entity
	fun infobox(v: HtmlightVisitor): HInfoBox is abstract
end

redef class MDoc
	# Append an entry for the doc in the given infobox
	fun fill_infobox(res: HInfoBox)
	do
		if content.length < 2 then
			res.new_field("doc").text(content.first)
			return
		end
		var c = res.new_dropdown("doc", content.first)
		for x in content.iterator.skip_head(1) do
			c.append x
			c.add_raw_html "<br>"
		end
	end
end

redef class MEntity
	super HInfoBoxable

	# A HTML version of `to_s` with hyper-links.
	#
	# By default, `linkto_text(v, to_s)` is used, c.f. see `linkto_text`.
	#
	# For some complex entities, like generic types, multiple `<a>` and `<span>` elements can be generated.
	# E.g. `Array[Int]` might become `<a>Array</a>[<a>Int</a>]` with the correct `href` attributes
	# provided  by `v.hrefto`.
	fun linkto(v: HtmlightVisitor): HTMLTag do return linkto_text(v, to_s)

	# Link to the `self` with a specific text.
	#
	# The whole text is linked with a single `<a>` element.
	#
	# The `href` used is provided by `v.hrefto`.
	# If `href` is null then a `<span>` element is used instead of `<a>`.
	fun linkto_text(v: HtmlightVisitor, text: String): HTMLTag
	do
		var href = v.hrefto(self)
		if href == null then
			return (new HTMLTag("span")).text(text)
		end
		return (new HTMLTag("a")).attr("href", href).text(text)
	end

	# Append an entry for the doc in the given infobox
	private fun add_doc_to_infobox(res: HInfoBox)
	do
		var mdoc = mdoc_or_fallback
		if mdoc != null then mdoc.fill_infobox(res)
	end
end

redef class MModule
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "module {name}")
		res.href = v.hrefto(self)
		if not v.show_infobox then return res
		res.new_field("module").add(linkto(v))
		add_doc_to_infobox(res)
		if in_importation.greaters.length > 1 then
			var c = res.new_dropdown("imports", "{in_importation.greaters.length-1} modules")
			for x in in_importation.greaters do
				if x == self then continue
				c.open("li").add x.linkto(v)
			end
		end
		return res
	end

	redef fun linkto(v) do return linkto_text(v, name)
end

redef class MClassDef
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "class {mclass.name}")
		res.href = v.hrefto(self)
		if not v.show_infobox then return res
		if is_intro then
			res.new_field("class").text(mclass.name)
		else
			res.new_field("redef class").text(mclass.name)
			res.new_field("intro").add mclass.intro.linkto_text(v, "in {mclass.intro_mmodule.to_s}")
		end
		add_doc_to_infobox(res)

		var in_hierarchy = self.in_hierarchy
		if in_hierarchy == null then return res

		if in_hierarchy.greaters.length > 1 then
			var c = res.new_dropdown("hier", "super-classes")
			for x in in_hierarchy.greaters do
				if x == self then continue
				if not x.is_intro then continue
				c.open("li").add x.linkto(v)
			end
		end
		if in_hierarchy.smallers.length > 1 then
			var c = res.new_dropdown("hier", "sub-classes")
			for x in in_hierarchy.smallers do
				if x == self then continue
				if not x.is_intro then continue
				c.open("li").add x.linkto(v)
			end
		end
		if mclass.mclassdefs.length > 1 then
			var c = res.new_dropdown("redefs", "refinements")
			for x in mclass.mclassdefs do
				if x == self then continue
				c.open("li").add x.linkto_text(v, "in {x.mmodule}")
			end
		end
		return res
	end
end

redef class MPropDef
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = v.hrefto(self)
		if not v.show_infobox then return res
		if self isa MMethodDef then
			var msignature = self.msignature
			if msignature != null then res.new_field("fun").append(mproperty.name).add msignature.linkto(v)
		else if self isa MAttributeDef then
			var static_mtype = self.static_mtype
			if static_mtype != null then res.new_field("fun").append(mproperty.name).add static_mtype.linkto(v)
		else if self isa MVirtualTypeDef then
			var bound = self.bound
			if bound != null then res.new_field("add").append(mproperty.name).add bound.linkto(v)
		else
			res.new_field("wat?").append(mproperty.name)
		end

		if is_intro then
		else
			res.new_field("intro").add mproperty.intro.linkto_text(v, "in {mproperty.intro.mclassdef}")
		end
		add_doc_to_infobox(res)
		if mproperty.mpropdefs.length > 1 then
			var c = res.new_dropdown("redef", "redefinitions")
			for x in mproperty.mpropdefs do
				c.open("li").add x.linkto_text(v, "in {x.mclassdef}")
			end
		end

		return res
	end
end

redef class MClassType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = v.hrefto(mclass.intro)
		if not v.show_infobox then return res
		res.new_field("class").add mclass.intro.linkto(v)
		add_doc_to_infobox(res)
		return res
	end
	redef fun linkto(v)
	do
		return mclass.intro.linkto(v)
	end
end
redef class MVirtualType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = v.hrefto(mproperty)
		if not v.show_infobox then return res
		var p = mproperty
		res.new_field("virtual type").add p.intro.linkto(v)
		add_doc_to_infobox(res)
		return res
	end
	redef fun linkto(v)
	do
		return mproperty.intro.linkto(v)
	end
end
redef class MParameterType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		if not v.show_infobox then return res
		res.new_field("parameter type").append("{name} from class ").add mclass.intro.linkto(v)
		return res
	end
end

redef class MNullableType
	redef fun infobox(v)
	do
		return mtype.infobox(v)
	end
	redef fun linkto(v)
	do
		var res = new HTMLTag("span")
		res.append("nullable ").add(mtype.linkto(v))
		return res
	end
end

redef class MNotNullType
	redef fun infobox(v)
	do
		return mtype.infobox(v)
	end
	redef fun linkto(v)
	do
		var res = new HTMLTag("span")
		res.append("not null ").add(mtype.linkto(v))
		return res
	end
end

redef class MNullType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		return res
	end
	redef fun linkto(v)
	do
		var res = new HTMLTag("span")
		res.append("null")
		return res
	end
end

redef class MSignature
	redef fun linkto(v)
	do
		var res = new HTMLTag("span")
		var first = true
		if not mparameters.is_empty then
			res.append "("
			for p in mparameters do
				if first then
					first = false
				else
					res.append ", "
				end
				res.append p.name
				res.append ": "
				res.add p.mtype.linkto(v)
			end
			res.append ")"
		end
		var ret = return_mtype
		if ret != null then
			res.append ": "
			res.add ret.linkto(v)
		end
		return res
	end
end

redef class CallSite
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "call {mpropdef}")
		res.href = v.hrefto(mpropdef)
		if not v.show_infobox then return res
		res.new_field("call").add(mpropdef.linkto(v)).add(msignature.linkto(v))
		if mpropdef.is_intro then
		else
			res.new_field("intro").add mproperty.intro.linkto_text(v, "in {mproperty.intro.mclassdef}")
		end
		add_doc_to_infobox(res)

		return res
	end
	redef fun linkto(v)
	do
		return mpropdef.linkto(v)
	end
end

redef class Variable
	super HInfoBoxable
	redef fun infobox(v)
	do
		var declared_type = self.declared_type
		if declared_type == null then
			var res = new HInfoBox(v, "{name}")
			res.new_field("local var").append("{name}")
			return res
		end
		var res = new HInfoBox(v, "{name}: {declared_type}")
		res.new_field("local var").append("{name}:").add(declared_type.linkto(v))
		return res
	end
end


##

redef class ANode
	# Optionally creates a tag that encapsulate the AST element on HTML rendering
	protected fun make_tag(v: HtmlightVisitor): nullable HTMLTag do return null

	# Add aditionnal information on a child-token and return an additionnal HInfoBox on it
	protected fun decorate_tag(v: HtmlightVisitor, res: HTMLTag, token: Token): nullable HInfoBox
	do
		#debug("no decoration for {token.inspect}")
		#res.add_class("nc_error")
		return null
	end

	# Return a optional infobox
	fun infobox(v: HtmlightVisitor): nullable HInfoBox do return null
end

redef class AQclassid
	redef fun decorate_tag(v, res, token)
	do
		if token != n_id then return null
		var parent = self.parent
		if parent == null then return null
		return parent.decorate_tag(v, res, token)
	end
end

redef class AQid
	redef fun decorate_tag(v, res, token)
	do
		if token != n_id then return null
		var parent = self.parent
		if parent == null then return null
		return parent.decorate_tag(v, res, token)
	end
end

redef class AStdClassdef
	redef fun make_tag(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_cdef")
		var md = mclassdef
		if md != null then res.attr("id", md.to_s)
		return res
	end
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TClassid then return null
		res.add_class("nc_def")

		var md = mclassdef
		if md == null then return null
		return md.infobox(v)
	end
end
redef class APropdef
	redef fun make_tag(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_pdef")
		var mpd
		mpd = mpropdef
		if mpd != null then
			#res.add(tag(mpd))
			res.attr("id", mpd.to_s)
		end
		if self isa AAttrPropdef then
			mpd = mreadpropdef
			if mpd != null then res.add(tag(mpd))
			mpd = mwritepropdef
			if mpd != null then res.add(tag(mpd))
		end
		return res
	end

	private fun tag(mpd: MPropDef): HTMLTag
	do
		var a = new HTMLTag("a")
		a.attr("id", mpd.to_s)
		return a
	end
end

redef class Token
	# Produce an HTMLTag with the correct contents and CSS classes
	# Subclasses can redefine it to decorate the tag
	redef fun make_tag(v): HTMLTag
	do
		var res = new HTMLTag("span")
		res.text(text)
		return res
	end
end

redef class TokenKeyword
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_k")
		return res
	end
end
redef class TokenOperator
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_o")
		return res
	end
end

redef class AVarFormExpr
	redef fun decorate_tag(v, res, token)
	do
		if token != n_id then return null
		var variable = self.variable
		if variable == null then return null
		res.add_class("nc_v")
		return variable.infobox(v)
	end
end

redef class AVardeclExpr
	redef fun decorate_tag(v, res, token)
	do
		if token != n_id then return null
		var variable = self.variable
		if variable == null then return null
		res.add_class("nc_v")
		return variable.infobox(v)
	end
end

redef class AForGroup
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		var vs = variables
		if vs == null then return null
		res.add_class("nc_v")
		var idx = n_ids.index_of(token)
		var variable = vs[idx]
		return variable.infobox(v)
	end
end

redef class AParam
	redef fun decorate_tag(v, res, token)
	do
		if token != n_id then return null
		var mp = mparameter
		if mp == null then return null
		var variable = self.variable
		if variable == null then return null
		res.add_class("nc_v")
		return variable.infobox(v)
	end
end

redef class AAssertExpr
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		res.add_class("nc_ast")
		return null
	end
end

redef class ALabel
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		res.add_class("nc_la")
		return null
	end
end

redef class ASendExpr
	redef fun decorate_tag(v, res, token)
	do
		var callsite = self.callsite
		if callsite == null then return null
		return callsite.infobox(v)
	end
end

redef class ANewExpr
	redef fun decorate_tag(v, res, token)
	do
		var callsite = self.callsite
		if callsite == null then return null
		return callsite.infobox(v)
	end
end

redef class AAssignOp
	redef fun decorate_tag(v, res, token)
	do
		var p = parent
		assert p isa AReassignFormExpr

		var callsite = p.reassign_callsite
		if callsite == null then return null
		return callsite.infobox(v)
	end
end

redef class AModuleName
	redef fun decorate_tag(v, res, token)
	do
		var p = parent
		if p == null then return null
		return p.decorate_tag(v, res, token)
	end
end

redef class AModuledecl
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		res.add_class("nc_def")
		res.add_class("nc_m")
		var p = parent
		assert p isa AModule
		var mm = p.mmodule
		if mm == null then return null
		return mm.infobox(v)
	end
end

redef class AStdImport
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		res.add_class("nc_m")
		var mm = mmodule
		if mm == null then return null
		return mm.infobox(v)
	end
end
redef class AAttrPropdef
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TId then return null
		res.add_class("nc_def")
		var mpd: nullable MPropDef
		mpd = mreadpropdef
		if mpd == null then mpd = mpropdef
		if mpd == null then return null
		return mpd.infobox(v)
	end
end

redef class TId
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_i")
		return res
	end
end
redef class AMethid
	redef fun make_tag(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_def")
		return res
	end
	redef fun decorate_tag(v, res, token)
	do
		return null
		# nothing to decorate
	end
	redef fun infobox(v)
	do
		var p = parent
		if not p isa AMethPropdef then return null
		var mpd = p.mpropdef
		if mpd == null then return null
		return mpd.infobox(v)
	end
end
redef class TAttrid
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_a")
		return res
	end
end
redef class AAttrFormExpr
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TAttrid then return null
		var p = mproperty
		if p == null then return null
		return p.intro.infobox(v)
	end
end
redef class TClassid
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_t")
		return res
	end
end
redef class AType
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TClassid then return null
		var mt = mtype
		if mt == null then return null
		mt = mt.undecorate
		if mt isa MFormalType then
			res.add_class("nc_vt")
		end
		return mt.infobox(v)
	end
end
redef class AFormaldef
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TClassid then return null
		res.add_class("nc_vt")
		var mtype = self.mtype
		if mtype == null then return null
		return mtype.infobox(v)
	end
end
redef class ATypePropdef
	redef fun decorate_tag(v, res, token)
	do
		if not token isa TClassid then return null
		res.add_class("nc_def")
		var md = mpropdef
		if md == null then return null
		return md.infobox(v)
	end
end
redef class TComment
	redef fun make_tag(v)
	do
		var res = super
		if is_loose then
			res.add_class("nc_c")
		end
		return res
	end
end
redef class ADoc
	redef fun make_tag(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_d")
		return res
	end
end
redef class TokenLiteral
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_l")
		return res
	end
end
redef class ASuperstringExpr
	redef fun make_tag(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_ss")
		return res
	end
end
redef class AStringFormExpr
	redef fun decorate_tag(v, res, token)
	do
		# Workaround to tag strings
		res.classes.remove("nc_l")
		res.add_class("nc_s")
		return super
	end
end
redef class AExpr
	redef fun decorate_tag(v, res, token)
	do
		var t = mtype
		if t == null then return null
		return t.infobox(v)
	end
end
