# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Statistics on the usage of explicit static types.
module count_ntypes

private import stats_base
import modelbuilder

# The job of this visitor is to resolve all types found
private class ATypeCounterVisitor
	super Visitor
	var modelbuilder: ModelBuilder
	var nclassdef: AClassdef

	var typecount: Counter[MType]

	# Get a new visitor on a classef to add type count in `typecount'.
	init(modelbuilder: ModelBuilder, nclassdef: AClassdef, typecount: Counter[MType])
	do
		self.modelbuilder = modelbuilder
		self.nclassdef = nclassdef
		self.typecount = typecount
	end

	redef fun visit(n)
	do
		if n isa AType then
			var mtype = modelbuilder.resolve_mtype(self.nclassdef, n)
			if mtype != null then
				self.typecount.inc(mtype)
			end
		end
		n.visit_all(self)
	end
end

# Visit the AST and print statistics on the usage of explicit static types.
fun count_ntypes(modelbuilder: ModelBuilder)
do
	# Count each occurence of a specific static type
	var typecount = new Counter[MType]

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new ATypeCounterVisitor(modelbuilder, nclassdef, typecount)
			visitor.enter_visit(nclassdef)
		end
	end

	# Display data
	print "--- Statistics of the explitic static types ---"
	print "Total number of explicit static types: {typecount.total}"
	if typecount.total == 0 then return

	# types sorted by usage
	var types = typecount.sort

	# Display most used types (ie the last of `types')
	print "Most used types: "
	var min = 10
	if types.length < min then min = types.length
	for i in [0..min[ do
		var t = types[types.length-i-1]
		print "  {t}: {typecount[t]}"
	end

	# Compute the distribution of type usage
	print "Distribution of type usage:"
	var count = 0
	var sum = 0
	var limit = 1
	for t in types do
		if typecount[t] > limit then
			print "  <={limit}: {count} ({div(count*100,types.length)}% of types; {div(sum*100,typecount.total)}% of usage)"
			count = 0
			sum = 0
			while typecount[t] > limit do limit = limit * 2
		end
		count += 1
		sum += typecount[t]
	end
	print "  <={limit}: {count} ({div(count*100,types.length)}% of types; {div(sum*100,typecount.total)}% of usage)"
end
