# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Defines the base for wrappers over Streams
#
# A Protocol is defined as an extra layer over a writer which supports
# Reading/Writing bytes from/to a source/destination.
#
# A Protocol can wrap another protocol, regardless of how they are imbriqued.
module protocol

import stream

# A Protocol is supposed to handle a connection through any kind of
# underlying medium and should comply to a set of rules defined by a
# formal (or not) specification.
class Protocol
	super Stream
	# Which class should a protocol wrap ?
	type WRAPPED: Stream

	# The client underlying `self`
	var client: WRAPPED
end

# A Write-only protocol, no communication is expected from a client.
class ProtocolWriter
	super Protocol
	super Writer

	redef type WRAPPED: Writer

	# Write a byte to client without complying to the protocol.
	#
	# This is mainly intended to be used internally for implementation
	# of the protocol.
	fun write_raw_byte(b: Byte) do client.write_byte(b)

	# Write `ln` bytes from `ns` to client without complying to the protocol.
	#
	# This is mainly intended to be used internally for implementation
	# of the protocol.
	fun write_raw_bytes(ns: NativeString, ln: Int) do client.write_bytes(ns, ln)

	redef fun is_writable do return client.is_writable
end

# A Read-Only protocol, nothing is supposed to be communicated to a client.
class ProtocolReader
	super Protocol
	super Reader

	redef type WRAPPED: Reader

	# Reads a byte from client without complying to the protocol.
	#
	# This is mainly intended to be used internally for implementation
	# of the protocol.
	fun read_client_byte: nullable Int do return client.read_byte

	# Write `ln` bytes from `ns` to client without complying to the protocol.
	#
	# This is mainly intended to be used internally for implementation
	# of the protocol.
	fun read_client_bytes(ns: NativeString, ln: Int): Int do return client.read_bytes_native(ns, ln)
end

# Read/Write Protocol
class ProtocolDuplex
	super ProtocolReader
	super ProtocolWriter
	super Duplex

	redef type WRAPPED: Duplex
end
