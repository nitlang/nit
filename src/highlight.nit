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

# Highliting of Nit AST
module highlight

import modelize_property
import frontend
import parser_util
import html

# Visitor used to produce a HTML tree based on a AST on a `Source`
class HighlightVisitor
	super Visitor

	# The root of the HTML hierarchy
	var html = new HTMLTag("span")

	private var token_head: HTMLTag

	private var prod_head: HTMLTag

	private var prod_root: nullable HTMLTag

	# Is the HTML include a nested `<span class"{type_of_node}">` element for each `ANode` of the AST?
	# Used to have a really huge and verbose HTML (mainly for debug)
	var with_ast writable = false

	# Enter in a new node
	# Exit is automatic
	fun enter(n: HTMLTag)
	do
		if prod_root != null then
			prod_head.add(n)
			prod_head = n
		else
			prod_root = n
			prod_head = n
		end
	end

	# The position in the source file.
	# Used to print parts of the source betwen tokens of the AST
	private var pos = 0

	# The line position in the source file.
	private var line_pos = 0

	# The first line to generate, null if start at the first line
	var first_line: nullable Int writable = null

	# The last line to generate, null if finish at the last line
	var last_line: nullable Int writable = null

	init
	do
		html.add_class("nitcode")
		token_head = html
		prod_head = html
	end

	# Used to remember the first node, thus knowing when the whole visit is over
	private var first_node: nullable ANode

	private var seen_token = new HashSet[Token]

	private fun process_upto_token(node: Token)
	do
		# recursively process previous tokens
		var prev = node.prev_token
		if prev != null and not seen_token.has(prev) then
			process_upto_token(prev)
			prev.accept_highlight_visitor(self)
		end

		# Add text between `last_token` and `node`
		var pstart = node.location.pstart
		var line_start = node.location.line_start
		var line_end = node.location.line_end
		if pos < pstart and (first_line == null or first_line <= line_start) and (last_line == null or last_line >= line_end) then
			var text = node.location.file.string.substring(pos, pstart-pos)
			token_head.append(text)
			#node.debug("WRT: {token_head.classes} << '{text.escape_to_c}' ")
		end
		pos = node.location.pend + 1
		if pos < pstart then
			node.debug("pos={pos}, pstart={pstart}, pend={node.location.pend}")
		end

		seen_token.add node
	end

	# Dubuging method
	private fun where(node: ANode, tag: String)
	do
		var pr = prod_root
		if pr == null then
			node.debug "{tag}-> {token_head.classes} : {prod_head.classes}"
		else
			node.debug "{tag}-> {token_head.classes} : {pr.classes}..{prod_head.classes}"
		end
	end

	redef fun visit(node)
	do
		if first_node == null then first_node = node

		if node isa Token then
			process_upto_token(node)

			#where(node, "TOK")
			var pr = prod_root
			if pr != null then
				#node.debug("ADD: {token_head.classes} << {pr.classes} ")
				token_head.add(pr)
				token_head = prod_head
				prod_root = null
			end
		end

		var oldph = prod_head
		#where(node, " IN")
		node.accept_highlight_visitor(self)
		#where(node, "OUT")
		var pr = prod_root
		if pr == null then
			assert token_head == prod_head
		else
			assert token_head != prod_head
			token_head.add(pr)
			prod_root = null
		end
		prod_head = oldph
		token_head = oldph
		#where(node, " IS")

		if node == first_node then
			html.append(node.location.file.string.substring_from(pos))
		end
	end

	# Return a default CSS content related to CSS classes used in the `html` tree.
	# Could be inlined in the `.html` file of saved as a specific `.css` file.
	fun css_content: String
	do
		return """
.nitcode a { color: inherit; text-decoration: inherit; } /* hide links */
.nitcode a:hover { text-decoration: underline; } /* underline links */
.nitcode span[title]:hover { text-decoration: underline; } /* underline titles */
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
"""
	end
end

redef class ANode
	private fun accept_highlight_visitor(v: HighlightVisitor)
	do
		if v.with_ast then
			var res = new HTMLTag("span")
			res.add_class(class_name)
			v.enter res
		end
		visit_all(v)
	end
	private fun decorate_tag(res: HTMLTag, token: Token)
	do
		#debug("no decoration for {token.inspect}")
		#res.add_class("nc_error")
	end
end

redef class AStdClassdef
	redef fun accept_highlight_visitor(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_cdef")
		var md = mclassdef
		if md != null then
			var a = new HTMLTag("a")
			a.attr("id", md.to_s)
			res.add(a)
		end
		v.enter res
		super
	end
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_def")

		var md = mclassdef
		if md == null then return
		var mc = md.mclass
		res.attrs["title"] = mc.full_name
		var mi = mc.intro
		if md != mi then
			res.attrs["link"] = mi.mmodule.name + ".html#" + mi.to_s
		end
	end
end
redef class APropdef
	redef fun accept_highlight_visitor(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_pdef")
		var mpd
		mpd = mpropdef
		if mpd != null then res.add(tag(mpd))
		if self isa AAttrPropdef then
			mpd = mreadpropdef
			if mpd != null then res.add(tag(mpd))
			mpd = mwritepropdef
			if mpd != null then res.add(tag(mpd))
		end
		v.enter res
		super
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
	protected fun make_tag(v: HighlightVisitor): HTMLTag
	do
		var res = new HTMLTag("span")
		res.text(text)
		return res
	end

	# Use `empty_tag` to create the tag ; then fill it and add it to the html
	redef fun accept_highlight_visitor(v)
	do
		var fl = v.first_line
		if fl != null and fl > location.line_start then return

		var ll = v.last_line
		if ll != null and ll < location.line_end then return

		var n = make_tag(v)
		if n.attrs.is_empty and n.classes.is_empty then
			for c in n.children do
				v.token_head.add(c)
			end
		else if n.attrs.has_key("link") then
			var a = new HTMLTag("a")
			a.attrs["href"] = n.attrs["link"]
			n.attrs.keys.remove("link")
			a.add(n)
			v.token_head.add(a)
		else
			v.token_head.add(n)
		end
		#debug("WRT: {v.token_head.classes} << '{text.escape_to_c}' ")
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
		if p != null then p.decorate_tag(res, self)
		res.add_class("nc_o")
		return res
	end
end

redef class Variable
	private fun decorate_tag(res: HTMLTag, token: Token)
	do
		if declared_type == null then return
		res.attrs["title"] = name + ": " + declared_type.to_s
	end
end

redef class AVarFormExpr
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_v")
		var variable = self.variable
		if variable == null then return
		variable.decorate_tag(res, token)
	end
end

redef class AVardeclExpr
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_v")
		var variable = self.variable
		if variable == null then return
		variable.decorate_tag(res, token)
	end
end

redef class AForExpr
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_v")
		var vs = variables
		if vs == null then return
		var idx = n_ids.index_of(token.as(TId))
		var variable = vs[idx]
		variable.decorate_tag(res, token)
	end
end

redef class AParam
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_v")
		var mp = mparameter
		if mp == null then return
		res.attrs["title"] = mp.name + ": " + mp.mtype.to_s
	end
end

redef class AAssertExpr
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_ast")
	end
end

redef class ALabel
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_la")
	end
end

redef class ASendExpr
	redef fun decorate_tag(res, token)
	do
		if callsite == null then return
		var mpropdef = callsite.mpropdef
		res.attrs["title"] = mpropdef.to_s + callsite.msignature.to_s
		res.attrs["link"] = mpropdef.mclassdef.mmodule.name + ".html#" + mpropdef.to_s
	end
end

redef class ANewExpr
	redef fun decorate_tag(res, token)
	do
		if callsite == null then return
		var mpropdef = callsite.mpropdef
		res.attrs["title"] = mpropdef.to_s + callsite.msignature.to_s
		res.attrs["link"] = mpropdef.mclassdef.mmodule.name + ".html#" + mpropdef.to_s
	end
end

redef class AAssignOp
	redef fun decorate_tag(res, v)
	do
		var p = parent
		assert p isa AReassignFormExpr

		var callsite = p.reassign_callsite
		if callsite == null then return
		var mpropdef = callsite.mpropdef
		res.attrs["title"] = mpropdef.to_s + callsite.msignature.to_s
		res.attrs["link"] = mpropdef.mclassdef.mmodule.name + ".html#" + mpropdef.to_s
	end
end

redef class AModuleName
	redef fun decorate_tag(res, token)
	do
		parent.decorate_tag(res, token)
	end
end

redef class AModuledecl
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_def")
		res.add_class("nc_m")
		var p = parent
		assert p isa AModule
		var mm = p.mmodule
		if mm == null then return
		res.attrs["title"] = mm.full_name
	end
end

redef class AStdImport
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_m")
		var mm = mmodule
		if mm == null then return
		res.attrs["title"] = mm.full_name
		res.attrs["link"] = mm.name + ".html"
	end
end

redef class AAttrPropdef
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_def")
		var mpd: nullable MPropDef
		mpd = mreadpropdef
		if mpd == null then mpd = mpropdef
		if mpd == null then return
		var mp = mpd.mproperty
		res.attrs["title"] = mp.full_name
		if mp.intro != mpd then
			mpd = mp.intro
			res.attrs["link"] = mpd.mclassdef.mmodule.name + ".html#" + mpd.to_s
		end
	end
end

redef class TId
	redef fun make_tag(v)
	do
		var res = super
		var p = parent
		if p != null then p.decorate_tag(res, self)
		res.add_class("nc_i")
		return res
	end
end
redef class AMethid
	redef fun accept_highlight_visitor(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_def")
		var p = parent
		if p isa AMethPropdef then
			var mpd = p.mpropdef
			if mpd != null then
				var mp = mpd.mproperty
				res.attr("title", mp.full_name)
				if mp.intro != mpd then
					mpd = mp.intro
					var link = mpd.mclassdef.mmodule.name + ".html#" + mpd.to_s
					var l = new HTMLTag("a")
					l.attr("href", link)
					v.enter l
				end
			end
		end
		v.enter res
		super
	end
	redef fun decorate_tag(res, v)
	do
		# nothing to decorate
	end
end
redef class TAttrid
	redef fun make_tag(v)
	do
		var res = super
		var p = parent
		if p != null then p.decorate_tag(res, self)
		res.add_class("nc_a")
		return res
	end
end
redef class AAttrFormExpr
	redef fun decorate_tag(res, v)
	do
		var p = mproperty
		if p == null then return
		res.attrs["title"] = p.full_name
		var pi = p.intro
		res.attrs["link"] = pi.mclassdef.mmodule.name + ".html#" + pi.to_s
	end
end
redef class TClassid
	redef fun make_tag(v)
	do
		var res = super
		var p = parent
		if p != null then p.decorate_tag(res, self)
		res.add_class("nc_t")
		return res
	end
end
redef class AType
	redef fun decorate_tag(res, token)
	do
		var mt = mtype
		if mt == null then return
		var title = mt.to_s
		if mt isa MNullableType then mt = mt.mtype
		if mt isa MVirtualType or mt isa MParameterType then
			res.add_class("nc_vt")
		else if mt isa MClassType then
			title = mt.mclass.full_name
			res.attrs["link"] = mt.mclass.intro.mmodule.name + ".html#" + mt.mclass.intro.to_s
		end
		res.attrs["title"] = title
	end
end
redef class AFormaldef
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_vt")
		if mtype == null then return
		res.attrs["title"] = "{mtype.to_s}: {bound.to_s}"
	end
end
redef class ATypePropdef
	redef fun decorate_tag(res, token)
	do
		res.add_class("nc_def")
		var md = mpropdef
		if md == null then return
		var mp = mpropdef.mproperty
		res.attrs["title"] = mp.full_name
		var mi = mp.intro
		if md != mi then
			res.attrs["link"] = mi.mclassdef.mmodule.name + ".html#" + mi.to_s
		end
	end
end
redef class TComment
	redef fun make_tag(v)
	do
		var res = super
		if parent == null then
			res.add_class("nc_c")
		else
			assert parent isa ADoc
		end
		return res
	end
end
redef class ADoc
	redef fun accept_highlight_visitor(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_d")
		v.enter res
		super
	end
end
redef class TokenLiteral
	redef fun make_tag(v)
	do
		var res = super
		res.add_class("nc_l")
		var p = parent
		if p isa AStringFormExpr then p.decorate_tag(res, self)
		return res
	end
end
redef class ASuperstringExpr
	redef fun accept_highlight_visitor(v)
	do
		var res = new HTMLTag("span")
		res.add_class("nc_ss")
		v.enter res
		super
	end
end
redef class AStringFormExpr
	redef fun decorate_tag(res, v)
	do
		# Workarount to tag strings
		res.classes.remove("nc_l")
		res.add_class("nc_s")
	end
end

