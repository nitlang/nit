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

module test_md5 is test

import md5

class TestMd5
	test

	fun test_md5 is test do
		assert "".md5 == "d41d8cd98f00b204e9800998ecf8427e"
		assert "a".md5 == "0cc175b9c0f1b6a831c399e269772661"
		assert "abc".md5 == "900150983cd24fb0d6963f7d28e17f72"
		assert "message digest".md5 == "f96b697d7cb7938d525a2f31aaf161d0"
		assert "abcdefghijklmnopqrstuvwxyz".md5 == "c3fcd3d76192e4007dfb496cca67e13b"
		assert "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".md5 == "d174ab98d277d9f5a5611c2c9f419d9f"
		assert "12345678901234567890123456789012345678901234567890123456789012345678901234567890".md5 == "57edf4a22be3c955ac49da2e2107b67a"
	end
end
