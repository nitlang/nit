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

if args.length != 2 and args.length != 4 then
	print "usage nio_test file_source [codec_from] file_dest [codec_to]"
	exit 1
end

var f: FileReader
var ofs: FileWriter

if args[0] == "stdin" then
	f = new FileReader.from_fd(0)
else
	f = new FileReader.open(args[0])
end

var of = if args.length == 2 then args[1] else args[2]

if of == "stdout" then
	ofs = new FileWriter.from_fd(1)
else if of == "stderr" then
	ofs = new FileWriter.from_fd(2)
else
	ofs = new FileWriter.open(of)
end

var codecs = new HashMap[String, Codec]

codecs["ISO8859-1"] = iso88591_codec
codecs["UTF-8"] = utf8_codec

if args.length == 4 then
	#print "Setting codecs {args[1]} for input, {args[3]} for output"
	var d = codecs.get_or_null(args[1])
	if d == null then
		print "Unrecognized input codec {args[1]}"
		exit 2
	end
	var c = codecs.get_or_null(args[3])
	if c == null then
		print "Unrecognized output codec {args[3]}"
		exit 3
	end
	f.codec = d.as(not null)
	ofs.codec = c.as(not null)
end

while not f.eof do
	var c = f.read_char
	if c == null then break
	ofs.write_char(c)
end
