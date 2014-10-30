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

# Common SAX listeners for entity definitions.
module doxml::entitydef

import doc

# Processes the content of an entity definition.
abstract class EntityDefListener
	super StackableListener

	# The inner `TextListener`.
	protected var text: TextListener is noinit

	# The inner `DocListener`.
	protected var doc: DocListener is noinit

	# The inner `NoopListener`.
	protected var noop: NoopListener is noinit

	init do
		super
		text = new TextListener(reader, self)
		doc = new DocListener(reader, self)
		noop = new NoopListener(reader, self)
	end

	# The current entity.
	protected fun entity: Entity is abstract

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if ["briefdescription", "detaileddescription", "inbodydescription"].has(local_name) then
			doc.doc = entity.doc
			doc.listen_until(dox_uri, local_name)
		else if "location" == local_name then
			entity.location = get_location(atts)
		else
			noop.listen_until(dox_uri, local_name)
		end
	end

	redef fun end_listening do
		super
		entity.put_in_graph
	end

	# Parse the attributes of a `location` element.
	protected fun get_location(atts: Attributes): Location do
		var location = new Location

		location.path = atts.value_ns("", "bodyfile") or else atts.value_ns("", "file")
		# Doxygen may indicate `[generated]`.
		if "[generated]" == location.path then location.path = null
		var line_start = atts.value_ns("", "bodystart") or else atts.value_ns("", "line") or else null
		if line_start != null then location.line_start = line_start.to_i
		var line_end = atts.value_ns("", "bodyend")
		if line_end != null then location.line_end = line_end.to_i
		var column_start = atts.value_ns("", "column")
		if column_start != null then location.column_start = column_start.to_i
		if location.line_start == location.line_end then
			location.column_end = location.column_start
		end
		return location
	end
end

# Processes the content of a `<param>` element.
abstract class ParamListener[T: Parameter]
	super EntityDefListener

	# The current parameter.
	var parameter: T is noinit

	private var type_listener: TypeListener is noinit

	init do
		super
		type_listener = new TypeListener(reader, self)
	end

	redef fun entity do return parameter

	redef fun listen_until(uri, local_name) do
		super
		parameter = create_parameter
	end

	# Create a new parameter.
	protected fun create_parameter: T is abstract

	redef fun start_dox_element(local_name: String, atts: Attributes) do
		if "declname" == local_name then
			text.listen_until(dox_uri, local_name)
		else if "type" == local_name then
			type_listener.listen_until(dox_uri, local_name)
		else
			super
		end
	end

	redef fun end_dox_element(local_name: String) do
		if "declname" == local_name then
			parameter.name = text.to_s
		else if "type" == local_name then
			source_language.apply_parameter_type(parameter, type_listener.linked_text)
		else
			super
		end
	end
end

# Processes the content of a `<param>` element in a `<templateparamlist>` element.
class TypeParamListener
	super ParamListener[TypeParameter]

	redef fun create_parameter do return new TypeParameter(graph)
end
