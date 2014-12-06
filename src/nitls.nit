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

import modelbuilder
import ordered_tree
import console

class ProjTree
	super OrderedTree[Object]

	var opt_paths = false
	var tc: ToolContext

	redef fun display(o)
	do
		if o isa MGroup then
			if opt_paths then
				return o.filepath.as(not null)
			else
				var d = ""
				if o.mdoc != null then
					if tc.opt_no_color.value then
						d = ": {o.mdoc.content.first}"
					else
						d = ": {o.mdoc.content.first.green}"
					end
				end
				if tc.opt_no_color.value then
					return "{o.name}{d} ({o.filepath.to_s})"
				else
					return "{o.name}{d} ({o.filepath.yellow})"
				end
			end
		else if o isa ModulePath then
			if opt_paths then
				return o.filepath
			else
				var d = ""
				var dd = ""
				if o.mmodule != null and o.mmodule.mdoc != null then
					if tc.opt_no_color.value then
						d = ": {o.mmodule.mdoc.content.first}"
					else
						d = ": {o.mmodule.mdoc.content.first.green}"
					end
				end
				if o.mmodule != null and not o.mmodule.in_importation.direct_greaters.is_empty then
					var ms = new Array[String]
					for m in o.mmodule.in_importation.direct_greaters do
						if m.mgroup.mproject == o.mmodule.mgroup.mproject then
							ms.add m.name
						else
							ms.add m.full_name
						end
					end
					if tc.opt_no_color.value then
						dd = " ({ms.join(" ")})"
					else
						dd = " ({ms.join(" ")})".light_gray
					end
				end
				if tc.opt_no_color.value then
					return "{o.name.bold}{d} ({o.filepath.to_s}){dd}"
				else
					return "{o.name.bold}{d} ({o.filepath.yellow}){dd}"
				end
			end
		else
			abort
		end
	end
end

class AlphaEntityComparator
	super Comparator
	fun nameof(a: COMPARED): String
	do
		if a isa MGroup then
			return a.name
		else if a isa ModulePath then
			return a.name
		else
			abort
		end
	end
	redef fun compare(a,b)
	do
		return nameof(a) <=> nameof(b)
	end
end

var tc = new ToolContext

var opt_keep = new OptionBool("Ignore errors and files that are not a Nit source file", "-k", "--keep")
var opt_recursive = new OptionBool("Process directories recussively", "-r", "--recursive")
var opt_tree = new OptionBool("List source files in their groups and projects", "-t", "--tree")
var opt_source = new OptionBool("List source files", "-s", "--source")
var opt_project = new OptionBool("List projects paths (default)", "-P", "--project")
var opt_depends = new OptionBool("List dependencies of given modules", "-d", "--depends")
var opt_make = new OptionBool("List dependencies suitable for a rule in a Makefile. Alias for -d, -p and -s", "-M")
var opt_paths = new OptionBool("List only path (instead of name + path)", "-p", "--path")

tc.option_context.add_option(opt_keep, opt_recursive, opt_tree, opt_source, opt_project, opt_depends, opt_paths, opt_make)
tc.tooldescription = "Usage: nitls [OPTION]... <file.nit|directory>...\nLists the projects and/or paths of Nit sources files."
tc.accept_no_arguments = true
tc.process_options(args)

if opt_make.value then
	opt_depends.value = true
	opt_paths.value = true
	opt_source.value = true
end

var sum = opt_tree.value.to_i + opt_source.value.to_i + opt_project.value.to_i
if sum > 1 then
	print "Error: options --tree, --source, and --project are exclusives."
	print tc.tooldescription
	exit 1
end
if sum == 0 then opt_project.value = true
tc.keep_going = opt_keep.value

var model = new Model
var mb = new ModelBuilder(model, tc)

if tc.option_context.rest.is_empty then tc.option_context.rest.add "."
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

if sum == 0 then
	# If one of the file is a group, default is `opt_tree` instead of `opt_project`
	for a in files do
		var g = mb.get_mgroup(a)
		if g != null then
			opt_tree.value = true
			opt_project.value = false
			break
		end
	end
end

# Identify all relevant files
for a in files do
	var g = mb.get_mgroup(a)
	var mp = mb.identify_file(a)
	if g != null and not opt_project.value then
		mb.visit_group(g)
	end
	if g == null and mp == null then
		# not a group not a module, then look at files in the directory
		var fs = a.files
		for f in fs do
			g = mb.get_mgroup(a/f)
			if g != null and not opt_project.value then
				mb.visit_group(g)
			end
			mp = mb.identify_file(a/f)
			#print "{a/f}: {mp or else "?"}"
		end
	end
end

# Load modules to get more informations
for mp in mb.identified_files do
	if not opt_paths.value or opt_depends.value then
		var mm = mb.load_module(mp.filepath)
		if mm != null and opt_depends.value then
			mb.build_module_importation(mm)
		end
	end
end
#tc.check_errors


var ot = new ProjTree(tc)
var sorter = new AlphaEntityComparator
if opt_tree.value then
	ot.opt_paths = opt_paths.value
	for p in model.mprojects do
		for g in p.mgroups do
			var pa = g.parent
			if g.is_interesting then
				ot.add(pa, g)
				pa = g
			end
			for mp in g.module_paths do
				ot.add(pa, mp)
			end
		end
	end
	ot.sort_with(sorter)
	ot.write_to(stdout)
end

if opt_source.value then
	var list = new Array[ModulePath]
	for p in model.mprojects do
		for g in p.mgroups do
			for mp in g.module_paths do
				list.add mp
			end
		end
	end
	sorter.sort(list)
	for mp in list do
		if opt_paths.value then
			print mp.filepath
		else
			print "{mp.mgroup.full_name}/{ot.display(mp)}"
		end
	end
end

if opt_project.value then
	var list = new Array[MGroup]
	for p in model.mprojects do
		list.add p.root.as(not null)
	end
	sorter.sort(list)
	for g in list do
		var path = g.filepath.as(not null)
		if opt_paths.value then
			print path
		else
			var d = ""
			var md = g.mdoc_or_fallback
			if md != null then
				if tc.opt_no_color.value then
					d = ": {md.content.first}"
				else
					d = ": {md.content.first.green}"
				end
			end
			if tc.opt_no_color.value then
				print "{g.name}{d} ({path})"
			else
				print "{g.name}{d} ({path.yellow})"
			end
		end
	end
end
