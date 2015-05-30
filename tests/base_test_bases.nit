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

import standard::kernel

assert 0b1001 == 0x09
assert 0o715 == 0x1CD
assert 461 == 0o715
assert 0b111001101 == 0o715
assert 256 == 0x100
assert 0o400 == 256
assert 0b1_1100_1101 == 0o715
assert 0b1_1100_1101 == 0x1_CD
assert 0b1000_1001 == 0x89
assert 0b1000_1001u8 == 0x89u8
assert 0o151u8 == 0b0110_1001u8
assert 0x69u8 == 0o151u8
