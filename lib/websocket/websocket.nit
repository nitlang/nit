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
module websocket

import socket
import sha1
import base64

intrude import socket

# Connection to a websocket client
#
# Can be used to communicate with a client
class WebsocketConnection
	super ProtocolDuplex

	init do
		var headers = parse_handshake
		if eof then
			close
			return
		end
		var resp = handshake_response(headers)
		write_raw_bytes(resp.items, resp.length)
	end

	redef fun close do
		if not client.eof then
			write_raw_byte(0x88u8)
			write_raw_byte(0x80u8)
		end
		client.close
	end

	redef fun ready(i) do return frame_remaining > 0 or super or client.ready(i)

	# Mask used for a frame
	private var mask = new NativeString(4)

	# Position of the next byte in mask to use
	private var mask_pos = 0

	# Is the current frame's data masked ?
	var masked_data = false

	# How many bytes in current frame are to be read ?
	private var frame_remaining = 0

	# Parses the input handshake sent by the client
	# See RFC 6455 for information
	private fun parse_handshake: Map[String,String]
	do
		var headmap = new HashMap[String,String]
		var header_cnt = new Bytes.empty
		var buf = new NativeString(100)
		while ready do
			var rd = read_client_bytes(buf, 100)
			header_cnt.append_ns(buf, rd)
		end
		var str = header_cnt.to_s
		if not str.has_suffix("\r\n\r\n") then
			last_error = new IOError("Bad HTTP request")
			close
		end
		var cmpts = str.split("\r\n")
		for i in cmpts do
			var temp_head = i.split(" ")
			if temp_head.is_empty then continue
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
	private fun handshake_response(heads: Map[String,String]): Bytes
	do
		var resp = new Bytes.empty
		resp.append_text("HTTP/1.1 101 Switching Protocols\r\nUpgrade: websocket\r\nConnection: Upgrade\r\n")
		var key = heads["Sec-WebSocket-Key"]
		key += "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
		key = key.sha1.encode_base64.to_s
		resp.append_text("Sec-WebSocket-Accept: {key}\r\n\r\n")
		return resp
	end

	# Use when a frame is being received
	#
	# NOTE: According to RFC 6455, when a frame is declared as text, it MUST:
	#
	# * Act as if the received text is UTF-8
	# * If an invalid sequence is encountered, the connection must close
	#
	# As we clean up sequences of bytes received by a client, the content of the text
	# will be properly escaped using the appropriate Codec.
	# As such, our implementation will not close a connection if an invalid text
	# sequence is received.
	private fun parse_frame do
		var fin = false
		while not fin do
			var fst_byte = read_client_byte
			var snd_byte = read_client_byte
			if fst_byte == null or snd_byte == null then
				last_error = new IOError("Error: bad frame")
				close
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
			var fin_flag = fst_byte & 0b1000_0000
			if fin_flag != 0 then fin = true
			var opcode = fst_byte & 0b0000_1111
			if opcode == 9 then
				write_raw_byte 0x89u8
				write_raw_byte 0u8
				return
			else if opcode == 10 then
				return
			else if opcode == 8 then
				close
				return
			end
			# Second byte is formatted this way :
			# |(mask - 1bit)|(payload length - 7 bits)
			# As specified, if the payload length is 126 or 127
			# The next 16 or 64 bits contain an extended payload length
			var mask_flag = snd_byte & 0b1000_0000
			var len = snd_byte & 0b0111_1111
			if len == 126 then
				var lnhi = read_byte
				var lnlo = read_byte
				if lnhi == null or lnlo == null then
					last_error = new IOError("Websocket Error: Interrupted frame.")
					close
					return
				end
				len = (lnhi.to_i << 8) + lnlo.to_i
			else if len == 127 then
				#TODO Support 64-bit long packets
				last_error = new IOError("Missing support for 64-bit long integers")
				close
				return
			end
			if mask_flag != 0 then
				masked_data = true
				read_client_bytes(self.mask, 4)
				self.mask_pos = 0
			else
				masked_data = false
			end
			frame_remaining = len
		end
	end

	redef fun raw_read_byte do
		var b = super
		if b != null then return b
		if frame_remaining == 0 then parse_frame
		if not ready then return null
		b = read_client_byte
		if b == null then
			last_error = new IOError("Websocket Error: Interrupted frame.")
			close
			return null
		end
		if masked_data then
			b ^= mask[mask_pos].to_i
			mask_pos += 1
			if mask_pos >= 4 then mask_pos = 0
		end
		frame_remaining -= 1
		return b
	end

	redef fun raw_read_bytes(b, ln) do
		var rd = super
		if rd > 0 and not ready then return rd
		b.fast_cstring(rd)
		ln -= rd
		if frame_remaining == 0 then parse_frame
		var rd_frame = ln.min(frame_remaining)
		read_client_bytes(b, rd_frame)
		if masked_data then
			var mask_pos = self.mask_pos
			for i in [0 .. rd_frame[ do
				b[i] ^= mask[mask_pos]
				mask_pos += 1
				if mask_pos >= 4 then mask_pos = 0
			end
			self.mask_pos = mask_pos
		end
		ln -= rd_frame
		rd += rd_frame
		frame_remaining -= rd_frame
		if ln <= 0 then return rd
		if ready then return rd + read_bytes_native(b.fast_cstring(rd), ln)
		return rd
	end

	redef fun write_byte(b) do
		write_raw_byte(0x82u8)
		write_raw_byte(0x01u8)
		write_raw_byte(b)
	end

	redef fun write_bytes(s, ln) do
		if ln <= 125 then
			write_raw_byte(0x82u8)
			var blen = ln.to_b
			write_raw_byte(blen)
			write_raw_bytes(s, ln)
		else if ln <= 65535 then
			write_raw_byte(0x82u8)
			write_raw_byte(126u8)
			write_raw_byte(((ln & 0xFF00) >> 8).to_b)
			write_raw_byte((ln & 0xFF).to_b)
			write_raw_bytes(s, ln)
		else
			var rem = ln
			var str = s
			while rem >= 65535 do
				write_raw_byte(0x02u8)
				write_raw_byte(126u8)
				write_raw_byte(0xFFu8)
				write_raw_byte(0xFFu8)
				write_raw_bytes(s, ln)
				str = str.fast_cstring(65535)
				rem -= 65535
			end
			write_bytes(str, rem)
		end
	end

	redef fun eof do return frame_remaining <= 0 and super and client.eof
end
