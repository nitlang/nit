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

# Doxygen’s XML documents reading.
module doxml

import compounddef

# Reader for XML documents whose the schema is `compound.xsd`.
class CompoundFileReader
	super DoxmlListener

	# The project graph.
	var model: ProjectGraph

	private var reader: XMLReader = new XophonReader
	private var compounddef: CompoundDefListener is noinit
	private var noop: NoopListener is noinit

	init do
		compounddef = new CompoundDefListener(reader, self)
		noop = new NoopListener(reader, self)
	end

	redef fun graph do return model

	# Read the document at the specified path.
	fun read(path: String) do
		reader.content_handler = self
		reader.parse_file(path)
		compounddef.compound = new UnknownCompound(model)
	end

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if local_name == "compounddef" then
			read_compound(atts)
		else if "doxygen" != local_name then
			noop.listen_until(dox_uri, local_name)
		end
	end

	private fun read_compound(atts: Attributes) do
		var kind = get_required(atts, "kind")

		create_compound(kind)
		# TODO Make all values of `kind` and `visibility` compatible with the Nit meta-model.
		if get_bool(atts, "final") then
			kind = "final {kind}"
		end
		if get_bool(atts, "sealed") then
			kind = "sealed {kind}"
		end
		if get_bool(atts, "abstract") then
			kind = "abstract {kind}"
		end
		compounddef.compound.kind = kind
		compounddef.compound.model_id = get_required(atts, "id")
		compounddef.compound.visibility = get_optional(atts, "prot", "")
	end

	private fun create_compound(kind: String) do
		if kind == "file" then
			compounddef.compound = new FileCompound(model)
		else if kind == "namespace" then
			compounddef.compound = new Namespace(model)
		else if kind == "class" or kind == "interface" or kind == "enum" then
			compounddef.compound = new ClassCompound(model)
		else
			compounddef.compound = new UnknownCompound(model)
			noop.listen_until(dox_uri, "compounddef")
			return
		end
		compounddef.listen_until(dox_uri, "compounddef")
	end
end
