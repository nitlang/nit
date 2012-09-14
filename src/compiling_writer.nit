# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2010 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Helps to generate complex strings.
# Can be used to simplify complex file generation where text addition is not only done at the end
package compiling_writer

# A writer is used to store a sequence of strings and sub-writers
class Writer
	# Add a new string at the end of the writer
	fun add(s: String): Writer
	do
		assert not is_frozen
		var c = _last_string
		var c2 = new WriterStrings(s)
		if c == null then
			internal_append(c2)
		else
			c._next = c2
		end
		_last_string = c2
		return self
	end

	# Add each string of the array but separate them
	fun add_all(a: Array[String], separator: String): Writer
	do
		assert not is_frozen
		var first = true
		for s in a do
			if first then first = false else add(separator)
			add(s)
		end
		return self
	end

	var _first_sub_writer: nullable WriterNode = null
	var _last_sub_writer: nullable WriterNode = null

	# Last string added. Implies that _last_sub_writer isa WriterStrings
	var _last_string: nullable WriterStrings = null

	# Insert an other Writer at the end of the writer
	fun append(c: Writer): Writer
	do
		assert not is_frozen
		internal_append(new WriterCoreNode(c))
		_last_string = null # next add will create a new WriterStrings after c
		return self
	end

	# Insert a writer as a sub-one
	private fun internal_append(c: WriterNode)
	do
		if _first_sub_writer == null then _first_sub_writer = c
		var l = _last_sub_writer
		if l != null then l._next_writer = c
		_last_sub_writer = c
	end

	# Create a sub-writer that can be used as a new string insertion point
	fun sub: Writer
	do
		var c = new Writer
		append(c)
		return c
	end

	var _is_writing: Bool = false

	# Write all strings (including nested ones) to a stream
	fun write_to_stream(s: OStream)
	do
		assert not _is_writing
		_is_writing = true
		var cur = _first_sub_writer
		while cur != null do
			cur.internal_write_to_stream(s)
			cur = cur._next_writer
		end
		_is_writing = false
	end

	# Return true if the string writer is frozen
	readable var _is_frozen: Bool = false

	# Disable further writer modification: nor add or append are allowed
	fun freeze
	do
		if is_frozen then return
		_is_frozen = true
	end

	init do end
end

# Simple linked list of Writers contents
private abstract class WriterNode
	# The next writer in the list
	var _next_writer: nullable WriterNode = null

	# Write all strings (including nested ones) to a stream
	fun internal_write_to_stream(s: OStream) is abstract
end

# A writer node that contains a full writer
private class WriterCoreNode
	super WriterNode
	var _writer: Writer

	redef fun internal_write_to_stream(s) do _writer.write_to_stream(s)

	init(w: Writer) do _writer = w
end

# A simple writer node that contains only strings
private class WriterStrings
	super WriterNode
	# The first string
	var _string: String

	# The next strings
	var _next: nullable WriterStrings = null

	init(s: String)
	do
		_string = s
	end

	redef fun internal_write_to_stream(s)
	do
		var cur: nullable WriterStrings = self
		while cur != null do
			s.write(cur._string)
			cur = cur._next
		end
	end
end

