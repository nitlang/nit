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

# Returns UTF-8 entities as-is
private class UTF8Coder
	super Coder

	redef fun code_char(c) do return c.to_s.to_bytes

	redef fun add_char_to(c, stream) do for i in c.to_s.bytes do stream.add i

	redef fun code_string(s) do return s.to_bytes

	redef fun add_string_to(s, b) do for i in s.bytes do b.add i
end

# Decodes entities in an external format to UTF-8
private class UTF8Decoder
	super Decoder

	redef fun decode_char(b) do
		var s = b.to_s
		return s[0]
	end

	redef fun decode_string(b) do
		return b.to_s
	end
end

# Returns the instance of a UTF-8 Coder
fun utf8_coder: Coder do return once new UTF8Coder
# Returns the instance of a UTF-8 Decoder
fun utf8_decoder: Decoder do return once new UTF8Decoder
