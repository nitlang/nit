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

var s = "五a十音d図: fサ行j アk段"
var in_stream = new BytesReader(s.to_bytes)
#alt1 in_stream.codec = iso88591_codec
var c = in_stream.read_char

while c != null do
	print c
	c = in_stream.read_char
end
