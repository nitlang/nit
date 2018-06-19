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

# An example of how to use the `model_nlp` index
module nitnlp is example

import frontend
import doc::doc_down
import model::model_nlp
import model::model_collect
import doc::commands::commands_base

redef class ToolContext

	# --server
	var opt_nlp_server = new OptionString("StanfordNLP server URI (default is https://localhost:9000)", "-s", "--server")

	# --lang
	var opt_nlp_lang = new OptionString("Language to use (default is en)", "-l", "--lang")

	# --query
	var opt_nlp_query = new OptionString("Query to perform", "-q", "--query")

	init do
		super
		option_context.add_option(opt_nlp_server, opt_nlp_lang, opt_nlp_query)
	end
end

# An example of a tool using NLP queries and index
class NitIndexExample

	# Model view used to access model
	var view: ModelView

	# NLP server address
	var host: String

	# NLP language
	var lang: String

	# NLP client (to connect to the server)
	var cli: NLPClient is lazy do
		var cli = new NLPClient(host)
		cli.language = lang
		return cli
	end

	# NLP index
	var index = new ModelNLPIndex(cli) is lazy

	# Build the NLP index from the view content
	fun build_index(view: ModelView) do
		print "Building index..."
		index.index_model(view)
		print "Indexed {index.documents.length} documents"
	end

	# Print results obtained from a NLP query
	fun perform_query(query: String) do
		var matches = index.find(query).uniq.sort(new ScoreComparator).limit(10)
		for match in matches do
			print "{match.mentity.full_name} ({match.score})"
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
toolcontext.tooldescription = "usage: nitindex <files>"
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
var mainmodule = toolcontext.make_main_module(mmodules)

# prepare nlp tool
var tool = new NitIndexExample(
	view = new ModelView(toolcontext.modelbuilder.model, mainmodule),
	host = toolcontext.opt_nlp_server.value or else "http://localhost:9000",
	lang = toolcontext.opt_nlp_lang.value or else "en")

# perform queries
var query = toolcontext.opt_nlp_query.value
if query != null then
	tool.perform_query(query)
	return
end

loop
	print "\nEnter query:"
	printn "> "
	query = sys.stdin.read_line
	tool.perform_query(query)
end
