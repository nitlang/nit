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

module repeating_key_xor_solve is example

import base64
import crapto

# Check usage
if args.length != 1 then
	print "Usage: repeating_key_xor_solve <cipher_file>"
	exit 1
end

# Read the cipher from the file
var cipher_bytes = args[0].to_path.read_all_bytes.decode_base64

# Create a RepeatingKeyXorCipher object to manipulate your ciphertext
var xorcipher = new RepeatingKeyXorCipher
xorcipher.ciphertext = cipher_bytes

# Try to find the best candidate key
xorcipher.find_key

# Decrypt the cipher according to the found key
xorcipher.decrypt

# Check the resulting plaintext out...
print xorcipher.plaintext
