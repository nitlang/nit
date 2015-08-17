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
import decorators

import opts

var options = new OptionContext
var opt_help = new OptionBool("Show this help.", "-h", "-?", "--help")
options.add_option(opt_help)
var opt_to = new OptionString("Specify output format (html, md, man)", "-t", "--to")
options.add_option(opt_to)

options.parse(args)
if options.rest.length != 1 then
	print "usage: nitmd [-t format] <file.md>"
	options.usage
	exit 1
end

var file = options.rest.first
if not file.file_exists then
	print "'{file}' not found"
	exit 1
end

var ifs = new FileReader.open(file)
var md = ifs.read_all
ifs.close

var processor = new MarkdownProcessor
var to = opt_to.value
if to == null or to == "html" then
	# Noop
else if to == "md" then
	processor.emitter.decorator = new MdDecorator
else
	print "Unknown output format: {to}"
	exit 1
end
print processor.process(md)
