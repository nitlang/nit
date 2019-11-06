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

# Text services to complement `fixed_ints`
module fixed_ints_text

import abstract_text
import string_search

in "C" `{
	#include <inttypes.h>
`}

redef class Int8
	# C function to calculate the length of the `CString` to receive `self`
	private fun to_s_len: Int `{
		return snprintf(NULL, 0, "%"PRIi8, self);
	`}

	# C function to convert a nit Int to a CString (char*)
	private fun native_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%"PRIi8, self);
	`}

	# Displayable Int8
	#
	#     assert 1i8.to_s       == "1"
	#     assert (-123i8).to_s  == "-123"
	redef fun to_s do
		var nslen = to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false)
	end
end

redef class Int16
	private fun to_s_len: Int `{
		return snprintf(NULL, 0, "%"PRIi16, self);
	`}

	# C function to convert a nit Int to a CString (char*)
	private fun native_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%"PRIi16, self);
	`}

	# Displayable Int16
	#
	#     assert 1i16.to_s       == "1"
	#     assert (-123i16).to_s  == "-123"
	redef fun to_s do
		var nslen = to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false)
	end
end

redef class UInt16
	# C function to calculate the length of the `CString` to receive `self`
	private fun to_s_len: Int `{
		return snprintf(NULL, 0, "%"PRIu16, self);
	`}

	# C function to convert a nit Int to a CString (char*)
	private fun native_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%"PRIu16, self);
	`}

	# Displayable UInt16
	#
	#     assert 1u16.to_s       == "1"
	#     assert (-123u16).to_s  == "65413"
	redef fun to_s do
		var nslen = to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false)
	end
end

redef class Int32
	# C function to calculate the length of the `CString` to receive `self`
	private fun to_s_len: Int `{
		return snprintf(NULL, 0, "%"PRIi32, self);
	`}

	# C function to convert a nit Int to a CString (char*)
	private fun native_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%"PRIi32, self);
	`}

	# Displayable Int32
	#
	#     assert 1i32.to_s       == "1"
	#     assert (-123i32).to_s  == "-123"
	redef fun to_s do
		var nslen = to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false)
	end
end

redef class UInt32
	# C function to calculate the length of the `CString` to receive `self`
	private fun to_s_len: Int `{
		return snprintf(NULL, 0, "%"PRIu32, self);
	`}

	# C function to convert a nit Int to a CString (char*)
	private fun native_to_s(nstr: CString, strlen: Int) `{
		snprintf(nstr, strlen, "%"PRIu32, self);
	`}

	# Displayable UInt32
	#
	#     assert 1u32.to_s       == "1"
	#     assert (-123u32).to_s  == "4294967173"
	redef fun to_s do
		var nslen = to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_to_s(ns, nslen + 1)
		return ns.to_s_unsafe(nslen, copy=false)
	end
end

redef class Text

	# Removes the numeric head of `self` if present
	#
	#     intrude import core::fixed_ints_text
	#     assert "0xFFEF".strip_numhead  == "FFEF"
	#     assert "0o7364".strip_numhead  == "7364"
	#     assert "0b01001".strip_numhead == "01001"
	#     assert "98".strip_numhead      == "98"
	private fun strip_numhead: Text do
		if get_numhead != "" then return substring_from(2)
		return self
	end

	# Gets the numeric head of `self` if present
	# Returns "" otherwise
	#
	#     intrude import core::fixed_ints_text
	#     assert "0xFEFF".get_numhead  == "0x"
	#     assert "0b01001".get_numhead == "0b"
	#     assert "0o872".get_numhead   == "0o"
	#     assert "98".get_numhead      == ""
	private fun get_numhead: Text do
		if self.length < 2 then return ""
		var c = self[0]
		if c != '0' then return ""
		c = self[1]
		if c == 'x' or c == 'b' or c == 'o' or
		   c == 'X' or c == 'B' or c == 'O' then return substring(0, 2)
		return ""
	end

	# Removes the numeric extension if present
	#
	#     intrude import core::fixed_ints_text
	#     assert "0xFEFFu8".strip_numext  == "0xFEFF"
	#     assert "0b01001u8".strip_numext == "0b01001"
	#     assert "0o872u8".strip_numext   == "0o872"
	#     assert "98".strip_numext        == "98"
	private fun strip_numext: Text do
		var ext = get_numext
		if ext != "" then return substring(0, length - ext.length)
		return self
	end

	# Gets the numeric extension (i/u 8/16/32) in `self` is present
	# Returns "" otherwise
	#
	#     intrude import core::fixed_ints_text
	#     assert "0xFEFFu8".get_numext  == "u8"
	#     assert "0b01001u8".get_numext == "u8"
	#     assert "0o872u8".get_numext   == "u8"
	#     assert "98".get_numext        == ""
	private fun get_numext: Text do
		var len = self.length
		var max = if self.length < 3 then self.length else 3
		for i in [1 .. max] do
			var c = self[len - i]
			if c == 'i' or c == 'u' then return substring_from(len - i)
		end
		return ""
	end

	# Is `self` a well-formed Integer (i.e. parsable via `to_i`)
	#
	#     assert "123".is_int
	#     assert "0b1011".is_int
	#     assert "-34".is_int
	#     assert "+45".is_int
	#     assert not "0x_".is_int
	#     assert not "0xGE".is_int
	#     assert not "".is_int
	#     assert not "Not an Int".is_int
	#     assert not "-".is_int
	fun is_int: Bool do
		if byte_length == 0 then return false
		var s = remove_all('_')
		var pos = 0
		var len = s.length
		while pos < len and (s[pos] == '-' or s[pos] == '+') do
			pos += 1
		end
		s = s.substring_from(pos)
		var rets = s.strip_numhead
		if rets == "" then return false
		var hd = get_numhead
		if hd == "0x" or hd == "0X" then return rets.is_hex
		if hd == "0b" or hd == "0B" then return rets.is_bin
		if hd == "0o" or hd == "0O" then return rets.is_oct
		return rets.is_dec
	end

	redef fun to_i
	do
		assert self.is_int
		var s = remove_all('_')
		var val = 0
		var neg = false
		var pos = 0
		loop
			if s[pos] == '-' then
				neg = not neg
				pos += 1
			else if s[pos] == '+' then
				pos += 1
			else
				break
			end
		end
		s = s.substring_from(pos)
		if s.length >= 2 then
			var s1 = s[1]
			if s1 == 'x' or s1 == 'X' then
				val = s.substring_from(2).to_hex
			else if s1 == 'o' or s1 == 'O' then
				val = s.substring_from(2).to_oct
			else if s1 == 'b' or s1 == 'B' then
				val = s.substring_from(2).to_bin
			else if s1.is_numeric then
				val = s.to_dec
			end
		else
			val = s.to_dec
		end
		return if neg then -val else val
	end

	# Is `self` a valid integer ?
	#
	#     assert "0xFE46u8".is_num
	#     assert "0b0100".is_num
	#     assert "0o645".is_num
	#     assert "897u8".is_num
	fun is_num: Bool do
		var prefix = get_numhead
		var s = strip_numhead.strip_numext.remove_all('_')
		if prefix != "" then
			var c = prefix[1]
			if c == 'x' or c == 'X' then return s.is_hex
			if c == 'o' or c == 'O' then return s.is_oct
			if c == 'b' or c == 'B' then return s.is_bin
		end
		return s.is_dec
	end

	# If `self` is a properly formatted integer, returns the corresponding value
	# Returns `null` otherwise
	#
	#     assert "0xFEu8".to_num  == 254u8
	#     assert "0b10_10".to_num != 10u8
	fun to_num: nullable Numeric do
		if not is_num then return null
		var s = remove_all('_')
		var ext = s.get_numext
		var trunk = s.strip_numext
		if trunk.strip_numhead == "" then return null
		var trval = trunk.to_i
		if ext == "u8" then
			return trval.to_b
		else if ext == "i8" then
			return trval.to_i8
		else if ext == "i16" then
			return trval.to_i16
		else if ext == "u16" then
			return trval.to_u16
		else if ext == "i32" then
			return trval.to_i32
		else if ext == "u32" then
			return trval.to_u32
		else if ext == "" then
			return trval
		else
			return null
		end
	end
end
