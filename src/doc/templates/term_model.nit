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

# Markdown templates for Nit model MEntities.
#
# This module introduces Markdown rendering services in model entities.
# With the `no_color` option set to `false`, the output can be highlighted for console.
module term_model

import model_collect
import console

redef class MDoc
	# Returns the full comment formatted for the console
	fun cs_comment(no_color: nullable Bool, indent: nullable Int): String do
		var res = new FlatBuffer
		indent = indent or else 0
		for line in content do
			res.append "{" " * indent}{line}\n"
		end
		if no_color == null or not no_color then
			return res.write_to_string.green
		end
		return res.write_to_string
	end

	# Returns the synopsis formatted for the console
	fun cs_short_comment(no_color: nullable Bool): String do
		if no_color == null or not no_color then
			return content.first.green
		end
		return content.first
	end
end

redef class MEntity

	# Text icon to be displayed in front of the entity
	fun cs_icon(no_color: nullable Bool): String do
		return public_visibility.cs_icon(no_color)
	end

	# Source code location of this MEntity formatted for console
	fun cs_location(no_color: nullable Bool): String do
		if no_color == null or not no_color then
			return location.to_s.bold.gray
		end
		return location.to_s
	end

	# Returns `self.full_name` formatted for console
	fun cs_full_name(no_color: nullable Bool): String do
		if no_color == null or not no_color then
			return full_name.bold.blue
		end
		return full_name
	end

	# Returns `self` signature formatted for console.
	fun cs_signature(no_color: nullable Bool): String do return ""

	# Returns the comment of this MEntity formatted for console.
	fun cs_comment(no_color: nullable Bool): nullable String do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		# FIXME add markdown for console
		return mdoc.cs_comment(no_color)
	end

	# Returns the comment of this MEntity formatted for console.
	fun cs_short_comment(no_color: nullable Bool): nullable String do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		return mdoc.cs_short_comment(no_color)
	end

	# Returns the complete MEntity declaration (modifiers + name + signature).
	#
	# * MPackage: `package foo`
	# * MGroup: `group foo`
	# * MModule: `module foo`
	# * MClass: `private abstract class Foo[E: Object]`
	# * MClassDef: `redef class Foo[E]`
	# * MProperty: `private fun foo(e: Object): Int`
	# * MPropdef: `redef fun foo(e)`
	fun cs_declaration(no_color: nullable Bool): String do
		var tpl = new FlatBuffer
		tpl.append collect_modifiers.join(" ")
		tpl.append " "
		tpl.append name
		tpl.append cs_signature(no_color)
		if no_color == null or not no_color then
			return tpl.write_to_string.bold
		end
		return tpl.write_to_string
	end

	# Returns `self` as a list element that can be displayed in console.
	#
	# Displays `cs_icon`, `cs_name`, `cs_short_comment, `cs_namespace`,
	# `cs_declaration` and `cs_location`.
	fun cs_list_item(no_color: nullable Bool): String do
		var tpl = new FlatBuffer
		tpl.append " "
		tpl.append cs_icon(no_color)
		tpl.append " "
		tpl.append cs_full_name(no_color)
		var comment = cs_short_comment(no_color)
		if comment != null then
			tpl.append "\n   "
			if no_color == null or not no_color then
				tpl.append "# ".green
			else
				tpl.append "# "
			end
			tpl.append comment
		end
		tpl.append "\n   "
		tpl.append cs_declaration(no_color)
		tpl.append "\n   "
		tpl.append cs_location(no_color)
		return tpl.write_to_string
	end

	# Source code associated to this MEntity.
	#
	# Uses `cs_location` to locate the source code.
	fun cs_source_code: String do
		var tpl = new Buffer
		tpl.append "\n~~~\n"
		tpl.append location.text
		tpl.append "\n~~~\n"
		return tpl.write_to_string
	end
end

redef class MClass
	redef fun cs_icon(no_color) do return intro.cs_icon(no_color)
	redef fun cs_signature(no_color) do return intro.cs_signature(no_color)
end

redef class MClassDef
	redef fun cs_icon(no_color) do
		if is_intro then return visibility.cs_icon(no_color)
		return visibility.cs_visibility_color("*")
	end

	# Returns the MClassDef generic signature with static bounds.
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.append "["
			for i in [0..mparameters.length[ do
				tpl.append "{mparameters[i].name}: "
				tpl.append bound_mtype.arguments[i].cs_signature(no_color)
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append "]"
		end
		return tpl.write_to_string
	end
end

redef class MProperty
	redef fun cs_icon(no_color) do return intro.cs_icon(no_color)
	redef fun cs_signature(no_color) do return intro.cs_signature(no_color)
end

redef class MPropDef
	redef fun cs_icon(no_color) do
		if is_intro then return visibility.cs_icon(no_color)
		return visibility.cs_visibility_color("*", no_color)
	end
end

redef class MAttributeDef
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		var static_mtype = self.static_mtype
		if static_mtype != null then
			tpl.append ": "
			tpl.append static_mtype.cs_signature(no_color)
		end
		return tpl.write_to_string
	end
end

redef class MMethodDef
	redef fun cs_signature(no_color) do
		return msignature.as(not null).cs_signature(no_color)
	end
end

redef class MVirtualTypeDef
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		var bound = self.bound
		if bound == null then return tpl.write_to_string
		tpl.append ": "
		tpl.append bound.cs_signature(no_color)
		return tpl.write_to_string
	end
end

redef class MClassType
	redef fun cs_signature(no_color) do return name
end

redef class MNullableType
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		tpl.append "nullable "
		tpl.append mtype.cs_signature(no_color)
		return tpl.write_to_string
	end
end

redef class MGenericType
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		tpl.append mclass.name
		tpl.append "["
		for i in [0..arguments.length[ do
			tpl.append arguments[i].cs_signature(no_color)
			if i < arguments.length - 1 then tpl.append ", "
		end
		tpl.append "]"
		return tpl.write_to_string
	end
end

redef class MParameterType
	redef fun cs_signature(no_color) do return name
end

redef class MVirtualType
	redef fun cs_signature(no_color) do return name
end

redef class MSignature
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		if not mparameters.is_empty then
			tpl.append "("
			for i in [0..mparameters.length[ do
				tpl.append mparameters[i].cs_signature(no_color)
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append ")"
		end
		var return_mtype = self.return_mtype
		if return_mtype != null then
			tpl.append ": "
			tpl.append return_mtype.cs_signature(no_color)
		end
		return tpl.write_to_string
	end
end

redef class MParameter
	redef fun cs_signature(no_color) do
		var tpl = new FlatBuffer
		tpl.append "{name}: "
		tpl.append mtype.cs_signature(no_color)
		if is_vararg then tpl.append "..."
		return tpl.write_to_string
	end
end

redef class MVisibility
	# Visibility icon
	fun cs_icon(no_color: nullable Bool): String do
		var icon
		if self == private_visibility then
			icon = cs_visibility_color("-", no_color)
		else if self == protected_visibility then
			icon = cs_visibility_color("#", no_color)
		else
			icon = cs_visibility_color("+", no_color)
		end
		if no_color != null and no_color then return icon
		return icon.bold
	end

	# Colorize `string` depending on the visibility
	fun cs_visibility_color(string: String, no_color: nullable Bool): String do
		if no_color != null and no_color then return string
		if self == private_visibility then
			return string.red
		else if self == protected_visibility then
			return string.yellow
		else
			return string.green
		end
	end
end
