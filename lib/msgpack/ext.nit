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

# Application specific MessagePack extension `MsgPackExt`
module ext

import serialization

# Application specific MessagePack extension
class MsgPackExt
	serialize

	# Custom type code, in [0..127]
	var typ: Int

	# Data bytes
	var data: Bytes

	redef fun hash do return typ.hash + data.hash*8
	redef fun ==(o) do return o isa MsgPackExt and o.typ == typ and o.data == data
	redef fun to_s do return "<{class_name} typ: {typ.to_b}, data: {data.chexdigest}>"
end
