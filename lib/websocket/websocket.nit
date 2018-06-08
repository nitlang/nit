# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Adds support for a websocket connection in Nit
# Uses standard sockets
module websocket

import socket
import sha1
import base64
import crypto

# Websocket compatible server
#
# Produces Websocket client-server connections
class WebsocketServer

	# Socket listening for incoming Websocket connections
	var listener: TCPServer

	# Is `self` closed?
	var closed = false

	# Creates a new Websocket server listening on given port
	# with `max_clients` slots available
	init with_infos(port: Int, max_clients: Int)
	do
		var listener = new TCPServer(port)
		listener.listen max_clients
		init(listener)
	end

	# Accepts an incoming connection
	fun accept: WebsocketConnection
	do
		assert not listener.closed

		var client = listener.accept
		assert client != null

		return new WebsocketConnection(client)
	end

	# Close the server and the socket below it
	fun close
	do
		listener.close
		closed = true
	end
end

# Connection to a websocket client
#
# Can be used to communicate with a client
class WebsocketConnection
	super DuplexProtocol
	super PollableReader

	redef type STREAM: TCPStream

	# Does the current frame have a mask?
	private var has_mask = false

	# Mask with which to XOR input data
	private var mask = new CString(4)

	# Offset of the mask to use when decoding input data
	private var mask_offset = -1

	# Length of the current frame
	private var frame_length = -1

	# Position in current frame
	private var frame_cursor = -1

	# Type of the current frame
	var frame_type = -1

	# Is `self` closed?
	var closed = false

	init do
		var headers = parse_handshake
		var resp = handshake_response(headers)

		origin.write(resp)
	end

	# Disconnect from a client
	redef fun close do
		origin.close
		closed = true
	end

	# Ping response message
	private fun pong_msg: Bytes do return once b"\x8a\x00"

	# Parse the input handshake sent by the client
	# See RFC 6455 for information
	private fun parse_handshake: Map[String,String]
	do
		var recved = read_http_frame(new FlatBuffer)
		var headers = recved.split("\r\n")
		var headmap = new HashMap[String,String]
		for i in headers do
			var temp_head = i.split(" ")
			var head = temp_head.shift
			if head.is_empty or head.length == 1 then continue
			if head.chars.last == ':' then
				head = head.substring(0, head.length - 1)
			end
			var body = temp_head.join(" ")
			headmap[head] = body
		end
		return headmap
	end

	# Generate a handshake response
	private fun handshake_response(heads: Map[String,String]): String
	do
		var resp_map = new HashMap[String,String]
		resp_map["HTTP/1.1"] = "101 Switching Protocols"
		resp_map["Upgrade:"] = "websocket"
		resp_map["Connection:"] = "Upgrade"
		var key = heads["Sec-WebSocket-Key"]
		key += "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
		key = key.sha1.encode_base64.to_s
		resp_map["Sec-WebSocket-Accept:"] = key
		var resp = resp_map.join("\r\n", " ")
		resp += "\r\n\r\n"
		return resp
	end

	# Frame a text message to be sent to a client
	private fun frame_message(msg: Text): Bytes
	do
		var ans_buffer = new Bytes.with_capacity(msg.byte_length + 2)
		# Flag for final frame set to 1
		# opcode set to 1 (for text)
		ans_buffer.add(129)
		if msg.length < 126 then
			ans_buffer.add(msg.length)
		end
		if msg.length >= 126 and msg.length <= 65535 then
			ans_buffer.add(126)
			ans_buffer.add(msg.length >> 8)
			ans_buffer.add(msg.length)
		end
		msg.append_to_bytes(ans_buffer)
		return ans_buffer
	end

	# Read an HTTP frame
	protected fun read_http_frame(buf: Buffer): String
	do
		var ln = origin.read_line
		buf.append ln
		buf.append "\r\n"
		if buf.has_suffix("\r\n\r\n") then return buf.to_s
		return read_http_frame(buf)
	end

	# Get a frame's information
	private fun read_frame_info do
		var fst_byte = origin.read_byte
		var snd_byte = origin.read_byte
		if fst_byte < 0 or snd_byte < 0 then
			last_error = new IOError("Error: bad frame")
			close
			return
		end
		# First byte in msg is formatted this way :
		# |(fin - 1bit)|(RSV1 - 1bit)|(RSV2 - 1bit)|(RSV3 - 1bit)|(opcode - 4bits)
		# fin = Flag indicating if current frame is the last one for the current message
		# RSV1/2/3 = Extension flags, unsupported
		# Opcode values :
		#	%x0 denotes a continuation frame
		#	%x1 denotes a text frame
		#	%x2 denotes a binary frame
		#	%x3-7 are reserved for further non-control frames
		#	%x8 denotes a connection close
		#	%x9 denotes a ping
		#	%xA denotes a pong
		#	%xB-F are reserved for further control frames
		var opcode = fst_byte & 0b0000_1111
		if opcode == 9 then
			origin.write_bytes(pong_msg)
			return
		end
		if opcode == 8 then
			close
			return
		end
		frame_type = opcode
		# Second byte is formatted this way :
		# |(mask - 1bit)|(payload length - 7 bits)
		# As specified, if the payload length is 126 or 127
		# The next 16 or 64 bits contain an extended payload length
		var mask_flag = snd_byte & 0b1000_0000
		var len = snd_byte & 0b0111_1111
		var payload_ext_len = 0
		if len == 126 then
			var tmp = origin.read_bytes(2)
			if tmp.length != 2 then
				last_error = new IOError("Error: received interrupted frame")
				origin.close
				return
			end
			payload_ext_len += tmp[0].to_i << 8
			payload_ext_len += tmp[1].to_i
		else if len == 127 then
			var tmp = origin.read_bytes(8)
			if tmp.length != 8 then
				last_error = new IOError("Error: received interrupted frame")
				origin.close
				return
			end
			for i in [0 .. 8[ do
				payload_ext_len += tmp[i].to_i << (8 * (7 - i))
			end
		end
		if mask_flag != 0 then
			origin.read_bytes_to_cstring(mask, 4)
			has_mask = true
		else
			mask.memset(0, 4)
			has_mask = false
		end
		if payload_ext_len != 0 then
			len = payload_ext_len
		end
		frame_length = len
		frame_cursor = 0
	end

	redef fun raw_read_byte do
		while not closed and frame_cursor >= frame_length do
			read_frame_info
		end
		if closed then return -1
		var b = origin.read_byte
		if b >= 0 then
			frame_cursor += 1
		end
		return b
	end

	redef fun raw_read_bytes(ns, len) do
		while not closed and frame_cursor >= frame_length do
			read_frame_info
		end
		if closed then return -1
		var available = frame_length - frame_cursor
		var to_rd = len.min(available)
		var rd = origin.read_bytes_to_cstring(ns, to_rd)
		if rd < 0 then
			close
			return 0
		end
		if has_mask then
			ns.xor(mask, rd, 4, mask_offset)
			mask_offset = rd % 4
		end
		frame_cursor += rd
		return rd
	end

	# Checks if a connection to a client is available
	fun connected: Bool do return not closed and origin.connected

	redef fun write_bytes_from_cstring(ns, len) do
		origin.write_bytes(frame_message(ns.to_s_unsafe(len)))
	end

	redef fun write(msg) do origin.write_bytes(frame_message(msg))

	redef fun is_writable do return origin.connected

	# Is there some data available to be read ?
	fun can_read(timeout: Int): Bool do return  not closed and origin.ready_to_read(timeout)

	redef fun poll_in do return origin.poll_in
end
