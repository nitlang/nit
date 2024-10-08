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

# A Markdown parser for Nit.
module nitmd

import markdown
import decorators
import man

import config

var opt_to = new OptionString("Specify output format (html, md, man)", "-t", "--to")

var usage = new Buffer
usage.append "Usage: nitmd [-t format] <file.md>\n"
usage.append "Translate Markdown documents to other formats."

var config = new Config
config.add_option(opt_to)
config.tool_description = usage.write_to_string

config.parse_options(args)
if config.args.length != 1 then
	config.usage
	exit 1
end

var file = config.args.first
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
	processor.decorator = new MdDecorator
else if to == "man" then
	processor.decorator = new ManDecorator
else
	print "Unknown output format: {to}"
	exit 1
end
print processor.process(md)
