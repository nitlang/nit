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

import entitydef

# Processes the content of a `compounddef` element.
class CompoundDefListener
	super EntityDefListener

	var compound: Compound is writable, noinit


	# Attributes of the current `<basecompoundref>` element.

	private var refid = ""
	private var prot = ""
	private var virt = ""


	init do
		super
	end

	redef fun entity: Entity do return compound

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if ["compoundname", "innerclass", "innernamespace"].has(local_name) then
			text.listen_until(dox_uri, local_name)
			if ["innerclass", "innernamespace"].has(local_name) then
				refid = get_required(atts, "refid")
			end
		else if "basecompoundref" == local_name then
			refid = get_optional(atts, "refid", "")
			prot = get_optional(atts, "prot", "")
			virt = get_optional(atts, "virt", "")
			text.listen_until(dox_uri, local_name)
		else
			super
		end
	end

	redef fun end_dox_element(local_name: String) do
		if local_name == "compounddef" then
			compound.put_in_graph
		else if local_name == "compoundname" then
			compound.full_name = text.to_s
		else if local_name == "innerclass" then
			compound.declare_class(refid, text.to_s)
		else if local_name == "innernamespace" then
			compound.declare_namespace(refid, text.to_s)
		else if local_name == "basecompoundref" then
			compound.declare_super(refid, text.to_s, prot, virt)
		else
			super
		end
	end
end
