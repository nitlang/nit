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

# Generate files used by the Vim plugin to autocomplete with doc
#
# There is 3 files generated, each with a different target: modules, types,
# properties and constructors. Each line describe a different entity,
# with 4 values:
#
# 1. Short name to use in autocompletion
# 2. Full signature
# 3. Doc synopsis
# 4. Full doc with extra
#
# The priority with those files is for them to be analyzed efficiently, for
# this reason, the data is prepared in advance and some information may be
# duplicated.
module vim_autocomplete

import modelbuilder
import phase
import modelize::modelize_class
import model_utils

redef class ToolContext
	# Phase generating the files for the Vim plugin
	var autocomplete_phase: Phase = new AutocompletePhase(self, [modelize_class_phase])

	# Shall we generate the files for the Vim plugin?
	var opt_vim_autocomplete = new OptionBool(
		"Generate metadata files used by the Vim plugin for autocompletion", "--vim-autocomplete")

	init
	do
		super
		option_context.add_option opt_vim_autocomplete
	end
end

redef class MEntity
	private fun field_separator: String do return "#====#"
	private fun line_separator: String do return "#nnnn#"

	private fun write_doc(mainmodule: MModule, stream: Writer)
	do
		# 1. Short name for autocompletion
		stream.write complete_name
		stream.write field_separator

		# 2. Full signature
		stream.write complete_name
		write_signature_to_stream(stream)
		stream.write field_separator

		# 3. Doc synopsis
		var mdoc = complete_mdoc
		if mdoc != null then
			stream.write mdoc.content.first
		end

		# 4. Full doc with extra
		stream.write field_separator
		stream.write "# "
		stream.write full_name
		write_signature_to_stream(stream)
		if mdoc != null then
			for i in 2.times do stream.write line_separator
			stream.write mdoc.content.join(line_separator)
		end
		write_extra_doc(mainmodule, stream)

		stream.write "\n"
	end

	private fun write_signature_to_stream(stream: Writer) do end

	# Actual name used in completion
	private fun complete_name: String do return name

	# Doc to use in completion
	private fun complete_mdoc: nullable MDoc do return mdoc

	# Extra auto documentation to append to the `stream`
	private fun write_extra_doc(mainmodule: MModule, stream: Writer) do end
end

redef class MMethodDef
	redef fun write_signature_to_stream(stream)
	do
		var msignature = msignature
		if msignature != null then
			stream.write msignature.to_s
		end
	end
end

redef class MAttributeDef
	redef fun write_signature_to_stream(stream)
	do
		var static_mtype = static_mtype
		if static_mtype != null then
			stream.write stream.to_s
		end
	end
end

# Use `MClassDef` as anchor for its constructors only
redef class MClassDef
	private var target_constructor: nullable MMethodDef = null

	redef fun complete_name
	do
		var target_constructor = target_constructor
		assert target_constructor != null

		var params
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			params = "[{mparameters.join(", ")}]"
		else
			params = ""
		end

		if target_constructor.name != "init" and target_constructor.name != "new" then
			return name + params + "." + target_constructor.name
		end

		return name + params
	end

	redef fun complete_mdoc
	do
		var target_constructor = target_constructor
		assert target_constructor != null

		if target_constructor.name != "init" and target_constructor.name != "new" then
			return target_constructor.mdoc
		end

		return mdoc
	end
end

redef class MClassType
	redef fun write_extra_doc(mainmodule, stream)
	do
		# Super classes
		stream.write line_separator*2
		stream.write "## Class hierarchy"

		var direct_supers = [for s in mclass.in_hierarchy(mainmodule).direct_greaters do s.name]
		if not direct_supers.is_empty then
			alpha_comparator.sort direct_supers
			stream.write line_separator
			stream.write "* Direct super classes: "
			stream.write direct_supers.join(", ")
		end

		var supers = [for s in mclass.in_hierarchy(mainmodule).greaters do s.name]
		supers.remove mclass.name
		if not supers.is_empty then
			alpha_comparator.sort supers
			stream.write line_separator
			stream.write "* All super classes: "
			stream.write supers.join(", ")
		end

		var direct_subs = [for s in mclass.in_hierarchy(mainmodule).direct_smallers do s.name]
		if not direct_subs.is_empty then
			alpha_comparator.sort direct_subs
			stream.write line_separator
			stream.write "* Direct sub classes: "
			stream.write direct_subs.join(", ")
		end

		var subs = [for s in mclass.in_hierarchy(mainmodule).smallers do s.name]
		subs.remove mclass.name
		if not subs.is_empty then
			alpha_comparator.sort subs
			stream.write line_separator
			stream.write "* All sub classes: "
			stream.write subs.join(", ")
		end

		# List other properties
		stream.write line_separator*2
		stream.write "## Properties"
		stream.write line_separator
		var props = mclass.all_mproperties(mainmodule, protected_visibility).to_a
		alpha_comparator.sort props
		for prop in props do
			if mclass.name == "Object" or prop.intro.mclassdef.mclass.name != "Object" then

				if prop.visibility == public_visibility then
					stream.write "+ "
				else stream.write "~ " # protected_visibility

				if prop isa MMethod then
					if prop.is_init and prop.name != "init" then stream.write "init "
					if prop.is_new and prop.name != "new" then stream.write "new "
				end

				stream.write prop.name

				if prop isa MMethod then
					stream.write prop.intro.msignature.to_s
				end

				var mdoc = prop.intro.mdoc
				if mdoc != null then
					stream.write "  # "
					stream.write mdoc.content.first
				end
				stream.write line_separator
			end
		end
	end

	redef fun complete_mdoc do return mclass.intro.mdoc
end

private class AutocompletePhase
	super Phase

	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_vim_autocomplete.value then return

		var compile_dir = "NIT_VIM_DIR".environ
		if compile_dir.is_empty then compile_dir = "HOME".environ / ".vim/nit"
		compile_dir.mkdir

		var modules_stream = new FileWriter.open(compile_dir / "modules.txt")
		var classes_stream = new FileWriter.open(compile_dir / "classes.txt")
		var constructors_stream = new FileWriter.open(compile_dir / "constructors.txt")
		var types_stream = new FileWriter.open(compile_dir / "types.txt")
		var properties_stream = new FileWriter.open(compile_dir / "properties.txt")

		# Got all known modules
		var model = mainmodule.model
		for mmodule in model.mmodules do
			mmodule.write_doc(mainmodule, modules_stream)
		end

		# TODO list other modules from the Nit lib

		# Get all known classes
		for mclass in model.mclasses do
			if not mainmodule.is_visible(mclass.intro_mmodule, public_visibility) then continue
			var mclass_intro = mclass.intro

			# Can it be instantiated?
			if mclass.kind != interface_kind and mclass.kind != abstract_kind then

				for prop in mclass.all_mproperties(mainmodule, public_visibility) do
					if prop isa MMethod and prop.is_init then
						mclass_intro.target_constructor = prop.intro
						mclass_intro.write_doc(mainmodule, constructors_stream)
					end
				end
				mclass_intro.target_constructor = null
			end

			# Always add to types and classes
			mclass.mclass_type.write_doc(mainmodule, classes_stream)
			mclass.mclass_type.write_doc(mainmodule, types_stream)
		end

		# Get all known properties
		for mproperty in model.mproperties do
			var intro_mmodule = mproperty.intro_mclassdef.mmodule
			if not mainmodule.is_visible(intro_mmodule, public_visibility) then continue

			# Is it a virtual type?
			if mproperty isa MVirtualTypeProp then
				mproperty.intro.write_doc(mainmodule, types_stream)
				continue
			end

			# Skip properties beginning with @ or _
			var first_letter = mproperty.name.chars.first
			if first_letter == '@' or first_letter == '_' then continue

			mproperty.intro.write_doc(mainmodule, properties_stream)
		end

		# Close streams
		for stream in [modules_stream, classes_stream, properties_stream,
			types_stream, constructors_stream] do

			stream.close
			var error = stream.last_error
			if error != null then
				toolcontext.error(null, "Error: failed to write Vim autocomplete file: {error}.")
			end
		end
	end
end
