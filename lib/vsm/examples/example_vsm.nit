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

# Example using a `FileIndex`
#
# This example shows of to index files from the system and retrieve them
# with text queries.
module example_vsm

import vsm
import config

redef class Config

	# --whitelist-exts
	var opt_white_exts = new OptionArray("Allowed file extensions (default is [])",
		"-w", "--whitelist-exts")

	# --blacklist-exts
	var opt_black_exts = new OptionArray("Allowed file extensions (default is [])",
		"-b", "--blacklist-exts")

	redef init do
		opts.add_option(opt_white_exts, opt_black_exts)
	end
end

var config = new Config
config.tool_description = "usage: example_vsm <files>"
config.parse_options(args)

if args.length < 1 then
	config.usage
	exit 1
end

var index = new FileIndex
index.whitelist_exts = config.opt_white_exts.value
index.blacklist_exts = config.opt_black_exts.value

print "Building index..."
index.index_files(args, true)
print "Indexed {index.documents.length} documents"

loop
	print "\nEnter query:"
	printn "> "
	var input = sys.stdin.read_line
	var matches = index.match_string(input)
	printn ""
	for match in matches do
		print match
	end
end
