# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Input stream that permits to push bytes back to the stream.
module io::push_back_reader

# Input stream that permits to push bytes back to the stream.
class PushBackReader
	super IStream

	# Push the specified byte back to the stream.
	#
	# The specified byte is usually the last read byte that is not
	# “unread” already.
	fun unread_char(c: Char) is abstract

	# Push the specified string back to the stream.
	#
	# The specified string is usually the last read string that is not
	# “unread” already.
	fun unread(s: String) do
		for c in s.chars.reverse_iterator do unread_char(c)
	end
end

# Decorates an input stream to permit to push bytes back to the input stream.
class PushBackDecorator
	super PushBackReader

	# The parent stream.
	var parent: IStream

	# The stack of the pushed-back bytes.
	#
	# Bytes are in the reverse order they will reappear in the stream.
	# `unread` pushes bytes after already pushed-back bytes.
	#
	# TODO: With optimized bulk array copy operations, a reversed stack (like in
	# OpenJDK) would be more efficient.
	private var buf: Sequence[Char] = new Array[Char]

	redef fun read_char: Int do
		if buf.length <= 0 then return parent.read_char
		return buf.pop.ascii
	end

	redef fun read(i: Int): String do
		if i <= 0 then return ""
		if buf.length <= 0 then return parent.read(i)
		var s = new FlatBuffer.with_capacity(i)

		loop
			s.chars.push(buf.pop)
			i -= 1
			if i <= 0 then
				return s.to_s
			else if buf.length <= 0 then
				s.append(parent.read(i))
				return s.to_s
			end
		end
	end

	redef fun read_all: String do
		if buf.length <= 0 then return parent.read_all
		var s = new FlatBuffer

		loop
			s.chars.push(buf.pop)
			if buf.length <= 0 then
				s.append(parent.read_all)
				return s.to_s
			end
		end
	end

	redef fun append_line_to(s: Buffer) do
		if buf.length > 0 then
			var c: Char

			loop
				c = buf.pop
				s.chars.push(c)
				if c == '\n' then return
				if buf.length <= 0 then break
			end
		end
		parent.append_line_to(s)
	end

	redef fun eof: Bool do return buf.length <= 0 and parent.eof

	redef fun close do
		buf.clear
		parent.close
	end

	redef fun unread_char(c: Char) do buf.push(c)

	redef fun unread(s: String) do
		for c in s.chars.reverse_iterator do buf.push(c)
	end
end
