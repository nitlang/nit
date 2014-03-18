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

# Simple tool to list Nit source files
module nitls

intrude import modelbuilder
import ordered_tree

var tc = new ToolContext
var model = new Model
var mb = new ModelBuilder(model, tc)

var opt_keep = new OptionBool("Ignore errors and files that are not a Nit source file", "-k", "--keep")
var opt_recursive = new OptionBool("Process directories recussively", "-r", "--recursive")
var opt_tree = new OptionBool("List source files in their groups and projects", "-t", "--tree")
var opt_source = new OptionBool("List source files", "-s", "--source")
var opt_project = new OptionBool("List projects paths (default)", "-p", "--project")

tc.option_context.add_option(opt_keep, opt_recursive, opt_tree, opt_source, opt_project)

tc.process_options

var sum = opt_tree.value.to_i + opt_source.value.to_i + opt_project.value.to_i
if sum > 1 or tc.option_context.rest.is_empty or tc.opt_help.value then
	print "Usage: nitls [OPTION].. [FILES]..."
	print "List Nit source files"
	tc.option_context.usage
	exit 0
end

if sum == 0 then opt_project.value = true

var files
if opt_recursive.value then
	files = new Array[String]
	for d in tc.option_context.rest do
		var pipe = new IProcess("find", d, "-name", "*.nit")
		while not pipe.eof do
			var l = pipe.read_line
			if l == "" then break # last line
			l = l.substring(0,l.length-1) # strip last oef
			files.add l
		end
		pipe.close
		pipe.wait
		if pipe.status != 0 and not opt_keep.value then exit 1
	end
else
	files = tc.option_context.rest
end

for a in files do
	var mp = mb.identify_file(a)
	if mp == null then
		if not opt_keep.value then tc.check_errors
	end
end

if opt_tree.value then
	var ot = new OrderedTree[Object]
	for p in model.mprojects do
		for g in p.mgroups do
			ot.add(g.parent, g)
			for mp in g.module_paths do
				ot.add(g, mp)
			end
		end
	end
	ot.sort_with(new CachedAlphaComparator)
	ot.write_to(stdout)
end

if opt_source.value then
	var list = new Array[String]
	for p in model.mprojects do
		for g in p.mgroups do
			for mp in g.module_paths do
				list.add(mp.filepath)
			end
		end
	end
	alpha_comparator.sort(list)
	for l in list do print l
end

if opt_project.value then
	var list = new Array[String]
	for p in model.mprojects do
		list.add(p.root.filepath.as(not null))
	end
	alpha_comparator.sort(list)
	for l in list do print l
end
