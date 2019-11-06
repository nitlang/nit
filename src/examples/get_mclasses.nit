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

# Sample program that search classes in a model
#
# eg.
#
# ~~~raw
# get_mclasses ../../lib core::Array Array care::Arrow Fail
# ~~~
module get_mclasses is example

import parser_util
import modelbuilder
import modelize
import more_collections

# Manage the logistic of the tool
var tc = new ToolContext
tc.tooldescription = "Usage: get_mclasses file qualified_class_name..."
tc.process_options(args)

# Parse the first argument to fill a model
var model = new Model
var mb = new ModelBuilder(model, tc)
mb.parse_full([args.shift])
mb.run_phases

# Query remaining arguments
for arg in args do
	# Ask the parser to parse the argument. It's its job!
	var n = tc.parse_something(arg)
	if n isa AType then
		# Only the class qualified identifier is useful
		# We just ignore `nullable` or generic arguments.
		var qid = n.n_qid
		var full_name = qid.full_name
		print "search: {full_name}"

		# Iterate on all classes of the model to find one that matches the qualified name.
		# Because we are efficient, we iterate only on the classes with the same short name.
		var short_name = qid.n_id.text
		var classes = model.get_mclasses_by_name(short_name)
		var found = false
		if classes != null then for c in classes do
			if qid.accept(c) then
				print " * {c.full_name}"
				found = true
			end
		end

		if not found then
			# We are unlucky, maybe a misspell?
			# Look for all classes with a similar name
			var bests = new BestDistance[MClass](full_name.length)
			for c in model.mclasses do
				# Check with both the full_name and the short_name
				var lev = full_name.levenshtein_distance(c.full_name)
				bests.update(lev, c)
				lev = full_name.levenshtein_distance(c.name)
				bests.update(lev, c)
			end
			if bests.best_items.is_empty then
				print " Found nothing :("
			else
				print " Did you mean?"
				for c in bests.best_items do
					print " * {c.full_name}"
				end
			end
		end
	else
		print "`{arg}` is {n}, wanted a class name :("
	end
end
