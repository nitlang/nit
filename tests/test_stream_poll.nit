# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

# Test logic: 3 processes are launched with a predictable return order,
# if poll works correctly it will report when their stdout is closed.

var p1
var p2
var p3

p1 = new ProcessReader( "sleep", "0.2" )
p2 = new ProcessReader( "sleep", "0.1" )
p3 = new ProcessReader( "sleep", "0.4" )

var order = new Array[FileStream]
var streams = [p1.stream_in, p2.stream_in, p3.stream_in]

while not streams.is_empty do
	var s = poll( streams )
	if s == null then continue # may have been interrupted

	order.add( s )
	streams.remove( s.as(FileReader ) )
end

print order[0] == p2.stream_in
print order[1] == p1.stream_in
print order[2] == p3.stream_in

