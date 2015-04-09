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

# Highlighting of Nit AST
module highlight

import frontend
import html
import pipeline
import astutil

# Visitor used to produce a HTML tree based on a AST on a `Source`
class HighlightVisitor
	# The root of the HTML hierarchy
	var html = new HTMLTag("span")

	# Is the HTML include a nested `<span class"{type_of_node}">` element for each `ANode` of the AST?
	# Used to have a really huge and verbose HTML (mainly for debug)
	var with_ast = false is writable

	# Prefixes used in generated IDs for line `<span>` elements.
	# Useful if more than one highlighted code is present in the same HTML document.
	#
	# If set to the empty string, id for lines are disabled.
	#
	# Is `"L"` by default.
	var line_id_prefix = "L" is writable

	# The first line to generate, null if start at the first line
	var first_line: nullable Int = null is writable

	# The last line to generate, null if finish at the last line
	var last_line: nullable Int = null is writable

	init
	do
		html.add_class("nitcode")
	end

	# The entry-point of the highlighting.
	# Will fill `html` with the generated HTML content.
	fun enter_visit(n: ANode)
	do
		n.parentize_tokens
		var s = n.location.file
		htmlize(s.first_token.as(not null), s.last_token.as(not null))
	end

	private fun full_tag(anode: ANode, hv: HighlightVisitor): nullable HTMLTag
	do
		var tag = anode.make_tag(hv)
		if tag == null then return null
		var infobox = anode.infobox(hv)
		if infobox == null and anode isa Token then
			var pa = anode.parent
			if pa != null then
				var c = anode
				if c isa TId or c isa TClassid or c isa TAttrid or c isa TokenLiteral or c isa TokenOperator or c isa TComment and pa isa ADoc then
					infobox = pa.decorate_tag(hv, tag, anode)
				end
			end
		end
		var messages = anode.location.messages
		if messages != null then
			tag.css("border-bottom", "solid 2px red")
			if infobox == null then
				infobox = new HInfoBox(hv, "Messages")
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

	# Produce HTML between two tokens
	protected fun htmlize(first_token, last_token: Token)
	do
		var stack2 = new Array[HTMLTag]
		var stack = new Array[Prod]
		var line = 0
		var c: nullable Token = first_token
		var hv = new HighlightVisitor
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
					var tag = full_tag(p, hv)
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
				var tag = full_tag(p, hv)
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
				var tag = full_tag(c, hv)
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
		#assert stack.is_empty
		#assert stack2.is_empty
	end

	# Return a default CSS content related to CSS classes used in the `html` tree.
	# Could be inlined in the `.html` file of saved as a specific `.css` file.
	fun css_content: String
	do
		return """
.nitcode a { color: inherit; cursor:pointer; }
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
	var visitor: HighlightVisitor

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
	fun new_dropdown(title, text: String): HTMLTag
	do
		content.add_raw_html """<div class="dropdown"> <a data-toggle="dropdown" href="#"><b>"""
		content.append(title)
		content.add_raw_html "</b> "
		content.append(text)
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
	fun infobox(v: HighlightVisitor): HInfoBox is abstract

	# A human-readable hyper-text for the entity
	fun linkto: HTMLTag is abstract
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
end

redef class MModule
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "module {name}")
		res.href = href
		res.new_field("module").add(linkto)
		var mdoc = self.mdoc
		if mdoc != null then mdoc.fill_infobox(res)
		if in_importation.greaters.length > 1 then
			var c = res.new_dropdown("imports", "{in_importation.greaters.length-1} modules")
			for x in in_importation.greaters do
				if x == self then continue
				c.open("li").add x.linkto
			end
		end
		return res
	end

	# The module HTML page
	fun href: String
	do
		return name + ".html"
	end

	redef fun linkto do return linkto_text(name)

	# Link to the entitiy with a specific text
	fun linkto_text(text: String): HTMLTag
	do
		return (new HTMLTag("a")).attr("href", href).text(text)
	end
end

redef class MClassDef
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "class {mclass.name}")
		res.href = href
		if is_intro then
			res.new_field("class").text(mclass.name)
		else
			res.new_field("redef class").text(mclass.name)
			res.new_field("intro").add mclass.intro.linkto_text("in {mclass.intro.mmodule.to_s}")
		end
		var mdoc = self.mdoc
		if mdoc == null then mdoc = mclass.intro.mdoc
		if mdoc != null then mdoc.fill_infobox(res)

		if in_hierarchy == null then return res

		if in_hierarchy.greaters.length > 1 then
			var c = res.new_dropdown("hier", "super-classes")
			for x in in_hierarchy.greaters do
				if x == self then continue
				if not x.is_intro then continue
				c.open("li").add x.linkto
			end
		end
		if in_hierarchy.smallers.length > 1 then
			var c = res.new_dropdown("hier", "sub-classes")
			for x in in_hierarchy.smallers do
				if x == self then continue
				if not x.is_intro then continue
				c.open("li").add x.linkto
			end
		end
		if mclass.mclassdefs.length > 1 then
			var c = res.new_dropdown("redefs", "refinements")
			for x in mclass.mclassdefs do
				if x == self then continue
				c.open("li").add x.linkto_text("in {x.mmodule}")
			end
		end
		return res
	end

	# The class HTML page (an anchor in the module page)
	fun href: String
	do
		return mmodule.href + "#" + to_s
	end

	redef fun linkto do return linkto_text(mclass.name)

	# Link to the entitiy with a specific text
	fun linkto_text(text: String): HTMLTag
	do
		return (new HTMLTag("a")).attr("href", href).text(text)
	end
end

redef class MPropDef
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = href
		if self isa MMethodDef then
			if msignature != null then res.new_field("fun").append(mproperty.name).add msignature.linkto
		else if self isa MAttributeDef then
			if static_mtype != null then res.new_field("fun").append(mproperty.name).add static_mtype.linkto
		else if self isa MVirtualTypeDef then
			if bound != null then res.new_field("add").append(mproperty.name).add bound.linkto
		else
			res.new_field("wat?").append(mproperty.name)
		end

		if is_intro then
		else
			res.new_field("intro").add mproperty.intro.linkto_text("in {mproperty.intro.mclassdef}")
		end
		var mdoc = self.mdoc
		if mdoc == null then mdoc = mproperty.intro.mdoc
		if mdoc != null then mdoc.fill_infobox(res)
		if mproperty.mpropdefs.length > 1 then
			var c = res.new_dropdown("redef", "redefinitions")
			for x in mproperty.mpropdefs do
				c.open("li").add x.linkto_text("in {x.mclassdef}")
			end
		end

		return res
	end

	# The property HTML page (an anchor in the module page)
	fun href: String
	do
		return self.mclassdef.mmodule.href + "#" + self.to_s
	end

	redef fun linkto do return linkto_text(mproperty.name)

	# Link to the entitiy with a specific text
	fun linkto_text(text: String): HTMLTag
	do
		return (new HTMLTag("a")).attr("href", href).text(text)
	end
end

redef class MClassType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = mclass.intro.href
		res.new_field("class").add mclass.intro.linkto
		var mdoc = mclass.mdoc
		if mdoc == null then mdoc = mclass.intro.mdoc
		if mdoc != null then mdoc.fill_infobox(res)
		return res
	end
	redef fun linkto
	do
		return mclass.intro.linkto
	end
end
redef class MVirtualType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.href = mproperty.intro.href
		var p = mproperty
		var pd = p.intro
		res.new_field("virtual type").add pd.linkto
		var mdoc = pd.mdoc
		if mdoc != null then mdoc.fill_infobox(res)
		return res
	end
	redef fun linkto
	do
		return mproperty.intro.linkto
	end
end
redef class MParameterType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		res.new_field("parameter type").append("{name} from class ").add mclass.intro.linkto
		return res
	end
	redef fun linkto
	do
		return (new HTMLTag("span")).text(name)
	end
end

redef class MNullableType
	redef fun infobox(v)
	do
		return mtype.infobox(v)
	end
	redef fun linkto
	do
		var res = new HTMLTag("span")
		res.append("nullable ").add(mtype.linkto)
		return res
	end
end

redef class MNotNullType
	redef fun infobox(v)
	do
		return mtype.infobox(v)
	end
	redef fun linkto
	do
		var res = new HTMLTag("span")
		res.append("not null ").add(mtype.linkto)
		return res
	end
end

redef class MNullType
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, to_s)
		return res
	end
	redef fun linkto
	do
		var res = new HTMLTag("span")
		res.append("null")
		return res
	end
end

redef class MSignature
	redef fun linkto
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
				res.add p.mtype.linkto
			end
			res.append ")"
		end
		var ret = return_mtype
		if ret != null then
			res.append ": "
			res.add ret.linkto
		end
		return res
	end
end

redef class CallSite
	super HInfoBoxable
	redef fun infobox(v)
	do
		var res = new HInfoBox(v, "call {mpropdef}")
		res.href = mpropdef.href
		res.new_field("call").add(mpropdef.linkto).add(msignature.linkto)
		if mpropdef.is_intro then
		else
			res.new_field("intro").add mproperty.intro.linkto_text("in {mproperty.intro.mclassdef}")
		end
		var mdoc = mpropdef.mdoc
		if mdoc == null then mdoc = mproperty.intro.mdoc
		if mdoc != null then mdoc.fill_infobox(res)

		return res
	end
	redef fun linkto
	do
		return mpropdef.linkto
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
		res.new_field("local var").append("{name}:").add(declared_type.linkto)
		return res
	end
	redef fun linkto
	do
		return (new HTMLTag("span")).text(name)
	end
end


##

redef class ANode
	# Optionally creates a tag that encapsulate the AST element on HTML rendering
	protected fun make_tag(v: HighlightVisitor): nullable HTMLTag do return null

	# Add aditionnal information on a child-token and return an additionnal HInfoBox on it
	protected fun decorate_tag(v: HighlightVisitor, res: HTMLTag, token: Token): nullable HInfoBox
	do
		#debug("no decoration for {token.inspect}")
		#res.add_class("nc_error")
		return null
	end

	# Return a optional infobox
	fun infobox(v: HighlightVisitor): nullable HInfoBox do return null
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
	redef fun make_tag(v: HighlightVisitor): HTMLTag
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
		var p = parent
		if p != null then p.decorate_tag(v, res, self)
		res.add_class("nc_o")
		return res
	end
end

redef class AVarFormExpr
	redef fun decorate_tag(v, res, token)
	do
		var variable = self.variable
		if variable == null then return null
		res.add_class("nc_v")
		return variable.infobox(v)
	end
end

redef class AVardeclExpr
	redef fun decorate_tag(v, res, token)
	do
		var variable = self.variable
		if variable == null then return null
		res.add_class("nc_v")
		return variable.infobox(v)
	end
end

redef class AForExpr
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
		res.add_class("nc_ast")
		return null
	end
end

redef class ALabel
	redef fun decorate_tag(v, res, token)
	do
		res.add_class("nc_la")
		return null
	end
end

redef class ASendExpr
	redef fun decorate_tag(v, res, token)
	do
		if callsite == null then return null
		return callsite.infobox(v)
	end
end

redef class ANewExpr
	redef fun decorate_tag(v, res, token)
	do
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
		return parent.decorate_tag(v, res, token)
	end
end

redef class AModuledecl
	redef fun decorate_tag(v, res, token)
	do
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
		res.add_class("nc_m")
		var mm = mmodule
		if mm == null then return null
		return mm.infobox(v)
	end
end
redef class AAttrPropdef
	redef fun decorate_tag(v, res, token)
	do
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
		var p = parent
		if p != null then p.decorate_tag(v, res, self)
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
		var p = parent
		if p != null then p.decorate_tag(v, res, self)
		res.add_class("nc_a")
		return res
	end
end
redef class AAttrFormExpr
	redef fun decorate_tag(v, res, token)
	do
		var p = mproperty
		if p == null then return null
		return p.intro.infobox(v)
	end
end
redef class TClassid
	redef fun make_tag(v)
	do
		var res = super
		var p = parent
		if p != null then p.decorate_tag(v, res, self)
		res.add_class("nc_t")
		return res
	end
end
redef class AType
	redef fun decorate_tag(v, res, token)
	do
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
		res.add_class("nc_vt")
		if mtype == null then return null
		return mtype.infobox(v)
	end
end
redef class ATypePropdef
	redef fun decorate_tag(v, res, token)
	do
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
		if not parent isa ADoc then
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
		var p = parent
		if p != null then p.decorate_tag(v, res, self)
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
		return null
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
