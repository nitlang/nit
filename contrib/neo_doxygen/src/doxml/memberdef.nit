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

# `memberdef` element reading.
module doxml::memberdef

import entitydef

# Processes the content of a `<memberdef>` element.
class MemberDefListener
	super EntityDefListener

	# The current member.
	var member: Member is writable, noinit

	private var type_listener: TypeListener is noinit
	private var param_listener: MemberParamListener is noinit

	init do
		super
		type_listener = new TypeListener(reader, self)
		param_listener = new MemberParamListener(reader, self)
	end

	redef fun entity do return member

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if "name" == local_name then
			text.listen_until(dox_uri, local_name)
		else if "reimplements" == local_name then
			member.reimplement(get_required(atts, "refid"))
		else if "type" == local_name then
			type_listener.listen_until(dox_uri, local_name)
		else if "param" == local_name then
			param_listener.listen_until(dox_uri, local_name)
		else
			super
		end
	end

	redef fun end_dox_element(local_name: String) do
		if "name" == local_name then
			member.name = text.to_s
		else if "type" == local_name then
			source_language.apply_member_type(member, type_listener.linked_text)
		else if "param" == local_name then
			member.add_parameter(param_listener.parameter)
		else
			super
		end
	end
end

# Processes the content of a `<param>` element in a `<memberdef>` element.
class MemberParamListener
	super ParamListener[MemberParameter]

	redef fun create_parameter do return new MemberParameter(graph)
end
