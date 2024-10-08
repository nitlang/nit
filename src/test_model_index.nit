# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import frontend
import model_index
import console
import realtime

redef class ToolContext
	var opt_query = new OptionString("String to search", "-q", "--query")
	var opt_name_prefix = new OptionBool("", "--name-prefix")
	var opt_full_name_prefix = new OptionBool("", "--full-name-prefix")
	var opt_name_similarity = new OptionBool("", "--name-similarity")
	var opt_full_name_similarity = new OptionBool("", "--full-name-similarity")
	var opt_name = new OptionBool("", "--name")
	var opt_full_name = new OptionBool("", "--full-name")

	redef init do
		option_context.add_option(opt_query)
		option_context.add_option(opt_name_prefix, opt_full_name_prefix)
		option_context.add_option(opt_name_similarity, opt_full_name_similarity)
		option_context.add_option(opt_name, opt_full_name)
	end
end

redef class MEntity
	fun color: String do
		if visibility == public_visibility then
			return name.green
		else if visibility == protected_visibility then
			return name.yellow
		else
			return name.red
		end
	end
end

fun search(index: ModelIndex, toolcontext: ToolContext, query: String): Float do
	var clock = new Clock
	print "# {query}\n"

	var res
	if toolcontext.opt_name_prefix.value then
		res = index.find_by_name_prefix(query)
	else if toolcontext.opt_full_name_prefix.value then
		res = index.find_by_full_name_prefix(query)
	else if toolcontext.opt_name_similarity.value then
		res = index.find_by_name_similarity(query)
	else if toolcontext.opt_full_name_similarity.value then
		res = index.find_by_full_name_similarity(query)
	else if toolcontext.opt_name.value then
		res = index.find_by_name(query)
	else if toolcontext.opt_full_name.value then
		res = index.find_by_full_name(query)
	else
		res = index.find(query)
	end

	res = res.sort(new ScoreComparator, new MEntityComparator).
			uniq.
			limit(10).
			sort(new VisibilityComparator, new NameComparator)

	for e in res do
		if toolcontext.opt_no_color.value then
			print " * {e.score}: {e.mentity.name} ({e.mentity.full_name})"
		else
			print " * {e.score}: {e.mentity.color} ({e.mentity.full_name})"
		end
	end
	return clock.total
end

# build toolcontext
var toolcontext = new ToolContext
toolcontext.process_options(args)
var args = toolcontext.option_context.rest

if args.is_empty then
	print "usage: test_model_index nitfiles..."
	exit 1
	return
end

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(args)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)

# Build index
var filters = new ModelFilter(
	private_visibility,
	accept_fictive = false,
	accept_test = false)
var index = new ModelIndex
for mentity in model.collect_mentities(filters) do
	if mentity isa MClassDef or mentity isa MPropDef then continue
	index.index(mentity)
end

var query = toolcontext.opt_query.value
if query == null then
	print "# Interactive mode, type `:q` to quit\n\n"
	printn "> "
	var line = stdin.read_line
	while line != ":q" do
		print ""
		var time = search(index, toolcontext, line.trim)
		print ""
		print "Query executed in {time} seconds."
		print ""
		printn "> "
		line = stdin.read_line
	end
	return
end

search(index, toolcontext, query)
