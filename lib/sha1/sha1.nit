# This file is part of NIT (https://nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#		 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Provides methods to compute the SHA1 hash of a String
module sha1

in "C Header" `{

	/* This code is public-domain - it is based on libcrypt
	 * placed in the public domain by Wei Dai and other contributors.
	 */

	#include <stdint.h>
	#include <string.h>

	#define HASH_LENGTH 20
	#define BLOCK_LENGTH 64

	union _buffer {
		uint8_t b[BLOCK_LENGTH];
		uint32_t w[BLOCK_LENGTH/4];
	};

	union _state {
		uint8_t b[HASH_LENGTH];
		uint32_t w[HASH_LENGTH/4];
	};

	typedef struct sha1nfo {
		union _buffer buffer;
		uint8_t bufferOffset;
		union _state state;
		uint32_t byteCount;
		uint8_t keyBuffer[BLOCK_LENGTH];
		uint8_t innerHash[HASH_LENGTH];
	} sha1nfo;

	/**
	 */
	void sha1_init(sha1nfo *s);
	/**
	 */
	void sha1_writebyte(sha1nfo *s, uint8_t data);
	/**
	 */
	void sha1_write(sha1nfo *s, const char *data, size_t len);
	/**
	 */
	uint8_t* sha1_result(sha1nfo *s);
	/**
	 */
	void sha1_initHmac(sha1nfo *s, const uint8_t* key, int keyLength);
	/**
	 */
	uint8_t* sha1_resultHmac(sha1nfo *s);
`}

`{
	#define SHA1_K0 0x5a827999
	#define SHA1_K20 0x6ed9eba1
	#define SHA1_K40 0x8f1bbcdc
	#define SHA1_K60 0xca62c1d6

	const uint8_t sha1InitState[] = {
		0x01,0x23,0x45,0x67, // H0
		0x89,0xab,0xcd,0xef, // H1
		0xfe,0xdc,0xba,0x98, // H2
		0x76,0x54,0x32,0x10, // H3
		0xf0,0xe1,0xd2,0xc3	// H4
	};

	void sha1_init(sha1nfo *s) {
		memcpy(s->state.b,sha1InitState,HASH_LENGTH);
		s->byteCount = 0;
		s->bufferOffset = 0;
	}

	uint32_t sha1_rol32(uint32_t number, uint8_t bits) {
		return ((number << bits) | (number >> (32-bits)));
	}

	void sha1_hashBlock(sha1nfo *s) {
		uint8_t i;
		uint32_t a,b,c,d,e,t;

		a=s->state.w[0];
		b=s->state.w[1];
		c=s->state.w[2];
		d=s->state.w[3];
		e=s->state.w[4];
		for (i=0; i<80; i++) {
			if (i>=16) {
				t = s->buffer.w[(i+13)&15] ^ s->buffer.w[(i+8)&15] ^ s->buffer.w[(i+2)&15] ^ s->buffer.w[i&15];
				s->buffer.w[i&15] = sha1_rol32(t,1);
			}
			if (i<20) {
				t = (d ^ (b & (c ^ d))) + SHA1_K0;
			} else if (i<40) {
				t = (b ^ c ^ d) + SHA1_K20;
			} else if (i<60) {
				t = ((b & c) | (d & (b | c))) + SHA1_K40;
			} else {
				t = (b ^ c ^ d) + SHA1_K60;
			}
			t+=sha1_rol32(a,5) + e + s->buffer.w[i&15];
			e=d;
			d=c;
			c=sha1_rol32(b,30);
			b=a;
			a=t;
		}
		s->state.w[0] += a;
		s->state.w[1] += b;
		s->state.w[2] += c;
		s->state.w[3] += d;
		s->state.w[4] += e;
	}

	void sha1_addUncounted(sha1nfo *s, uint8_t data) {
		s->buffer.b[s->bufferOffset ^ 3] = data;
		s->bufferOffset++;
		if (s->bufferOffset == BLOCK_LENGTH) {
			sha1_hashBlock(s);
			s->bufferOffset = 0;
		}
	}

	void sha1_writebyte(sha1nfo *s, uint8_t data) {
		++s->byteCount;
		sha1_addUncounted(s, data);
	}

	void sha1_write(sha1nfo *s, const char *data, size_t len) {
		for (;len--;) sha1_writebyte(s, (uint8_t) *data++);
	}

	void sha1_pad(sha1nfo *s) {
		// Implement SHA-1 padding (fips180-2 §5.1.1)

		// Pad with 0x80 followed by 0x00 until the end of the block
		sha1_addUncounted(s, 0x80);
		while (s->bufferOffset != 56) sha1_addUncounted(s, 0x00);

		// Append length in the last 8 bytes
		sha1_addUncounted(s, 0); // We're only using 32 bit lengths
		sha1_addUncounted(s, 0); // But SHA-1 supports 64 bit lengths
		sha1_addUncounted(s, 0); // So zero pad the top bits
		sha1_addUncounted(s, s->byteCount >> 29); // Shifting to multiply by 8
		sha1_addUncounted(s, s->byteCount >> 21); // as SHA-1 supports bitstreams as well as
		sha1_addUncounted(s, s->byteCount >> 13); // byte.
		sha1_addUncounted(s, s->byteCount >> 5);
		sha1_addUncounted(s, s->byteCount << 3);
	}

	uint8_t* sha1_result(sha1nfo *s) {
		int i;
		// Pad to complete the last block
		sha1_pad(s);

		// Swap byte order back
		for (i=0; i<5; i++) {
			uint32_t a,b;
			a=s->state.w[i];
			b=a<<24;
			b|=(a<<8) & 0x00ff0000;
			b|=(a>>8) & 0x0000ff00;
			b|=a>>24;
			s->state.w[i]=b;
		}

		// Return pointer to hash (20 characters)
		return s->state.b;
	}

	#define HMAC_IPAD 0x36
	#define HMAC_OPAD 0x5c

	void sha1_initHmac(sha1nfo *s, const uint8_t* key, int keyLength) {
		uint8_t i;
		memset(s->keyBuffer, 0, BLOCK_LENGTH);
		if (keyLength > BLOCK_LENGTH) {
			// Hash long keys
			sha1_init(s);
			for (;keyLength--;) sha1_writebyte(s, *key++);
			memcpy(s->keyBuffer, sha1_result(s), HASH_LENGTH);
		} else {
			// Block length keys are used as is
			memcpy(s->keyBuffer, key, keyLength);
		}
		// Start inner hash
		sha1_init(s);
		for (i=0; i<BLOCK_LENGTH; i++) {
			sha1_writebyte(s, s->keyBuffer[i] ^ HMAC_IPAD);
		}
	}

	uint8_t* sha1_resultHmac(sha1nfo *s) {
		uint8_t i;
		// Complete inner hash
		memcpy(s->innerHash,sha1_result(s),HASH_LENGTH);
		// Calculate outer hash
		sha1_init(s);
		for (i=0; i<BLOCK_LENGTH; i++) sha1_writebyte(s, s->keyBuffer[i] ^ HMAC_OPAD);
		for (i=0; i<HASH_LENGTH; i++) sha1_writebyte(s, s->innerHash[i]);
		return sha1_result(s);
	}
`}

redef class CString
	private fun sha1_intern(len: Int): CString `{
		sha1nfo s;

		sha1_init(&s);
		sha1_write(&s, self, len);
		uint8_t* digest = sha1_result(&s);

		char* digested = malloc(21);

		memcpy(digested, digest, 20);

		digested[20] = '\0';

		return digested;
	`}
end

redef class Text

	# Computes the SHA1 of the receiver
	#
	# Returns a digest of 20 bytes as a CString,
	# note that all the characters are not necessarily ASCII.
	# If you want the hex string version of the digest, use
	# sha1_hexdigest.
	#
	#     import base64
	#     assert "The quick brown fox jumps over the lazy dog".sha1 == [0x2F, 0xD4, 0xE1, 0xC6, 0x7A, 0x2D, 0x28, 0xFC, 0xED, 0x84, 0x9E, 0xE1, 0xBB, 0x76, 0xE7, 0x39, 0x1B, 0x93, 0xEB, 0x12]
	fun sha1: Bytes do
		return new Bytes(to_cstring.sha1_intern(byte_length), 20, 20)
	end

	# Computes the SHA1 of the receiver.
	#
	# Returns a 40 char String containing the Hexadecimal
	# Digest in its Char form.
	#
	#     assert "The quick brown fox jumps over the lazy dog".sha1_hexdigest == "2FD4E1C67A2D28FCED849EE1BB76E7391B93EB12"
	fun sha1_hexdigest: String do return sha1.hexdigest

	# Is `self` a SHA-1 hexdigest?
	#
	#~~~nit
	# assert "2FD4E1C67A2D28FCED849EE1BB76E7391B93EB12".is_sha1_digest
	# assert not "Not a digest".is_sha1_digest
	# assert not "2FD4E1C67A2D28FCED849EE1B76E7391B93EB12".is_sha1_digest
	# assert not "2FD4E1C67A2D28FCED849EE1UB76E7391B93EB12".is_sha1_digest
	#~~~
	fun is_sha1_digest: Bool do return length == 40 and is_hex
end
