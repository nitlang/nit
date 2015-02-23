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
import doc_down
import html_components
import html::bootstrap
import ordered_tree

redef class Location
	# Github url based on this location
	fun github(gitdir: String): String do
		var base_dir = getcwd.join_path(gitdir).simplify_path
		var file_loc = getcwd.join_path(file.filename).simplify_path
		var gith_loc = file_loc.substring(base_dir.length + 1, file_loc.length)
		return "{gith_loc}:{line_start},{column_start}--{line_end},{column_end}"
	end
end

redef class MEntity
	# ID used as a HTML unique ID and in file names.
	#
	# **Must** match the following (POSIX ERE) regular expression:
	#
	# ~~~POSIX ERE
	# ^[A-Za-z_][A-Za-z0-9._-]*$
	# ~~~
	#
	# That way, the ID is always a valid URI component and a valid XML name.
	fun nitdoc_id: String is abstract

	# URL of this entity’s Nitdoc page.
	fun nitdoc_url: String is abstract

	# Returns the mentity name without short signature.
	#
	# * MProject: `foo`
	# * MGroup: `foo`
	# * MModule: `foo`
	# * MClass: `Foo[E]`
	# * MClassDef: `Foo[E]`
	# * MProperty: `foo(e)`
	# * MPropdef: `foo(e)`
	var html_name: String is lazy do return name.html_escape

	# Returns a Link to the mentity `html_url`.
	#
	# Example: `<a href="html_url" title="mdoc.short_comment">html_short_name</a>
	var html_link: Link is lazy do
		var tpl = new Link(nitdoc_url, html_name)
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.title = mdoc.short_comment
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
			tpl.title = mdoc.short_comment
		end
		return tpl
	end

	# A template article that briefly describe the entity
	fun tpl_short_article: TplArticle do
		var tpl = tpl_article
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.content = mdoc.tpl_short_comment
		end
		return tpl
	end

	# A template article that describe the entity
	fun tpl_article: TplArticle do
		var tpl = new TplArticle.with_title(nitdoc_id, tpl_title)
		tpl.title_classes.add "signature"
		tpl.subtitle = tpl_namespace
		tpl.summary_title = html_name
		return tpl
	end

	# A template signature that contains modifiers and parameters
	fun tpl_declaration: Template is abstract

	# A template namespace
	fun tpl_namespace: Template is abstract

	# A template definition of the mentity
	# include name, sysnopsys, comment and namespace
	fun tpl_definition: TplDefinition is abstract

	# A li element that can go in a list
	fun tpl_list_item: TplListItem do
		var lnk = new Template
		lnk.add new TplLabel.with_classes(tpl_css_classes)
		lnk.add html_link
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.tpl_short_comment
		end
		return new TplListItem.with_content(lnk)
	end

	var tpl_css_classes = new Array[String]

	# Box title for this mentity
	fun tpl_title: Template do
		var title = new Template
		title.add tpl_icon
		title.add tpl_namespace
		return title
	end

	# Icon that will be displayed before the title
	fun tpl_icon: TplIcon do
		var icon = new TplIcon.with_icon("tag")
		icon.css_classes.add_all(tpl_css_classes)
		return icon
	end
end

redef class MConcern
	# Return a li element for `self` that can be displayed in a concern list
	private fun tpl_concern_item: TplListItem do
		var lnk = new Template
		lnk.add html_link_to_anchor
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.tpl_short_comment
		end
		return new TplListItem.with_content(lnk)
	end
end

redef class MProject
	redef var nitdoc_id = name.to_cmangle is lazy
	redef fun nitdoc_url do return root.nitdoc_url

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>project "
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_namespace do return html_link

	redef fun tpl_definition do
		var tpl = new TplDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do return ["public"]
end

redef class MGroup
	redef var nitdoc_id is lazy do
		if parent != null then
			return "{parent.nitdoc_id}__{name.to_cmangle}"
		end
		return name.to_cmangle
	end

	redef fun nitdoc_url do return "group_{nitdoc_id}.html"

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add mproject.tpl_namespace
		if mproject.root != self then
			tpl.add "::"
			tpl.add html_link
		end
		return tpl
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>group "
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end
end

redef class MModule
	redef var nitdoc_id is lazy do
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

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>module "
		tpl.add tpl_namespace
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_namespace do
		var tpl = new Template
		if mgroup != null then
			tpl.add mgroup.tpl_namespace
			tpl.add "::"
		end
		tpl.add html_link
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplClassDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do return ["public"]
end

redef class MClass
	redef var nitdoc_id = "{intro_mmodule.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "class_{nitdoc_id}.html"
	redef fun mdoc_or_fallback do return intro.mdoc

	# Format: `Foo[E]`
	redef var html_name is lazy do
		var tpl = new Template
		tpl.add name.html_escape
		if arity > 0 then
			tpl.add "["
			var parameter_names = new Array[String]
			for p in mparameters do
				parameter_names.add(p.html_name)
			end
			tpl.add parameter_names.join(", ")
			tpl.add "]"
		end
		return tpl.write_to_string
	end

	redef fun tpl_declaration do return intro.tpl_declaration
	redef fun tpl_definition do return intro.tpl_definition

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add intro_mmodule.mgroup.mproject.tpl_namespace
		tpl.add "::<span>"
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add html_link
		return title
	end

	redef fun tpl_icon do return intro.tpl_icon

	fun tpl_signature: Template do
		var tpl = new Template
		if arity > 0 then
			tpl.add "["
			var parameter_names = new Array[String]
			for p in mparameters do
				parameter_names.add(p.html_name)
			end
			tpl.add parameter_names.join(", ")
			tpl.add "]"
		end
		return tpl
	end

	redef fun tpl_css_classes do return intro.tpl_css_classes
end

redef class MClassDef
	redef var nitdoc_id = "{mmodule.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "{mclass.nitdoc_url}#{nitdoc_id}"

	redef fun mdoc_or_fallback do return mdoc or else mclass.mdoc_or_fallback

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add mmodule.tpl_namespace
		tpl.add "::<span>"
		tpl.add mclass.html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_article do
		var tpl = new TplArticle(nitdoc_id)
		tpl.summary_title = "in {mmodule.html_name}"
		tpl.title = tpl_declaration
		tpl.title_classes.add "signature"
		var title = new Template
		title.add "in "
		title.add mmodule.tpl_namespace
		tpl.subtitle = title
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.content = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add html_link
		return title
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add tpl_modifiers
		tpl.add html_link
		tpl.add tpl_signature
		return tpl
	end

	fun tpl_signature: Template do
		var tpl = new Template
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.add "["
			for i in [0..mparameters.length[ do
				tpl.add "{mparameters[i].html_name}: "
				tpl.add bound_mtype.arguments[i].tpl_signature
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplClassDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		for m in mclass.intro.modifiers do set.add m.to_cmangle
		for m in modifiers do set.add m.to_cmangle
		return set.to_a
	end

	fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier.html_escape} "
		end
		return tpl
	end
end

redef class MProperty
	redef var nitdoc_id = "{intro_mclassdef.mclass.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "property_{nitdoc_id}.html"

	redef fun mdoc_or_fallback do return intro.mdoc

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add intro_mclassdef.mclass.tpl_namespace
		tpl.add "::<span>"
		tpl.add intro.html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_declaration do return intro.tpl_declaration

	fun tpl_signature: Template do return new Template

	redef fun tpl_title do return intro.tpl_title

	redef fun tpl_icon do return intro.tpl_icon

	redef fun tpl_css_classes do return intro.tpl_css_classes
end

redef class MPropDef
	redef var nitdoc_id = "{mclassdef.nitdoc_id}__{name.to_cmangle}" is lazy
	redef fun nitdoc_url do return "{mproperty.nitdoc_url}#{nitdoc_id}"

	redef fun mdoc_or_fallback do return mdoc or else mproperty.mdoc_or_fallback

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add mclassdef.tpl_namespace
		tpl.add "::"
		tpl.add html_link
		return tpl
	end

	redef fun tpl_article do
		var tpl = new TplArticle(nitdoc_id)
		tpl.summary_title = "in {mclassdef.html_name}"
		var title = new Template
		title.add "in "
		title.add mclassdef.html_link
		tpl.title = title
		tpl.subtitle = tpl_declaration
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.content = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add tpl_modifiers
		tpl.add html_link
		tpl.add tpl_signature
		return tpl
	end

	redef fun tpl_css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		for m in mproperty.intro.modifiers do set.add m.to_cmangle
		for m in modifiers do set.add m.to_cmangle
		return set.to_a
	end

	fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier.html_escape} "
		end
		return tpl
	end

	fun tpl_signature: Template do return new Template

	redef fun tpl_list_item do
		var lnk = new Template
		lnk.add new TplLabel.with_classes(tpl_css_classes.to_a)
		var atext = html_link.text
		var ahref = "{mclassdef.mclass.nitdoc_url}#{mproperty.nitdoc_id}"
		var atitle = html_link.title
		var anchor = new Link.with_title(ahref, atext, atitle)
		lnk.add anchor
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.tpl_short_comment
		end
		return new TplListItem.with_content(lnk)
	end

	fun tpl_inheritance_item: TplListItem do
		var lnk = new Template
		lnk.add new TplLabel.with_classes(tpl_css_classes.to_a)
		lnk.add mclassdef.mmodule.tpl_namespace
		lnk.add "::"
		var atext = mclassdef.html_link.text
		var ahref = "{mclassdef.mclass.nitdoc_url}#{mproperty.nitdoc_id}"
		var atitle = mclassdef.html_link.title
		var anchor = new Link.with_title(ahref, atext, atitle)
		lnk.add anchor
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.tpl_short_comment
		end
		var li = new TplListItem.with_content(lnk)
		li.css_classes.add "signature"
		return li
	end
end

redef class MAttributeDef
	redef fun tpl_signature do
		var tpl = new Template
		if static_mtype != null then
			tpl.add ": "
			tpl.add static_mtype.tpl_signature
		end
		return tpl
	end
end

redef class MMethod
	redef fun tpl_signature do
		var tpl = new Template
		var params = new Array[String]
		for param in intro.msignature.mparameters do
			params.add param.name.html_escape
		end
		if not params.is_empty then
			tpl.add "("
			tpl.add params.join(", ")
			tpl.add ")"
		end
		return tpl
	end
end

redef class MMethodDef
	redef fun tpl_signature do return msignature.tpl_signature
end

redef class MVirtualTypeProp
	redef fun html_link do return mvirtualtype.html_link
	redef fun tpl_signature do return html_link
end

redef class MVirtualTypeDef
	redef fun tpl_signature do
		var tpl = new Template
		if bound == null then return tpl
		tpl.add ": "
		tpl.add bound.tpl_signature
		return tpl
	end
end

redef class MType
	fun tpl_signature: Template is abstract
end

redef class MClassType
	redef fun html_link do return mclass.html_link
	redef fun tpl_signature do return html_link
end

redef class MNullableType
	redef fun tpl_signature do
		var tpl = new Template
		tpl.add "nullable "
		tpl.add mtype.tpl_signature
		return tpl
	end
end

redef class MGenericType
	redef fun tpl_signature do
		var lnk = html_link
		var tpl = new Template
		tpl.add new Link.with_title(lnk.href, mclass.name.html_escape, lnk.title)
		tpl.add "["
		for i in [0..arguments.length[ do
			tpl.add arguments[i].tpl_signature
			if i < arguments.length - 1 then tpl.add ", "
		end
		tpl.add "]"
		return tpl
	end
end

redef class MParameterType
	redef fun html_link do
		return new Link.with_title("{mclass.nitdoc_url}#FT_{name.to_cmangle}", name, "formal type")
	end
	redef fun tpl_signature do return html_link
end

redef class MVirtualType
	redef fun html_link do return mproperty.intro.html_link
	redef fun tpl_signature do return html_link
end

redef class MSignature
	redef fun tpl_signature do
		var tpl = new Template
		if not mparameters.is_empty then
			tpl.add "("
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].tpl_signature
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add ")"
		end
		if return_mtype != null then
			tpl.add ": "
			tpl.add return_mtype.tpl_signature
		end
		return tpl
	end
end

redef class MParameter
	fun tpl_signature: Template do
		var tpl = new Template
		tpl.add "{name}: "
		tpl.add mtype.tpl_signature
		if is_vararg then tpl.add "..."
		return tpl
	end
end

redef class ConcernsTree

	private var seen = new HashSet[MConcern]

	redef fun add(p, e) do
		if seen.has(e) then return
		seen.add e
		super(p, e)
	end

	fun to_tpl: TplList do
		var lst = new TplList.with_classes(["list-unstyled", "list-definition"])
		for r in roots do
			var li = r.tpl_concern_item
			lst.add_li li
			build_list(r, li)
		end
		return lst
	end

	private fun build_list(e: MConcern, li: TplListItem) do
		if not sub.has_key(e) then return
		var subs = sub[e]
		var lst = new TplList.with_classes(["list-unstyled", "list-definition"])
		for e2 in subs do
			if e2 isa MGroup and e2.is_root then
				build_list(e2, li)
			else
				var sli = e2.tpl_concern_item
				lst.add_li sli
				build_list(e2, sli)
			end
		end
		li.append lst
	end
end


################################################################################
# Additions to `model_ext`.

redef class MRawType
	redef fun tpl_signature do
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
	redef fun tpl_signature do return inner.tpl_signature
end

redef class MInnerClassDef
	redef fun nitdoc_url do return inner.nitdoc_url

	redef fun html_link_to_anchor do return inner.html_link_to_anchor
	redef fun html_link do return inner.html_link
	redef fun tpl_signature do return inner.tpl_signature

	redef fun tpl_definition do
		var tpl = new TplClassDefinition
		var mdoc = mdoc_or_fallback
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end
end
