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

# `compounddef` element reading.
module doxml::compounddef

import memberdef
import more_collections

# Processes the content of a `compounddef` element.
class CompoundDefListener
	super EntityDefListener

	# The defined compound.
	var compound: Compound is writable, noinit

	private var memberdef: MemberDefListener is noinit
	private var param_listener: TypeParamListener is noinit

	# Default attributes for members in the current section.
	private var member_defaults: MemberDefaults is noinit

	# For each section kind, default attributes for member in that section.
	private var section_kinds: DefaultMap[String, MemberDefaults] is noinit


	# Attributes of the current `<basecompoundref>` element.

	private var refid = ""
	private var prot = ""
	private var virt = ""


	init do
		super
		var defaults = new MemberDefaults("public", false, false)

		memberdef = new MemberDefListener(reader, self)
		param_listener = new TypeParamListener(reader, self)

		member_defaults = defaults
		section_kinds = new DefaultMap[String, MemberDefaults](defaults)

		section_kinds["public-type"] = defaults
		section_kinds["public-func"] = defaults
		section_kinds["public-attrib"] = defaults
		section_kinds["public-slot"] = defaults
		defaults = new MemberDefaults("public", true, false)
		section_kinds["public-static-func"] = defaults
		section_kinds["public-static-attrib"] = defaults

		defaults = new MemberDefaults("protected", false, false)
		section_kinds["protected-type"] = defaults
		section_kinds["protected-func"] = defaults
		section_kinds["protected-attrib"] = defaults
		section_kinds["protected-slot"] = defaults
		defaults = new MemberDefaults("protected", true, false)
		section_kinds["protected-static-func"] = defaults
		section_kinds["protected-static-attrib"] = defaults

		defaults = new MemberDefaults("package", false, false)
		section_kinds["package-type"] = defaults
		section_kinds["package-func"] = defaults
		section_kinds["package-attrib"] = defaults
		defaults = new MemberDefaults("package", true, false)
		section_kinds["package-static-func"] = defaults
		section_kinds["package-static-attrib"] = defaults

		defaults = new MemberDefaults("private", false, false)
		section_kinds["private-type"] = defaults
		section_kinds["private-func"] = defaults
		section_kinds["private-attrib"] = defaults
		section_kinds["private-slot"] = defaults
		defaults = new MemberDefaults("private", true, false)
		section_kinds["private-static-func"] = defaults
		section_kinds["private-static-attrib"] = defaults

		defaults = new MemberDefaults("public", true, true)
		section_kinds["related"] = defaults
		section_kinds["user-defined"] = defaults
	end

	redef fun entity: Entity do return compound

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if "compoundname" == local_name then
			text.listen_until(dox_uri, local_name)
		else if ["innerclass", "innernamespace", "basecompoundref"].has(local_name) then
			prot = get_optional(atts, "prot", "")
			text.listen_until(dox_uri, local_name)
			if "basecompoundref" == local_name then
				refid = get_optional(atts, "refid", "")
				virt = get_optional(atts, "virt", "")
			else
				refid = get_required(atts, "refid")
			end
		else if "memberdef" == local_name then
			read_member(atts)
		else if local_name == "sectiondef" then
			member_defaults = section_kinds[get_required(atts, "kind")]
			if member_defaults.is_special then
				super # TODO
			end
		else if "param" == local_name then
			param_listener.listen_until(dox_uri, local_name)
		else if "templateparamlist" != local_name then
			super
		end
	end

	redef fun end_dox_element(local_name: String) do
		if local_name == "compoundname" then
			compound.full_name = text.to_s
		else if local_name == "innerclass" then
			compound.declare_class(refid, text.to_s, prot)
		else if local_name == "innernamespace" then
			compound.declare_namespace(refid, text.to_s)
		else if "memberdef" == local_name then
			if not (memberdef.member isa UnknownMember) then
				compound.declare_member(memberdef.member)
			end
		else if local_name == "basecompoundref" then
			compound.declare_super(refid, text.to_s, prot, virt)
		else if "param" == local_name and compound isa ClassCompound then
			compound.as(ClassCompound).add_type_parameter(param_listener.parameter)
		else
			super
		end
	end

	private fun read_member(atts: Attributes) do
		var kind = get_required(atts, "kind")

		create_member(kind)
		memberdef.member.model_id = get_required(atts, "id")
		memberdef.member.visibility = get_optional(atts, "prot",
				member_defaults.visibility)
	end

	private fun create_member(kind: String) do
		if kind == "variable" then
			memberdef.member = new Attribute(compound.graph)
		else if kind == "function" then
			memberdef.member = new Method(compound.graph)
		else
			memberdef.member = new UnknownMember(compound.graph)
			noop.listen_until(dox_uri, "memberdef")
			return
		end
		memberdef.listen_until(dox_uri, "memberdef")
	end
end

# Default attributes for members in the current section.
private class MemberDefaults
	var visibility: String
	var is_static: Bool
	var is_special: Bool
end
