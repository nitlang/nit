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

	init do
		super
	end

	redef fun entity do return member

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if "name" == local_name then
			text.listen_until(dox_uri, local_name)
		else if "reimplements" == local_name then
			member.reimplement(get_required(atts, "refid"))
		else if "type" == local_name then
			text.listen_until(dox_uri, local_name)
			# TODO links
		else
			super
		end
	end

	redef fun end_dox_element(local_name: String) do
		if "memberdef" == local_name then
			member.put_in_graph
		else if "name" == local_name then
			member.name = text.to_s
		else if "type" == local_name then
			# TODO
		else
			super
		end
	end
end
