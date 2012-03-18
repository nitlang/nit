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

class FilterIStream
	super IStream
	# Filter readed elements
	readable var _stream: nullable IStream = null

	redef fun eof: Bool
	do
		assert stream != null
		return stream.eof
	end

	private fun stream=(i: nullable IStream)
	do
		_stream = i
	end
end

class FilterOStream
	super OStream
	# Filter outputed elements
	readable var _stream: nullable OStream = null

	# Can the stream be used to write
	redef fun is_writable: Bool
	do
		assert stream != null
		return stream.is_writable
	end

	private fun stream=(i: OStream)
	do
		_stream = i
	end
end

class StreamCat
	super FilterIStream
	var _streams: Iterator[IStream]

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

	redef fun stream: nullable IStream
	do
		if _stream == null and _streams.is_ok then
			stream = _streams.item
			assert _stream != null
			_streams.next
		end
		return _stream
	end

	redef fun read_char: Int
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

	init with_streams(streams: Array[IStream])
	do
		_streams = streams.iterator
	end
	init(streams: IStream ...)
	do
		_streams = streams.iterator
	end
end

class StreamDemux
	super FilterOStream
	var _streams: Array[OStream]

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

	redef fun write(s: String)
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

	init with_streams(streams: Array[OStream])
	do
		_streams = streams
	end

	init(streams: OStream ...)
	do
		_streams = streams
	end
end
