# This file is part of NIT (https://nitlanguage.org).
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

# Read and write binary data with any `Reader` and `Writer`
#
# ~~~
# var w = new FileWriter.open("/tmp/data.bin")
# w.write "hello"
# w.write_int64 123456789
# w.write_byte 3
# w.write_float 1.25
# w.write_double 1.234567
# w.write_bits(true, false, true)
# assert w.last_error == null
# w.close
#
# var r = new FileReader.open("/tmp/data.bin")
# assert r.read(5) == "hello"
# assert r.read_int64 == 123456789
# assert r.read_byte == 3
# assert r.read_float == 1.25
# assert r.read_double == 1.234567
#
# var bits = r.read_bits
# assert bits[0] and not bits[1] and bits[2]
#
# assert r.last_error == null
# r.close
# ~~~
module binary

in "C" `{
	#include <inttypes.h>
	#include <endian.h>

	// Android compatibility
	#ifndef be32toh
		#define be32toh(val) betoh32(val)
		#define le32toh(val) letoh32(val)
	#endif

	#ifndef be64toh
		#define be64toh(val) betoh64(val)
		#define le64toh(val) letoh64(val)
	#endif
`}

# A stream of binary data
abstract class BinaryStream
	super Stream

	# Use the big-endian convention? otherwise use little-endian.
	#
	# By default, `true` to use big-endian.
	var big_endian = true is writable
end

redef abstract class Writer
	super BinaryStream

	# Write a boolean `value` on a byte, using 0 for `false` and 1 for `true`
	fun write_bool(value: Bool) do write_byte if value then 1 else 0

	# Write up to 8 `Bool` in a byte
	#
	# To be used with `BinaryReader::read_bits`.
	#
	# Ensure: `bits.length <= 8`
	fun write_bits(bits: Bool...)
	do
		assert bits.length <= 8

		var int = 0
		for b in bits.length.times do
			if bits[b] then int |= 1 << (7 - b)
		end

		write_byte int
	end

	# Write `text` as a null terminated string
	#
	# To be used with `Reader::read_string`.
	#
	# Require: `text` has no null bytes.
	fun write_string(text: Text)
	do
		write text
		write_byte 0x00
	end

	# Write the length as a 64 bits integer, then the content of `text`
	#
	# To be used with `Reader::read_block`.
	#
	# Compared to `write_string`, this method supports null bytes in `text`.
	fun write_block(text: Text)
	do
		write_int64 text.byte_length
		write text
	end

	# Write a floating point `value` on 32 bits
	#
	# Using this format may result in a loss of precision as it uses less bits
	# than Nit `Float`.
	fun write_float(value: Float)
	do
		for i in [0..4[ do write_byte value.float_byte_at(i, big_endian)
	end

	# Write a floating point `value` on 64 bits
	fun write_double(value: Float)
	do
		for i in [0..8[ do write_byte value.double_byte_at(i, big_endian)
	end

	# Write `value` as a signed integer on 64 bits
	#
	# Using this format may result in a loss of precision as the length of a
	# Nit `Int` may be more than 64 bits on some platforms.
	fun write_int64(value: Int)
	do
		for i in [0..8[ do write_byte value.int64_byte_at(i, big_endian)
	end

	# TODO:
	#
	# fun write_int8
	# fun write_uint8 # No need for this one, it is the current `read_char`
	# fun write_int16
	# fun write_uint16
	# fun write_int32
	# fun write_uint32
	# fun write_uint64
	# fun write_long_double?
end

redef abstract class Reader
	super BinaryStream

	# Read a single byte and return `true` if its value is different than 0
	#
	# Returns `false` when an error is pending (`last_error != null`).
	fun read_bool: Bool do return read_byte > 0

	# Get an `Array` of 8 `Bool` by reading a single byte
	#
	# To be used with `BinaryWriter::write_bits`.
	#
	# Returns an array of `false` when an error is pending (`last_error != null`).
	fun read_bits: Array[Bool]
	do
		var int = read_byte
		if int < 0 then return new Array[Bool]
		var arr = new Array[Bool]
		for i in [7 .. 0].step(-1) do
			arr.push(((int >> i) & 1) != 0)
		end
		return arr
	end

	# Read a null terminated string
	#
	# To be used with `Writer::write_string`.
	#
	# Returns a truncated string when an error is pending (`last_error != null`).
	fun read_string: String
	do
		var buf = new Bytes.empty
		loop
			var byte = read_byte
			if byte <= 0 then
				return buf.to_s
			end
			buf.add byte
		end
	end

	# Read the length as a 64 bits integer, then the content of the block
	#
	# To be used with `Writer::write_block`.
	#
	# Returns a truncated string when an error is pending (`last_error != null`).
	fun read_block: String
	do
		var length = read_int64
		if length == 0 then return ""
		return read_bytes(length).to_s
	end

	# Read a floating point on 32 bits and return it as a `Float`
	#
	# Using this format may result in a loss of precision as it uses less bits
	# than Nit `Float`.
	#
	# Returns `0.0` when an error is pending (`last_error != null`).
	fun read_float: Float
	do
		if last_error != null then return 0.0

		var b0 = read_byte
		var b1 = read_byte
		var b2 = read_byte
		var b3 = read_byte

		# Check for error, `last_error` is set by `read_byte`
		if b0 < 0 or b1 < 0 or b2 < 0 or b3 < 0 then return 0.0

		return native_read_float(b0, b1, b2, b3, big_endian)
	end

	# Utility for `read_float`
	private fun native_read_float(b0, b1, b2, b3: Int, big_endian: Bool): Float `{
		union {
			unsigned char b[4];
			float val;
			uint32_t conv;
		} u;

		u.b[0] = b0;
		u.b[1] = b1;
		u.b[2] = b2;
		u.b[3] = b3;

		if (big_endian)
			u.conv = be32toh(u.conv);
		else u.conv = le32toh(u.conv);

		return u.val;
	`}

	# Read a floating point on 64 bits and return it as a `Float`
	#
	# Returns `0.0` when an error is pending (`last_error != null`).
	fun read_double: Float
	do
		if last_error != null then return 0.0

		var b0 = read_byte
		var b1 = read_byte
		var b2 = read_byte
		var b3 = read_byte
		var b4 = read_byte
		var b5 = read_byte
		var b6 = read_byte
		var b7 = read_byte

		# Check for error, `last_error` is set by `read_byte`
		if b0 < 0 or b1 < 0 or b2 < 0 or b3 < 0 or
		   b4 < 0 or b5 < 0 or b6 < 0 or b7 < 0 then return 0.0

		return native_read_double(b0, b1, b2, b3, b4, b5, b6, b7, big_endian)
	end

	# Utility for `read_double`
	private fun native_read_double(b0, b1, b2, b3, b4, b5, b6, b7: Int, big_endian: Bool): Float `{
		union {
			unsigned char b[8];
			double val;
			uint64_t conv;
		} u;

		u.b[0] = b0;
		u.b[1] = b1;
		u.b[2] = b2;
		u.b[3] = b3;
		u.b[4] = b4;
		u.b[5] = b5;
		u.b[6] = b6;
		u.b[7] = b7;

		if (big_endian)
			u.conv = be64toh(u.conv);
		else u.conv = le64toh(u.conv);

		return u.val;
	`}

	# Read a signed integer on 64 bits and return is an `Int`
	#
	# Using this format may result in a loss of precision as the length of a
	# Nit `Int` may be less than 64 bits on some platforms.
	#
	# Returns `0` when an error is pending (`last_error != null`).
	fun read_int64: Int
	do
		if last_error != null then return 0

		var b0 = read_byte
		var b1 = read_byte
		var b2 = read_byte
		var b3 = read_byte
		var b4 = read_byte
		var b5 = read_byte
		var b6 = read_byte
		var b7 = read_byte

		# Check for error, `last_error` is set by `read_byte`
		if b0 < 0 or b1 < 0 or b2 < 0 or b3 < 0 or
		   b4 < 0 or b5 < 0 or b6 < 0 or b7 < 0 then return 0

		return native_read_int64(b0, b1, b2, b3, b4, b5, b6, b7, big_endian)
	end

	# Utility for `read_int64`
	private fun native_read_int64(b0, b1, b2, b3, b4, b5, b6, b7: Int, big_endian: Bool): Int `{
		union {
			unsigned char b[8];
			int64_t val;
			uint64_t conv;
		} u;

		u.b[0] = b0;
		u.b[1] = b1;
		u.b[2] = b2;
		u.b[3] = b3;
		u.b[4] = b4;
		u.b[5] = b5;
		u.b[6] = b6;
		u.b[7] = b7;

		if (big_endian)
			u.conv = be64toh(u.conv);
		else u.conv = le64toh(u.conv);

		return u.val;
	`}
end

redef class Int
	# Utility for `BinaryWriter`
	private fun int64_byte_at(index: Int, big_endian: Bool): Int `{
		union {
			unsigned char bytes[8];
			int64_t val;
			uint64_t conv;
		} u;

		u.val = self;

		if (big_endian)
			u.conv = htobe64(u.conv);
		else u.conv = htole64(u.conv);

		return u.bytes[index];
	`}
end

redef class Float
	# Utility for `BinaryWriter`
	private fun float_byte_at(index: Int, big_endian: Bool): Int `{
		union {
			unsigned char bytes[4];
			float val;
			uint32_t conv;
		} u;

		u.val = self;

		if (big_endian)
			u.conv = htobe32(u.conv);
		else u.conv = htole32(u.conv);

		return u.bytes[index];
	`}

	# Utility for `BinaryWriter`
	private fun double_byte_at(index: Int, big_endian: Bool): Int `{
		union {
			unsigned char bytes[8];
			double val;
			uint64_t conv;
		} u;

		u.val = self;

		if (big_endian)
			u.conv = htobe64(u.conv);
		else u.conv = htole64(u.conv);

		return u.bytes[index];
	`}
end
