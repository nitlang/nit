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

# Mix of utilities and services related to bytes
module bytes

redef class Bytes
	# PKCS#7 padding.
	#
	# Extends `self` by appending the number of bytes of padding to the end of the block.
	#
	#     assert "YELLOW SUBMARINE".to_bytes.pkcs7(20) == "YELLOW SUBMARINE\x04\x04\x04\x04".to_bytes
	fun pkcs7(blocksize: Int): Bytes
	do
		var mod = length % blocksize
		if mod == 0 then return self
		var pad = blocksize - mod
		var byte = pad
		for i in [0..pad[ do add byte
		return self
	end
end
