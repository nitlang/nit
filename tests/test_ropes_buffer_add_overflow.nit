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

# Checks that `RopeBuffer.add` does not makes the internal buffer overflow.
#
# Note: In order to help repoducibility, this test read an private attribute of
# the buffer.
module test_ropes_buffer_add_overflow

import standard
intrude import ropes

var buffer = new RopeBuffer

buffer.append("x" * maxlen)
buffer.add 'y'
assert buffer.rpos <= maxlen else print "{buffer.rpos} > {maxlen}"
