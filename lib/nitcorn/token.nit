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

# Simple `generate_token` service, independent of the rest of the nitcorn framework
module token

import base64

# Generate a random token of `length` chars long
#
# The default value of `length` is 64, but it may change in the future.
#
# On Linux, `/dev/urandom` is used as source of random data.
# On other platforms, `rand` is used to generate pseudo-random data.
# using `rand` can be forced with `force_rand`.
#
# Uses `base64` to represent random bytes in the readable ASCII range.
#
# ~~~
# srand_from 0
# assert generate_token(4,  force_rand=true) == "AMzV"
# assert generate_token(8,  force_rand=true) == "G8Oibf+s"
# assert generate_token(16, force_rand=true) == "VUCPPlWLR8lZQvbb"
# assert generate_token(32, force_rand=true) == "JtJB9vJd+u3c6dyL+Q8U5IKZIueRoZ6h"
# assert generate_token(    force_rand=true) == "+59Ev7/35sOPeq1y8mI5+npAE1SYbfhVgGeDAq2vo5N3mnWxSJvucd6H3HwxT8v8"
# ~~~
fun generate_token(length: nullable Int, force_rand: nullable Bool): String
do
	length = length or else 64

	# TODO generate more entropy

	# Generate random bytes
	var bin_length = ((length.to_f/4.0).ceil * 3.0).to_i
	var bytes = null

	var linux_random = "/dev/urandom"
	if linux_random.file_exists then
		# Use Linux's random number generator
		var reader = new FileReader.open(linux_random)
		bytes = reader.read_bytes(bin_length)
		reader.close
	end

	# TODO other operating systems random number generators

	# Fallback
	if bytes == null or bytes.length != bin_length or force_rand == true then
		bytes = new Bytes.with_capacity(bin_length)
		for i in bin_length.times do bytes.add 256.rand
	end

	# Encode in base64 so it is readable
	var str = bytes.encode_base64.to_s
	if str.length > length then
		# This happens if `length % 4 != 0`
		str = str.substring(0, length)
	end
	return str
end
