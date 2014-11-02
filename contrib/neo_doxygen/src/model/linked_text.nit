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

# A text with links.
module model::linked_text

import graph

# A text with links.
abstract class LinkedText
	super Entity

	# All link in the text.
	#
	# Do not edit directly.
	var links: Sequence[nullable Link] = new Array[nullable Link]

	# Remove all the parts.
	fun clear_parts do
		self["text"] = null
		links.clear
	end

	# Remove the first part.
	fun shift_part do
		var text = self["text"]
		assert text isa JsonArray
		text.shift
		links.shift
		if text.is_empty then
			self["text"] = null
		end
	end

	# Remove the last part.
	fun pop_part do
		var text = self["text"]
		assert text isa JsonArray
		text.pop
		links.pop
		if text.is_empty then
			self["text"] = null
		end
	end

	# Remove the part at the specified index.
	fun remove_part_at(index: Int) do
		var text = self["text"]
		assert text isa JsonArray
		text.remove_at(index)
		links.remove_at(index)
		if text.is_empty then
			self["text"] = null
		end
	end

	# Change a part of text.
	#
	# Parameters:
	#
	# * `index` : the index of the part.
	# * `content` : textual content.
	# * `refid` : `model_id` of the linked entity or `""`.
	fun set_part(index: Int, content: String, refid: String) do
		var text = self["text"]
		assert text isa JsonArray
		text[index] = content
		if not refid.is_empty then
			links[index] = create_link(links.length, refid)
		else
			links[index] = null
		end
	end

	# Append a part of text.
	#
	# Parameters:
	#
	# * `content` : textual content.
	# * `refid` : `model_id` of the linked entity or `""`.
	fun add_part(content: String, refid: String) do
		var text = self["text"]

		if text == null then
			text = new JsonArray
			self["text"] = text
		end
		assert text isa JsonArray
		text.add(content)
		if not refid.is_empty then
			links.add(create_link(links.length, refid))
		else
			links.add(null)
		end
	end

	# Create a link to the specified entity.
	protected fun create_link(rank:Int, refid: String): Link is abstract

	redef fun to_s do
		var text = self["text"]

		if text isa JsonArray then
			return text.join("")
		else
			return "UNDEFINED"
		end
	end

	redef fun put_in_graph do
		super
		for link in links do
			if link isa Link then
				link.put_in_graph
			end
		end
	end

	redef fun put_edges do
		super
		for i in [0..links.length[ do
			var link = links[i]
			if link isa Link then
				link["rank"] = i
				graph.add_edge(self, "LINK", link)
			end
		end
	end
end

# A link.
abstract class Link
	super Entity

	# * `refid` : `model_id` of the linked entity.
	var refid: String

	init do
		super
		self["rank"] = -1
	end

	redef fun put_edges do
		graph.add_edge(self, "TARGET", graph.by_id[refid])
	end

	# Specify the rank (index) of the parameter in the signature.
	#
	# Called by `LinkedText.put_edges`.
	private fun rank=(rank: Int) do
		self["rank"] = rank
	end
end
