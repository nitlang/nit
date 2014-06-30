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

# Nitdoc model template parts generation
module doc_model

import model_utils
import modelize_property
import markdown
import doc_templates

redef class MDoc
	# Comment synopsys HTML escaped
	fun short_comment: String do return content.first.html_escape

	# Full comment HTML escaped
	fun full_comment: String do return content.join("\n").html_escape

	# Synopsys in a template
	fun tpl_short_comment: Streamable do return short_markdown

	# Full comment in a template
	fun tpl_comment: Streamable do return full_markdown
end

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
	# HTML Escaped name
	fun nitdoc_name: String is abstract

	# Used as HTML unique ids
	fun nitdoc_id: String is abstract

	# URL of this entity Nitdoc page
	fun nitdoc_url: String is abstract

	# A template link to the mentity `nitdoc_anchor`
	fun tpl_anchor: TplLink do
		var tpl = new TplLink("#{nitdoc_id}", nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		end
		return tpl
	end

	# A template link to the mentity `nitdoc_url`
	fun tpl_link: TplLink do
		var tpl = new TplLink(nitdoc_url, nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		end
		return tpl
	end

	# A template article that briefly describe the entity
	fun tpl_short_article: TplArticle do
		var tpl = tpl_article
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
		tpl.summary_title = nitdoc_name
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
		lnk.add tpl_link
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.short_comment
		end
		return new TplListItem.with_content(lnk)
	end

	fun tpl_css_classes: Array[String] is abstract

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
		lnk.add tpl_anchor
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.short_comment
		end
		return new TplListItem.with_content(lnk)
	end
end

redef class MProject

	redef fun nitdoc_name do return name.html_escape
	redef fun nitdoc_id do return nitdoc_name
	redef fun nitdoc_url do return "project_{name}.html"

	redef fun mdoc do
		if root != null then
			return root.mdoc
		end
		return super
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>project "
		tpl.add tpl_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_namespace do return tpl_link

	redef fun tpl_definition do
		var tpl = new TplDefinition
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do return ["public"]
end

redef class MGroup
	redef fun nitdoc_name do return name.html_escape

	redef fun nitdoc_id do
		if parent != null then
			return "{parent.nitdoc_id}__{nitdoc_name}"
		end
		return "{mproject.nitdoc_id}__{nitdoc_name}"
	end

	redef fun nitdoc_url do return "group_{name}.html"

	redef fun tpl_namespace do
		var tpl = new Template
		if mproject != null then
			tpl.add mproject.tpl_namespace
		else if parent != null then
			tpl.add parent.tpl_namespace
		end
		if mproject != null and mproject.root != self then
			tpl.add "::"
			tpl.add tpl_link
		end
		return tpl
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>group "
		tpl.add tpl_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplDefinition
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do return ["public"]
end

redef class MModule
	# Is the mmodule created by nitdoc for internal purpose?
	var is_fictive: Bool writable = false

	redef fun nitdoc_name do return name.html_escape

	redef fun nitdoc_id do
		if mgroup != null then
			return "{mgroup.nitdoc_id}__{nitdoc_name}"
		end
		return nitdoc_name
	end

	redef fun nitdoc_url do
		var res = new FlatBuffer
		res.append("module_")
		var mowner = public_owner
		if mowner != null then
			res.append("{public_owner.name}_")
		end
		res.append("{self.name}.html")
		return res.to_s
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add "<span>module "
		tpl.add tpl_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_namespace do
		var tpl = new Template
		if mgroup != null then
			tpl.add mgroup.tpl_namespace
			tpl.add "::"
		end
		tpl.add tpl_link
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplClassDefinition
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add tpl_namespace
		return title
	end

	redef fun tpl_css_classes do return ["public"]
end

redef class MClass
	redef fun nitdoc_name do return name.html_escape
	redef fun nitdoc_id do return "{intro_mmodule.mgroup.mproject}__{name.to_cmangle}"
	redef fun nitdoc_url do return "class_{public_owner}_{name}.html"

	redef fun mdoc do return intro.mdoc

	redef fun tpl_declaration do return intro.tpl_declaration

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add intro_mmodule.mgroup.mproject.tpl_namespace
		tpl.add "::<span>"
		tpl.add tpl_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add tpl_link
		title.add tpl_signature
		return title
	end

	redef fun tpl_icon do return intro.tpl_icon

	fun tpl_signature: Template do
		var tpl = new Template
		if arity > 0 then
			tpl.add "["
			tpl.add intro.parameter_names.join(", ")
			tpl.add "]"
		end
		return tpl
	end

	redef fun tpl_article do
		var tpl = super
		tpl.summary_title = "{nitdoc_name}{tpl_signature.write_to_string}"
		return tpl
	end

	redef fun tpl_css_classes do return intro.tpl_css_classes
end

redef class MClassDef
	redef fun nitdoc_name do return mclass.nitdoc_name
	redef fun nitdoc_id do return "{mmodule.nitdoc_id}__{name.to_cmangle}"
	redef fun nitdoc_url do return "{mclass.nitdoc_url}#{nitdoc_id}"

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add mmodule.tpl_namespace
		tpl.add "::<span>"
		tpl.add mclass.tpl_link
		tpl.add "</span>"
		return tpl
	end

	redef fun tpl_article do
		var tpl = new TplArticle(nitdoc_id)
		tpl.summary_title = "in {mmodule.nitdoc_name}"
		tpl.title = tpl_declaration
		tpl.title_classes.add "signature"
		var title = new Template
		title.add "in "
		title.add mmodule.tpl_namespace
		tpl.subtitle = title
		if mdoc != null then
			tpl.content = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add tpl_link
		title.add tpl_signature
		return title
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add tpl_modifiers
		tpl.add tpl_link
		tpl.add tpl_signature
		return tpl
	end

	fun tpl_signature: Template do
		var tpl = new Template
		if not parameter_names.is_empty then
			tpl.add "["
			for i in [0..parameter_names.length[ do
				tpl.add "{parameter_names[i]}: "
				tpl.add bound_mtype.arguments[i].tpl_signature
				if i < parameter_names.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end

	redef fun tpl_definition do
		var tpl = new TplClassDefinition
		tpl.namespace = tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		set.add_all mclass.intro.modifiers
		set.add_all modifiers
		return set.to_a
	end

	fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier} "
		end
		return tpl
	end

	redef fun tpl_list_item do
		var lnk = new Template
		lnk.add new TplLabel.with_classes(tpl_css_classes)
		lnk.add tpl_link
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.short_comment
		else if mclass.intro.mdoc != null then
			lnk.add ": "
			lnk.add mclass.intro.mdoc.short_comment
		end
		return new TplListItem.with_content(lnk)
	end

	redef fun tpl_anchor: TplLink do
		var tpl = new TplLink("#{nitdoc_id}", nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		else if mclass.intro.mdoc != null then
			tpl.title = mclass.intro.mdoc.short_comment
		end
		return tpl
	end

	redef fun tpl_link: TplLink do
		var tpl = new TplLink(nitdoc_url, nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		else if mclass.intro.mdoc != null then
			tpl.title = mclass.intro.mdoc.short_comment
		end
		return tpl
	end
end

redef class MProperty
	redef fun nitdoc_name do return name.html_escape
	redef fun nitdoc_id do return "{intro_mclassdef.mclass.nitdoc_id}__{name.to_cmangle}"
	redef fun nitdoc_url do return "proprety_{nitdoc_id}.html"

	redef fun mdoc do return intro.mdoc

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add intro_mclassdef.mclass.tpl_namespace
		tpl.add "::<span>"
		tpl.add intro.tpl_link
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
	redef fun nitdoc_name do return mproperty.nitdoc_name
	redef fun nitdoc_id do return "{mclassdef.nitdoc_id}__{name.to_cmangle}"
	redef fun nitdoc_url do return "{mproperty.nitdoc_url}#{nitdoc_id}"

	redef fun tpl_anchor: TplLink do
		var tpl = new TplLink("#{nitdoc_id}", nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		else if mproperty.intro.mdoc != null then
			tpl.title = mproperty.intro.mdoc.short_comment
		end
		return tpl
	end

	redef fun tpl_link: TplLink do
		var tpl = new TplLink(nitdoc_url, nitdoc_name)
		if mdoc != null then
			tpl.title = mdoc.short_comment
		else if mproperty.intro.mdoc != null then
			tpl.title = mproperty.intro.mdoc.short_comment
		end
		return tpl
	end

	redef fun tpl_namespace do
		var tpl = new Template
		tpl.add mclassdef.tpl_namespace
		tpl.add "::"
		tpl.add mproperty.name
		return tpl
	end

	redef fun tpl_article do
		var tpl = new TplArticle(nitdoc_id)
		tpl.summary_title = "in {mclassdef.nitdoc_name}"
		var title = new Template
		title.add "in "
		title.add mclassdef.tpl_link
		tpl.title = title
		tpl.subtitle = tpl_declaration
		if mdoc != null then
			tpl.content = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_title do
		var title = new Template
		title.add tpl_icon
		title.add tpl_link
		title.add tpl_signature
		return title
	end

	redef fun tpl_definition do
		var tpl = new TplDefinition
		tpl.namespace = mclassdef.tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end

	redef fun tpl_declaration do
		var tpl = new Template
		tpl.add tpl_modifiers
		tpl.add tpl_link
		tpl.add tpl_signature
		return tpl
	end

	redef fun tpl_css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		set.add_all mproperty.intro.modifiers
		set.add_all modifiers
		return set.to_a
	end

	fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier} "
		end
		return tpl
	end

	fun tpl_signature: Template do return new Template

	redef fun tpl_list_item do
		var lnk = new Template
		lnk.add new TplLabel.with_classes(tpl_css_classes.to_a)
		lnk.add tpl_link
		if mdoc != null then
			lnk.add ": "
			lnk.add mdoc.short_comment
		else if mproperty.intro.mdoc != null then
			lnk.add ": "
			lnk.add mproperty.intro.mdoc.short_comment
		end
		return new TplListItem.with_content(lnk)
	end
end

redef class MMethod
	redef fun tpl_signature do
		var tpl = new Template
		var params = new Array[String]
		for param in intro.msignature.mparameters do
			params.add param.name
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
	redef fun tpl_link do return mvirtualtype.tpl_link
	redef fun tpl_signature do return tpl_link
end

redef class MVirtualTypeDef
	redef fun tpl_signature do
		var tpl = new Template
		tpl.add ": "
		tpl.add bound.tpl_signature
		return tpl
	end
end

redef class MType
	fun tpl_signature: Template is abstract
end

redef class MClassType
	redef fun tpl_link do return mclass.tpl_link
	redef fun tpl_signature do return tpl_link
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
		var tpl = new Template
		tpl.add tpl_link
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
	redef fun tpl_link do
		var name = mclass.intro.parameter_names[rank]
		return new TplLink.with_title("{mclass.nitdoc_url}#FT_{name}", name, "formal type")
	end
	redef fun tpl_signature do return tpl_link
end

redef class MVirtualType
	redef fun tpl_link do return mproperty.intro.tpl_link
	redef fun tpl_signature do return tpl_link
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

