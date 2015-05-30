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

# Console templates for Nit model MEntities.
#
# This module introduces console rendering services in model entities.
module console_model

import console
import doc_base
import ordered_tree

redef class MDoc
	# Returns the full comment formatted for the console.
	fun cs_comment: String do
		var res = new FlatBuffer
		for line in content do
			res.append "    {line}\n"
		end
		return res.write_to_string
	end

	# Returns the synopsys formatted for the console.
	fun cs_short_comment: String do return content.first
end

redef class MEntity

	# Returns the mentity name with short signature.
	#
	# * MProject: `foo`
	# * MGroup: `foo`
	# * MModule: `foo`
	# * MClass: `Foo[E]`
	# * MClassDef: `Foo[E]`
	# * MProperty: `foo(e)`
	# * MPropdef: `foo(e)`
	var cs_name: String is lazy do return name

	# Returns the list of keyword used in `self` declaration.
	fun cs_modifiers: Array[String] is abstract

	# Returns the complete MEntity declaration (modifiers + name + signature).
	#
	# * MProject: `project foo`
	# * MGroup: `group foo`
	# * MModule: `module foo`
	# * MClass: `private abstract class Foo[E: Object]`
	# * MClassDef: `redef class Foo[E]`
	# * MProperty: `private fun foo(e: Object): Int`
	# * MPropdef: `redef fun foo(e)`
	var cs_declaration: String is lazy do
		var tpl = new FlatBuffer
		tpl.append cs_modifiers.join(" ")
		tpl.append " "
		tpl.append cs_name
		return tpl.write_to_string
	end

	# Returns `self` namespace formatted for console.
	#
	# * MProject: `mproject`
	# * MGroup: `mproject(::group)`
	# * MModule: `mgroup::mmodule`
	# * MClass: `mproject::mclass`
	# * MClassDef: `mmodule::mclassdef`
	# * MProperty: `mclass::mprop`
	# * MPropdef: `mclassdef:mpropdef`
	fun cs_namespace: String is abstract

	# Returns the comment of this MEntity formatted for console.
	var cs_comment: nullable String is lazy do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		# FIXME add markdown for console
		return mdoc.cs_comment
	end

	# Returns the comment of this MEntity formatted for console.
	var cs_short_comment: nullable String is lazy do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		return mdoc.cs_short_comment
	end

	# Returns `self` as a list element that can be displayed in console.
	#
	# Displays `cs_icon`, `cs_name`, `cs_short_comment, `cs_namespace`,
	# `cs_declaration` and `cs_location`.
	fun cs_list_item: String do
		var tpl = new FlatBuffer
		tpl.append " {cs_visibility_color(cs_icon).bold} {cs_name.blue.bold}"
		var comment = cs_short_comment
		if comment != null then
			tpl.append " # {comment}".green
		end
		tpl.append "\n   "
		tpl.append cs_namespace.gray.bold
		tpl.append "\n   "
		tpl.append cs_declaration
		tpl.append "\n   "
		tpl.append cs_location.gray
		return tpl.write_to_string
	end

	# Returns `self` as a short list element that can be displayed in console.
	# Displays `cs_icon`, `cs_name`, and `cs_short_comment.
	fun cs_short_list_item: String do
		var tpl = new FlatBuffer
		tpl.append " {cs_visibility_color(cs_icon).bold} {cs_name.blue.bold}"
		var comment = cs_short_comment
		if comment != null then
			tpl.append " # {comment}".green
		end
		return tpl.write_to_string
	end

	# ASCII icon to be displayed in front of the list item.
	fun cs_icon: String do return "*"

	# Source code location of this MEntity formatted for console.
	fun cs_location: String is abstract

	# Sets text color depending on visibility.
	#
	# See module `console`.
	fun cs_visibility_color(string: String): String do return string.green

	# Source code associated to this MEntity.
	#
	# Uses `cs_location` to locate the source code.
	fun cs_source_code: String do
		# FIXME up location to mentity
		var loc = new Location.from_string(cs_location)
		var fr = new FileReader.open(loc.file.filename)
		var content = new FlatBuffer
		var i = 0
		while not fr.eof do
			i += 1
			var line = fr.read_line
			if i < loc.line_start or i > loc.line_end then continue
			# FIXME add nitlight for console
			content.append "{line}\n"
		end
		fr.close
		return content.write_to_string
	end
end

redef class MProject
	redef var cs_modifiers = ["project"]
	redef fun cs_namespace do return cs_name
	redef fun cs_icon do return "P"
	redef fun cs_location do return root.mmodules.first.location.to_s
end

redef class MGroup
	redef var cs_modifiers = ["group"]
	redef fun cs_icon do return "G"

	# Depends if `self` is root or not.
	#
	# * If root `mproject`.
	# * Else `mproject::self`.
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		tpl.append mproject.cs_namespace
		if mproject.root != self then
			tpl.append "::"
			tpl.append cs_name
		end
		return tpl.write_to_string
	end

	redef fun cs_location do return mmodules.first.location.to_s
end

redef class MModule
	redef var cs_modifiers = ["module"]
	redef fun cs_icon do return "M"

	# Depends if `self` belongs to a MGroup.
	#
	# * If mgroup `mgroup::self`.
	# * Else `self`.
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		if mgroup != null then
			tpl.append mgroup.cs_namespace
			tpl.append "::"
		end
		tpl.append cs_name
		return tpl.write_to_string
	end

	redef fun cs_location do return location.to_s
end

redef class MClass
	redef fun mdoc_or_fallback do return intro.mdoc
	redef fun cs_icon do return intro.cs_icon

	# Format: `Foo[E]`
	redef var cs_name is lazy do
		var tpl = new FlatBuffer
		tpl.append name
		if arity > 0 then
			tpl.append "["
			var parameter_names = new Array[String]
			for p in mparameters do
				parameter_names.add(p.cs_name)
			end
			tpl.append parameter_names.join(", ")
			tpl.append "]"
		end
		return tpl.write_to_string
	end

	redef fun cs_modifiers do return intro.cs_modifiers
	redef fun cs_declaration do return intro.cs_declaration

	# Returns `mproject::self`.
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		tpl.append intro_mmodule.mgroup.mproject.cs_namespace
		tpl.append "::"
		tpl.append cs_name
		return tpl.write_to_string
	end

	# Returns `intro.cs_short_signature`.
	fun cs_short_signature: String do return intro.cs_short_signature

	# Returns `intro.cs_signature`.
	fun cs_signature: String do return intro.cs_signature

	redef fun cs_visibility_color(string) do
		if visibility == private_visibility then
			return string.red
		else if visibility == protected_visibility then
			return string.yellow
		end
		return string.green
	end

	redef fun cs_location do return intro.location.to_s
end

redef class MClassDef
	redef fun mdoc_or_fallback do return mdoc or else mclass.mdoc_or_fallback
	redef fun cs_icon do return "C"

	# Depends if `self` is an intro or not.
	#
	# * If intro contains the visibility and kind.
	# * If redef contains the `redef` keyword and kind.
	redef fun cs_modifiers do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			if mclass.visibility != public_visibility then
				res.add mclass.visibility.to_s
			end
		end
		res.add mclass.kind.to_s
		return res
	end

	# Depends if `self` is an intro or not.
	#
	# For intro: `private abstract class Foo[E: Object]`
	# For redef: `redef class Foo[E]`
	redef fun cs_declaration do
		var tpl = new FlatBuffer
		tpl.append cs_modifiers.join(" ")
		tpl.append " "
		tpl.append cs_name
		if is_intro then
			tpl.append cs_signature
		else
			tpl.append cs_short_signature
		end
		return tpl.write_to_string.write_to_string.write_to_string
	end

	# Returns `mmodule::self`
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		tpl.append mmodule.cs_namespace
		tpl.append "::"
		tpl.append mclass.cs_name
		return tpl.write_to_string.write_to_string
	end

	# Returns the MClassDef generic signature without static bounds.
	fun cs_short_signature: String do
		var tpl = new FlatBuffer
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.append "["
			for i in [0..mparameters.length[ do
				tpl.append mparameters[i].cs_name
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append "]"
		end
		return tpl.write_to_string
	end

	# Returns the MClassDef generic signature with static bounds.
	fun cs_signature: String do
		var tpl = new FlatBuffer
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.append "["
			for i in [0..mparameters.length[ do
				tpl.append "{mparameters[i].cs_name}: "
				tpl.append bound_mtype.arguments[i].cs_signature
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append "]"
		end
		return tpl.write_to_string
	end

	redef fun cs_location do return location.to_s
end

redef class MProperty
	redef fun mdoc_or_fallback do return intro.mdoc
	redef fun cs_modifiers do return intro.cs_modifiers
	redef fun cs_declaration do return intro.cs_declaration
	redef fun cs_icon do return intro.cs_icon

	# Returns `mclass::self`.
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		tpl.append intro_mclassdef.mclass.cs_namespace
		tpl.append "::"
		tpl.append intro.cs_name
		return tpl.write_to_string
	end

	# Returns `intro.cs_short_signature`.
	fun cs_short_signature: String do return intro.cs_short_signature

	# Returns `intro.cs_signature`.
	fun cs_signature: String do return intro.cs_signature

	redef fun cs_visibility_color(string) do
		if visibility == private_visibility then
			return string.red
		else if visibility == protected_visibility then
			return string.yellow
		end
		return string.green
	end

	# Returns `intro.cs_location`.
	redef fun cs_location do return intro.location.to_s
end

redef class MPropDef
	redef fun mdoc_or_fallback do return mdoc or else mproperty.mdoc_or_fallback

	# Depends if `self` is an intro or not.
	#
	# * If intro contains the visibility and kind.
	# * If redef contains the `redef` keyword and kind.
	redef fun cs_modifiers do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			if mproperty.visibility != public_visibility then
				res.add mproperty.visibility.to_s
			end
		end
		return res
	end

	# Depends if `self` is an intro or not.
	#
	# For intro: `private fun foo(e: Object): Bar is abstract`
	# For redef: `redef fun foo(e) is cached`
	redef fun cs_declaration do
		var tpl = new FlatBuffer
		tpl.append cs_modifiers.join(" ")
		tpl.append " "
		if is_intro then
			tpl.append cs_name
			tpl.append cs_signature
		else
			tpl.append mproperty.intro.cs_name
			tpl.append cs_short_signature
		end
		return tpl.write_to_string
	end

	# Returns `mclassdef::self`
	redef fun cs_namespace do
		var tpl = new FlatBuffer
		tpl.append mclassdef.cs_namespace
		tpl.append "::"
		tpl.append cs_name
		return tpl.write_to_string
	end

	redef fun cs_location do return location.to_s

	# Returns the MPropdDef signature without static types.
	fun cs_short_signature: String is abstract

	# Returns the MPropDef signature with static types.
	fun cs_signature: String is abstract
end

redef class MAttributeDef

	redef fun cs_modifiers do
		var res = super
		res.add "var"
		return res
	end

	redef fun cs_short_signature do return ""

	redef fun cs_signature do
		var tpl = new FlatBuffer
		if static_mtype != null then
			tpl.append ": "
			tpl.append static_mtype.cs_signature
		end
		return tpl.write_to_string
	end

	redef fun cs_icon do return "A"
end

redef class MMethodDef

	redef fun cs_modifiers do
		if mproperty.is_init then
			var res = new Array[String]
			if mproperty.visibility != public_visibility then
				res.add mproperty.visibility.to_s
			end
			return res
		end
		var res = super
		if is_abstract then
			res.add "abstract"
		else if is_intern then
			res.add "intern"
		end
		res.add "fun"
		return res
	end

	redef fun cs_declaration do
		if mproperty.is_init then
			var tpl = new FlatBuffer
			if not cs_modifiers.is_empty then
				tpl.append cs_modifiers.join(" ")
				tpl.append " "
			end
			tpl.append cs_name
			tpl.append cs_signature
			return tpl.write_to_string
		end
		return super
	end

	redef fun cs_short_signature do
		if mproperty.is_root_init then
			return new_msignature.cs_short_signature
		end
		return msignature.cs_short_signature
	end

	redef fun cs_signature do
		if mproperty.is_root_init then
			return new_msignature.cs_signature
		end
		return msignature.cs_signature
	end

	redef fun cs_icon do
		if mproperty.is_init then
			return "I"
		end
		return "F"
	end
end

redef class MVirtualTypeDef

	redef fun cs_modifiers do
		var res = super
		res.add "type"
		return res
	end

	# Short signature for `MVirtualType` is always empty.
	redef fun cs_short_signature do return ""

	redef fun cs_signature do
		var tpl = new FlatBuffer
		if bound == null then return tpl.write_to_string
		tpl.append ": "
		tpl.append bound.cs_signature
		return tpl.write_to_string
	end
	redef fun cs_icon do return "V"
end

redef class MType
	# Returns the signature of this type whithout bounds.
	fun cs_short_signature: String is abstract

	# Returns the signature of this type.
	fun cs_signature: String is abstract

	redef fun cs_icon do return "T"
end

redef class MClassType
	redef fun cs_short_signature do return cs_name
	redef fun cs_signature do return cs_name
end

redef class MNullableType

	redef fun cs_short_signature do
		var tpl = new FlatBuffer
		tpl.append "nullable "
		tpl.append mtype.cs_short_signature
		return tpl.write_to_string
	end

	redef fun cs_signature do
		var tpl = new FlatBuffer
		tpl.append "nullable "
		tpl.append mtype.cs_signature
		return tpl.write_to_string
	end
end

redef class MGenericType
	redef fun cs_short_signature do
		var tpl = new FlatBuffer
		tpl.append name
		tpl.append "["
		for i in [0..arguments.length[ do
			tpl.append arguments[i].cs_short_signature
			if i < arguments.length - 1 then tpl.append ", "
		end
		tpl.append "]"
		return tpl.write_to_string
	end

	redef fun cs_signature do
		var tpl = new FlatBuffer
		tpl.append mclass.name
		tpl.append "["
		for i in [0..arguments.length[ do
			tpl.append arguments[i].cs_signature
			if i < arguments.length - 1 then tpl.append ", "
		end
		tpl.append "]"
		return tpl.write_to_string
	end
end

redef class MParameterType
	redef fun cs_short_signature do return cs_name
	redef fun cs_signature do return cs_name
end

redef class MVirtualType
	redef fun cs_signature do return cs_name
end

redef class MSignature

	redef fun cs_short_signature do
		var tpl = new FlatBuffer
		if not mparameters.is_empty then
			tpl.append "("
			for i in [0..mparameters.length[ do
				tpl.append mparameters[i].cs_short_signature
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append ")"
		end
		return tpl.write_to_string
	end

	redef fun cs_signature do
		var tpl = new FlatBuffer
		if not mparameters.is_empty then
			tpl.append "("
			for i in [0..mparameters.length[ do
				tpl.append mparameters[i].cs_signature
				if i < mparameters.length - 1 then tpl.append ", "
			end
			tpl.append ")"
		end
		if return_mtype != null then
			tpl.append ": "
			tpl.append return_mtype.cs_signature
		end
		return tpl.write_to_string
	end
end

redef class MParameter

	# Returns `self` name and ellipsys if any.
	fun cs_short_signature: String do
		var tpl = new FlatBuffer
		tpl.append name
		if is_vararg then tpl.append "..."
		return tpl.write_to_string
	end

	# Returns `self` name with it's static type and ellipsys if any.
	fun cs_signature: String do
		var tpl = new FlatBuffer
		tpl.append "{name}: "
		tpl.append mtype.cs_signature
		if is_vararg then tpl.append "..."
		return tpl.write_to_string
	end
end

################################################################################
# Additions to `model_ext`.

redef class MRawType
	redef fun cs_signature do
		var tpl = new FlatBuffer

		for part in parts do
			if part.target != null then
				tpl.append part.target.as(not null).cs_name
			else
				tpl.append part.text
			end
		end
		return tpl.write_to_string
	end
end

redef class MInnerClass
	redef fun cs_signature do return inner.cs_signature
end

redef class MInnerClassDef
	redef fun cs_signature do return inner.cs_signature
end
