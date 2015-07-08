# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Lucas Bajolet <r4pass@hotmail.com>
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

intrude import standard::stream
intrude import standard::bytes

# Websocket compatible listener
#
# Produces Websocket client-server connections
class WebSocketListener
	super Socket

	# Socket listening to connections on a defined port
	var listener: TCPServer

	# Creates a new Websocket server listening on given port with `max_clients` slots available
	init(port: Int, max_clients: Int)
	do
		listener = new TCPServer(port)
		listener.listen max_clients
	end

	# Accepts an incoming connection
	fun accept: WebsocketConnection
	do
		assert not listener.closed

		var client = listener.accept
		assert client != null

		return new WebsocketConnection(listener.port, "", client)
	end

	# Stop listening for incoming connections
	fun close
	do
		listener.close
	end
end

# Connection to a websocket client
#
# Can be used to communicate with a client
class WebsocketConnection
	super TCPStream

	init do
		_buffer = new NativeString(1024)
		_buffer_pos = 0
		_buffer_capacity = 1024
		_buffer_length = 0
		var headers = parse_handshake
		var resp = handshake_response(headers)

		client.write(resp)
	end

	# Client connection to the server
	var client: TCPStream

	# Disconnect from a client
	redef fun close
	do
		client.close
	end

	# Parses the input handshake sent by the client
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

	# Generates the handshake
	private fun handshake_response(heads: Map[String,String]): String
	do
		var resp_map = new HashMap[String,String]
		resp_map["HTTP/1.1"] = "101 Switching Protocols"
		resp_map["Upgrade:"] = "websocket"
		resp_map["Connection:"] = "Upgrade"
		var key = heads["Sec-WebSocket-Key"]
		key += "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
		key = key.sha1.encode_base64
		resp_map["Sec-WebSocket-Accept:"] = key
		var resp = resp_map.join("\r\n", " ")
		resp += "\r\n\r\n"
		return resp
	end

	# Frames a text message to be sent to a client
	private fun frame_message(msg: String): Bytes
	do
		var ans_buffer = new Bytes.with_capacity(msg.length)
		# Flag for final frame set to 1
		# opcode set to 1 (for text)
		ans_buffer.add(129u8)
		if msg.length < 126 then
			ans_buffer.add(msg.length.to_b)
		end
		if msg.length >= 126 and msg.length <= 65535 then
			ans_buffer.add(126u8)
			ans_buffer.add((msg.length >> 8).to_b)
			ans_buffer.add(msg.length.to_b)
		end
		if msg isa FlatString then
			ans_buffer.append_ns_from(msg.items, msg.length, msg.index_from)
		else
			for i in msg.substrings do
				ans_buffer.append_ns_from(i.as(FlatString).items, i.length, i.as(FlatString).index_from)
			end
		end
		return ans_buffer
	end

	# Reads an HTTP frame
	protected fun read_http_frame(buf: Buffer): String
	do
		var ln = client.read_line
		buf.append ln
		buf.append "\r\n"
		if buf.has_suffix("\r\n\r\n") then return buf.to_s
		return read_http_frame(buf)
	end

	# Gets the message from the client, unpads it and reconstitutes the message
	private fun unpad_message do
		var fin = false
		var bf = new Bytes.empty
		while not fin do
			var fst_byte = client.read_byte
			var snd_byte = client.read_byte
			if fst_byte == null or snd_byte == null then
				last_error = new IOError("Error: bad frame")
				client.close
				return
			end
			# First byte in msg is formatted this way :
			# |(fin - 1bit)|(RSV1 - 1bit)|(RSV2 - 1bit)|(RSV3 - 1bit)|(opcode - 4bits)
			# fin = Flag indicating if current frame is the last one
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
			var fin_flag = fst_byte & 0b1000_0000u8
			if fin_flag != 0 then fin = true
			var opcode = fst_byte & 0b0000_1111u8
			if opcode == 9 then
				bf.add(138u8)
				bf.add(0u8)
				client.write(bf.to_s)
				_buffer_pos = _buffer_length
				return
			end
			if opcode == 8 then
				self.client.close
				return
			end
			# Second byte is formatted this way :
			# |(mask - 1bit)|(payload length - 7 bits)
			# As specified, if the payload length is 126 or 127
			# The next 16 or 64 bits contain an extended payload length
			var mask_flag = snd_byte & 0b1000_0000u8
			var len = (snd_byte & 0b0111_1111u8).to_i
			var payload_ext_len = 0
			if len == 126 then
				var tmp = client.read_bytes(2)
				if tmp.length != 2 then
					last_error = new IOError("Error: received interrupted frame")
					client.close
					return
				end
				payload_ext_len += tmp[0].to_i << 8
				payload_ext_len += tmp[1].to_i
			else if len == 127 then
				var tmp = client.read_bytes(8)
				if tmp.length != 8 then
					last_error = new IOError("Error: received interrupted frame")
					client.close
					return
				end
				for i in [0 .. 8[ do
					payload_ext_len += tmp[i].to_i << (8 * (7 - i))
				end
			end
			if mask_flag != 0 then
				var mask = client.read_bytes(4).items
				if payload_ext_len != 0 then
					len = payload_ext_len
				end
				var msg = client.read_bytes(len).items
				bf.append_ns(unmask_message(mask, msg, len), len)
			end
		end
		_buffer = bf.items
		_buffer_length = bf.length
	end

	# Unmasks a message sent by a client
	private fun unmask_message(key: NativeString, message: NativeString, len: Int): NativeString
	do
		var return_message = new NativeString(len)

		for i in [0 .. len[ do
			return_message[i] = message[i] ^ key[i % 4]
		end

		return return_message
	end

	# Checks if a connection to a client is available
	redef fun connected do return client.connected

	redef fun write_bytes(s) do client.write_bytes(frame_message(s.to_s))

	redef fun write(msg) do client.write(frame_message(msg.to_s).to_s)

	redef fun is_writable do return client.connected

	redef fun fill_buffer
	do
		buffer_reset
		unpad_message
	end

	redef fun end_reached do return client._buffer_pos >= client._buffer_length and client.end_reached

	# Is there some data available to be read ?
	fun can_read(timeout: Int): Bool do return client.ready_to_read(timeout)

	redef fun poll_in do return client.poll_in
end
