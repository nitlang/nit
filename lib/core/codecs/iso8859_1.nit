# This file is part of NIT (https://nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Codec for ISO8859-1 I/O
module iso8859_1

import codec_base
intrude import bytes

private class ISO88591Codec
	super Codec

	redef fun char_max_size do return 1

	redef fun codet_size do return 1

	redef fun max_lookahead do return 1

	redef fun encode_char(c) do
		var ns = new CString(c.u8char_len)
		add_char_to(c, ns)
		return ns
	end

	redef fun add_char_to(c, stream) do
		var cp = if c.code_point <= 255 then c else '?'
		stream[0] = cp.code_point
		return 1
	end

	redef fun encode_string(s) do
		var ns = new Bytes.with_capacity(s.byte_length)
		add_string_to(s, ns)
		return ns
	end

	redef fun add_string_to(s, b) do
		var pos = 0
		for i in s.chars do
			var cp = i.code_point
			if cp <= 255 then
				b[pos] = cp
			else
				b[pos] = 0x3F
			end
			pos += 1
		end
		return pos
	end

	redef fun is_valid_char(ns, len) do
		return 0
	end

	redef fun decode_char(b) do
		return b[0].to_i.code_point
	end

	redef fun decode_string(b, len) do
		var buf = new Bytes.with_capacity(len)
		for i in [0 .. len[ do buf.add_char(b[i].to_i.code_point)
		return buf.to_s
	end
end

# Returns the instance of a ISO8859-1 Codec
fun iso88591_codec: Codec do return once new ISO88591Codec
