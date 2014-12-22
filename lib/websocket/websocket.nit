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

# Websocket compatible server, works as an extra layer to the original Sockets
class WebSocket
	super BufferedIStream
	super OStream
	super PollableIStream

	# Client connection to the server
	var client: TCPStream

	# Socket listening to connections on a defined port
	var listener: TCPServer

	# Creates a new Websocket server listening on given port with `max_clients` slots available
	init(port: Int, max_clients: Int)
	do
		_buffer = new FlatBuffer
		_buffer_pos = 0
		listener = new TCPServer(port)
		listener.listen max_clients
	end

	# Accept an incoming connection and initializes the handshake
	fun accept
	do
		assert not listener.closed

		var client = listener.accept
		assert client != null
		self.client = client

		var headers = parse_handshake
		var resp = handshake_response(headers)

		client.write(resp)
	end

	# Disconnect from a client
	fun disconnect_client
	do
		client.close
	end

	# Disconnects the client if one is connected
	# And stops the server
	redef fun close
	do
		client.close
		listener.close
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
	private fun frame_message(msg: String): String
	do
		var ans_buffer = new FlatBuffer
		# Flag for final frame set to 1
		# opcode set to 1 (for text)
		ans_buffer.add(129.ascii)
		if msg.length < 126 then
			ans_buffer.add(msg.length.ascii)
		end
		if msg.length >= 126 and msg.length <= 65535 then
			ans_buffer.add(126.ascii)
			ans_buffer.add(msg.length.rshift(8).ascii)
			ans_buffer.add(msg.length.ascii)
		end
		ans_buffer.append(msg)
		return ans_buffer.to_s
	end

	# Reads an HTTP frame
	protected fun read_http_frame(buf: Buffer): String
	do
		client.append_line_to(buf)
		buf.chars.add('\n')
		if buf.has_substring("\r\n\r\n", buf.length - 4) then return buf.to_s
		return read_http_frame(buf)
	end

	# Gets the message from the client, unpads it and reconstitutes the message
	private fun unpad_message do
		var fin = false
		while not fin do
			var fst_char = client.read_char
			var snd_char = client.read_char
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
			var fin_flag = fst_char.bin_and(128)
			if fin_flag != 0 then fin = true
			var opcode = fst_char.bin_and(15)
			if opcode == 9 then
				_buffer.add(138.ascii)
				_buffer.add('\0')
				client.write(_buffer.to_s)
				_buffer_pos += 2
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
			var mask_flag = snd_char.bin_and(128)
			var len = snd_char.bin_and(127)
			var payload_ext_len = 0
			if len == 126 then
				payload_ext_len = client.read_char.lshift(8)
				payload_ext_len += client.read_char
			else if len == 127 then
				# 64 bits for length are not supported,
				# only the last 32 will be interpreted as a Nit Integer
				for i in [0..4[ do client.read_char
				payload_ext_len = client.read_char.lshift(24)
				payload_ext_len += client.read_char.lshift(16)
				payload_ext_len += client.read_char.lshift(8)
				payload_ext_len += client.read_char
			end
			if mask_flag != 0 then
				if payload_ext_len != 0 then
					var msg = client.read(payload_ext_len+4)
					var mask = msg.substring(0,4)
					_buffer.append(unmask_message(mask, msg.substring(4, payload_ext_len)))
				else
					if len == 0 then
						return
					end
					var msg = client.read(len+4)
					var mask = msg.substring(0,4)
					_buffer.append(unmask_message(mask, msg.substring(4, len)))
				end
			end
		end
	end

	# Unmasks a message sent by a client
	private fun unmask_message(key: String, message: String): String
	do
		var return_message = new FlatBuffer.with_capacity(message.length)
		var msg_iter = message.chars.iterator

		while msg_iter.is_ok do
			return_message.chars[msg_iter.index] = msg_iter.item.ascii.bin_xor(key.chars[msg_iter.index%4].ascii).ascii
			msg_iter.next
		end

		return return_message.to_s
	end

	# Checks if a connection to a client is available
	fun connected: Bool do return client.connected

	redef fun write(msg: Text)
	do
		client.write(frame_message(msg.to_s))
	end

	redef fun is_writable do return client.connected

	redef fun fill_buffer
	do
		_buffer.clear
		_buffer_pos = 0
		unpad_message
	end

	redef fun end_reached do return _buffer_pos >= _buffer.length and client.eof

	# Is there some data available to be read ?
	fun can_read(timeout: Int): Bool do return client.ready_to_read(timeout)

	redef fun poll_in do return client.poll_in
end
