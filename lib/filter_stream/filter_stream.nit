# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

class FilterReader
	super Reader
	# Filter readed elements
	var stream: nullable Reader = null

	redef fun eof: Bool
	do
		assert stream != null
		return stream.eof
	end
end

class FilterWriter
	super Writer
	# Filter outputed elements
	var stream: nullable Writer = null

	# Can the stream be used to write
	redef fun is_writable: Bool
	do
		assert stream != null
		return stream.is_writable
	end
end

class StreamCat
	super FilterReader
	private var streams: Iterator[Reader]

	redef fun eof: Bool
	do
		if stream == null then
			return true
		else if stream.eof then
			stream.close
			stream = null
			return eof
		else
			return false
		end
	end

	redef fun stream: nullable Reader
	do
		var res = super
		if res == null and _streams.is_ok then
			res = _streams.item
			stream = res
			assert stream != null
			_streams.next
		end
		return res
	end

	redef fun read_char
	do
		assert not eof
		return stream.read_char
	end

	redef fun close
	do
		while stream != null do
			stream.close
			stream = null
		end
	end

	init with_streams(streams: Array[Reader])
	do
		_streams = streams.iterator
	end

	init(streams: Reader ...) is old_style_init do
		_streams = streams.iterator
	end
end

class StreamDemux
	super FilterWriter
	private var streams: Array[Writer]

	redef fun is_writable: Bool
	do
		if stream.is_writable then
			return true
		else
			for i in _streams
			do
				if i.is_writable then
					return true
				end
			end
			return false
		end
	end

	redef fun write(s: Text)
	do
		for i in _streams
		do
			stream = i
			if stream.is_writable then
				stream.write(s)
			end
		end
	end

	redef fun close
	do
		for i in _streams
		do
			stream = i
			stream.close
		end
	end

	init with_streams(streams: Array[Writer])
	do
		_streams = streams
	end

	init(streams: Writer ...) is old_style_init do
		_streams = streams
	end
end
