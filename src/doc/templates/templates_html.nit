# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Translate mentities to html blocks.
module templates_html

import model::model_collect
import doc::doc_down
import html::bootstrap
import catalog

redef class MEntity

	# The MEntity unique ID in the HTML output
	var html_id: String is lazy do return full_name.to_cmangle

	# The MEntity URL in the HTML output
	#
	# You MUST redefine this method.
	# Depending on your implementation, this URL can be a page URL or an anchor.
	var html_url: String is lazy do return html_id

	# The MEntity name escaped for HTML
	var html_name: String is lazy do return name.html_escape

	# The MEntity `full_name` escaped for HTML
	var html_full_name: String is lazy do return full_name.html_escape

	# Link to the MEntity in the HTML output
	#
	# You should redefine this method depending on the organization or your
	# output.
	fun html_link(text, title: nullable String): Link do
		if text == null then
			text = html_name
		end
		var mdoc = self.mdoc_or_fallback
		if title == null and mdoc != null then
			title = mdoc.synopsis
		end
		return new Link(html_url, text, title)
	end

	# Returns the complete MEntity declaration decorated with HTML
	#
	# Examples:
	# * MPackage: `package foo`
	# * MGroup: `group foo`
	# * MModule: `module foo`
	# * MClass: `private abstract class Foo[E: Object]`
	# * MClassDef: `redef class Foo[E]`
	# * MProperty: `private fun foo(e: Object): Int`
	# * MPropdef: `redef fun foo(e)`
	fun html_declaration: Template do
		var tpl = new Template
		tpl.add "<span class='signature'>"
		for modifier in collect_modifiers do
			tpl.add "<span class='modifier'>{modifier}</span>&nbsp;"
		end
		tpl.add "<span class='name'>{html_link.write_to_string}</span>"
		tpl.add html_signature(false)
		tpl.add "</span>"
		return tpl
	end

	# Returns the MEntity signature decorated with HTML
	#
	# This function only returns the parenthesis and return types.
	# See `html_declaration` for the full declaration including modifiers and name.
	fun html_signature(short: nullable Bool): Template do return new Template

	# Returns `full_name` decorated with HTML links
	fun html_namespace: Template is abstract

	# An icon representative of the mentity
	fun html_icon: BSIcon do return new BSIcon("tag", ["text-muted"])

	# A li element that can go in a `HTMLList`
	fun html_list_item: ListItem do
		var tpl = new Template
		tpl.add html_namespace
		var comment = mdoc_or_fallback
		if comment != null then
			tpl.add ": "
			tpl.add comment.html_synopsis
		end
		return new ListItem(tpl)
	end

	# CSS classes used to decorate `self`
	#
	# Mainly used for icons.
	var css_classes: Array[String] = collect_modifiers is lazy
end

redef class MPackage
	redef fun html_namespace do return html_link
	redef fun html_icon do return new BSIcon("book", ["text-muted"])
	redef var css_classes = ["public"]
end

redef class MGroup
	redef fun html_icon do return new BSIcon("folder-close", ["text-muted"])

	redef fun html_namespace do
		var tpl = new Template
		var parent = self.parent
		if parent != null then
			tpl.add parent.html_namespace
			tpl.add " > "
		end
		tpl.add html_link
		return tpl
	end
end

redef class MModule
	redef fun html_icon do return new BSIcon("file", ["text-muted"])

	redef fun html_namespace do
		var mpackage = self.mpackage
		var tpl = new Template
		if mpackage != null then
			tpl.add mpackage.html_namespace
			tpl.add " :: "
		end
		tpl.add html_link
		return tpl
	end
end

redef class MClass
	redef fun html_icon do return new BSIcon("stop", css_classes)
	redef fun html_signature(short) do return intro.html_signature(short)
	redef fun css_classes do return super + [visibility.to_s]

	redef fun html_namespace do
		var mgroup = intro_mmodule.mgroup
		var tpl = new Template
		if mgroup != null then
			tpl.add mgroup.mpackage.html_namespace
			tpl.add " :: "
		end
		tpl.add "<span>"
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end
end

redef class MClassDef
	redef fun css_classes do return super + mclass.css_classes

	redef fun html_namespace do
		var tpl = new Template
		var mpackage = mmodule.mpackage
		if mpackage != null and is_intro then
			if is_intro then
				tpl.add mpackage.html_namespace
				tpl.add " $ "
			else
				tpl.add mmodule.html_namespace
				tpl.add " $ "
				var intro_mpackage = mclass.intro.mmodule.mpackage
				if intro_mpackage != null and mpackage != intro_mpackage then
					tpl.add intro_mpackage.html_namespace
					tpl.add " :: "
				end
			end
		else
			tpl.add mmodule.html_namespace
			tpl.add " $ "
		end
		tpl.add html_link
		return tpl
	end

	redef fun html_icon do
		if is_intro then
			return new BSIcon("plus", css_classes)
		end
		return new BSIcon("asterisk", css_classes)
	end

	redef fun html_signature(short) do
		var tpl = new Template
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.add "["
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].html_name
				if short == null or not short then
					tpl.add ": "
					tpl.add bound_mtype.arguments[i].html_signature(short)
				end
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end
end

redef class MProperty
	redef fun html_declaration do return intro.html_declaration
	redef fun html_signature(short) do return intro.html_signature(short)
	redef fun html_icon do return new BSIcon("tag", css_classes)
	redef fun css_classes do return super + [visibility.to_s]

	redef fun html_namespace do
		var tpl = new Template
		tpl.add intro_mclassdef.mclass.html_namespace
		tpl.add " :: "
		tpl.add intro.html_link
		return tpl
	end
end

redef class MPropDef
	redef fun css_classes do return super + mproperty.css_classes

	redef fun html_namespace do
		var tpl = new Template
		tpl.add mclassdef.html_namespace
		tpl.add " :: "
		tpl.add html_link
		return tpl
	end

	redef fun html_icon do
		if is_intro then
			return new BSIcon("plus", css_classes)
		end
		return new BSIcon("asterisk", css_classes)
	end
end

redef class MAttributeDef
	redef fun html_signature(short) do
		var static_mtype = self.static_mtype
		var tpl = new Template
		if static_mtype != null then
			tpl.add ": "
			tpl.add static_mtype.html_signature(short)
		end
		return tpl
	end
end

redef class MMethodDef
	redef fun html_signature(short) do
		var new_msignature = self.new_msignature
		if mproperty.is_root_init and new_msignature != null then
			return new_msignature.html_signature(short)
		end
		var msignature = self.msignature
		if msignature == null then return new Template
		return msignature.html_signature(short)
	end
end

redef class MVirtualTypeProp
	redef fun html_link(text, title) do return mvirtualtype.html_link(text, title)
end

redef class MVirtualTypeDef
	redef fun html_signature(short) do
		var bound = self.bound
		var tpl = new Template
		if bound == null then return tpl
		tpl.add ": "
		tpl.add bound.html_signature(short)
		return tpl
	end
end

redef class MType
	redef fun html_signature(short) do return html_link
end

redef class MClassType
	redef fun html_link(text, title) do return mclass.html_link(text, title)
end

redef class MNullableType
	redef fun html_signature(short) do
		var tpl = new Template
		tpl.add "nullable "
		tpl.add mtype.html_signature(short)
		return tpl
	end
end

redef class MGenericType
	redef fun html_signature(short) do
		var lnk = html_link
		var tpl = new Template
		tpl.add new Link(lnk.href, mclass.name.html_escape, lnk.title)
		tpl.add "["
		for i in [0..arguments.length[ do
			tpl.add arguments[i].html_signature(short)
			if i < arguments.length - 1 then tpl.add ", "
		end
		tpl.add "]"
		return tpl
	end
end

redef class MParameterType
	redef fun html_link(text, title) do
		if text == null then text = name
		if title == null then title = "formal type"
		return new Link("{mclass.html_url}#FT_{name.to_cmangle}", text, title)
	end
end

redef class MVirtualType
	redef fun html_link(text, title) do return mproperty.intro.html_link(text, title)
end

redef class MSignature
	redef fun html_signature(short) do
		var tpl = new Template
		if not mparameters.is_empty then
			tpl.add "("
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].html_signature(short)
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add ")"
		end
		if short == null or not short then
			var return_mtype = self.return_mtype
			if return_mtype != null then
				tpl.add ": "
				tpl.add return_mtype.html_signature(short)
			end
		end
		return tpl
	end
end

redef class MParameter
	redef fun html_signature(short) do
		var tpl = new Template
		tpl.add name
		if short == null or not short then
			tpl.add ": "
			tpl.add mtype.html_signature(short)
		end
		if is_vararg then tpl.add "..."
		return tpl
	end
end

redef class Person

	# HTML uniq id
	fun html_id: String do return name.to_cmangle

	# HTML default URL
	#
	# Should be redefined in clients.
	fun html_url: String do return "person_{html_id}.html"

	# Link to this person `html_url`
	fun html_link: Link do return new Link(html_url, name)

	redef fun to_html do
		var tpl = new Template
		tpl.addn "<span>"
		var gravatar = self.gravatar
		if gravatar != null then
			tpl.addn "<img class='avatar' src='https://secure.gravatar.com/avatar/{gravatar}?size=14&amp;default=retro' />"
		end
		tpl.addn html_link
		tpl.addn "</span>"
		return tpl.write_to_string
	end
end
