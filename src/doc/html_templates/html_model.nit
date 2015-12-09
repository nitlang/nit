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

# HTML templates for Nit model MEntities.
module html_model

import doc_base
import html_components
import ordered_tree
import web::model_html

redef class MEntity
	# URL of this entity’s Nitdoc page.
	fun nitdoc_url: String is abstract

	# Returns a Link to the mentity `html_url`.
	#
	# Example: `<a href="html_url" title="mdoc.short_comment">html_short_name</a>
	redef var html_link is lazy do
		var tpl = new Link(nitdoc_url, html_name)
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.title = mdoc.synopsis
		end
		return tpl
	end

	# Returns a Link to the mentity `nitdoc_id`.
	#
	# Example: `<a href="#nitdoc_id" title="mdoc.short_comment">html_short_name</a>
	fun html_link_to_anchor: Link do
		var tpl = new Link("#{nitdoc_id}", html_name)
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.title = mdoc.synopsis
		end
		return tpl
	end

	# A li element that can go in a `HTMLList`.
	fun html_list_item: ListItem do
		var tpl = new Template
		tpl.add new DocHTMLLabel.with_classes(css_classes)
		tpl.add html_link
		var comment = html_synopsis
		if comment != null then
			tpl.add ": "
			tpl.add comment
		end
		return new ListItem(tpl)
	end
end

redef class MPackage
	redef var nitdoc_id = name.to_cmangle is lazy

	redef fun nitdoc_url do
		var root = self.root
		if root == null then return super
		return root.nitdoc_url
	end
end

redef class MGroup
	redef var nitdoc_id is lazy do
		var parent = self.parent
		if parent != null then
			return "{parent.nitdoc_id}__{name.to_cmangle}"
		end
		return name.to_cmangle
	end

	redef fun nitdoc_url do return "group_{nitdoc_id}.html"
end

redef class MModule
	redef var nitdoc_id is lazy do
		var mgroup = self.mgroup
		if mgroup != null then
			if mgroup.mmodules.length == 1 then
				return "{mgroup.nitdoc_id}-"
			else
				return "{mgroup.nitdoc_id}__{name.to_cmangle}"
			end
		end
		return name.to_cmangle
	end

	redef fun nitdoc_url do return "module_{nitdoc_id}.html"
end

redef class MClass
	redef var nitdoc_id = "{intro_mmodule.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "class_{nitdoc_id}.html"
end

redef class MClassDef
	redef var nitdoc_id = "{mmodule.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "{mclass.nitdoc_url}#{nitdoc_id}"
end

redef class MProperty
	redef var nitdoc_id = "{intro_mclassdef.mclass.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "property_{nitdoc_id}.html"
end

redef class MPropDef
	redef var nitdoc_id = "{mclassdef.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "{mproperty.nitdoc_url}#{nitdoc_id}"
end

redef class MAttributeDef

	redef fun html_modifiers do
		var res = super
		res.add "var"
		return res
	end

	redef fun html_short_signature do return new Template

	redef fun html_signature do
		var static_mtype = self.static_mtype
		var tpl = new Template
		if static_mtype != null then
			tpl.add ": "
			tpl.add static_mtype.html_signature
		end
		return tpl
	end
end

redef class MParameterType
	redef fun html_link do
		return new Link.with_title("{mclass.nitdoc_url}#FT_{name.to_cmangle}", name, "formal type")
	end
end

redef class MVirtualType
	redef fun html_link do return mproperty.intro.html_link
end

redef class ConcernsTree
	# Render `self` as a hierarchical UnorderedList.
	fun html_list: UnorderedList do
		var lst = new UnorderedList
		lst.css_classes.add "list-unstyled list-definition"
		for r in roots do
			var li = r.html_concern_item
			lst.add_li li
			build_html_list(r, li)
		end
		return lst
	end

	# Build the html list recursively.
	private fun build_html_list(e: MConcern, li: ListItem) do
		if not sub.has_key(e) then return
		var subs = sub[e]
		var lst = new UnorderedList
		lst.css_classes.add "list-unstyled list-definition"
		for e2 in subs do
			if e2 isa MGroup and e2.is_root then
				build_html_list(e2, li)
			else
				var sli = e2.html_concern_item
				lst.add_li sli
				build_html_list(e2, sli)
			end
		end
		var text = new Template
		text.add li.text
		if not lst.is_empty then text.add lst
		li.text = text
	end
end

redef class MConcern
	# Return a li element for `self` that can be displayed in a concern list
	private fun html_concern_item: ListItem do
		var lnk = html_link
		var tpl = new Template
		tpl.add new Link.with_title("#{nitdoc_id}.concern", lnk.text, lnk.title)
		var comment = html_synopsis
		if comment != null then
			tpl.add ": "
			tpl.add comment
		end
		return new ListItem(tpl)
	end
end

################################################################################
# Additions to `model_ext`.

redef class MRawType
	redef fun html_signature do
		var tpl = new Template

		for part in parts do
			if part.target != null then
				tpl.add part.target.as(not null).html_link
			else
				tpl.add part.text.html_escape
			end
		end
		return tpl
	end
end

redef class MInnerClass
	redef fun nitdoc_url do return inner.nitdoc_url
	redef fun html_signature do return inner.html_signature
end

redef class MInnerClassDef
	redef fun nitdoc_url do return inner.nitdoc_url

	redef fun html_link_to_anchor do return inner.html_link_to_anchor
	redef fun html_link do return inner.html_link
	redef fun html_signature do return inner.html_signature
end
