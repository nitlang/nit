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

# Websocket compatible server, works as an extra layer to the original Sockets
class WebSocket

	# Client connection to the server
	var client: Socket

	# Socket listening to connections on a defined port
	var listener: Socket

	# Creates a new Websocket server listening on given port with `max_clients` slots available
	init(port: Int, max_clients: Int)
	do
		listener = new Socket.stream_with_port(port)

		if not listener.bind then
			return
		end

		if not listener.listen(1) then
			return
		end
	end

	# Accept an incoming connection and initializes the handshake
	fun accept
	do
		assert listener.still_alive

		client = listener.accept

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
	fun stop_server
	do
		client.close
		listener.close
	end

	# Parses the input handshake sent by the client
	# See RFC 6455 for information
	private fun parse_handshake: Map[String,String]
	do
		var recved = client.read
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

	# Gets the message from the client, unpads it and reconstitutes the message
	private fun unpad_message: String do
		var fin = false
		var ret_buffer = new FlatBuffer
		while not fin do
			var msg = client.read
			if msg.length == 0 then return ""
			var iter = msg.chars.iterator
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
			var fin_flag = iter.item.ascii.bin_and(128)
			if fin_flag != 0 then fin = true
			var opcode = iter.item.ascii.bin_and(15)
			if opcode == 9 then
				ret_buffer.add(138.ascii)
				ret_buffer.add(0.ascii)
				client.write(ret_buffer.to_s)
				return ""
			end
			if opcode == 8 then
				self.client.close
				return ""
			end
			iter.next
			# Second byte is formatted this way :
			# |(mask - 1bit)|(payload length - 7 bits)
			# As specified, if the payload length is 126 or 127
			# The next 16 or 64 bits contain an extended payload length
			var mask_flag = iter.item.ascii.bin_and(128)
			var mask: String
			var len = iter.item.ascii.bin_and(127)
			var payload_ext_len = 0
			if len == 126 then
				iter.next
				payload_ext_len = iter.item.ascii.lshift(8)
				iter.next
				payload_ext_len += iter.item.ascii
			else if len == 127 then
				# 64 bits for length are not supported,
				# only the last 32 will be interpreted as a Nit Integer
				for i in [0..4[ do iter.next
				payload_ext_len = iter.item.ascii.lshift(24)
				iter.next
				payload_ext_len += iter.item.ascii.lshift(16)
				iter.next
				payload_ext_len += iter.item.ascii.lshift(8)
				iter.next
				payload_ext_len += iter.item.ascii
			end
			if mask_flag != 0 then
				iter.next
				var startindex = iter.index
				mask = msg.substring(startindex,4)
				if payload_ext_len != 0 then
					ret_buffer.append(unmask_message(mask, msg.substring(startindex+4, payload_ext_len)))
				else
					if len == 0 then
						return ret_buffer.to_s
					end
					ret_buffer.append(unmask_message(mask, msg.substring(startindex+4, len)))
				end
			end
		end
		return ret_buffer.to_s
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

	# Writes a text message to a client
	fun write(msg: String)
	do
		client.write(frame_message(msg))
	end

	# Reads data from a Websocket client
	fun read: String
	do
		return unpad_message
	end

	# Is there some data available to be read ?
	fun can_read(timeout: Int): Bool do return client.connected and client.ready_to_read(timeout)

end

