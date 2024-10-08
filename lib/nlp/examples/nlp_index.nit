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

# Example showing how to use a NLPFileIndex.
module nlp_index

import nlp
import config

redef class Config

	# --whitelist-exts
	var opt_white_exts = new OptionArray("Allowed file extensions (default is [])",
		"-w", "--whitelist-exts")

	# --blacklist-exts
	var opt_black_exts = new OptionArray("Allowed file extensions (default is [])",
		"-b", "--blacklist-exts")

	# --server
	var opt_server = new OptionString("StanfordNLP server URI (default is https://localhost:9000)",
		"-s", "--server")

	# --lang
	var opt_lang = new OptionString("Language to use (default is fr)", "-l", "--lang")

	redef init do
		opts.add_option(opt_server, opt_lang, opt_white_exts, opt_black_exts)
	end
end

var config = new Config
config.tool_description = "usage: example_index <files>"
config.parse_options(args)

if args.length < 1 then
	config.usage
	exit 1
end

var host = config.opt_server.value
if host == null then host = "http://localhost:9000"
var lang = config.opt_lang.value
if lang == null then lang = "en"

var cli = new NLPClient(host)
cli.language = lang

var bl = config.opt_black_exts.value
if bl.is_empty then bl = ["CD", "SYM", "-RRB-", "-LRB-", "''", "``", ".", "#", ":", ",", "$", ""]

var index = new NLPFileIndex(cli)
index.whitelist_exts = config.opt_white_exts.value
index.blacklist_exts = bl

print "Building index..."
index.index_files(args, true)

print "Indexed {index.documents.length} documents"

loop
	print "\nEnter query:"
	printn "> "
	var input = sys.stdin.read_line
	var matches = index.match_string(input)

	for match in matches do
		print match
	end
end
