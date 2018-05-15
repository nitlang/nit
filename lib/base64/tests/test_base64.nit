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

module test_base64 is test

import base64

class TestBase64
	test

	fun test_encode is test do
		assert "".encode_base64 == ""
		assert "f".encode_base64 == "Zg=="
		assert "fo".encode_base64 == "Zm8="
		assert "foo".encode_base64 == "Zm9v"
		assert "foob".encode_base64 == "Zm9vYg=="
		assert "fooba".encode_base64 == "Zm9vYmE="
		assert "foobar".encode_base64 == "Zm9vYmFy"
	end

	fun test_decode is test do
		assert "".decode_base64.to_s == ""
		assert "Zg==".decode_base64.to_s == "f"
		assert "Zm8=".decode_base64.to_s == "fo"
		assert "Zm9v".decode_base64.to_s == "foo"
		assert "Zm9vYg==".decode_base64.to_s == "foob"
		assert "Zm9vYmE=".decode_base64.to_s == "fooba"
		assert "Zm9vYmFy".decode_base64.to_s == "foobar"

		assert "Zm9vYg".decode_base64.to_s == "foob"
		assert "Zm9vYmE".decode_base64.to_s == "fooba"
		assert "Zm9v*Yg".decode_base64.to_s == "foob"
	end

	fun test_is_base64 is test do
		assert "Znm=".is_base64
		assert not "Znm===".is_base64
		assert not "Z.sd=".is_base64
		assert not "Z==D".is_base64
	end

	fun test_check_base64 is test do
		assert "Znm=".check_base64 == null
		assert "Znm===".check_base64.as(not null).to_s == "Invalid padding length"
		assert "Z.sd=".check_base64.as(not null).to_s == "Invalid Base64 character at position 1: ."
		assert "Z==D".check_base64.as(not null).to_s == "Invalid padding character D at position 3"
	end
end
