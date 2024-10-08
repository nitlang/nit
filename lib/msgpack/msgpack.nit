# This file is part of NIT ( https://nitlanguage.org ).
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

# MessagePack, an efficient binary serialization format
#
# This modules provides services at different levels:
#
# * Serialize Nit objects using either the quick and easy `Serializable::serialize_msgpack`
#   and `Write::serialize_msgpack`, or the extensible `MsgPackSerializer`.
#
# * Deserialize MessagePack to Nit objects using the quick and easy methods
#   `Reader|Bytes::deserialize_msgpack`, or inspect errors with the extensible
#   `MsgPackDeserializer`.
#
# * Read and write MessagePack data at a low-level (for engines and the likes)
#   by importing `msgpack::read` or `msgpack::write`. These services support
#   only which support only core Nit types with a corresponding MessagePack type.
#   See `Reader::read_msgpack` and services on `Writer` including `write_msgpack_ext`.
#
# Here we discuss the recommended serialization services supporting core
# Nit and MessagePack types as well as full Nit objects.
#
# ## Primitive MessagePack types
#
# Most Nit core types are serialized to the smallest corresponding MessagePack type.
#
# ~~~
# assert false.serialize_msgpack == b"\xC2"
# assert b"\xC2".deserialize_msgpack == false
#
# assert true.serialize_msgpack  == b"\xC3"
# assert b"\xC3".deserialize_msgpack == true
#
# assert 1.234.serialize_msgpack == b"\xCB\x3F\xF3\xBE\x76\xC8\xB4\x39\x58"
# assert b"\xCB\x3F\xF3\xBE\x76\xC8\xB4\x39\x58".deserialize_msgpack == 1.234
#
# assert "ABC".serialize_msgpack == b"\xA3ABC"
# assert b"\xA3ABC".deserialize_msgpack == "ABC"
#
# assert [0x11, 0x22, 0x33].serialize_msgpack(plain=true) == b"\x93\x11\x22\x33"
# assert b"\x93\x11\x22\x33".deserialize_msgpack == [0x11, 0x22, 0x33]
#
# var map = new Map[String, nullable Object]
# map["i"] = 1
# map["o"] = null
# assert map.serialize_msgpack(plain=true) == b"\x82\xA1\x69\x01\xA1\x6F\xC0"
# ~~~
#
# Ints are serialized to the smallest MessagePack type, so a small integer fits
# in a single byte and larger integers take more bytes as needed.
#
# ~~~
# assert 1.serialize_msgpack            == b"\x01"
# assert (-32).serialize_msgpack        == b"\xE0"
# assert 0x7F.serialize_msgpack         == b"\x7F"
# assert 0x80.serialize_msgpack         == b"\xCC\x80"
# assert 0x1234.serialize_msgpack       == b"\xCD\x12\x34"
# assert (-0x1234).serialize_msgpack    == b"\xD1\xED\xCC"
# assert 0x12345678.serialize_msgpack   == b"\xCE\x12\x34\x56\x78"
# assert 0x0123456789.serialize_msgpack == b"\xCF\x00\x00\x00\x01\x23\x45\x67\x89"
#
# assert b"\x01".deserialize_msgpack                 == 1
# assert b"\xE0".deserialize_msgpack                 == -32
# assert b"\x7F".deserialize_msgpack                 == 0x7F
# assert b"\xCC\x80".deserialize_msgpack             == 0x80
# assert b"\xCD\x12\x34".deserialize_msgpack         == 0x1234
# assert b"\xD1\xED\xCC".deserialize_msgpack         == -0x1234
# assert b"\xCE\x12\x34\x56\x78".deserialize_msgpack == 0x12345678
# assert b"\xCF\x00\x00\x00\x01\x23\x45\x67\x89".deserialize_msgpack == 0x0123456789
# ~~~
#
# ## Primitive Nit type without a MessagePack equivalent
#
# Chars are serialized as a string in plain mode.
#
# ~~~
# assert 'A'.serialize_msgpack(plain=true)      == b"\xA1\x41"
# assert b"\xA1\x41".deserialize_msgpack == "A" # Not a Char
# ~~~
#
# Or, with metadata, chars are serialized to an ext with id 0x7C.
#
# ~~~
# assert 'A'.serialize_msgpack                      == b"\xD4\x7C\x41"
# assert b"\xD4\x7C\x41".deserialize_msgpack == 'A'
# ~~~
#
# Byte instances are serialized as an integer in plain mode.
#
# ~~~
# assert 0x01u8.serialize_msgpack(plain=true) == b"\x01"
# assert b"\x01".deserialize_msgpack   == 1 # Not a Byte
# ~~~
#
# Or, with metadata, byte instances are serialized to an ext with id 0x7E.
#
# ~~~
# assert 0x01u8.serialize_msgpack                   == b"\xD4\x7E\x01"
# assert b"\xD4\x7E\x01".deserialize_msgpack == 1
# ~~~
#
# ## Full objects
#
# Objects are serialized to a map in plain mode, replacing cycles by `null` values.
# This creates plain MessagePack easy to read for other non-Nit programs,
# but cycles and the dynamic type information are lost.
#
# ~~~
# class A
#     serialize
#
#     var i = 1
#     var o: nullable A = self
#
#     redef fun ==(o) do return o isa A and o.i == i # Skip the cyclic `o`
# end
#
# var a = new A
# var bytes = a.serialize_msgpack(plain=true)
# assert bytes == b"\x82\xA1\x69\x01\xA1\x6F\xC0"
# assert bytes.deserialize_msgpack isa Map[nullable Serializable, nullable Serializable] # Not an A
# ~~~
#
# Or, with metadata, the same object is serialized with information on object
# uniqueness (with an id and references) and its dynamic type.
# The whole object is contained in a MessagePack array:
#
# * The array holds the metadata and attributes or each object,
#   here it is a fixarray of 3 items: 0x93
# * Define an object (ext type 0x7B) with the id 0, here a fixext1: 0xD47B00
# * The dynamic type name, here a fixstr with the letter 'A': 0xA141
# * The attributes as a map, here a fixmap of 2 items: 0x82
# * First attribute name, here a fixstr for "i": 0xA169
# * First attribute value, here a fixint for 1: 0x01
# * Second attribute name, here a fixstr for "o": 0xA16F
# * Second attribute value, a reference (ext type 0x7D) to object id 0,
#   here a fixext1: 0xD47D00
#
# ~~~
# bytes = a.serialize_msgpack
# assert bytes == b"\x93\xD4\x7B\x00\xA1\x41\x82\xA1\x69\x01\xA1\x6F\xD4\x7D\x00"
# assert bytes.deserialize_msgpack == a
# ~~~
#
# ## References
#
# Format description and other implementations: http://msgpack.org/
#
# Format specification: https://github.com/msgpack/msgpack/blob/master/spec.md
module msgpack

import serialization_write
import serialization_read
