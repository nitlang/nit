# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

import stream

# Stream class used as a Decorator over a stream
class Protocol
	super Stream

	type STREAM: Stream

	var origin: STREAM

	redef fun close do origin.close
end

# Reader decorator over a read-capable stream
class ReaderProtocol
	super Reader
	super Protocol

	redef type STREAM: Reader

	redef fun raw_read_byte do
		return origin.read_byte
	end

	redef fun raw_read_bytes(ns, len) do
		return origin.read_bytes_to_cstring(ns, len)
	end
end

# Writer decorator over a write-capable stream
class WriterProtocol
	super Writer
	super Protocol

	redef type STREAM: Writer

	redef fun write_byte(b) do
		origin.write_byte(b)
	end

	redef fun write_bytes_from_cstring(ns, len) do
		origin.write_bytes_from_cstring(ns, len)
	end
end

# Reader/Writer decorator over a duplex-capable stream
class DuplexProtocol
	super Duplex
	super WriterProtocol
	super ReaderProtocol

	redef type STREAM: Duplex
end
