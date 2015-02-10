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

# A Markdown parser for Nit.
module nitmd

import markdown

if args.length != 1 then
	print "usage: nitmd <file.md>"
	exit 0
end

var file = args.first
if not file.file_exists then
	print "'{file}' not found"
	exit 0
end

var ifs = new FileReader.open(file)
var md = ifs.read_all
ifs.close

var processor = new MarkdownProcessor
print processor.process(md)
