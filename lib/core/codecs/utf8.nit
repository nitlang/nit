# This file is part of NIT (http://www.nitlanguage.org).
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

# Codec for UTF-8 I/O
module utf8

import codec_base
intrude import text::flat
intrude import bytes

# Codec supporting UTF-8
private class UTF8Codec
	super Codec

	redef fun char_max_size do return 4

	redef fun codet_size do return 1

	redef fun max_lookahead do return 4

	redef fun encode_char(c) do
		var ns = new CString(c.u8char_len)
		add_char_to(c, ns)
		return ns
	end

	redef fun add_char_to(c, stream) do
		c.u8char_tos(stream, c.u8char_len)
		return c.u8char_len
	end

	redef fun encode_string(s) do
		var buf = new Bytes.with_capacity(s.byte_length)
		add_string_to(s, buf)
		return buf
	end

	redef fun add_string_to(s, b) do
		s.append_to_bytes(b)
		return s.byte_length
	end

	redef fun is_valid_char(ns, len) do
		if len == 0 then return 2
		if not ns[0].is_valid_utf8_start then return 2
		for i in [1 .. len[ do if ns[i] & 0b1100_0000 != 0b1000_0000 then return 2
		if len != ns[0].u8len then return 1
		return 0
	end

	redef fun decode_char(b) do
		var c = b.char_at(0)
		var cp = c.code_point
		if cp >= 0xD800 and cp <= 0xDFFF then return 0xFFFD.code_point
		if cp == 0xFFFE or cp == 0xFFFF then return 0xFFFD.code_point
		return c
	end

	redef fun decode_string(ns, len) do
		assert len >= 0
		var ret = ns.to_s_unsafe(len, copy=false)
		var rit = ret.as(FlatString).items
		if rit == ns then
			var nns = new CString(len)
			rit.copy_to(nns, len, 0, 0)
			return nns.to_s_unsafe(ret.byte_length, ret.length, copy=false)
		end
		return ret
	end
end

# Returns the instance of a UTF-8 Codec
fun utf8_codec: Codec do return once new UTF8Codec
