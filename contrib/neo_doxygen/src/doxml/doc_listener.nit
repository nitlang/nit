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

# Documentation reading.
module doxml::doc_listener

import listener
import html

# Processes documentation.
class DocListener
	super TextListener

	# The read documentation.
	var doc = new Documentation is writable

	# Mapping between the type of a Doxygen element and the corresponding
	# factory.
	private var factories = new HashMap[String, HtmlElementFactory]

	private var element_stack = new Array[HTMLTag]

	# Does the next block have to be added to the detailed description?
	private var in_detailed_description = false

	redef fun listen_until(uri, local_name) do
		super
		if local_name == "briefdescription" then
			in_detailed_description = false
		else
			in_detailed_description = true
		end
	end

	redef fun start_dox_element(local_name, atts) do
		super
		var factory = factories.get_or_null(local_name)
		if factory == null then return
		element_stack.push(factory.create_element(local_name, atts))
	end

	redef fun end_dox_element(local_name) do
		super
		if not factories.has_key(local_name) then return
		if element_stack.is_empty then return
		var current_element = element_stack.pop
		current_element.append(flush_buffer.trim)
		if element_stack.is_empty then add_block(current_element.write_to_string)
	end

	redef fun end_listening do
		super
		if not element_stack.is_empty then
			var current_element = element_stack.first.write_to_string
			add_block(current_element)
		end
		add_block(flush_buffer.trim)
		element_stack.clear
	end

	private fun add_block(block: String) do
		if block.is_empty then return
		if in_detailed_description then
			doc.add(block)
		else
			doc.brief_description = block
			in_detailed_description = true
		end
	end
end

# Provides a mean to create a certain kind of HTML elements.
private abstract class HtmlElementFactory
	# Create a new empty HTML element.
	#
	# Parameters:
	#
	# * `local_name`: Type of the Doxygen element that will be represented by
	# the HTML element.
	# * `attributes`: Attributes of the Doxygen element that will be
	# represented by the HTML element.
	fun create_element(local_name: String, attributes: Attributes): HTMLTag is abstract
end
